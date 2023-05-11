import array as arr 
x = int(input())
y = x
numbers = arr.array('i', []) 
n = 0
while x > 0:
    numbers.append(int(x % 10))
    x = x // 10
    n = n + 1
for i in range(0,n):
    print(numbers[i])
