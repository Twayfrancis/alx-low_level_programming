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

3. ##**3-add_node_end.c**

The function first allocates memory for a new node using the malloc function. It then duplicates the string using strdup and adds the string length to the new node. The next pointer of the new node is set to NULL.

If the list is empty, the head of the list is set to the new node and the function returns the address of the new node.

If the list is not empty, the function iterates through the list until it reaches the last node. The next pointer of the last node is set to the new node and the function returns the address of the new node.

4. ##**4-free_list.c**

This function takes a pointer to the head of a linked list, and iteratively frees each node in the list along with its associated string (if any). It does so by traversing the list with a while loop, using a temporary pointer variable current_node to keep track of the current node being freed.

Inside the loop, the current node is set to the head of the list, and the head pointer is updated to point to the next node in the list (or NULL if there are no more nodes). The free function is then called to deallocate the memory allocated for the string and node pointed to by current_node.

Note that the list_t struct is assumed to have a next pointer and a str pointer that points to a dynamically allocated string, as is common in linked list implementations.

##**100-first.c**

This function simply prints the desired message using the printf function, which takes a format string and any number of arguments to be printed according to the format. The format string includes two lines of text separated by a newline escape sequence (\n), and the whole string is enclosed in double quotes.

To ensure that this function is executed before the main function, it can be declared as a constructor using the __attribute__((constructor)) syntax. This attribute causes the function to be automatically called before the main function is executed.
