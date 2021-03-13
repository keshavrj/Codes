class Node:
	def __init__(self,val):
		self.data = val
		self.next=None

class Queue:
	def __init__(self):
		self.front = self.rear = None
	
	def EnQueue(self,val):
		newnode= Node(val)
		if self.front==None:
			self.front= self.rear= newnode
		else:
			self.rear.next=newnode
			self.rear=newnode

	def DeQueue(self):
		if not self.front:
			print("\nQueue is Empty!")
			return
		temp= self.front
		self.front= temp.next
		if self.front==None:
			self.rear=None
		return temp.data

	def traverse(self):
		i=self.front
		while i:
			print(str(i.data)+"->",end="")
			i=i.next 


q= Queue()
q.EnQueue(50)
q.EnQueue(60)
q.EnQueue(70)
q.EnQueue(80)
q.EnQueue(90)

q.traverse()

q.DeQueue()
q.DeQueue()
q.DeQueue()
q.DeQueue()
print()
q.traverse()