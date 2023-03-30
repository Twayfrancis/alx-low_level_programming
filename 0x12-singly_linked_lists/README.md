0x12. C - Singly linked lists

1. ##**0-print_list.c**

The function takes a pointer to a list_t list as input and returns the number of nodes in the list. It prints each node's length and string value using printf. If the node's str field is NULL, it prints (nil) instead. The format of the output matches the example in the prompt.

Note that this implementation assumes that the list_t struct has two fields: str, a pointer to a string, and len, the length of the string. If your list_t struct has different field names or types, you'll need to adjust the code accordingly.

2. ##**1-list_len.c**

The function takes a pointer to a list_t list as input and returns the number of nodes in the list. It iterates through the list using a while loop, incrementing a counter variable (count) for each node it visits. Once it reaches the end of the list (i.e., h is NULL), it returns the count.

Note that this implementation assumes that the list_t struct has a next field that points to the next node in the list. If your list_t struct has a different field name or type for the next pointer, you'll need to adjust the code accordingly. Also, be sure to include the lists.h header file if you haven't already. Finally, this implementation adheres to the Betty coding style guide.

3. ##**2-add_node.c**

The function takes a pointer to a pointer to a list_t list (head) and a string (str) as input. It creates a new list_t node, copies the input string to the node's str field using strdup, sets the node's len field to the length of the string, and sets the node's next field to point to the old head of the list. Finally, it updates the head pointer to point to the new node and returns the node's address.

Note that this implementation uses malloc to allocate memory for the new node and strdup to copy the input string to the node's str field. It also checks for errors in memory allocation and strdup and returns NULL if an error occurs. Additionally, it assumes that the list_t struct has three fields: str, a pointer to a string, len, the length of the string, and next, a pointer to the next node in the list. If your list_t struct has different field names or types, you'll need to adjust the code accordingly. Finally, this implementation adheres to the Betty coding style guide.
