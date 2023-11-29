#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int i;
	
	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
}
int main()
{
    // Example usage: outputting the string "Hello, World!" to standard output (file descriptor 1)
    ft_putstr_fd("Hello, World!\n", 1);

    return 0;
}
