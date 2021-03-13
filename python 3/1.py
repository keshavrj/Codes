for _ in range(int(input())):
    x0,x1,x2= map(int, input().split())
    y0,y1,y2= map(int,input().split())
    x=min(x2,y1)
    x2-=x
    y1-=x 
    ans=x*2 
    y2-=min(y2 , x0+x2)
    print(ans-y2*2)    
