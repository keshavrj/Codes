import math
def solve(x):
  
    tmp = 0; ans = 0;
    n = int(math.log10(x)+1);
  
    for i in range(0,n):
        tmp = tmp * 10 + 1;
        for j in range(1, 10):
            if (1<=(tmp*j) and (tmp*j)<=x):
                ans += 1;
              
    return ans;

for _ in range(int(input())):
    n= int(input())
    print(solve(n))