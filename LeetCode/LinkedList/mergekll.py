def merge(self,l1:ListNode,l2:ListNode):
        temp=ListNode(-1)
        copy=temp
        while l1 and l2:
            if l1.val<l2.val:
                temp.next=l1
                l1=l1.next
                temp=temp.next
            else:
                temp.next=l2
                l2=l2.next
                temp=temp.next
        if l1 is None:
            temp.next=l2
        else:
            temp.next=l1
        return copy.next
        
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        for i in range(1,len(lists)):
            lists[0]=self.merge(lists[0],lists[0+i])
        copy=lists[0]
        return copy