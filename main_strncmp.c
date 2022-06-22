//
//  main_strncmp.c
//  Libft
//
//  Created by Monine CHAN on 30/07/2021.
//

#include "libft.h"
#include <stdio.h>


int    ft_strncmp(const char *s1, const char *s2, size_t n);

int main()
{
    char* s1 = "abcdefg";
    char* s2 = "ad";
    int result;
    
    result = ft_strncmp(s1, s2, 1);
    printf("result of strncmp is : %d", result);
    return(0);
}
