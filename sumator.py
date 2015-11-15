#!/usr/bin/python

t = 0
for n in open("data.in","r").readlines():
	n = n.strip()
	if n:
		t += long(n)

print t
