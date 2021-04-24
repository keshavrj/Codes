s=input()
n=len(s)
mid= n//2
if n&1:
	s=s[:mid]+s[mid+1:]
cnt=0
for i in range(mid):
	x=s[0:mid-i]
	y=s[mid+i:]
	if x==y:
		cnt=max(len(x),cnt)
print(cnt)