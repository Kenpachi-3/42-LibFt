###*This project has been created as part of the 42 curriculum by ntshuma.*
***
# ***LIBFT***
## This is my very first C library!
***
# **Description**
This is the first C library that I have coded. It includes functions which can be used for programs in the future. 

# **Instructions**
# **Resources**
# **Detailed description of the library created for this project**
Function | Action | Header
-
ft_isalpha | Checks that a character is an upper case or lower case letter of the alphabet. | <stdio.h>
-
ft_isdigit | Checks if there is a digit in the test and returns a true value if found and false is not. | <stdio.h>
-
ft_isalnum | Checks if the characters are alphanumeric. | <stdio.h>
-
ft_isascii | Checks if all the characters are ASCII, if so it returns true. | <stdio.h> 
-
ft_isprint | Checks for all printable characters including space. | <stdio.h>
-
ft_strlen | Calculates the length of a string. | <string.h> and <stdio.h>
-
ft_memset | Fills a defined amount of memory (n) with a constatnt byte (c) pointed to by s. | <string.h>
-
ft_bzero | Erases data found in the memory (n bytes) starting at the location s and and writing zeros in that area.  | <string.h>
-
ft_memcpy | Copies n bytes from memory area src to memory area dest.| <string.h>
-
ft_memmove | Similar to memcpy but it is used when memory areas overlap. The bytes from src are copied to a temporary array then to dest. | <string.h>
-
ft_strlcpy | Copies n size of characters fron src to dest.  | <string.h>
-
ft_strlcat | Concatenates the string src to the end of dest.| <string.h>
-
ft_toupper | Converts characters from lowercase to uppercase. | <ctype.h>
-
ft_tolower | Converts characters from uppercase to lowercase. | <ctype.h>
-
ft_strchr | Locates a character in a string by returning the first occurence of said character in the string. | <string.h>
-
ft_strrchr | Locates the character in a string by returning a pointer to the last occurence of said character in the string. | <string.h>
-
ft_strncmp | Compares two strings s1 and s2.| <string.h>
-
ft_memchr | Scans n bytes of memory found at location s for a character (c).| <string.h>
-
ft_memcmp | Compares memory (n bytes) in areas s1 and s2. | <string.h>
-
ft_strnstr | Locates a substringin a string| <string.h>
-
ft_atoi | Converts the initial portion of a string (nptr) to int. It does not detect errors the way that the strtol function does. | <stdlib.h>

***
*THE END*
***