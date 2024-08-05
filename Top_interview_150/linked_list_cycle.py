class Node:
    def __init__(self , head):
        self.head = head
        self.next = None

def has_cycle(head):
    if not head or not head.next:
        return False
    slow = head
    fast = head

    while fast and fast.next:
        slow = slow.next
        fast = fast.next.next
        if slow == fast:
            return True
            
    return False
