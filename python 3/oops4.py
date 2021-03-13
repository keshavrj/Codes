#instance variable: defined inside __init__ function/method
					#can be different for different objects, specific to objects
#class variable: define just inside class only
					#same for all objects

#static variable: that has nohing to do with class and instance variables


class car:

	wheels= 4

	def __init__(self):
		self.milage= 50
		self.comp= "Audi"

	@classmethod
	def getcarname(cls):
		return cls.wheels

	@staticmethod
	def info():
		print("this is a car.. with 4 wheels")



c1= car()
c2= car()

#changing class variable
car.wheels= 10

print(c1.milage, c1.comp, c1.wheels)
c2.milage= 11
print(c2.milage, c2.comp, c2.wheels)

print("wheels = ", car.getcarname())
car.info()