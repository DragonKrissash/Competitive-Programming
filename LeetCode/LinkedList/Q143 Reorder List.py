def getmid(self,head):
        mid=head
        fast=head
        while fast and fast.next:
            mid=mid.next
            fast=fast.next.next
        return mid

def revll(self,head):
        curr=head
        prev=None
        while curr:
            nxt=curr.next
            curr.next=prev
            prev=curr
            curr=nxt
        return prev

def reorderList(self, head: Optional[ListNode]) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        mid=self.getmid(head)
        midnxt=self.revll(mid.next)
        mid.next=None
        l1=head
        l2=midnxt
        while l1 and l2:
            l11=l1.next
            l22=l2.next
            l1.next=l2
            l2.next=l11
            l1=l11
            l2=l22
            l11=l11.next
            if l22 is None:
                break
            l22=l22.next
