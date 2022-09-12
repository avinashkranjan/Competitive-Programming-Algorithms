# Python Program to find Prime No.
import math

print("Enter a number to check if it is prime or not: ")
num = int(input())
for i in range(2, int(math.sqrt(num))):
    if num % i == 0:
        print("Not Prime")
        break
    else:
        print("Prime")
