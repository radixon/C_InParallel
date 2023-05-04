# Chapter 1
## Section 1.4

Programs that are written for conventional, single-core systems cannont exploit the presence of multiple cores.  Writing parallel programs depend on the baic idea of partitioning the work to be done among the cores.  Two approaches to writing parallel programs: task-parallelism and data-parallelism.
<br /><br />
Task-parallelism partitions the various tasks carried out in solving the problem among CPU cores.  Data-parallelism partitions the data used in solving the problem amoung the CPU cores.  In both approaches, each core carries out more or less similar operations on relatively even partiitions.
<br /><br />
Load balancing assigns roughly the same amount of work in partitions sent to the cores.  Coordinating the work among cores involves communication.  Communication is one or more cores sending completed work on partitions to another core.
<br /><br />
In most systems the cores are not automatically synchronized.  This brings about another type of coordination, sychronization.  Add a point of synchronization between initialization and computation on partitions.

## Section 1.5

The goal is to learn the basics of programming parallel computers using the C language.  For parallel programming, there are three extensions to C:
+ MPI: Message-Passing Interface
+ Pthreads: POSIX threads
+ OpenMP

MPI and Pthreads are libraries of type definitions, functions, and macros that can be used in C programs.  OpenMP consists fo a library and some modifications to the C compiler.
<br /><br />
There are two broad types of parallel systems: shared-memory systems and distributed-memory systems.  In a shared-memory system, the cores can share access to the computer's memory.  In theory, the principle of shared-memory systems is each core can read and write each memory location.  In a shared-memory system, the cores can be coordinated by having the cores examine and update shared-memory locations.  In a distributed-memory system, each core has private memory, and the cores must communicate explicitly.
<br />
Pthreads and OpenMP are designed for programming shared-memory systems.  MPI was designed for programming distributed-memory systems.
<br />
OpenMP is a relatively high-level extension to C that can "parallelize" with a single directive.  Pthreads, on the other hand, provides some coordination constructs that are unavailable in OpenMP.

## Section 1.6

There isn't agreement on the distiction between the terms parallel, distributed, and concurrent.  One generalization is concurrent programs can have multiple tasks in progress at any instant.  Parallel and distributed programs usually have tasks that execute simultaneously.  In general, parallel programs tasks are more tightly coupled compared to distributed programs.
