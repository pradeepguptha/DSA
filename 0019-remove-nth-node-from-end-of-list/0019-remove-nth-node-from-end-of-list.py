# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def removeNthFromEnd(self, head, n):
        """
        :type head: Optional[ListNode]
        :type n: int
        :rtype: Optional[ListNode]
        """
      
        count = 0
        temp = head

        while temp:
            count += 1
            temp = temp.next

        if count == n:
            return head.next

        x = head

        for i in range(count - n - 1):
            x = x.next

        x.next = x.next.next

        return head