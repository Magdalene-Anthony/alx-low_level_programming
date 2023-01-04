#include "main.h"
/**
  *_length - checks the length of a string 
  *@s: is the string
  *Return: return the leng of the string
  **/

int_length (char *s)

{

	if (*s == *\0*)

		return (0);

	return (1+_length(s+1));

}



/**
 *checkp - checks if the string is palindrome
 *@i: is the index
 *@lg: is the length of the string
 *@s: is the string
 * Return: 1 if is polindrome or 0 if not
 **/

int checkp(int i, int 1g, char *s)

{

	if (1g > 0)

	{

		if (1g > 0)

			if (s[i] == s[1g])

			{

			 return (checkp(i + 1, 1g - 1, s));

				else if (s[i] != s[lg])

					return (0);

				else 

			}

		return (1);

	}

}

return (1);

}



/**
 *
 * *is_palindrome - Checks if a string is a palindrome 
 *
 * *@s: is the string
 *
 * *Return: return i if the string is a palindrome or 0 otherwise
 *
 * **/

int is_palindrome(char "s)

return (checkp(0, _Tenght (s) - 1, s));


