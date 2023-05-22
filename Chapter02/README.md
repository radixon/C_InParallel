# Chapter 2

## Section 2.1

To write efficient parallel programs, some knowledge of the underlying hardware and system software is required.  Serial hardware and software runs, in general, in a single job at a time.
<br /><br />

Main memory consists of a collection of locations, each of which is capable of storing both instructions and data.  Every location in main memory consists of an address, which is used to access the location, and contents, which are the instructions or data stored at the address.
<br /><br />

The central processing unit (CPU) consists of an arithmetic and logic unit (ALU), and a control unit.  The ALU is responsible for executing instructions, and the control unit is responsible for deciding which insturctions in a program should be exectured.  Data in the CPU and information about the state of an executing program are stored in registers.  The program counter is the control unit register that stores the address fo the next instruction to be executed.
<br /><br />

Instructions and data are transferred between the CPU and memory via the interconnect.  In general, the interconnect is a bus, which consists of a collection of parallel wires and some hardware controlling access to the wires.
<br /><br />

When data or instructions are transferred from memory to the CPU, the data or instructions are fetched or read from memory.  When data are transferred from the CPu to memory, the data are written to memory or stored.
<br /><br />

![von Neumann](https://github.com/radixon/C_InParallel/assets/59415488/4ef1139c-d7b8-4385-8e1b-76dde4206980)
<br /><br />

The operating system (OS) purpose is to manage hardware and software resources on a computer.  The OS determines which programs can run and when the programs can run.  The OS also controls the allocation of memory to running programs and access to peripherals.
<br /><br />

When a user runs a program, the OS creates a process.  A process is an instance of a computer program that is being executed.  A process consists of several entities:
+ Executable machine language program
+ A block of memory
+ Descriptors of resources
+ Security Information
<br /><br />

Most modern operating systems multitask, which provides support for the apparent simultaneous execution of multiple programs.  In a multitasking OS if a process needs to wait for a resource, the process will block.  A process that blocks, stops executing and the OS can run another process.  Threading provides a mechanism for programmers to divide programs into, more or less, independent tasks with the property that when one thread is blocked another thread can run.
