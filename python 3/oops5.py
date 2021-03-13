



#class inside a class:
class student:

	def __init__(self,name,roll):
		self.name = name
		self.roll= roll
		self.lap= self.laptop()

	def show(self):
		print(self.name,self.roll)
		self.lap.show()


	class laptop:

		def __init__(self):
			self.processor= 'i5'
			self.brand= 'HP'
			self.ram= 8

		def show(self):
			print(self.brand, self.processor, self.ram)


s1= student('radhe', 5)
s2= student('shyam', 4)

s1.show()



