#include <stdlib.h>
#include <stdio.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char* substr;

	i = 0;
	substr = (char*)malloc(len);
	
	while(i < len)
	{
		substr[i] = s[start];
		i++;
		start++;
	}
return (substr);
}

int	main(void)
{
char *result;
int i;

i = 0;
result = ft_substr("hello", 2, 4);
while (result[i] !='\0')
{
	printf("%c", result[i]);
		i++;
}

free(result);
return(0);
}

