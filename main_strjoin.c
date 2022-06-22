//
//  main_strjoin.c
//  Libft
//
//  Created by Monine CHAN on 06/08/2021.
//

#include "libft.h"
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2);

int main()
{
    char s1[]="42 ";
    char s2[]="Wolfsburg";
    char *res;
    
    res = ft_strjoin(s1, s2);
    printf("%s\n", res);
    return(0);
}
