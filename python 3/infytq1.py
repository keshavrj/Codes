li= input().split(',')
num1=flag=0
num2=""
for i in li:
    if i=='4' or i=='7':
        flag^=1
    if flag==0 and i!='7':
        num1+=int(i)
    else: 
        num2+=i

print(num1+int(num2))