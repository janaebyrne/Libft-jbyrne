#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2)
{	
	char* joined;
	size_t len1;
	size_t len2;
	size_t len;
	size_t i;

	len1 = strlen(s1);
	len2=  strlen(s2);
	len = (len1 + len2);

	i = 0;
	joined = (char *)malloc(len);
	
	while (i < len1)
		{
			joined[i] = s1[i];
				i++;
		}
	i = 0;
	while (i < len)
		{
			joined[len1] = s2[i];
				i++;	
				len1++;
		}
return (joined);
}

int	main(void)
{
	char*	joined;
	joined = ft_strjoin("hello", "how are you");
	
	int i = 0;
	while (joined[i] != '\0')
	{	
		printf("%c", joined[i]);
		i++;
	}
return(0);
}

