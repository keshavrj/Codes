def getNumberOfWays(N, Coins): 
    ways = [0] * (N + 1); 
    ways[0] = 1; 
  
    for i in range(len(Coins)):
        for j in range(Coins[i],len(ways)):
            ways[j] += ways[(int)(j - Coins[i])];
            
    return ways[N]; 
  
if __name__ == '__main__': 
    Coins = [1, 5, 10]; 
  
    print("The Coins Array:"); 
    print(Coins); 
  
    print("Solution:",end=""); 
    print(getNumberOfWays(12, Coins)); 
