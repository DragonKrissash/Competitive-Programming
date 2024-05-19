class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random

def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        temp=head
        if head is None:
            return None
        while temp:
            new=Node(temp.val)
            new.next=temp.next
            temp.next=new
            temp=new.next
        temp=head
        while temp and temp.next:
            if temp.random is None:
                temp.next.random=temp.random
            else:
                temp.next.random=temp.random.next
            temp=temp.next.next
        l1=head
        l2=l1.next
        copyhead=l2
        while l1 and l2:
            l1.next=l2.next
            l1=l1.next
            if l1 is not None:
                l2.next=l1.next
            l2=l2.next
        return copyhead