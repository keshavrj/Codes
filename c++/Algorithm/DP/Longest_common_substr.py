def LCS(X, Y, n):
    m=n
    maxLength = 0           
    endingIndex = m         
    lookup = [[0 for x in range(n + 1)] for y in range(m + 1)]
 
    for i in range(1, m + 1):
        for j in range(1, n + 1):
 
            if X[i - 1] == Y[j - 1]:
                lookup[i][j] = lookup[i - 1][j - 1] + 1
 
                if lookup[i][j] > maxLength:
                    maxLength = lookup[i][j]
                    endingIndex = i
 
    return X[endingIndex - maxLength: endingIndex]
 
def MaxProfit(N, S , Q):
    lc= LCS(S,Q,N)
    print(int(lc,2))
    size= len(lc)
    ans= size//(2**(int(lc,2)))
    return ans;

print(MaxProfit(4, '1101', '1110'))