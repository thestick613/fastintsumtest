gennr.py generate 2 milion numbers
1.c add them using a theoretical optimization
2.c add them using normal way
1extreme.c add them using the same stragegy from 1.c, but unroll the loop.

Normal way is still fastest:

python
4296272350459355

real	0m2.130s
user	0m2.036s
sys	0m0.077s
============
pypy
4296272350459355

real	0m0.718s
user	0m0.560s
sys	0m0.148s
============
optimization
4296272350459355

real	0m0.608s
user	0m0.588s
sys	0m0.013s
============
normal
4296272350459355

real	0m0.502s
user	0m0.481s
sys	0m0.013s
============
optimization extrem
4296272350459355

real	0m0.647s
user	0m0.627s
sys	0m0.013s
============

