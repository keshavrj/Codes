import math 
n= int(input())
arr= list(map(int,input().split()))
sm= sum(arr)
x= round(sm**(1/3))
if x*x*x==sm:
	print('Yes')
else:
	x= math.ceil(sm**(1/3))
	y= x*x*x - sm
	print(y)
