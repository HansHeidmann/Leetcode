from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if list1 == None:
            return list2
        if list2 == None:
            return list1

        d1 = list1
        d2 = list2
        ans = ListNode()
        dummy = ListNode()

        if d1.val <= d2.val:
            ans.val = d1.val
            dummy = ans
            d1 = d1.next
        else:
            ans.val = d2.val
            dummy = ans
            d2 = d2.next

        while True:
            if d1 == None and d2 == None:
                break
            elif d1 == None:
                dummy.next = ListNode(d2.val)
                dummy = dummy.next
                d2 = d2.next
            elif d2 == None:
                dummy.next = ListNode(d1.val)
                dummy = dummy.next
                d1 = d1.next
            elif d1.val <= d2.val:
                dummy.next = ListNode(d1.val)
                dummy = dummy.next
                d1 = d1.next
            else:
                dummy.next = ListNode(d2.val)
                dummy = dummy.next
                d2 = d2.next
        
        return ans