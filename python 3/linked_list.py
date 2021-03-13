class Node:
	def __init__(self,data):
		self.data=data
		self.next= None

class LinkedList:
	def __init__(self):
		self.head=None
		self.size=0

	def insertStart(self,data):
		self.size+=1
		newnode= Node(data) 
		if self.head==None:
			self.head=newnode
		else:
			newnode.next=self.head
			self.head=newnode
	
	def size(self):
		return self.size
	
	def traverse(self):
		p=self.head
		while p:
			print(p.data,end='->')
			p=p.next

	def insertEnd(self,data):
		self.size+=1
		newnode= Node(data)
		p=self.head
		while p.next:
			p=p.next
		p.next=newnode

	def remove(self,data):
		p=self.head
		
		#if head.data==key
		if p is not None:
			if p.data==data:
				self.head=p.next
				p=None
				self.size-=1
				return
		q=None

		while p:
			if p.data==data:
				break;
			q=p
			p=p.next

		if p==None:
			return
		q.next=p.next
		p=None
		self.size-=1



ll= LinkedList()
ll.insertStart(12);
ll.insertStart(122);
ll.insertStart(3);
ll.insertEnd(31);
ll.traverse()
ll.remove(12)
print()
# print('\n',ll.size)
ll.traverse()