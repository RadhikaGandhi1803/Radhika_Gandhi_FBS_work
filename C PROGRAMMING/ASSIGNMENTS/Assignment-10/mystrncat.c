#include <stdio.h>
char* mystrncat(char* dest, const char* src, int n);

int main()
 {
    char dest[50] = "Hello, ";
    const char* src = "World!";
    int n = 3;
  
    mystrncat(dest, src, n);
    printf("Resulting string: %s\n", dest);

    return 0;
}

char* mystrncat(char* dest, const char* src, int n) 
{
    char* ptr = dest;

    while (*ptr != '\0')
	{
        ptr++;
    }

    while (n-- > 0 && *src != '\0') 
	{
        *ptr = *src;
        ptr++;
        src++;
    }

    *ptr = '\0'; 
    return dest;
}
