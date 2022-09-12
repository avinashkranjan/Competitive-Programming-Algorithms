# Fibonacci number
# Fibonacci
num = int(input("Enter a number: "))
a = 0
b = 1
for i in range(0, num):
    print(a)
    c = a + b
    a = b
    b = c
