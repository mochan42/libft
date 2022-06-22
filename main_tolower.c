//
//  main_tolower.c
//  Libft
//
//  Created by Monine CHAN on 02/08/2021.
//

#include "libft.h"
#include <stdio.h>

int ft_tolower(int c);

int main()
{
    int c = 'A';
    printf("%c in lowercase is represented as %c", c, ft_tolower(c));
    return(0);
}
