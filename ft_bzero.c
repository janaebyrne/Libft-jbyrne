#include<stdio.h>
#include<string.h>
#include<stddef.h>
#include<stdlib.h>
void ft_bzero(void *str, size_t n)
{
	char *p = str;	
	
	while (n)
	{
	*p = '0';
	p++;
	n--;
	}
}

/*int	main(void)
{
    char *buffer;
	strcpy(buffer, "hello");

    printf("Buffer before bzero: %s\n", buffer);
    ft_bzero(buffer, 6);

    printf("Buffer after bzero: %s\n", buffer);

    return 0;
}*/
	
