<h1>0x13. C - More singly linked lists</h1>
<h2>Mandatory</h2>
<h2>0. Print list</h2>
<p>Write a function that prints all the elements of a listint_t list.
	<li> Prototype: size_t print_listint(const listint_t *h);</li>
	<li>Return: the number of nodes</li>
	<li>Format: see example</li>
	<li>You are allowed to use printf</li>
</p>
<h2>1. List length</h2>
<p>Write a function that returns the number of elements in a linked listint_t list.
	<li>Prototype: size_t listint_len(const listint_t *h);</li>
</p>
<h2>2. Add node</h2>
<p>Write a function that adds a new node at the beginning of a listint_t list.
	<li>Prototype: listint_t *add_nodeint(listint_t **head, const int n);</li>
	<li>Return: the address of the new element, or NULL if it failed</li>
</p>
<h2>3. Add node at the end</h2>
**[3-add_nodeint_end.c](3-add_nodeint_end.c)**
<p>Write a function that adds a new node at the end of a listint_t list.

<li>Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);</li>
<li>Return: the address of the new element, or NULL if it failed</li>
</p>
<h2>4. Free list</h2>
<p>Write a function that frees a listint_t list.
	<li>Prototype: void free_listint(listint_t *head);</li>
</p>
<h2>5. Free</h2>
<p>Write a function that frees a listint_t list.
	<li>Prototype: void free_listint2(listint_t **head);</li>
	<li>The function sets the head to NULL</li>
</p>
<h2>6. Pop</h2>
<p>Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
<li>Prototype: int pop_listint(listint_t **head);</li>
<li>if the linked list is empty return 0</li>
</p>
<h2>7. Get node at index</h2>
<p>Write a function that returns the nth node of a listint_t linked list.
	<li>Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);</li>
	<li>where index is the index of the node, starting at 0</li>
	<li>if the node does not exist, return NULL</li>
</p>
<h2>8. Sum list</h2>
<p>Write a function that returns the sum of all the data (n) of a listint_t linked list.
	<li>Prototype: int sum_listint(listint_t *head);</li>
	<li>f the list is empty, return 0</li>
<h2>9. Insert</h2>
<p>Write a function that inserts a new node at a given position.
	<li>Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);</li>
	<li>where idx is the index of the list where the new node should be added. Index starts at 0</li>
	<li>Returns: the address of the new node, or NULL if it failed</li>
	<li>if it is not possible to add the new node at index idx, do not add the new node and return NULL</li>
</p>
<h2>10. Delete at index</h2>
<p>Write a function that deletes the node at index index of a listint_t linked list.
	<li>Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);</li>
	<li>where index is the index of the node that should be deleted. Index starts at 0</li>
	<li>Returns: 1 if it succeeded, -1 if it failed</li>
</p>
<h2>Advanced</h2>
<h2>11. Reverse list</h2>
<p>Write a function that reverses a listint_t linked list.
	<li>Prototype: listint_t *reverse_listint(listint_t **head);</li>
	<li>Returns: a pointer to the first node of the reversed list</li>
	<li>You are not allowed to use more than 1 loop.</li>
	<li>You are not allowed to use malloc, free or arrays</li>
	<li>You can only declare a maximum of two variables in your function</li>

</p>
<h2>12. Print (safe version)</h2>
<p>Write a function that prints a listint_t linked list.
	<li>Prototype: size_t print_listint_safe(const listint_t *head);</li>
	<li>Returns: the number of nodes in the list</li>
	<li>This function can print lists with a loop</li>
	<li>You should go through the list only once</li>
	<li>If the function fails, exit the program with status 98</li>
	<li>Output format: see example</li>
	
</p>
<h2>13. Free (safe version)</h2>
<p>Write a function that frees a listint_t list.
	<li>Prototype: size_t free_listint_safe(listint_t **h);</li>
	<li>This function can free lists with a loop</li>
	<li>You should go though the list only once</li>
	<li>Returns: the size of the list that was free’d</li>
	<li>The function sets the head to NULL</li>
</p>
<h2>14. Find the loop</h2>
<p>Write a function that finds the loop in a linked list.
	<li>Prototype: listint_t *find_listint_loop(listint_t *head);</li>
	<li>Returns: The address of the node where the loop starts, or NULL if there is no loop</li>
	<li>You are not allowed to use malloc, free or arrays</li>
	<li>You can only declare a maximum of two variables in your function</li>

</p>
