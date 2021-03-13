total=0;
cnt=0;
while True:
	inp= input("enter no. or char to end: ")
	if(inp=='q'):
		break
	val=float(inp)
	total+=val
	cnt+=1
avg=total/cnt
print(cnt,total)
print(avg)