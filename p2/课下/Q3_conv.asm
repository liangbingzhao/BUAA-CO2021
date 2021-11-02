.data
	n1: .data 500
	n2: .space 500
	n: .space 500
	str_space:  .asciiz " "
	str_enter:  .asciiz "\n"
	
.macro calc_addr(%i, %j, %k, %l)
	multu %j, %l
	mflo %i
	addu %i, %i, %k
	sll %i, %i, 2
.end_macro

.macro read_data(%i)
	li $v0, 5
	syscall
	move %i, $v0
.end_macro

.text
	read_data($s0)
	read_data($s1)
	read_data($s2)
	read_data($s3)
	
	# 读入第一个matrix
	li $t0, 0
	loop5:
		beq $t0, $s0, loop5_end
		li $t1, 0
		j loop6
		
		loop6:
			beq $t1, $s1, loop6_end
			li $v0, 5
			syscall
			move $s4, $v0
			calc_addr($t4, $t0, $t1, $s1)
			sw $s4, n1($t4)
			addi $t1, $t1, 1
			j loop6
			
		loop6_end:
			addi $t0, $t0, 1
			j loop5
			
	loop5_end:
		li $t0, 0
	
	# 读入第二个matrix
	loop7:
		beq $t0, $s2, loop7_end
		li $t1, 0
		j loop10
		
		loop10:
			beq $t1, $s3, loop10_end
			li $v0, 5
			syscall
			move $s4, $v0
			calc_addr($t4, $t0, $t1, $s3)
			sw $s4, n2($t4)
			addi $t1, $t1, 1
			j loop10
			
		loop10_end:
			addi $t0, $t0, 1
			j loop7
			
	loop7_end:
		li $t0, 0
	
	subu $a1, $s0, $s2
	subu $a2, $s1, $s3
	addi $a1, $a1, 1
	addi $a2, $a2, 1
	# 卷积运算
	loop1:
		beq $t0, $a1, loop1_end
		li $t1, 0
		j loop2
		
		loop2:
			beq $t1, $a2, loop2_end
			li $t2, 0
			li $s6, 0
			j loop3
			
			loop3:
				beq $t2, $s2, loop3_end
				li $t3, 0
				j loop4
				
				loop4:
					beq $t3, $s3, loop4_end
					addu $t8, $t0, $t2
					addu $t9, $t1, $t3
					calc_addr($t4, $t8, $t9, $s1)
					lw $s4, n1($t4)
					calc_addr($t4, $t2, $t3, $s3)
					lw $s5, n2($t4)
					mulu $s4, $s4, $s5
					addu $s6, $s6, $s4
					addi $t3, $t3, 1
					j loop4
				
				loop4_end:
					addi $t2, $t2, 1
					j loop3
				
			loop3_end:
				calc_addr($t4, $t0, $t1, $a2)
				sw $s6, n($t4)
				addi $t1, $t1, 1
				j loop2
				
		loop2_end:
			addi $t0, $t0, 1
			j loop1
			
	loop1_end:
		li $t0, 0
		
	# 输出
	loop8:
		beq $t0, $a1, loop8_end
		li $t1, 0
		j loop9
		
		loop9:
			beq $t1, $a2, loop9_end
			# 输出数
			calc_addr($t4, $t0, $t1, $a2)
			lw $a0, n($t4)
			li $v0, 1
			syscall
			# 输出空格
			la  $a0, str_space
			li  $v0, 4
			syscall 
			addi $t1, $t1, 1
			j loop9
			
		loop9_end:
			addi $t0, $t0, 1
			# 输出一个回车
			la  $a0, str_enter
			li  $v0, 4
			syscall    
			j loop8
			
	loop8_end:
		li $v0, 10
		syscall
				

					
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
