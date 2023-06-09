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

## Section 2.2
<br />
Caching is a method used to address the von Neumann bottleneck.  In general, a cache is a collection of memory locations that can be addressed in less time than other memory locations.  A CPU cache is a collection of memory locations that the CPU can access quicker than the CPU can access main memory.
<br /><br />

The principle that an access of one location is followed by an access of a nearby location is locality.  To exploit the principle of locality, the system uses an effectively wider interconnect to access data and instructions.  This means a memory access will effectively operate on blocks of data and instructions.  These blocks are cache blocks or cache lines.  A typical cache line stores 8 to 16 times as much information as a single memory location.
<br /><br />

When the CPU needs to access an instruction or data, the CPU works down the cache hierarchy.  If the information needed is not in any of the caches, the CPU accesses main memory.  A cache hit occurs when a cache is checked for information and the information is available.  A cache miss occurs when a cache is checked for information and the information is not available.
<br /><br />

When the CPU writes data to a cache, the value in the cache and the value in main memory are inconsistent.  In write-through caches, this inconsistency is addressed by the line being written to main memory when the line is written to the cache.  In write-back caches, the updated data in the cache is marked dirty, and the dirty line is written to memory when the cache line is replaced by a new cache line from memory.
<br /><br />

Virtual memory was developed so main memory can function as a cache for secondary storage.  Virtual memory exploits the principle of spatial and temporal locality by keeping in main memory only the active parts of the many running programs.  Virtual memory operates on , pages, blocks of data and instructions.
<br /><br />

Instruction-level parallelism attempts to improve processor performance by having multiple processor components, functional units, simultaneously executing instructions.  There are two main approaches to instruction-level parallelism: pipelining and multiple issue.  Pipelining arranges functional units in stages.  Multiple issue simultaneously initiates multiple instructions.
<br /><br />

Thread-level parallelism attempts to provide parallelism through the simultaneous execution of different threads.  Thread-level parallelism provides a coarser-grained parallelsim than instruction-level parallelism.  Coarser refers to the program units being simultaneously executed, threads, being larger than the individual instructions of instruction-level parallelism.
<br /><br />

## Section 2.3

A von Neumann system is a single instruction stream, single data stream, SISD, system in which a single instruction is executed at a time and one item of data can be fetched or stored at a time.  Parallel systems are single instruction, multiple data, SIMD, systems.  SIMD systems operate on multiple data streams by applying the same instruction to multiple data items.
<br /><br />
