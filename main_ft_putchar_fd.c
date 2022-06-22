//
//  main_ft_putchar_fd.c
//  Libft
//
//  Created by Monine CHAN on 06/08/2021.
//

#include "libft.h"
#include <stdio.h>

void    ft_putchar_fd(char c, int fd);

int     main()
{
    char c;
    int fd;
    c = 'W';
    fd = 1;
    
    ft_putchar_fd(c, fd);
    
    return(0);
}
