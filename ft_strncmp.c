#include <stddef.h>
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int i;

	i = 0;

	while (n >0 && str1[i] && (str1[i] == str2[i]))
	{
		str1[i]++;
		str2[i]++;
		n--;
	}
	
	if (n == 0)
	{
		return(0);
	}
	else
		return ((unsigned char) str1[i] - (unsigned char) str2[i]);
}
#include <stdio.h>

int	main()
{
	const char *str1 = "hellothere";
	const char *str2 = "helloapple";

	int result = ft_strncmp (str1, str2, 6);
	printf("%d", result);
}
