int     ft_tolower(int c)
{
        int lowercase;

        lowercase = c + 32;
        return lowercase;
}
/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char uppercase = 'A';
    int result = ft_tolower(uppercase);

    printf("Original: %c\n", uppercase);
    printf("Lowercase: %c\n", (char)result);  // Typecast result to char for printing

    return 0;
}*/

