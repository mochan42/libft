//
//  main_isalnum.c
//  Libft
//
//  Created by Monine CHAN on 02/08/2021.
//

#include <stdio.h>

int ft_isalnum(int c);

int main()
{
    int c ='&';
    int r = 5;
    
    r = ft_isalnum(c);
    printf("%d", r);
    return (0);
}
