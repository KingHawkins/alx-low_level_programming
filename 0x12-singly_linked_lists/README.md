# 0x12.C - Singly linked lists
<div class= "align-items-center d-flex flex-wrap gap-3 my-2">
  <span class = "label label-primary" style = "font-size: 14px;">C</span>
  <span class="label label-primary" style="font-size: 14px;">Algorithm</span>
  <span class="label label-primary" style="font-size: 14px;">Data Structure</span>
</div>
<p>
  <img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/229/giphy-3.gif" alt loading="lazy">
</p>
##Resources
<p>
 <strong>Read or Watch</strong>
  ":"
</p>
<ul>
 <li>
  ::marker
  <a href="https:alx-intranet.hbtn.io/rltoken/joxg32-tt4lUh8Afgst8tA" title="Linked Lists" target="_blank">Linked Lists</a>
  </li>
 <li>
  ::marker
 <a href="https://alx-intranet.hbtn.io/rltoken/epKUCIcoA6XaN1T3Vtr_9w" title="Youtube" target="_blank">Youtube</a>
 </li>
 <li>
 ::marker
 <a href="https://alx-intranet.hbtn.io/rltoken/USaZbNdfcuIFII-K2YPsKQ" title="Google" target="_blank">Google</a>
 </li>

##Learning Objectives
<p>At the end of this project, you are expected to be able to explain to anyone ,<strong>without the help of Google:</strong>
</p>

##General

*When and why using linked lists vs arrays
*How to build and use linked lists

##Copyright - Plagiarism
<ul>
<li>You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.</li>
<li>You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.</li>
<li>You are not allowed to publish any content of this project.</li>
<li>Any form of plagiarism is strictly forbidden and will result in removal from the program.</li>
</ul>
##Requirements
###General
<ul>
<li>Allowed editors:<code>vi, vim, emacs</code></li>
</ul>
###Compilation
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c
```
#More Info
Please use this data structure for this project:
```bash
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```

#Tasks
##0. Print list
<p>Write a function that prints all the elements of a <code style="color: red">list_t</code> list.
</p>
<ul>
<li>Prototype:
```bash
size_t print_list(const list_t *h);
```
</li>
<li>Return: Number of nodes</li>
<li>If <code style+"color: red">str</code>is <code>NULL</code>
</li>
<li>You are allowed to use <code>printf</code></li>
</ul>
```bash
julien@ubuntu:~/0x12. Singly linked lists$ cat 0-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
julien@ubuntu:~/0x12. Singly linked lists$ ./a 
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
julien@ubuntu:~/0x12. Singly linked lists$ 
```
###Repo:
<ul>
<li>Github repo: <code>alx-low_level_programming</code></li>
<li>Directory: <code>0x12-singly_linked_lists</code></li>
<li>File: <code>0-print_list.c</code></li>
</ul>


##1.List length
<p>Write a function that returns the number of elements in a linked <code>list_t</code> list.</p>
<ul>
<li>Prototype:
```bash
size_t list_len(const list_t *h);
```
```bash
julien@ubuntu:~/0x12. Singly linked lists$ cat 1-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new->str);
    free(new);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
julien@ubuntu:~/0x12. Singly linked lists$ ./b 
-> 2 elements
julien@ubuntu:~/0x12. Singly linked lists$
```
###Repo:
<ul>
<li>Github repo: <code>alx-low_level_programming</code></li>
<li>Directory: <code>0x12-singly_linked_lists</code></li>
<li>File: <code>1-list_len.c</code>

##2. Add Node
Write a function that adds a new node at the beginning of a list_t list.
<ul>
<li>Prototype:
```bash
list_t *add_node(list_t **head, const char *str);
```
</li>
<ul>
<li>Return: the address of the new element, or NULL if it failed</li>
<li><code>str</code> needs to be duplicated</li>
<li>you are allowed to use <code>strdup</code></li>
</ul>
```bash
julien@ubuntu:~/0x12. Singly linked lists$ cat 2-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    add_node(&head, "Bilal");
    add_node(&head, "Chandler");
    add_node(&head, "Damian");
    add_node(&head, "Daniel");
    add_node(&head, "Dora");
    add_node(&head, "Electra");
    add_node(&head, "Gloria");
    add_node(&head, "Joe");
    add_node(&head, "John");
    add_node(&head, "John");
    add_node(&head, "Josquin");
    add_node(&head, "Kris");
    add_node(&head, "Marine");
    add_node(&head, "Mason");
    add_node(&head, "Praylin");
    add_node(&head, "Rick");
    add_node(&head, "Rick");
    add_node(&head, "Rona");
    add_node(&head, "Siphan");
    add_node(&head, "Sravanthi");
    add_node(&head, "Steven");
    add_node(&head, "Tasneem");
    add_node(&head, "William");
    add_node(&head, "Zee");
    print_list(head);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
julien@ubuntu:~/0x12. Singly linked lists$ ./c 
[3] Zee
[7] William
[7] Tasneem
[6] Steven
[9] Sravanthi
[6] Siphan
[4] Rona
[4] Rick
[4] Rick
[7] Praylin
[5] Mason
[6] Marine
[4] Kris
[7] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro
julien@ubuntu:~/0x12. Singly linked lists$ 
```
##3. Add node at the end
Write a function that adds a new node at the end of a list_t list
<ul>
<li>Prototype:
```bash
list_t *add_node_end(list_t **head, const char *str);
```
</li>
<li>Return: the address of the new element, or NULL if it failed</li>
</ul>
```bash
julien@ubuntu:~/0x12. Singly linked lists$ cat 3-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Anne");
    add_node_end(&head, "Colton");
    add_node_end(&head, "Corbin");
    add_node_end(&head, "Daniel");
    add_node_end(&head, "Danton");
    add_node_end(&head, "David");
    add_node_end(&head, "Gary");
    add_node_end(&head, "Holden");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Jay");
    add_node_end(&head, "Jennie");
    add_node_end(&head, "Jimmy");
    add_node_end(&head, "Justin");
    add_node_end(&head, "Kalson");
    add_node_end(&head, "Kina");
    add_node_end(&head, "Matthew");
    add_node_end(&head, "Max");
    add_node_end(&head, "Michael");
    add_node_end(&head, "Ntuj");
    add_node_end(&head, "Philip");
    add_node_end(&head, "Richard");
    add_node_end(&head, "Samantha");
    add_node_end(&head, "Stuart");
    add_node_end(&head, "Swati");
    add_node_end(&head, "Timothy");
    add_node_end(&head, "Victor");
    add_node_end(&head, "Walton");
    print_list(head);
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d
julien@ubuntu:~/0x12. Singly linked lists$ ./d 
[4] Anne
[6] Colton
[6] Corbin
[6] Daniel
[6] Danton
[5] David
[4] Gary
[6] Holden
[3] Ian
[3] Ian
[3] Jay
[6] Jennie
[5] Jimmy
[6] Justin
[6] Kalson
[4] Kina
[7] Matthew
[3] Max
[7] Michael
[4] Ntuj
[6] Philip
[7] Richard
[8] Samantha
[6] Stuart
[5] Swati
[7] Timothy
[6] Victor
[6] Walton
julien@ubuntu:~/0x12. Singly linked lists$ 
```
##4.Free list
Write a function that frees a list_t list
<ul><li>Prototype:
```bash
void free_list(list_t *head);
```
</li>
</ul>
```bash
julien@ubuntu:~/0x12. Singly linked lists$ cat 4-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Bob");
    add_node_end(&head, "&");
    add_node_end(&head, "Kris");
    add_node_end(&head, "love");
    add_node_end(&head, "asm");
    print_list(head);
    free_list(head);
    head = NULL;
    return (0);
}
julien@ubuntu:~/0x12. Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
julien@ubuntu:~/0x12. Singly linked lists$ valgrind ./e
==3598== Memcheck, a memory error detector
==3598== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3598== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3598== Command: ./e
==3598== 
[6] Bob
[1] &
[3] Kris
[4] love
[3] asm
==3598== 
==3598== HEAP SUMMARY:
==3598==     in use at exit: 0 bytes in 0 blocks
==3598==   total heap usage: 11 allocs, 11 frees, 1,166 bytes allocated
==3598== 
==3598== All heap blocks were freed -- no leaks are possible
==3598== 
==3598== For counts of detected and suppressed errors, rerun with: -v
==3598== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/0x12. Singly linked lists$ 
```

##5.Hare and the tortoise
<p>
<img src="https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/medias/2020/9/de3291ccf5b255fff6ce37bfde7a13f481e7ed0c.jpg?X-Amz-Algorithm=AWS4-HMAC-SHA256&amp;X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20221024%2Fus-east-1%2Fs3%2Faws4_request&amp;X-Amz-Date=20221024T104429Z&amp;X-Amz-Expires=86400&amp;X-Amz-SignedHeaders=host&amp;X-Amz-Signature=c212049f91842787b3f4173689867e53f26306956c45cab5bc9c11d6479e0763" alt="" loading="lazy" style="">
</p>
<p>
Write a function that prints <code style="color: beige">You're beat! and yet, you must allow,\nI bore my house upon my back!\n</code> before the main function is executed</p>
<ul>
<li>
You are allowed to use the <code>printf</code>function
```bash
julien@ubuntu:~/0x12. Singly linked lists$ cat 100-main.c
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-first.c -o first
julien@ubuntu:~/$ ./first 
You're beat! and yet, you must allow,
I bore my house upon my back!
(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)
julien@ubuntu:~/$
```
<strong>File: <code style="color: beige">100-first.c</code></strong>

##Real programmers can write assembly code in any language
Write a 64-bit program in assembly that prints <code style="color: beige">Hello, Holberton</code>, followed by a new line.
<ul>
<li>
You are only allowed to use the <code style="color: beige">printf</code> function</li>
<li>You are not allowed to use interupts</li>
<li>Your program will be compiled using <code style="color: grey">nasm</code> and <code>gcc</code>
</li>
</ul>
```bash
julien@ubuntu:~/$ nasm -f elf64 101-hello_holberton.asm && gcc -no-pie -std=gnu89 101-hello_holberton.o -o hello
julien@ubuntu:~/$ ./hello 
Hello, Holberton
julien@ubuntu:~/$ 
```
<strong>File:<code>101-hello_holberton.asm</code></strong>
