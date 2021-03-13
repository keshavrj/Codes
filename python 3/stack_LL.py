class Node:
	def __init__(self,value):
		self.data=value
		self.next=None
class stack:
	def __init__(self):
		self.head=None
		self.size=0

	def isEmpty(self):
		return self.size==0

	def push(self,value):
		self.size+=1
		newnode=Node(value)
		if not self.head:
			self.head=newnode
		else:
			newnode.next= self.head
			self.head=newnode
	def pop(self):
		if self.isEmpty():
			raise Exception("Stack is already Empty")
		else:
			poppednode = self.head
			self.head = self.head.next
			poppednode.next = None
			self.size-=1
			return poppednode.data
	def traverse(self):
		if self.head==None:
			print("Stack is Empty")
			return
		i=self.head
		while i:
			print(str(i.data)+"->",end="")
			i=i.next
		return


	def peek(self):
		print(self.head.data)
		return



s= stack()
s.push(1)
s.push(2)
s.push(3)
s.push(4)
s.pop()
s.peek()

s.traverse()



