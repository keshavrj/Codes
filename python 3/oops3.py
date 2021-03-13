class computer:
	"""docstring for computer"""
	def __init__(self):
		self.name= "bhaau"
		self.age= 21
	def update(self):
		self.age= 50
	def compare(self,c2):
		if self.age==c2.age and self.name==c2.name:
			return True
		return False

c1= computer()
c2= computer()

#default values:
print(c1.name, c1.age)
print(c2.name, c2.age)

if c1.compare(c2)==True:
	print('same')
else: print('different')

#changing the defaults:
c1.name= 'ram'
c1.age= 4154446

#changing using methods/function
c1.update()

#comparing c1 with c2,  we can't do c1==c2
#so we need to define a method inside the class
if c1.compare(c2)==True:
	print('same')
else: print('different')

print(c1.name, c1.age)
print(c2.name, c2.age)
