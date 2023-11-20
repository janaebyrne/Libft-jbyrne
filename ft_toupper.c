
int     ft_toupper(int c)
{
        int uppercase;

        uppercase = c - 32;
        return uppercase;
}
/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char lowercase = 'a';
    int result = ft_toupper(lowercase);

    printf("Original: %c\n", lowercase);
    printf("Uppercase: %c\n", (char)result);  // Typecast result to char for printing

    return 0;
}*/

