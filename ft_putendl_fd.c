#include <unistd.h>

void    ft_putendl_fd(char *s, int fd)
{
        int i;

        i = 0;
        while (s[i] != '\0')
        {
                write (fd, &s[i], 1);
                i++;
        }
        write (fd,"\n", 1);
}
int main()
{
    // Example usage: outputting the string "Hello, World!" to standard output (file descriptor 1)
    ft_putendl_fd("Hello, World!", 1);

    return (0);
} 
