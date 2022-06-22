//
//  main_substr.c
//  Libft
//
//  Created by Monine CHAN on 02/08/2021.
//

#include "libft.h"
#include <stdio.h>

char* ft_substr(const char *s, unsigned int start, size_t len);

int main()
{
    char s[] = "42 Wolfsburg";
    unsigned int start = 3;
    size_t len = 4;
    
    printf("source: %s\n", s);
    char* result = ft_substr(s, start, len);
    printf("result: %s\n", result);
    return 0;
}
