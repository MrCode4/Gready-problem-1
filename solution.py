import math

n = int(input())

list = []

list = [int(x) for x in input().split(" ")]

ans = list[1]
for i in range(2,n):
    ans = math.gcd(list[i], ans)

print(ans * n)