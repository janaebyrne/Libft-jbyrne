#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
void	ft_putnbr_fd(int n, int fd)
{
	
	if (n == -2147483648)
	{
		write (fd, "-", 1);
		write (fd, "2", 1);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-',fd);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n /10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}	
	else
		ft_putchar_fd(n + '0', fd);

}
int	main(void)
{
	   ft_putnbr_fd(-12345, 1);
	   return 0;
}
