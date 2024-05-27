def merge(l1,l2):
    if l1.data<l2.data:
        head=Node(l1.data)
        l1=l1.bottom
    elif l1.data==l2.data:
        head=Node(l1.data)
        head.bottom=l2
        l1=l1.bottom
        l2=l2.bottom
    else:
        head=Node(l2.data)
        l2=l2.bottom
    temp=head
    while l1 and l2:
        if l1.data<l2.data:
            temp.bottom=l1
            l1=l1.bottom
            temp=temp.bottom
        else:
            temp.bottom=l2
            l2=l2.bottom
            temp=temp.bottom
    if l1:
        temp.bottom=l1
    else:
        temp.bottom=l2
    return head
    
    

def flatten(root):
    #Your code here
    temp=root
    t2=temp.next
    while t2:
        temp=merge(temp,temp.next)
        temp.next=t2.next
        t2=t2.next
    return root