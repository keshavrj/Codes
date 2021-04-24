s=input().split(',')
ans=""
for i in s:
	cnt=-1
	x,y= i.split(':')
	n= len(x)
	for j in y:
		if int(j)<=n and int(j)>cnt:
			cnt=int(j)
	if cnt!=-1:
		ans+=x[cnt-1]
	else: ans+='X'
print(ans)	
