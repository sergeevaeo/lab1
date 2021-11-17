 .text
 __start:
.globl __start
la a0, arrayC #выходной массив
lw a1, sizeA #размер массива А(счетчик элементов А)
lw a2, sizeB #размер массива В (счетчик элементов В)
la a3, arrayA #A[0]
la a4, arrayB #B[0]

addi sp, sp, -16 #выделяем место на стеке (так как надо выровнить по границе)
sw ra, 12(sp) #сохраняем регистр ra(адрес возврата) на стеке

call __join

lw ra, 12(sp) #загружаем обратно ra
addi sp, sp, 16 #освобождаем место на стеке

finish:
li a0, 10 #останов
  ecall
  
.rodata
sizeA:
  .word 5
arrayA:
  .word 1, 2, 3, 4, 9
sizeB:
  .word 5
arrayB:
  .word 5, 6, 7, 8, 10
  
.data
arrayC:
  .word 10
  

