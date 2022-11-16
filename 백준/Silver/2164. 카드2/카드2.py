from collections import deque

a = int(input())
queue = deque()

for i in range(a):
    queue.append(i+1)

while(len(queue) > 1):
    queue.popleft()
    element = queue.popleft()
    queue.append(element)

print(queue.popleft())