n=int(input())
m=int(input())
a=[]
for i in range(n):
    a.append(input())
a=a.split().map(int,a)
a.sort()
