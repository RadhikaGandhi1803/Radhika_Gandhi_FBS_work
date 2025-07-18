#include <stdio.h>
char* mystrstr(char str[], char substr[]);
int main()
 {
	char str[100] = "hello world";
	char substr[100] = "world";
	char* result = mystrstr(str, substr);
	if (result != NULL)
		printf("Substring found at position: %d\n", result - str);
	else
		printf("Substring not found.\n");
	return 0;
}

char* mystrstr(char str[], char substr[]) 
{
	int i, j;
	for (i = 0; str[i] != '\0'; i++)
	 {
		for (j = 0; substr[j] != '\0'; j++)
		{
			if (str[i + j] != substr[j])
				break;
		}

		if (substr[j] == '\0')
			return &str[i]; 
	}
	return NULL;  
}