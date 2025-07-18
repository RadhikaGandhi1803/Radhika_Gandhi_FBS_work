#include <stdio.h>
char* mystrchr(const char* str, char ch);

int main()
 {
    const char* text = "Hello World";
    char target = 'o'; 
    char* result = mystrchr(text, target);

    if (result != NULL)
	{
        printf("Character '%c' found at position: %ld\n", target, result - text);
    } else
	{
        printf("Character '%c' not found in the string.\n", target);
    }

    return 0;
}

char* mystrchr(const char* str, char ch) {
    while (*str != '\0') {
        if (*str == ch) {
            return (char*)str;
        }
        str++;
    }

    if (ch == '\0') {
        return (char*)str;
    }

    return NULL;
}
