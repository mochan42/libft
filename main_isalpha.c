//
//  main_isalpha.c
//  Libft
//
//  Created by Monine CHAN on 02/08/2021.
//

#include "libft.h"
#include <stdio.h>

int ft_isalpha(int c);

int main()
{
    int c;
    c = 'z';
    int r = 0;
    
    r = ft_isalpha(c);
    printf("%d", r);
    
    return (0);
}

