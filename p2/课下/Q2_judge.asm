.data
	char: .space 100


.text
	li $v0, 5
	syscall
	move $s0, $v0
	li $t0, 0
	
	# 读入字符
	loop:
		beq $t0, $s0, loop_end
		li $v0, 12
		syscall
		sll $s1, $t0, 2
		sw $v0, char($s1)
		addi $t0, $t0, 1
		j loop
		
	loop_end:
		li $t0, 0
		subi $s1, $s0, 1
		move $t1, $s1
		
	# 检查回文数
	loop1:
		bge $t0, $t1, loop1_end
		sll $s1, $t0, 2
		sll $s2, $t1, 2
		lw $s1, char($s1)
		lw $s2, char($s2)
		bne $s1, $s2, out
		addi $t0, $t0, 1
		subi $t1, $t1, 1
		j loop1
		
	loop1_end:
		li $a0, 1
		li $v0, 1
		syscall
		li $v0, 10
		syscall
		
	out:
		li $a0, 0
		li $v0, 1
		syscall
		li $v0, 10
		syscall
