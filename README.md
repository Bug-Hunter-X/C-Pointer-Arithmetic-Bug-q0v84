# C Pointer Arithmetic Bug

This repository demonstrates a common error in C programming involving pointer arithmetic that can lead to unexpected behavior or crashes. The bug involves incorrect handling of pointers which can cause buffer overflow or segmentation faults, leading to program termination. This is a common issue for novice C programmers and highlights the importance of careful memory management and pointer handling in C.

## Bug Description
The C code contains a potential buffer overflow. If the pointer 'ptr' does not point to a valid memory location, modifying the memory it points to can cause undefined behavior and potentially crash the program.  The solution addresses this by ensuring proper memory allocation and error checking.

## How to Reproduce
1. Clone this repository.
2. Compile and run the 'bug.c' file using a C compiler (like GCC).
3. Observe the output.  While this example does not directly crash, in a real-world scenario with dynamically allocated memory or an improperly initialized pointer, it would likely result in a segmentation fault or other errors.