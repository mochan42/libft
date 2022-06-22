//
//  main_strlcpy.c
//  Libft
//
//  Created by Monine CHAN on 27/07/2021.
//

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

void test(int size)
{
    char string[] = "abcde";
    char buffer[11] = "0123456789";
    int r;
	size_t i;

	printf("buffer is : %s\n", buffer);
	printf("initial buffer size is : %zu\n", ft_strlen(buffer));
    r = ft_strlcpy(buffer,string,size);
    printf("Copied source string '%s' (size of string is '%zu') into '%s', updated length of buffer %d\n",
            string,
           sizeof(string),
            buffer,
            r
          );
	printf("buffer is : ");
	for (i=0; i < ft_strlen(buffer); i++)
		printf("%c", buffer[i]);
	
	printf("\ninitial buffer dereferenced values are : ");
	for (i=0; i < 10; i++)
		printf("%c", buffer[i]);
}
	
int main()
{
    test(6);
    return(0);
}
