Dynamic libraries, beautifully, solve both of these issues. Both static and dynamic libraries are functionally equivalent — organized storage of object code for the purposes of faster linking. However, when using static libraries, machine code is inserted directly into executables. With dynamic libraries, machine code is only loaded and executed at runtime.


the dynamic library listed is a library with all teh different string functions listed bellow

int _putchar(char c);
		- prints a character to the STDOUT
int _islower(int c);
		-checks if a character is lowercase
int _isalpha(int c);
		- checks if the character is a alphabet
int _abs(int n);
		- compute the absolute value of an integer
int _isupper(int c);
		- checks if the character is uppercase
int _isdigit(int c);
		- checks if the character is a digit
int _strlen(char *s);
		- checks the string lenth of the a given string
void _puts(char *s);
		- puts input to a given stream
char *_strcpy(char *dest, char *src);
		- copies a string to a different stream
int _atoi(char *s);
		- converst a string to a intiger
char *_strcat(char *dest, char *src);
		- concatinate a string to the initial string
char *_strncat(char *dest, char *src, int n);
		- concatinate a given number of bytes from one string tp the other
char *_strncpy(char *dest, char *src, int n);
		- copy a given number of bytes from one stream to the next
int _strcmp(char *s1, char *s2);
		- compare if two strings are exatly the same
char *_memset(char *s, char b, unsigned int n);
		- fill memory with a constant byte
char *_memcpy(char *dest, char *src, unsigned int n);
		- copy memory area
char *_strchr(char *s, char c);
		- locate character in string
unsigned int _strspn(char *s, char *accept);
		- get length of a prefix substring
char *_strpbrk(char *s, char *accept);
		- search a string for any of a set of bytes
char *_strstr(char *haystack, char *needle);
		- locate a substring
