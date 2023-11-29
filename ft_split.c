#include <stdlib.h>
#include <string.h>

char** ft_split(char const *s, char c)
{
	char** result;
	const char *start;
	int inword;
	size_t wordlen;
	int i;
	size_t wordcount;

	inword = 0;
	start = s;
	i = 0;

	if (!s)
		 return NULL;
	while (*s)
	{
		if (*s == c || *s == '\0')
		 	inword = 1;
		 else if (!inword)
		 {
            		inword = 1;
           		 wordcount++;
		}
	s++;
	}
	
	result = (char**)malloc((wordcount + 1) * sizeof(char*);
	if (!result)
        return NULL;

	while (*s|| inword == '0')
	{
		
