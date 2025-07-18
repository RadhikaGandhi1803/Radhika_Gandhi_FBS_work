#include <stdio.h>
int mystrncmp(const char* str1, const char* str2, int n);

int main()
 {
    const char* s1 = "apple";
    const char* s2 = "apricot";
    int n = 3;

    int result = mystrncmp(s1, s2, n);

    if (result == 0) 
	{
        printf("First %d characters are equal.\n", n);
    } else if (result < 0)
	 {
        printf("First string is less than second in first %d characters.\n", n);
    } else
	 {
        printf("First string is greater than second in first %d characters.\n", n);
    }

    return 0;
}

int mystrncmp(const char* str1, const char* str2, int n)
 {
    while (n > 0 && *str1 != '\0' && *str2 != '\0') 
	{
        if (*str1 != *str2) 
		{
            return (*str1 - *str2);
        }
        str1++;
        str2++;
        n--;
    }

    if (n > 0) 
	{
        return (*str1 - *str2);
    }

    return 0;
}
