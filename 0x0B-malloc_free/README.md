# 0x0B. C <img src="https://github.com/devicons/devicon/blob/master/icons/c/c-original.svg" width="25" height="25" /> - malloc, free

<img src="https://media4.giphy.com/media/WFZvB7VIXBgiz3oDXE/giphy.gif?cid=6c09b9525e85c45cd9dd2ced9a14ea8edb999312069ab7f2&rid=giphy.gif&ct=s" alt="coding" />

![GitHub top language](https://img.shields.io/github/languages/top/{Akingbade675}/{alx-low_level_programming}?color=blue)


This project was given to understand how to dynamically allocate memory with the use of `malloc` and deallocate every memory space you previously allocated yourself using `free`.

<br/>

## __Tasks__

<h3>
  <a href="https://github.com/Akingbade675/alx-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c">
    0-create_array.c
  </a>
</h3>
 
A function that creates an array of chars, and initializes it with a specific char.

> - Prototype: ```char *create_array(unsigned int size, char c);```
> - Returns `NULL` if size = `0`
> - Returns a pointer to the array, or `NULL` if it fails
---
<br/>
<h3>
  <a href="https://github.com/Akingbade675/alx-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c">
    1-strdup.c
  </a>
</h3>

A function that returns a pointer to a newly allocated space in memory, 
which contains a copy of the string given as a parameter.

> - Prototype: `char *_strdup(char *str);`
> - The `_strdup()` function returns a pointer to a new string which is a duplicate of the 
string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
> - Returns `NULL` if str = NULL
> - On success, the `_strdup` function returns a pointer to the duplicated string. 
It returns `NULL` if insufficient memory was available
---
<br/>
<h3>
  <a href="https://github.com/Akingbade675/alx-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c">
    2-str_concat.c
  </a>
</h3>

A function that concatenates two strings.

> - Prototype: `char *str_concat(char *s1, char *s2);`
> - The returned pointer should point to a newly allocated space in memory which 
contains the contents of `s1`, followed by the contents of `s2`, and null terminated
> - if `NULL` is passed, treat it as an empty string
> - The function should return `NULL` on failure
---
<br/>
<h3>
  <a href="https://github.com/Akingbade675/alx-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c">
    3-alloc_grid.c
  </a>
</h3>

A function that returns a pointer to a 2 dimensional array of integers.

> - Prototype: `int **alloc_grid(int width, int height);`
> - Each element of the grid should be initialized to `0`
> - The function should return `NULL` on failure
> - If `width` or `height` is `0` or negative, return `NULL`
---
<br/>
<h3>
  <a href="https://github.com/Akingbade675/alx-low_level_programming/blob/master/0x0B-malloc_free/4-free_grid.c">
    4-free_grid.c
  </a>
</h3>

A function that frees a 2 dimensional grid previously created by your [`alloc_grid`](https://github.com/Akingbade675/alx-low_level_programming/edit/master/0x0B-malloc_free/README.md#------3-alloc_gridc--) function.

> - Prototype: `void free_grid(int **grid, int height);`
> - Note that we will compile with your alloc_grid.c file. Make sure it compiles.
---
<br/>
<h3>
  <a href="https://github.com/Akingbade675/alx-low_level_programming/blob/master/0x0B-malloc_free/100-argstostr.c">
    100-argstostr.c
  </a>
</h3>

A function that concatenates all the arguments of your program.

> - Prototype: `char *argstostr(int ac, char **av);`
> - Returns `NULL` if `ac == 0` or `av == NULL`
> - Returns a pointer to a new string, or `NULL` if it fails
> - Each argument should be followed by a `\n` in the new string
---
<br/>
<h3>
  <a href="https://github.com/Akingbade675/alx-low_level_programming/blob/master/0x0B-malloc_free/101-strtow.c">
    101-strtow.c
  </a>
</h3>

A function that splits a string into words.

> - Prototype: `char **strtow(char *str);`
> - The function returns a pointer to an array of strings (words)
> - Each element of this array should contain a single word, null-terminated
> - The last element of the returned array should be `NULL`
> - Words are separated by spaces
> - Returns `NULL` if `str == NULL` or `str == ""`
> - If your function fails, it should return `NULL`
---
