#0x13. C - More singly linked lists
<code>C</code> <code>Algorithm</code> <code>Data Structure</code>
##Resources
<strong>Read or Watch</strong>
<ul>
<li><a href="https://alx-intranet.hbtn.io/rltoken/2-7-eVuWcPutbXf6YZZgiA" title="Google" target="_blank">Google</a></li>
<li><a href="https://alx-intranet.hbtn.io/rltoken/wVWwl86ufLMsXeAigpxllg" title="Youtube" target="_blank">Youtube</a></li>
</ul>
##Requirements
###General
<ul>
<li>Allowed editors: <code>vi, vim, emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options <code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A <code>README.md</code> file, at the root of the folder of the project is mandatory</li>
<li>Your code should use the Betty style. It will be checked using <code>betty-style.pl</code> and <code>betty-doc.pl</code></li>
<li>You are not allowed to use global variables</li>
<li>No more than 5 functions per file</li>
<li>The only C standard library functions allowed are <code>malloc, free</code> and <code>exit.</code> Any use of functions like <code>printf, puts, calloc, realloc</code> etc… is forbidden</li>
<li>You are allowed to use <code>putchar</code></li>
<li>The prototypes of all your functions and the prototype of the function putchar should be included in your header file called <code>lists.h</code></li>
</ul>
##More Info
Please use this data structure


```bash
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```


##Files
<ul>
<li><code>0-print_listint.c</code> -  prints all the elements of a <code>listint_t</code> list.</li>
<li><code>1-listint_len.c</code> - returns the number of elements in a linked <code>listint_t</code> list</li>
<li><code>2-add_nodeint.c</code> - adds a new node at the beginning of a <code>listint_t</code> list.</li>
<li><code>3-add_nodeint_end.c</code> - adds a new node at the end of a <code>listint_t</code> list</li>
<li><code>4-free_listint.c</code> - that frees a <code>listint_t</code> list.</li>
<li><code>5-free_listint2.c</code> - frees a <code>listint_t</code> list.</li>
<li><code>6-pop_listint.c</code> - deletes the head node of a <code>listint_t</code> linked list, and returns the head node’s data (n).</li>
<li><code>7-get_nodeint.c</code> -  returns the nth node of a <code>listint_t</code> linked list.</li>
<li><code>8-sum_listint.c</code> - returns the sum of all the data (n) of a <code>listint_t</code> linked list.</li>
<li><code>9-insert_nodeint.c</code> -  inserts a new node at a given position</li>
<li><code>10-delete_nodeint.c</code> -  deletes the node at index <code>index</code> of a <code>listint_t</code> linked list.</li>
<li><code>100-reverse_listint.c</code> -  reverses a <code>listint_t</code> linked list.</li>
<li><code>101-print_listint_safe.c</code> - prints a <code>listint_t</code> linked list.</li>
<li><code>102-free_listint_safe.c</code> - frees a <code>listint_t</code> list.</li>
<li><code>103-find_loop.c</code> -  finds the loop in a linked list.</li>
</ul>
