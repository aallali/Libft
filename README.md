# Libft

Educational project where I recreated some of the standard C library functions from scratch. It serves as a hands-on approach to understanding and building core library functionalities, enhancing my knowledge of C programming and system-level concepts, especially Memory management.


### Character Functions
| Function          | Implementation & Description                                                                 | Usage Example                     |
|-------------------|---------------------------------------------------------------------------------------------|-----------------------------------|
| **[ft_isalnum.c](ft_isalnum.c)**    | Checks if character is alphanumeric (A-Z, a-z, 0-9). Returns 1/0.                           | `ft_isalnum('K')` → 1            |
| **[ft_isalpha.c](ft_isalpha.c)**    | Checks if character is alphabetic (A-Z, a-z). Returns 1/0.                                  | `ft_isalpha('@')` → 0            |
| **[ft_isascii.c](ft_isascii.c)**    | Checks if character is a valid ASCII value (0-127). Returns 1/0.                            | `ft_isascii(150)` → 0            |
| **[ft_isdigit.c](ft_isdigit.c)**    | Checks if character is a digit (0-9). Returns 1/0.                                          | `ft_isdigit('7')` → 1            |
| **[ft_isprint.c](ft_isprint.c)**    | Checks if character is printable (ASCII 32-126). Returns 1/0.                               | `ft_isprint('\n')` → 0           |
| **[ft_tolower.c](ft_tolower.c)**    | Converts uppercase letters to lowercase. Leaves others unchanged.                           | `ft_tolower('Z')` → 'z'          |
| **[ft_toupper.c](ft_toupper.c)**    | Converts lowercase letters to uppercase. Leaves others unchanged.                           | `ft_toupper('m')` → 'M'          |

### String Functions
| Function          | Implementation & Description                                                                 | Usage Example                     |
|-------------------|---------------------------------------------------------------------------------------------|-----------------------------------|
| **[ft_strlen.c](ft_strlen.c)**     | Returns length of null-terminated string (excluding '\0').                                   | `ft_strlen("test")` → 4          |
| **[ft_strdup.c](ft_strdup.c)**     | **Allocates** and returns duplicate of `str`. Caller must free.                              | `ft_strdup("copy")` → "copy"     |
| **[ft_strchr.c](ft_strchr.c)**     | Returns pointer to first occurrence of `c` in `s`, or NULL.                                  | `ft_strchr("abc", 'b')` → "bc"   |
| **[ft_strrchr.c](ft_strrchr.c)**    | Returns pointer to last occurrence of `c` in `s`, or NULL.                                   | `ft_strrchr("test", 't')` → "t"  |
| **[ft_strnstr.c](ft_strnstr.c)**    | Locates substring `needle` in `haystack` within `len` bytes. Returns pointer or NULL.        | `ft_strnstr("foo", "oo", 3)` → "oo" |
| **[ft_strlcpy.c](ft_strlcpy.c)**    | Copies up to `size-1` chars from `src` to `dst`. Returns source length.                      | `ft_strlcpy(dst, src, 10)`       |
| **[ft_strlcat.c](ft_strlcat.c)**    | Concatenates `src` to `dst` with size limit. Returns total attempted length.                 | `ft_strlcat(dst, src, 20)`       |
| **[ft_strjoin.c](ft_strjoin.c)**    | **Allocates** new string = `s1` + `s2`. Handles NULLs as empty strings.                      | `ft_strjoin("Hello", "!")` → "Hello!" |
| **[ft_strtrim.c](ft_strtrim.c)**    | **Allocates** copy of `s1` with `set` chars removed from start/end.                          | `ft_strtrim("xxHiX", "x")` → "Hi" |
| **[ft_split.c](ft_split.c)**      | **Allocates** NULL-terminated array of substrings split by `c`. Requires full cleanup.       | `ft_split("1,2,3", ',')` → ["1","2","3",NULL] |
| **[ft_substr.c](ft_substr.c)**     | **Allocates** substring from `s` starting at `start` with max `len` chars.                   | `ft_substr("abcdef", 2, 3)` → "cde" |
| **[ft_strmapi.c](ft_strmapi.c)**    | Applies function `f` to each char of `s` (with index) to create new **allocated** string.    | `ft_strmapi("abc", &toupper)` → "ABC" |
| **[ft_strjoinch.c](ft_strjoinch.c)**  | **Allocates** new string = `s` + appended character `c`.                                     | `ft_strjoinch("num", '5')` → "num5" |
| **[ft_strcmp.c](ft_strcmp.c)**     | Compares `s1` and `s2`. Returns difference at first mismatch.                                | `ft_strcmp("a", "b")` → -1       |
| **[ft_strncmp.c](ft_strncmp.c)**    | Compares up to `n` chars of `s1` and `s2`. Returns difference at first mismatch.             | `ft_strncmp("ab", "abc", 2)` → 0 |

### Memory Functions
| Function          | Implementation & Description                                                                 | Usage Example                     |
|-------------------|---------------------------------------------------------------------------------------------|-----------------------------------|
| **[ft_bzero.c](ft_bzero.c)**      | Sets `n` bytes of memory at `s` to zero.                                                    | `ft_bzero(buffer, 100)`          |
| **[ft_memchr.c](ft_memchr.c)**     | Scans first `n` bytes of `s` for `c`. Returns pointer or NULL.                              | `ft_memchr(data, 0x42, 50)`      |
| **[ft_memcmp.c](ft_memcmp.c)**     | Compares first `n` bytes of `s1` and `s2`. Returns difference.                              | `ft_memcmp(data1, data2, 16)`    |
| **[ft_memcpy.c](ft_memcpy.c)**     | Copies `n` bytes from `src` to `dest`. Undefined for overlapping regions.                   | `ft_memcpy(dest, src, 20)`       |
| **[ft_memmove.c](ft_memmove.c)**    | Safely copies `n` bytes between possibly overlapping regions.                               | `ft_memmove(arr, arr+3, 5)`      |
| **[ft_memset.c](ft_memset.c)**     | Fills first `n` bytes of `s` with byte `c`.                                                 | `ft_memset(arr, 0, sizeof(arr))` |
| **[ft_calloc.c](ft_calloc.c)**     | **Allocates** zero-initialized memory for `count` elements of `size`.                       | `ft_calloc(5, sizeof(int))` → [0,0,0,0,0] |
| **[ft_memalloc.c](ft_memalloc.c)**   | **Allocates** zero-initialized memory block of `size` bytes.                                | `ft_memalloc(50)` → zeroed memory|
| **[ft_memdel.c](ft_memdel.c)**     | Frees memory at `ap` and sets pointer to NULL.                                              | `ft_memdel(&ptr)`                |
| **[ft_realloc.c](ft_realloc.c)**    | Resizes previously allocated memory block. Preserves existing data.                         | `ft_realloc(ptr, 50, 100)`       |

### Conversion Functions
| Function          | Implementation & Description                                                                 | Usage Example                     |
|-------------------|---------------------------------------------------------------------------------------------|-----------------------------------|
| **[ft_atoi.c](ft_atoi.c)**       | Converts string to integer. Ignores leading whitespace, handles single +/- sign.            | `ft_atoi(" -42")` → -42          |
| **[ft_itoa.c](ft_itoa.c)**       | **Allocates** string representation of integer (including negatives). Caller must free.     | `ft_itoa(-123)` → "-123"         |

### Linked List Functions
| Function          | Implementation & Description                                                                 | Usage Example                     |
|-------------------|---------------------------------------------------------------------------------------------|-----------------------------------|
| **[ft_lstnew.c](ft_lstnew.c)**     | **Allocates** new list node with `content`. `next` initialized to NULL.                     | `ft_lstnew("data")`              |
| **[ft_lstadd.c](ft_lstadd.c)**     | Adds `new` node to the front of the list.                                                   | `ft_lstadd(&list, new_node)`     |
| **[ft_lstdel.c](ft_lstdel.c)**     | Deletes entire list chain with `del` function. Sets `*alst` to NULL.                        | `ft_lstdel(&list, &free)`        |
| **[ft_lstdelone.c](ft_lstdelone.c)**  | Deletes single node with `del` function. Doesn't affect next nodes.                         | `ft_lstdelone(node, &free)`      |
| **[ft_lstiter.c](ft_lstiter.c)**    | Applies function `f` to content of each list node.                                          | `ft_lstiter(list, &print_func)`  |
| **[ft_lstmap.c](ft_lstmap.c)**     | Creates new list by applying `f` to each node. **Allocates** new nodes.                     | `ft_lstmap(list, &transform)`    |

### I/O Functions
| Function          | Implementation & Description                                                                 | Usage Example                     |
|-------------------|---------------------------------------------------------------------------------------------|-----------------------------------|
| **[ft_putchar.c](ft_putchar.c)**    | Writes character to stdout.                                                                 | `ft_putchar('X')`                |
| **[ft_putchar_fd.c](ft_putchar_fd.c)** | Writes character to specified file descriptor.                                              | `ft_putchar_fd('E', 2)`          |
| **[ft_putstr.c](ft_putstr.c)**     | Writes string to stdout.                                                                    | `ft_putstr("Hello")`             |
| **[ft_putstr_fd.c](ft_putstr_fd.c)**  | Writes string to specified file descriptor.                                                 | `ft_putstr_fd("Error", 2)`       |
| **[ft_putendl.c](ft_putendl.c)**    | Writes string + newline to stdout.                                                          | `ft_putendl("Message")`          |
| **[ft_putendl_fd.c](ft_putendl_fd.c)** | Writes string + newline to specified file descriptor.                                       | `ft_putendl_fd("Log", 1)`        |
| **[ft_putnbr.c](ft_putnbr.c)**     | Writes integer to stdout.                                                                   | `ft_putnbr(-42)`                 |
| **[ft_putnbr_fd.c](ft_putnbr_fd.c)**  | Writes integer to specified file descriptor.                                                | `ft_putnbr_fd(255, 1)`           |
| **[ft_putnstr.c](ft_putnstr.c)**    | Writes first `n` characters of string to stdout.                                            | `ft_putnstr("abcdef", 3)` → "abc"|

### Utility Functions
| Function          | Implementation & Description                                                                 | Usage Example                     |
|-------------------|---------------------------------------------------------------------------------------------|-----------------------------------|
| **[ft_strnew.c](ft_strnew.c)**     | **Allocates** zero-initialized string of `size` chars (+1 for '\0').                        | `ft_strnew(5)` → "\0\0\0\0\0\0"  |
| **[ft_strdel.c](ft_strdel.c)**     | Frees string memory and sets pointer to NULL.                                               | `ft_strdel(&str)`                |
| **[ft_strclr.c](ft_strclr.c)**     | Sets every character of string to '\0'.                                                     | `ft_strclr(buffer)`              |
| **[ft_striter.c](ft_striter.c)**    | Applies function `f` to each character of string (modifies in-place).                       | `ft_striter(s, &toupper)`        |
| **[ft_striteri.c](ft_striteri.c)**   | Applies function `f` to each character with index (modifies in-place).                      | `ft_striteri(s, &add_index)`     |
| **[ft_strequ.c](ft_strequ.c)**     | Lexicographical comparison of `s1` and `s2`. Returns 1 if equal, 0 otherwise.               | `ft_strequ("a", "A")` → 0        |
| **[ft_strnequ.c](ft_strnequ.c)**    | Lexicographical comparison up to `n` chars. Returns 1 if equal, 0 otherwise.               | `ft_strnequ("ab", "abc", 2)` → 1 |
| **[ft_countwords.c](ft_countwords.c)** | Counts words in `s` separated by delimiter `c`.                                             | `ft_countwords("a,b,c", ',')` → 3|
| **[ft_capitalize.c](ft_capitalize.c)** | Modifies string: first letter uppercase, rest lowercase.                                    | `ft_capitalize("hELLO")` → "Hello"|
| **[ft_copyuntil.c](ft_copyuntil.c)**  | **Allocates** copy of `s` up to first occurrence of `c`. Returns substring.                 | `ft_copyuntil("foo:bar", ':')` → "foo" |
### Compile the library:
```bash
➜  Libft git:(master) ✗ make 
gcc -Wall -Wextra -Werror -c *.c
ar rc libft.a *.o
ranlib libft.a
```
- `libft.a` is created, move it to your project and can be used like this:
```bash
gcc main.c libft.a -o main
```
