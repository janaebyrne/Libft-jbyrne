#include <stdlib.h>
#include <stdio.h>
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	 if (s == NULL || f == NULL)
        return NULL;

	unsigned int len;
	unsigned int i;

	i = 0;
	len = 0;
    	while (s[len] != '\0')
        len++;

	char *result = (char *)malloc((len + 1) * sizeof(char));
	if (result == NULL)
		 return NULL;
	
	
	while (i < len)
    	{
        result[i] = f(i, s[i]);
	i++;
    	}
	
	result[len] = '\0';
		return (result);
}

char test_function(unsigned int index, char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 'a' + 'A';
    else
        return c;
}

int main()
{
    const char *input = "Hello, World!";

    // Applying the example_function to each character of the string
    char *result = ft_strmapi(input, test_function);

    // Print the result
    printf("Result: %s\n", result);

    // Don't forget to free the allocated memory
    free(result);

    return 0;
}	
