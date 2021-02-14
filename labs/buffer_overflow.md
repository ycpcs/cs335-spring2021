---
layout: default
course_number: CS335
title: Lab - Buffer Overflow
---

# Lab - Buffer Overflow Attack Lab

### Lab Description and Tasks

The **BUF SIZE** value for this lab is: **212**.

[Buffer Overflow.pdf](Buffer_Overflow.pdf)

Additional information on the SEED project [site](https://seedsecuritylabs.org/Labs_16.04/Software/Buffer_Overflow/).
[Smashing The Stack For Fun And Profit](https://insecure.org/stf/smashstack.html), Aleph One

### Source Files

- Lab Files
  - Build Malicious file: [exploit.c](buffer/exploit.c)
  - Vulnerable program: [stack.c](buffer/stack.c)
  - Defeat Randomization: [defeat_rand.sh](buffer\defeat_rand.sh)
  - Helper Shell to build and setup stack.c: [build_stack.sh](buffer/build_stack.sh)

- Examples  
  - Launching shell: [call_shellcode.c](buffer/call_shellcode.c)
  - Print *esp*: [sp.c](buffer/sp.c)
  - Shellcode in stack: [shellcode.c](buffer/shellcode.c) (compile with ```-z execstack```)
  - Defeat dash test: [dash_shell_test.c](buffer/dash_shell_test.c)

### Tips

 - To turn off address randomization: ```$ sudo sysctl -w kernel.randomize_va_space=0```
 - Check the current randomization status: ```$ sudo sysctl kernel.randomize_va_space```
 - If you forget to turn off the non-executable stack protection ``` -z execstack``` you will get a *Segmentation fault*
 - To compile the ```stack.c``` program using debug flags: ```gcc stack.c -o gdb-stack -g -z execstack -fno-stack-protector```.
   - Now you can debug ```gdb-stack``` to find the address of ```buffer``` and frame pointer ```($ebp)```
     - Start debugging by: ```gdb gdb-stack```
     - To place a breakpoint at bof: ```b bof```
     - To run the program type: ```r```
     - To get address of buffer: ``` p &buffer```
     - Address of the frame pointer: ```p $ebp```
     - To find the offset: use ```p``` to substract the two, ex: ```p (0xbfffeb08 - 0xbfffeae8)```
     - You can exit gdb debugging session by typing ```quit```

 - ```touch badfile``` will create an empty ```badfile```

### Grading

Post your report in [Marmoset](https://cs.ycp.edu/marmoset) by the scheduled due date in the syllabus. Your grade for this lab will be composed of:
- 30% - Design
- 30% - Observations
- 40% - Explanation
- *Extra Credit* if you pursue further investigation, beyond what is required by the lab description.
