#include <stdlib.h>

int	countlength(int n)
{
	int count;

	count = 0;
	while (n!= 0)
	{
		 n /= 10;
		count++;
	}
return (count);
}

char *ft_itoa(int n) 
{
	char *result;
	int i;
	int size;
	int negative;

	if (n == 0)
	{
		result = (char *)malloc(2 * sizeof(char));
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
	
	size = countlength(n) + 1;
	if (n < 0)
	{
		size += 1;
		negative = 1;
		n = -n;
	}
	else
	{
		negative = 0;
	}
	result = (char *)malloc(size * sizeof(char));
	i = size - 1;
	result[i] = '\0';
	i -= 1;

    	while (i >= 0)
	{
        	result[i] = '0' + n % 10;
		n /= 10;
		i--;
	}	
	if (negative == 1)
		result[0] = '-';
	
return (result);
}

#include <stdio.h>

int main() {
    int number1 = 123;
    int number2 = -456;

    char *result1 = ft_itoa(number1);
    char *result2 = ft_itoa(number2);

    if (result1 != NULL && result2 != NULL) {
        printf("Number 1: %d\nString 1: %s\n", number1, result1);
        printf("Number 2: %d\nString 2: %s\n", number2, result2);

        free(result1); // Don't forget to free the allocated memory
        free(result2);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}

