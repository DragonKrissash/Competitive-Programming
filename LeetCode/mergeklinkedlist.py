class ListNode:
    def __init__(self, x):
        pass

class Sol:

    def merge(self,left,right):
        copy=ListNode(-1)
        temp=copy
        while left and right:
            if left.val<right.val:
                temp.next=left
                left=left.next
                temp=temp.next
            else:
                temp.next=right
                temp=temp.next
                right=right.next
        if left is not None:
            temp.next=left
        else:
            temp.next=right
        return copy.next

    def mergeSort(self,lists,start,end):
        if start==end:
            return lists[start]
        mid=start+(end-start)//2
        left=self.mergeSort(lists,start,mid)
        right=self.mergeSort(lists,mid+1,end)
        return self.merge(left,right)

    def mergeKLists(self, lists) :
        if not lists:
            return None
        else:
            return self.mergeSort(lists,0,len(lists)-1)
        