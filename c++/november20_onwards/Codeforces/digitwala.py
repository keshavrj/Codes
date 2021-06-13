s= input()
ss= list(s)
m=[0]*10
for i in range(1,10):
	x=int(input())
	m[i]=x

flag=1
for i in range(len(ss)):
	ch= int(ss[i])
	if ch<m[ch]:
		flag=0
		k=i
		while(ch<m[ch]):
			ss[k]=str(m[ch])
			k+=1
			if(k>=len(ss)):
				break
			ch= int(ss[k])

	if flag==0:
		break

z= ''.join(ss)
ans= int(z)%1000000007
print(ans)