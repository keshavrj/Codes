s=input()
arr=[]
for i in range(1,len(s),2):
	arr.append(int(s[i])*int(s[i]))
x=""
i=0
while(len(x)<4):
	x+=str(arr[i])
	i+=1


print(x[0:4])

