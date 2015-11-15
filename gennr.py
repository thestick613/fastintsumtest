#!/usr/bin/python

import random

f = open("data.in","w")
for _ in range(1,2000000):
	print >>f, random.randint(0,2 ** 32 -1)

f.close()
