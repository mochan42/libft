//
//  main_memchr.c
//  Libft
//
//  Created by Monine CHAN on 26/07/2021.
//

#include "libft.h"
#include <stdio.h>

void *ft_memchr(const void *s, int c, unsigned n);

int main()
{
    char s[] = "42Wolfsburg";
    char *ptr = ft_memchr(s,'o',sizeof(s));
    if (ptr != NULL)
    {
        printf ("'c' found at position: %lu\n", ptr-s+1);
        printf ("search character found:  %s\n", ptr);
    }
    else
    {
        printf ("search character not found\n");
    }
    return 0;
}
