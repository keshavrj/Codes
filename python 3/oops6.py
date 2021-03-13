#INHERITANCE:

class A:
	def feature1(self):
		print("accessing feature1")
	def feature2(self):
		print("accessing feature2")
class B:

	def feature3(self):
		print("accessing feature3")
	def feature4(self):
		print("accessing feature4")

# c can access features of both class A & B
class C(A,B):

	def feature5(self):
		print("accessing feature1")
	def feature6(self):
		print("accessing feature1")


a=A()
b=B()
c=C()
a.feature1() #// feature2()
b.feature3()
b.feature4()
# c can access features of both class A & B
c.feature1()
c.feature3()
c.feature4()

n=int(input())
for i in range(n):
	print('ram')