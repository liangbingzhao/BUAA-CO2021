.data
	puzzle: .space 256
	
.macro read_data(%i)
	li $v0, 5
	syscall
	move %i, $v0
.end_macro 

.macro calc_addr(%i, %j)
	# i存行数, j存的列数, k存的矩阵总列数
	mulu $t2, %i, $s1
	addu $t2, $t2, %j
	sll $t2, $t2, 2
.end_macro 

.macro store_data(%i, %j, %k)
	# i行数, j列数, k存储值
	calc_addr(%i, %j)
	sw %k, puzzle($t2)
.end_macro 

.macro pushstack(%i, %j, %k, %l, %m)
	sw %i, 0($sp)
	subi $sp, $sp, 4
	sw %j, 0($sp)
	subi $sp, $sp, 4
	sw %k, 0($sp)
	subi $sp, $sp, 4
	sw %l, 0($sp)
	subi $sp, $sp, 4
	sw %m, 0($sp)
	subi $sp, $sp, 4
.end_macro 

.macro popstack(%i, %j, %k, %l, %m)
	addi $sp, $sp, 4
	lw %m, 0($sp)
	addi $sp, $sp, 4
	lw %l, 0($sp)
	addi $sp, $sp, 4
	lw %k, 0($sp)
	addi $sp, $sp, 4
	lw %j, 0($sp)
	addi $sp, $sp, 4
	lw %i, 0($sp)
.end_macro 

.text
	# 读入n, m
	read_data($s0)
	read_data($s1)
	
	# 读入矩阵
	li $t0, 0
	loop1:
		beq $t0, $s0, loop1_end
		li $t1, 0
		
		loop2:
			beq $t1, $s1, loop2_end
			read_data($a0)
			store_data($t0, $t1, $a0)
			addi $t1, $t1, 1
			j loop2
			
		loop2_end:
			addi $t0, $t0, 1
			j loop1
		
	loop1_end:
		li $t0, 0
		
	# 读入起点和终点
	read_data($s2)
	read_data($s3)
	read_data($s4)
	read_data($s5)
	
	subi $t6, $s2, 1
	subi $t7, $s3, 1
	subi $s4, $s4, 1
	subi $s5, $s5, 1
	
	# 将起点设成1
	li $a0, 1
	calc_addr($t6, $t7)
	sw $a0, puzzle($t2)
	jal dfs
	move $a0, $s6
	li $v0, 1
	syscall
	li $v0, 10
	syscall
	
	dfs:
		bne $t6, $s4, work
		bne $t7, $s5, work
		addi $s6, $s6, 1
		jr $ra
		
	work:
		case1:
			addi $t5, $t7, 1
			move $t4, $t6
			bge $t5, $s1, case2
			calc_addr($t4, $t5)
			lw $a0, puzzle($t2)
			bne $a0, 0, case2
			li $a0, 1
			sw $a0, puzzle($t2)
			
			# 先进行栈操作,再将tmp赋值到now上
			pushstack($ra, $t4, $t5, $t6, $t7)
			move $t6, $t4
			move $t7, $t5
			jal dfs
			popstack($ra, $t4, $t5, $t6, $t7)
			calc_addr($t4, $t5)
			sw $0, puzzle($t2)
			
		case2:
			subi $t5, $t7, 1
			move $t4, $t6
			blt $t5, 0, case3
			calc_addr($t4, $t5)
			lw $a0, puzzle($t2)
			bne $a0, 0, case3
			li $a0, 1
			sw $a0, puzzle($t2)
			
			# 先进行栈操作,再将tmp赋值到now上
			pushstack($ra, $t4, $t5, $t6, $t7)
			move $t6, $t4
			move $t7, $t5
			jal dfs
			popstack($ra, $t4, $t5, $t6, $t7)
			calc_addr($t4, $t5)
			sw $0, puzzle($t2)
		
		case3:
			addi $t4, $t6, 1
			move $t5, $t7
			bge $t4, $s0, case4
			calc_addr($t4, $t5)
			lw $a0, puzzle($t2)
			bne $a0, 0, case4
			li $a0, 1
			sw $a0, puzzle($t2)
			
			# 先进行栈操作,再将tmp赋值到now上
			pushstack($ra, $t4, $t5, $t6, $t7)
			move $t6, $t4
			move $t7, $t5
			jal dfs
			popstack($ra, $t4, $t5, $t6, $t7)
			calc_addr($t4, $t5)
			sw $0, puzzle($t2)
		
		case4:
			subi $t4, $t6, 1
			move $t5, $t7
			blt $t4, 0, case5
			calc_addr($t4, $t5)
			lw $a0, puzzle($t2)
			bne $a0, 0, case5
			li $a0, 1
			sw $a0, puzzle($t2)
			
			# 先进行栈操作,再将tmp赋值到now上
			pushstack($ra, $t4, $t5, $t6, $t7)
			move $t6, $t4
			move $t7, $t5
			jal dfs
			popstack($ra, $t4, $t5, $t6, $t7)
			calc_addr($t4, $t5)
			sw $0, puzzle($t2)
		
		case5:
			jr $ra
	
	
	
	
	
	
	
	
	
	
	
