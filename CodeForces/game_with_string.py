from collections import deque
word=input()
st=deque()
st.append(word[0])
count=1
for i in word[1::]:
    if len(st)>0 and i==st[len(st)-1]:
        st.pop()
        count+=1
    else:
        st.append(i)
if count%2==1:
    print('No')
else:
    print('Yes')