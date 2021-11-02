.data
	output: .space 5000
	
.text
	li $v0, 5
	syscall
	move $s0, $v0
	li $t3, 10
	li $s3, 1
	li $t4, 1
	sll $t2, $t4, 2
	sw $t4, output($t2)
	li $t0, 2
	
	loop:
		bgt $t0, $s0, loop_end
		sll $t2, $t4, 2
		lw $a0, output($t2)
		move $s1, $a0
		mulu $s1, $s1, $t0
		divu $s1, $t3 
		mflo $s2
		mfhi $a0
		sw $a0, output($t2)
		li $t1, 2
		
		judge:
			bgt $s2, 0, loop_continue
			bgt $s3, $t1, loop_continue
			
		loop_continue1:
			addi $t0, $t0, 1
			j loop
				
		loop_continue:
			sll $t2, $t1, 2
			lw $a0, output($t2)
			mulu $a0, $a0, $t0
			addu $a0, $a0, $s2
			sw $a0, output($t2)
			divu $s1, $a0, $t3
			
			loop1:
				bgt $s1, 0, judge_continue
				bgt $s3, $t1, judge_continue
				j judge_continue1

			judge_continue:
				sll $t2, $t1, 2
				lw $a0, output($t2)
				divu $a0, $t3
				mfhi $a0
				sw $a0, output($t2)
				addi $t1, $t1, 1
				sll $t2, $t1, 2
				lw $a0, output($t2)
				mulu $a0, $a0, $t0
				addu $a0, $a0, $s1
				sw $a0, output($t2)
				divu $s1, $a0, $t3 
				j loop1
				
			judge_continue1:
				move $s3, $t1
				j loop_continue1

	loop_end:
		move $t0, $s3
		
	out:
		beq $t0, $0, end
		sll $t2, $t0, 2
		lw $a0, output($t2)
		li $v0, 1
		syscall
		subi $t0, $t0, 1
		j out
		
	end:
		li $v0, 10
		syscall
		
	
		
		
		
		
		
		
		
		
		
	
