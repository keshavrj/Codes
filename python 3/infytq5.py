s=input()
stk=[]
flag=1
open_br=['{','(','[']
close_br=['}',')',']']
for i in range(len(s)):
	if(s[i] in open_br):
		stk.append(s[i])
	else:
		pos= close_br.index(s[i])
		if len(stk)>0 and open_br[pos]==stk[-1]:
			stk.pop()
		else:
			print( i+1)
			flag=0
			break
if(len(stk)==0 and flag):
	print(0)