# Chapter 1
## Section 1.4

Programs that are written for conventional, single-core systems cannont exploit the presence of multiple cores.  Writing parallel programs depend on the baic idea of partitioning the work to be done among the cores.  Two approaches to writing parallel programs: task-parallelism and data-parallelism.
<br /><br />
Task-parallelism partitions the various tasks carried out in solving the problem among CPU cores.  Data-parallelism partitions the data used in solving the problem amoung the CPU cores.  In both approaches, each core carries out more or less similar operations on relatively even partiitions.
<br /><br />
Load balancing assigns roughly the same amount of work in partitions sent to the cores.  Coordinating the work among cores involves communication.  Communication involves one or more cores sending completed work on partitions to another core.
