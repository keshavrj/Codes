# Python3 program to extract words from 
# a string 
def printWords(strr): 
	word = strr.split(" ") 
	print(*word, sep="\n") 

# Driver code
s = "sky is blue"
printWords(s)
