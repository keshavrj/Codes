# cook your dish here
from sys import setrecursionlimit
setrecursionlimit(10**6)
import math
def fibo(n):
    phi = (1 + math.sqrt(5))/2
    return round(pow(phi, n)/math.sqrt(5))

if __name__ == '__main__':
    t= int(input())
    while t:
        n= int(input())
        print((fibo(n)%1000000007))
        t-=1