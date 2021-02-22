# Libft
The aim of this project is to code a library in C.  

### Requirements:
##### Part 1 - libc functions
You must recode the following functions, without any external functions:
- memset
- bzero
- memcpy
- memccpy
- memmove
- memchr
- memcmp
- strlen
- strlcpy
- strlcat
- strchr
- strrchr
- strnstr
- strncmp
- atoi
- isalpha
- isdigit
- isalnum
- isacii
- isprint
- toupper
- tolower

You must recode the following functions, using the function `malloc`:

- calloc
- strdup

##### Part 2 - Additional functions
- `char *ft_substr(char const *s, unsigned int start, size_t len)`  
  *Allocates (with malloc(3)) and returns a substring from the string given in argument.*  
  *The substring begins at index ’start’ and is of maximum size ’len’.*
- `char *ft_strjoin(char const *s1, char const *s2)`  
  *Allocates (with malloc(3)) and returns a new*    
  *string, result of the concatenation of s1 and s2.*
- `char *ft_strtrim(char const *s1, char const *set)`  
  *Allocates (with malloc(3)) and returns a copy of the string given as argument without the characters*  
  *specified in the set argument at the beginning and the end of the string.*
- `char **ft_split(char const *s, char c)`  
  *Allocates (with malloc(3)) and returns an array of strings obtained by splitting s using the character c*  
  *as a delimiter. The array must be ended by a NULL pointer.*
- `char *ft_itoa(int n)`  
  *Allocates (with malloc(3)) and returns a string representing the integer received as an argument.*  
  *Negative numbers must be handled.*
- `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))`  
  *Applies the function f to each character of the string passed as argument to create a new*  
  *string (with malloc(3)) resulting from successive applications of f.*
- `void ft_putchar_fd(char c, int fd)`  
  *Outputs the character c to given file descriptor.*
- `void ft_putstr_fd(char *s, int fd)`  
  *Outputs the string s to given file descriptor.*
- `void ft_putendl_fd(char *s, int fd)`  
  *Outputs the string s to given file descriptor, followed by a newline.*
- `void ft_putnbr_fd(int n, int fd)`  
  *Outputs the integer n to given file descriptor.*

##### Part 3 - Bonus
- `t_list *ft_lstnew(void *content)`  
  *Allocates (with malloc(3)) and returns a new element. The variable content is initialized with*  
  *the value of the parameter content. The variable next is initialized to NULL.*
- `void ft_lstadd_front(t_list **alst, t_list *new)`  
  *Adds the element new at the beginning of the list.*
- `int ft_lstsize(t_list *lst)`  
  *Counts the number of elements int a list.*
- `t_list *ft_lstlast(t_list *lst)`  
  *Returns the last element of the list.*
- `void ft_lstadd_back(t_list **alst, t_list *new)`  
  *Adds the element new at the end of the list.*
- `void ft_lstdelone(t_list *lst, void (*del)(void *))`  
  *Takes as a parameter an element and frees the memory of the element’s content using the function del given as a parameter.
  *The memory of next must not be freed under any circumstance.*
- `void ft_lstclear(t_list **lst, void (*del)(void *))`  
  *Deletes and frees the given element and every successor of that element, using the function del and free(3).*  
  *Finally, the pointer to the list must be set to NULL.*
- `void ft_lstiter(t_list *lst, void (*f)(void *))`  
  *Iterates the list lst and applies the function f to the content of each element.*
- `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))`  
  *Iterates the list lst and applies the function f to the content of each element.*  
  *Creates a new listresulting of the successive applications of the function f.*  
  *The del function is here to delete the content of an element if needed*
