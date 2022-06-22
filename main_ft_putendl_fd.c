//
//  main_ft_putendl_fd.c
//  Libft
//
//  Created by Monine CHAN on 06/08/2021.
//

#include "libft.h"

void    ft_putendl_fd(char *s, int fd);

int     main()
{
    char s[]="42 Wolfsburg";
    int fd = 1;
    
    ft_putendl_fd(s, fd);
    
    return(0);
}
