#include <stdio.h>
char* mystrrchr(const char* str, char ch);
int main()
{
    const char* text = "programming";
    char target = 'g';

    char* result = mystrrchr(text, target);

    if (result != NULL)
	{
        printf("Last occurrence of '%c' found at position: %ld\n", target, result - text);
    } else 
	{
        printf("Character '%c' not found in the string.\n", target);
    }

    return 0;
}

char* mystrrchr(const char* str, char ch) {
    const char* last = NULL;

    while (*str != '\0') 
	{
        if (*str == ch)
		{
            last = str;  
        }
        str++;
    }

    if (ch == '\0')
	{
        return (char*)str;  
    }
	return (char*)last;  
}
