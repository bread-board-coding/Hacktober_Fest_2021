'''
 	Function to merge two sorted lists in one
 	using constant space.
 	Function Arguments: head_a and head_b (head reference of both the sorted lists)
 	Return Type: head of the obtained list after merger.
 	{
 		# Node Class
 		class Node:
 		    def __init__(self, data):   # data -> value stored in node
 		        self.data = data
 		        self.next = None
 	}
 	Contributed By: Balvinder Singh
 '''


 def merge(a, b):
     c = LinkedList()


     while (True):
         if (a == None):
             while (b):
                 c.append(b.data)
                 b = b.next
             break
         elif (b == None):
             while (a):
                 c.append(a.data)
                 a = a.next
             break
         elif (a.data < b.data):
             c.append(a.data)
             a = a.next
         elif (a.data > b.data):
             c.append(b.data)
             b = b.next
         elif (a.data == b.data):
             c.append(b.data)
             a=a.next
             b = b.next
         else:
             break
     return c.head


 # {
 #  Driver Code Starts
 # Initial Template for Python 3
 # Node Class
 class Node:
     def __init__(self, data):  # data -> value stored in node
         self.data = data
         self.next = None


 # Linked List Class
 class LinkedList:
     def __init__(self):
         self.head = None
         self.tail = None

     # creates a new node with given value and appends it at the end of the linked list
     def append(self, new_value):
         new_node = Node(new_value)
         if self.head is None:
             self.head = new_node
             self.tail = new_node
             return
         self.tail.next = new_node
         self.tail = new_node

     # prints the elements of linked list starting with head
     def printList(self):
         if self.head is None:
             print(' ')
             return
         curr_node = self.head
         while curr_node:
             print(curr_node.data, end=" ")
             curr_node = curr_node.next
         print(' ')


 if __name__ == '__main__':
     #t = int(input())
     t=1
     for cases in range(t):
         #n, m = map(int, input().strip().split())
         n=2
         m=2
         a = LinkedList()  # create a new linked list 'a'.
         b = LinkedList()  # create a new linked list 'b'.
         #nodes_a = list(map(int, input().strip().split()))
         #nodes_b = list(map(int, input().strip().split()))
         nodes_a = [1, 3]
         nodes_b = [2, 4]
         for x in nodes_a:
             a.append(x)
         for x in nodes_b:
             b.append(x)
         a.head = merge(a.head, b.head)
         a.printList()
 # } Driver Code Ends
