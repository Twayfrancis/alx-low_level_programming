0x13. C - More singly linked lists
##11.Reverse list

The function takes a pointer to a pointer to the head of the list as its argument, as this allows us to modify the head of the list in place.

We declare two pointers to listint_t structs, prev and next, and initialize them both to NULL. These will be used to keep track of the previous and next nodes in the list as we iterate through it.

We enter a loop that continues as long as the head pointer is not NULL. This loop will reverse the list in place.

Inside the loop, we first set next to point to the next node in the list (i.e. the node after the current head).

We then set the next pointer of the current head to point to the previous node in the list (i.e. prev). This effectively reverses the link between the current node and the next node.

We then update prev to point to the current head, and head to point to the next node in the list (next).

Once the loop has completed, we set the head pointer to point to the last node in the original list (which is now the first node in the reversed list), and return this pointer.

##12. Print (safe version)

The function takes a pointer to the head of the list as its argument, and initializes a pointer to a listint_t struct called curr to point to the head of the list.

We also initialize a variable called count to 0, which we will use to keep track of the number of nodes in the list.

We enter a loop that continues as long as curr is not NULL. This loop will print the contents of each node in the list, and check for a loop in the list.

Inside the loop, we first print the memory address of the current node (curr) and its value (curr->n) using the printf function.

We then increment count to keep track of the number of nodes we've printed.

We then check if the memory address of the current node is greater than the memory address of its next pointer. If it is, we know that we've already seen the current node before (i.e. we've encountered a loop in the list). In this case, we print the memory address and value of the next node in the list (which is the node that caused the loop), and exit the program with status 98 using the exit function.

If we haven't encountered a loop yet, we update curr to point to the next node in the list (curr->next).

Once the loop has completed (i.e. we've printed the contents of all nodes in the list), we return the value of count.
