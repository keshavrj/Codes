class student:
	def __init__(self,m1,m2):
		self.m1=m1
		self.m2=m2

	def sum(self, a=0,b=0,c=0):
		return a+b+c


s1=student(50,60)

print(s1.sum(2,4))