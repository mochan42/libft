//
//  main_striteri.c
//  Libft
//
//  Created by Monine CHAN on 06/08/2021.
//

#include "libft.h"
#include <stdio.h>
#include <string.h>


void    ft_putchar(char c);

void    ft_putnbr(int nb);

void    ft_putendl_fd(char *s, int fd);

void    ft_change(unsigned int i, char *c)
{
    ft_putnbr(i);
    ft_putchar(' ');
    ft_putendl_fd(&c[i], 1);
}

void    ft_striteri(char *s, void (*f)(unsigned int, char*));

int     main()
{
    char    str2[] = "abcde";
    ft_striteri(str2, ft_change);
    return(0);
}
