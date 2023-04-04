0x13. C - More singly linked lists
##11.Reverse list

The function takes a pointer to a pointer to the head of the list as its argument, as this allows us to modify the head of the list in place.

We declare two pointers to listint_t structs, prev and next, and initialize them both to NULL. These will be used to keep track of the previous and next nodes in the list as we iterate through it.

We enter a loop that continues as long as the head pointer is not NULL. This loop will reverse the list in place.

Inside the loop, we first set next to point to the next node in the list (i.e. the node after the current head).

We then set the next pointer of the current head to point to the previous node in the list (i.e. prev). This effectively reverses the link between the current node and the next node.

We then update prev to point to the current head, and head to point to the next node in the list (next).

Once the loop has completed, we set the head pointer to point to the last node in the original list (which is now the first node in the reversed list), and return this pointer.
