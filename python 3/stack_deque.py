from collections import deque

stack=deque()
stack.append(4)
stack.append(5)
stack.append(6)
stack.append(7)
stack.pop()
stack.clear()
stack.rotate(1)
print(stack)