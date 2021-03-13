n,q,s = [int(x) for x in input().split()]
h=list(map(int, input().split()))
h.insert(0,0)
last=0
#print(h)
while q:
	q-=1
	cnt=0
	prev_cnt=0
	ans=0
	x, y = map(int, input().split())
	L= (x + (s*last)-1)%n +1
	R= (y + (s*last)-1)%n +1

	for i in range(L, R+1):
		cnt=1
		c_val=h[i]
		for j in range(i+1, R+1):
			if(h[j]>h[j-1] and h[j]>c_val):
				cnt+=1
			c_val=max(c_val,h[j])
		if cnt>prev_cnt:
			ans=max(cnt,prev_cnt)
			prev_cnt=cnt
		if ans > (R-i+1):
			break
	print(ans)
	last=ans