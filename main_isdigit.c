//
//  main_isdigit.c
//  Libft
//
//  Created by Monine CHAN on 02/08/2021.
//

#include <unistd.h>
#include <stdio.h>

int ft_isdigit(int c);

int main()
{
    int c = '7';
    int r = 5;
    
    r = ft_isdigit(c);
    printf("%d", r);
    
    return(0);
}
