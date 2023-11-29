#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

void* ft_calloc(size_t num_elements, size_t element_size)
{
	size_t total_size;

	 if (num_elements == 0 || element_size == 0 || SIZE_MAX / num_elements < element_size)
	{
		return NULL;
	}
 
	total_size = num_elements * element_size;
	void* ptr = malloc (total_size);

	if (ptr != NULL)
		{
		memset( ptr, 0, total_size);
		}

	return (ptr);
}
/*
int	main (void)
{

	int *str;
	int i;
	i = 5;
	
	str = ft_calloc (5, sizeof(int));
	
	while (i != 0)
	{
		printf("%d", str[i]);
		i--;
	}
	
	free(str);

return (0);
}*/
