//
//  main_strmapi.c
//  Libft
//
//  Created by Monine CHAN on 06/08/2021.
//

#include "libft.h"
#include <stdio.h>

char    ft_test(unsigned int i, char c)
{
    i = 0;
    return (c - 32);
}

char    *ft_strmapi(char const *s, char(*f)(unsigned int, char));

int     main()
{
    char s[]="wolfsburg";
    char *res;
    
    res = ft_strmapi(s, ft_test);
    printf("%s\n", res);
    
    return(0);
}
