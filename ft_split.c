#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_wordcount(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static int	ft_wordlen(const char *s, char c, int wordindex)
{
	int	i;
	int	currentword;
	int	wordlen;

	i = 0;
	currentword = 0;
	while (currentword < wordindex)
	{
		while (s[i] == c)
			i++;
		wordlen = 0;
	}
	while (s[i] != c && s[i] != '\0')
	{
		i++;
		wordlen++;
	}
	currentword++;
	return (wordlen);
}

char	*extractword(const char *s, char c, int whichword)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_wordlen(s, c, whichword) + 1));
	if (str == NULL)
		return (NULL);
	while (whichword > 0)
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			if (whichword == 1)
				str[j] = s[i];
			i++;
			j++;
		}
		whichword--;
	}
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		words;

	i = 0;
	words = ft_wordcount(s, c);
	str = (char **)malloc(sizeof(char *) * (words + 1));
	if (str == NULL)
		return (NULL);
	while (i <= words - 1)
	{
		str[i] = extractword(s, c, i + 1);
		i++;
	}
	str[i] = NULL;
	return (str);
}

