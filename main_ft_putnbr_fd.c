/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_putnbr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@students.42wolfsburg.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 21:52:53 by mochan            #+#    #+#             */
/*   Updated: 2021/09/13 21:52:53 by mochan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int nb, int fd);

int     main()
{
    int nb = 123;
    int fd = 1;
    
    ft_putnbr_fd(nb, fd);
    
    return(0);
}
