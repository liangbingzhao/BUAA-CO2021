.data
	symbol: .space 28
	array: .space 28
	str_space: .asciiz " "
	str_enter: .asciiz "\n"

.macro pushstack(%i, %j, %k)
	sw %i, 0($sp)
	addi $sp, $sp, -4
	sw %j, 0($sp)
	addi $sp, $sp, -4
	sw %k, 0($sp)
	addi $sp, $sp, -4
.end_macro

.macro popstack(%i, %j, %k)
	addi $sp, $sp, 4
	lw %k, 0($sp)
	addi $sp, $sp, 4
	lw %j, 0($sp)
	addi $sp, $sp, 4
	lw %i, 0($sp)
.end_macro

.text
	# 读入n
	li $v0, 5
	syscall
	move $s0, $v0  # 将n存入s0
	jal Fullarray
	li $v0, 10
	syscall
	
	# t0存外层index, t1存内层i. t2暂存值, t3存内层i(2)
	Fullarray:
		li $t3, 0
		blt $t0, $s0, dfs
		li $t1, 0
		
		print_loop:
			beq $t1, $s0, print_loop_end
			sll $t2, $t1, 2
			lw $a0, array($t2)
			li $v0, 1
			syscall
			la $a0, str_space
			li $v0, 4
			syscall
			addi $t1, $t1, 1
			j print_loop
				
				print_loop_end:
					la $a0, str_enter
					li $v0, 4
					syscall
					jr $ra
					
		dfs:
			beq $t3, $s0, dfs_end
			sll $t2, $t3, 2
			lw $a0, symbol($t2)
			bne $a0, 0, dfs_end1
				
				 dfs_out:
				  	sll $t2, $t0, 2
				  	addi $a0, $t3, 1
				  	sw $a0, array($t2)
				  	sll $t2, $t3, 2
				  	li $a0, 1
				  	sw $a0, symbol($t2)
				  	move $a0, $t0
				  	pushstack($ra, $t0, $t3)
				  	addi $t0, $a0, 1
				  	jal Fullarray
				  	
				  	popstack($ra, $t0, $t3)
				  	sll $t2, $t3, 2
				  	sw $0, symbol($t2)
				  	
				  	dfs_end1:
				  		addi $t3, $t3, 1
				  		j dfs
				  	
				 dfs_end:
				 	jr $ra 
				 	
	
				  	
				  	
					
				
			
