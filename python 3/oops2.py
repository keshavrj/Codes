class computer:

	# '__init__' is a special kind of function that will be automatically
	# called on creating the object ex: c1,c2
	def __init__(self,cpu,ram):  #self is the object passed
		self.ram= ram
		self.cpu = cpu  # we can use self.bcd also

	def config(self):
		print('configuration is ', self.cpu, self.ram)

c1= computer('i5', 16) #every time we create a object it takes different
						#address location in heap memory
c2= computer('Ryzen5', 32)

c1.config()
c2.config()