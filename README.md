# LIBFT (Library Fourty-Two)
This is my homemade C static library for using in 42project. \
\
Contain with Makefile for compiling C-file to static library file(.a file), header file(.h file) for all prototypes and source file (.c file) to be compiled.

## For 42-Student
***Do not just copy and paste*** this code for your own project. Make sure that you really understand the objective of 42-Project and learn what it's necessary.

## Library Contents
### Part 1 - Libc functions

In this part all the function are redo from the libc. The function name will be begin with 'ft_' prefix \
For instance, standard ***strlen*** function will be redo to ***ft_strlen***.

<details><summary> Part 1 - functions list </summary>
  <ul>
    <li> isalpha </li>
    <li> isdigit </li>
    <li> isalnum </li>
    <li> isascii </li>
    <li> isprint </li>
    <li> strlen </li>
    <li> memset </li>
    <li> bzero </li>
    <li> memcpy </li>
    <li> memmove </li>
    <li> strlcpy </li>
    <li> strlcat </li>
    <li> toupper </li>
    <li> tolower </li>
    <li> strchr </li>
    <li> strrchr </li>
    <li> strncmp </li>
    <li> memchr </li>
    <li> memcmp </li>
    <li> strnstr </li>
    <li> atoi </li>
    <li> calloc </li>
    <li> strdup </li>
  </ul>
</details>

### Part 2 - Additional functions

In this part, the functions is developed are either not in the libc, or that are part of it but in a different form.

<details><summary> Part 2 - functions list </summary> 

  |**Function Name**|***ft_substr***|
  |-----------------|---------|
  |**Prototype**|char \*ft_substr(char const ***\*s***, unsigned int ***start***, size_t ***len***);|
  |**Description**|Allocates (with malloc(3)) and returns a substring from the string ’***s***’. The substring begins at index ’***start***’ and is of maximum size ’***len***’.|

  |**Function Name**|***ft_strjoin***|
  |-----------------|----------|
  |**Prototype**|char \*ft_strjoin(char const ***\*s1***, char const ***\*s2***);|
  |**Description**|Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’***s1***’ and ’***s2***’.|

  |**Function Name**|***ft_strtrim***|
  |-----------------|----------|
  |**Prototype**|char \*ft_strtrim(char const ***\*s1***, char const ***\*set***);|
  |**Description**|Allocates (with malloc(3)) and returns a copy of ’***s1***’ with the characters specified in ’***set***’ removed from the beginning and the end of the string.|

  |**Function Name**|***ft_split***|
  |-----------------|----------|
  |**Prototype**|char \*\*ft_split(char const ***\*s***, char ***c***);|
  |**Description**|Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’***s***’ using the character ’***c***’ as a delimiter. The array is end with a NULL pointer.|

  |**Function Name**|***ft_itoa***|
  |-----------------|----------|
  |**Prototype**|char \*ft_itoa(int ***n***);|
  |**Description**|Allocates (with malloc(3)) and returns a string representing the integer received as an argument.|
  
  |**Function Name**|***ft_strmapi***|
  |-----------------|----------|
  |**Prototype**|char \*ft_strmapi(char const ***\*s***, char ***(\*f)***(unsigned int, char));|
  |**Description**|Applies the function ’***f***’ to each character of the string ’***s***’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’***f***’.|
  
  |**Function Name**|***ft_striteri***|
  |-----------------|----------|
  |**Prototype**|void ft_striteri(char ***\*s***, void ***(\*f)***(unsigned int,char*));|
  |**Description**|Applies the function ’***f***’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’***f***’ to be modified if necessary.|
 
  |**Function Name**|***ft_putchar_fd***|
  |-----------------|----------|
  |**Prototype**|void ft_putchar_fd(char ***c***, int ***fd***);|
  |**Description**|Outputs the character ’***c***’ to the given file descriptor. &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;| 
  
  |**Function Name**|***ft_putstr_fd***|
  |-----------------|----------|
  |**Prototype**|void ft_putstr_fd(char ***/*s***, int ***fd***);|
  |**Description**|Outputs the string ’***s***’ to the given file descriptor. &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;| 
  
  |**Function Name**|***ft_putendl_fd***|
  |-----------------|----------|
  |**Prototype**|void ft_putendl_fd(char ***/*s***, int ***fd***);|
  |**Description**|Outputs the string ’***s***’ to the given file descriptor followed by a newline. &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;|  
  
  |**Function Name**|***ft_putnbr_fd***|
  |-----------------|----------|
  |**Prototype**|void ft_putnbr_fd(int ***n***, int ***fd***);|
  |**Description**|Outputs the integer ’***n***’ to the given file descriptor. &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;|
 
</details>

### Bonus Part

In this part, the function developed is use to manupulating linked list. \

Node in the linked list will be structure as below.
```C
typedef struct  s_list
{
  void            *content;
  struct s_list   *next;
} t_list;
```
The members of the t_list struct are
- **content**: The data contained in the node (void * allow to store any kind of data).
- **next**: The address of the next node, or NULL if it's the last one.

<details><summary>Bonus Part - functions list</summary>
  
  |**Function Name**|***ft_lstnew***|
  |-----------------|---------------|
  |**Prototype**|t_list \*ft_lstnew(void ***\*content);|
  |**Description**|Allocates (with malloc(3)) and returns a new node. The member variable ’***content***’ is initialized with the value of the parameter ’***content***’. The variable ’***next***’ is initialized to NULL.| 
  
  |**Function Name**|***ft_lstadd_front***|
  |-----------------|---------------------|
  |**Prototype**|t_list \*ft_lstadd_front(t_list ***\*\*lst, t_list ***\*new***);|
  |**Description**| Adds the node ’***new***’ at the beginning of the list. &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;| 
  
  |**Function Name**|***ft_lstsize***|
  |-----------------|----------------|
  |**Prototype**|int ft_lstsize(t_list ***\*lst***);|
  |**Description**| Counts the number of nodes in a list. &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;| 
  
  |**Function Name**|***ft_lstlast***|
  |-----------------|----------------|
  |**Prototype**|t_list \*ft_lstlast(t_list ***\*lst***);|
  |**Description**| Returns the last node of the list. &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;| 

  |**Function Name**|***ft_lstadd_back***|
  |-----------------|--------------------|
  |**Prototype**|void ft_lstadd_back(t_list ***\*\*lst***, t_list ***\*new***);|
  |**Description**| Adds the node ’***new***’ at the end of the list. &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;|
  
  |**Function Name**|***ft_lstdelone***|
  |-----------------|------------------|
  |**Prototype**|void ft_lstdelone(t_list ***\*lst***, void ***(\*del)***(void \*));|
  |**Description**|Takes as a parameter a node and frees the memory of the node’s content using the function ’***del***’ given as a parameter and free the node. The memory of ’***next***’ must not be freed.|
  
  |**Function Name**|***ft_lstclear***|
  |-----------------|-----------------|
  |**Prototype**|void ft_lstclear(t_list ***\*\*lst***, void ***(\*del)***(void \*));|
  |**Description**|Deletes and frees the given node and every successor of that node, using the function ’***del***’ and free(3). Finally, the pointer to the list must be set to NULL.|
  
  |**Function Name**|***ft_lstiter***|
  |-----------------|----------------|
  |**Prototype**|void ft_lstiter(t_list ***\*lst***, void ***(\*f)***(void \*));|
  |**Description**|Iterates the list ’***lst***’ and applies the function ’***f***’ on the content of each node. &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;|
  
  |**Function Name**|***ft_lstmap***|
  |-----------------|---------------|
  |**Prototype**|t_list *ft_lstmap(t_list ***\*lst***, void ***\*(\*f)***(void \*), void ***(\*del)***(void \*));|
  |**Description**|Iterates the list ’***lst***’ and applies the function ’***f***’ on the content of each node. Creates a new list resulting of the successive applications of the function ’***f***’. The ’***del***’ function is used to delete the content of a node if needed. |
  
  
</details>

### Extra functions

This library also contained extra 2 functions.

- [get_next_line](https://github.com/KTangg/get_next_line)
- [ft_printf](https://github.com/KTangg/ft_printf)

## How to use

- Type "make" in terminal to Compile and Create libft.a
```C
# In libft directory

libft$ make
```
- Includes "libft.h" in your C files.
- Compile with -I{*libft path*}/includes/ and -L{*libft path*} -lft
```C
# Example

workingdir$ gcc -Wall -Wextra -Werror -o project_name -Ilibft/includes -Llibft -lft
```

