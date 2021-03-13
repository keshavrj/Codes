class computer:

	def __init__(self): #special function , it will be automatically called
		print('in init')



	def config(self):
		print('i5', '8 GB', '256 GB')

c1= computer() #c1 - Object, computer()= constructor
a=5
# print('type(a) : ',type(a))
# print('type(c1): ',type(c1))
# print("%d"%a)

c1.config()

