//
//  main_isprint.c
//  Libft
//
//  Created by Monine CHAN on 02/08/2021.
//

#include <stdio.h>

int ft_isprint(int c);

int main()
{
    int c = 'A';
    int r = 5;
    
    r = ft_isprint(c);
    printf("%d", r);
    
    return(0);
}
