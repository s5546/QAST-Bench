# QAST-Bench
An automated suite for determining stability and performance of a PC under load. This software is focused on stress testing the major heat-generating and power-consuming components (CPU, GPU, and potentially HDD).

Created in quarantine, during the 2020 Coronavirus pandemic.

# motivation:
to eliminate uncertianty in a computer's performance and stability. Largely concerned with power and temperature of a computer: 

The score it returns is more representive of the practical performace of the hardware, rather than the max potential of the hardware.
This entails putting the hardware in less-than ideal circumstances, such as multiple simultaneous tests or not giving hardware time to cool down


# method:
a pattern of benchmarking and stressing
  0) on first launch, confirm with user the dangers of stresstesting hardware and perform first-run initalization[1]
  1) start logging temperatures
  2) start by benchmarking each component
  3) stresstest the following, with another benchmark done after each module:

    a) CPU; prime95, max heat

    b) GPU; furmark, <res TBD> @ max settings

    c) CPU and GPU: simultaneous

  4) benchmarks *during* stress tests- the exact scope has not been decided, but so far I want to do the following:

    a) CPU benchmark during GPU Stress

      i) simulates GPU bottleneck

    b) GPU benchmark during CPU Stress

      i) simulates CPU bottleneck

      ii) note: score will absolutely be lower because of limited CPU time for the GPU benchmark

  5) generate some sort of log[2] with a score[3]

Benchmarking tests are the biggest contributers to a score

Stresstests are meant to put the computer in difficult situations to confirm stability under pressure

I also want to include temperatures in the score, but I haven't figured out exactly how I will yet.[3]

technically speaking you could probably do everything this program does yourself just by running things with the same commands that I do and then doing the formula lol

Created under the MVC framework. I learned that under Java and have absolutely no C++ experience prior to this project so like, haha that might be an awful idea **but it's what im doing you cannot stop me**

# testing modules:
* CPU
* GPU
* RAM
* HDD

# stressing modules:
* CPU
* GPU

# All files are downloaded to %LOCALAPPDATA%/QAST-Bench

# footnotes:
[1]
  1) log that the user has accepted the risks
  2) find/download all softwares needed: keep user informed during this
  3) <more?>

[2]
  for now, just a simple HTML page will work

  in the future, I'd like to implement a viewer that lets you compare your scores to all previous runs, but that isn't feasable for the moment
  
[3]
  i need to figure out a formula for this

  current thoughts:

    * temperatures should act as a modifier, with cooler temperatures slightly multiplying the score. Should probably be limited to reasonable temperatures for silicone? 0-90c, to discourage both excessively high (i.e. cards that run too hot) and excessively low temperatures (i.e. LN2 cooling). Maybe add a mode to disable this multiplier in the future.

    * score needs to be scalable but meaningful

      * what i mean is that it cant be some like 30 digit number, but it needs to have some amount of granularity for weaker systems 

    * how the heck do i calculate a formula for this

      * i need to figure out how other programs do this kinda stuff

