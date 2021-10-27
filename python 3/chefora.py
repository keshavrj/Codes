# cook your dish here
chefora= []

def ischefora(n):
    s= str(n)
    if(len(s)%2==0):
        return False
    i=0
    j= len(s)-1;
    while (i<j):
        if(s[i]!=s[j]):
            return False
    return True
    
for i in range(10000):
    if ischefora(i)==True:
        chefora.append(i)
        
print(chefora[9])
for _ in range(int(input())):
     l, r = map(int, input().split());
     ans=1
     a= chefora[l]
     for i in range(l+1, r+1):
          ans = (ans*pow(a, chefora[i], 1000000007))%1000000007
          print(chefora[i])
          
     print(ans)    
