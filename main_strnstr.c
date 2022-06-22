//
//  main_strnstr.c
//  Libft
//
//  Created by Monine CHAN on 30/07/2021.
//

#include "libft.h"
#include <stdio.h>

int main()
{
    const char* haystack = "42 Wolfsburg";
    const char* needle = "Wolf";
    char* ptr;
    
    ptr = ft_strnstr(haystack, needle, 7);
    printf("searched string is : %s", ptr);
    
    return (0);
}
