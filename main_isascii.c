//
//  main_isascii.c
//  Libft
//
//  Created by Monine CHAN on 02/08/2021.
//

#include <stdio.h>

int ft_isascii(int c);

int main()
{
    int c = 'A';
    int r = 1000;
    
    r = ft_isascii(c);
    printf("%d", r);
    
    return(0);
}
