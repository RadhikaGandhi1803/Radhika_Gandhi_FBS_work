#include <stdio.h>
int mystrncasecmp(const char* s1, const char* s2, int n);
int main()
 {
    const char* str1 = "HeLLo";
    const char* str2 = "helloWorld";
    int n = 5;

    int result = mystrncasecmp(str1, str2, n);

    if (result == 0)
	{
        printf("The first %d characters are equal (case-insensitive).\n", n);
    } else if (result < 0) 
	{
        printf("First string is less than second (case-insensitive) in first %d characters.\n", n);
    } else 
	{
        printf("First string is greater than second (case-insensitive) in first %d characters.\n", n);
    }

    return 0;
}

char toLower(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    return ch;
}


int mystrncasecmp(const char* s1, const char* s2, int n) 
{
    while (n-- > 0 && (*s1 != '\0' || *s2 != '\0')) {
        char c1 = toLower(*s1);
        char c2 = toLower(*s2);

        if (c1 != c2) 
		{
            return (unsigned char)c1 - (unsigned char)c2;
        }

        s1++;
        s2++;
    }
    return 0;
}
