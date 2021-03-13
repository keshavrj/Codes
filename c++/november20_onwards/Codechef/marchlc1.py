import math as mt
for _ in range(int(input())):
	n=int(input())
	p=int(mt.log(n,2))
	q= (1<<p)-1
	for i in range(p):
		n^=(1<<i)
	print(n*q)
