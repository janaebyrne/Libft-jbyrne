#include <stddef.h>

char *strrchar(const char *str, int character)
{
	int i;

	i = 0;
	
	while (str[i] != '\0')
	{
		i++;
	}

	while(str[i] != character && i !>= 0)
	{
		i--;
	}
	

	if (i >= 0)
	{	
		return (char *)&str[i]
	}
	else 
		return NULL:
}
/*
int main() {
    const char *str = "Hello, World!";
    char search_char = 'o';

    char *result = my_strrchr(str, search_char);

    if (result != NULL) {
        printf("Last occurrence of '%c' found at position: %ld\n", search_char, result - str);
    } else {
        printf("'%c' not found in the string\n", search_char);
    }

    return 0;
}*/

