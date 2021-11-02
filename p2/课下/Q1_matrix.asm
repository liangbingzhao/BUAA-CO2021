.data
	n1: .space 300
	n2: .space 300
	nout: .space 300
	str_space:  .asciiz " "
	str_enter:  .asciiz "\n"
	
.macro calc_addr(%i, %j, %k, %l)
	multu %j, %l
	mflo %i
	addu %i, %i, %k
	sll %i, %i, 2
.end_macro

.text
	li $v0, 5
	syscall
	move $s0, $v0
	li $t0, 0
	
	# 读入第一个矩阵
	loop1:
		beq $t0, $s0, loop1_end
		li $t1, 0
		j loop2
		
		loop2:
			beq $t1, $s0, loop2_end
			li $v0, 5
			syscall
			move $s1, $v0
			calc_addr($s2, $t0, $t1, $s0)
			sw $s1, n1($s2)
			addi $t1, $t1, 1
			j loop2
			
		loop2_end:
			addi $t0, $t0, 1
			j loop1
			
	loop1_end:
		li $t0, 0
	
	# 读入第二个矩阵
	loop3:
		beq $t0, $s0, loop3_end
		li $t1, 0
		j loop4
		
		loop4:
			beq $t1, $s0, loop4_end
			li $v0, 5
			syscall
			move $s1, $v0
			calc_addr($s2, $t0, $t1, $s0)
			sw $s1, n2($s2)
			addi $t1, $t1, 1
			j loop4
			
		loop4_end:
			addi $t0, $t0, 1
			j loop3
			
	loop3_end:
		li $t0, 0
		
	# 矩阵乘法
	loop5:
		beq $t0, $s0, loop5_end
		li $t1, 0
		j loop6
		
		loop6:
			beq $t1, $s0, loop6_end
			li $t2, 0
			li $t5, 0
			j loop7
			
			loop7:
				beq $t2, $s0, loop7_end
				calc_addr($s2, $t0, $t2, $s0)
				lw $t3, n1($s2)
				calc_addr($s2, $t2, $t1, $s0)
				lw $t4, n2($s2)
				mulu $s1, $t3, $t4
				addu $t5, $t5, $s1
				addi $t2, $t2, 1
				j loop7
				
			loop7_end:
				calc_addr($s2, $t0, $t1, $s0)
				sw $t5, nout($s2)
				addi $t1, $t1, 1
				j loop6
				
		loop6_end:
			addi $t0, $t0, 1
			j loop5
			
	loop5_end:
		li $t0, 0
		
	# 输出nout
	loop8:
		beq $t0, $s0, loop8_end
		li $t1, 0
		j loop9
		
		loop9:
			beq $t1, $s0, loop9_end
			# 输出数
			calc_addr($s2, $t0, $t1, $s0)
			lw $a0, nout($s2)
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
				
