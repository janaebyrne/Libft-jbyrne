#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char *ft_strdup(const char *str)
{
	if (str == NULL)
		return NULL;

	size_t len;
	int i;
	char* dup;

	len = 1;
	while (str[len] != '\0')
		len++;

	dup = (char *)malloc(len);

	i = 0;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
	int j;
	char* dup;

	char* str = "hello";
	dup = ft_strdup(str);
	
	j = 0;
	while (dup[j] != '\0')
	{
		printf("%c", dup[j]);
		j++;
	}
free(dup);
return (0);
}		
