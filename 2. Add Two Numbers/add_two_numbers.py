from typing import Optional

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next
        
class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        d1 = l1
        d2 = l2
        carry = 0

        while True:
            if d1.next == None and d2.next == None:
                if d1.val == 0 and d2.val == 0:
                    d2.val = carry
                    break

            sum = 0
            if not d1 == None:
                sum += d1.val
            if not d2 == None:
                sum += d2.val
            sum += carry

            if sum >= 10:
                carry = 1
                sum = sum%10
            else:
                carry = 0  

            d2.val = sum
   
            if d1.next == None and d2.next == None:
                if carry == 0:
                    break

            if d1.next == None:
                d1.next = ListNode(0)
            if d2.next == None:
                d2.next = ListNode(0)
                
            d1 = d1.next
            d2 = d2.next

        return l2
        