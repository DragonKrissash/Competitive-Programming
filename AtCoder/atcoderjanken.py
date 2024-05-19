n=int(input())
l={}
totsc=0
for i in range(n):
    name=input()
    sc=int(input())
    l[str(i)]=name
    totsc=totsc+sc
l.keys().sort()
ind=totsc%n
name=