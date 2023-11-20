#include <stddef.h>

size_t ft_strlcat(char *dest, const char *src, size_t size) {
    size_t i;
	size_t length;

	i = 0;
	length = 0;

	if (dest == NULL)
		return (0);

	while (dest[i] != '\0')	
	{
	i++;
	length++;
	}
	
	i = 0;

	 while (src[i] != '\0' && length + 1 <size)
	{
        dest[length] = src[i];
        i++;
	length++;
   	 }

	if (length < size)
	{     
	dest[length] = '\0';
	}

	while (src[i] != '\0')
	{
	i++;
	length++;
	}

    return length;
}
#include <stdio.h>

int main() {
    // Test case 1: Normal operation
    char destination1[20] = "Hello, ";
    const char *source1 = "World!";
    size_t result1 = ft_strlcat(destination1, source1, sizeof(destination1));

    printf("Test 1:\n");
    printf("Result: %zu\n", result1);
    printf("Destination: %s\n\n", destination1);

    // Test case 2: Buffer size is 0
    char destination2[5] = "Test";
    const char *source2 = "ing";
    size_t result2 = ft_strlcat(destination2, source2, 0);

    printf("Test 2:\n");
    printf("Result: %zu\n", result2);
    printf("Destination: %s\n\n", destination2);

    // Test case 3: Destination buffer is NULL
    char *destination3 = NULL;
    const char *source3 = "This should not be copied";
    size_t result3 = ft_strlcat(destination3, source3, 10);

    printf("Test 3:\n");
    printf("Result: %zu\n", result3);

    return 0;
}

