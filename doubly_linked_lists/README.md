# Doubly linked lists
Doubly linked lists is a data type made of small blocks called nodes. Each node holds a value and two links: one pointing to the next item and one pointing to the previous item. This lets you move forward and backward through the data easily.

## [0-print_dlistint](./0-print_dlistint.c)
The function takes a pointer **h** to the head of the list. The loop condition while **(h != NULL)** means *“keep going as long as there is a valid node to process.”* Each iteration prints the integer stored in the current node using **printf("%d\n", h->n);.** <br>
**%d** format matches an int,<br>
**\n** adds a newline after each value.<br>
**count++;** ensures the node moves to the next node in the list using **h =->next;** <br>
This continues until it reaches the end, which will be **NULL** and returns **count** which is how many nodes were visited and printed


## [1-dlistint](./1-dlistint_len.c)

> This function calculates the number of nodes in a doubly linked list. The pointer to the head node, in this example being <b>h</b>, and starts with **count = 0**. <br>
The function then enters a loop that continues while <b>h</b> is not **NULL**, meaning there is a valid node to inspect.<br>
count is used to loop once for each node whilst using <b> h =->next;</b> This allows the pointer to travel to until it reaches the end where it is **NULL**<br>
**count** is used for return as this is the total number of nodes in the list.



