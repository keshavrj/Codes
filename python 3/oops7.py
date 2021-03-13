#INHERITANCE Continued:

class A:
	def __init__(self):
		print("in A init")
	def feature1(self):
		print("accessing feature1-A")
	def feature2(self):
		print("accessing feature2")


class B:
	def __init__(self):
		print("in B init")
		super().__init__()
	
	def feature1(self):
		print("accessing feature1-B")
	def feature4(self):
		print("accessing feature4")

class C(A,B):
	def __init__(self):
		print("in c init")
		super().__init__() #feature of A will be accessed

	def feat(self):
		super().feature1()

# a=A()
# b=B()
# a.feature1() #// feature2()
# b.feature3()
# b.feature1()
c= C()
c.feature1()