#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int is_in_set(char c, const char *set)
{
    while (*set != '\0') {
        if (*set == c) {
            return 1; // Character is in the set
        }
        set++;
    }
    return 0;
}

char *ft_strtrim(char const *s1, char const *set)
{	
	if (s1 == NULL || set == NULL)
		return NULL;

	size_t start;
	size_t end;
	size_t len;
	char *trimmed;

 	start = 0;
	end = strlen(s1) - 1;

	while (s1[start] != '\0' && is_in_set(s1[start],set)) 
        	start++;	
	while (s1[end] != start && is_in_set(s1[end], set))
		end--;
	
	if (end > start)
		len = end-start +1;
	else len = 0;

	trimmed = (char *)malloc((len + 1) * sizeof(char));

	if (trimmed == NULL)
		return NULL;

	strncpy(trimmed, s1 + start, len);
    	trimmed[len] = '\0';
   	 return trimmed;		
}
int main() {
    const char *s = "  hello world  ";
    const char *set = " ";

    char *trimmed = ft_strtrim(s, set);

    if (trimmed != NULL) {
        printf("Trimmed string: \"%s\"\n", trimmed);
        free(trimmed); // Don't forget to free the allocated memory
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
