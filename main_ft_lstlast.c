//
//  main_ft_lstlast.c
//  Libft
//
//  Created by Monine CHAN on 08/08/2021.
//

#include "libft.h"
#include <stdio.h>

int        main(void)
{
    char    str[] = "last element";

    t_list    *elem1;
    t_list    *elem2;
    t_list    *elem3;
    t_list    *elem4;
    t_list    *elem5;
    t_list    *elem6;
    t_list    *ret;
    
    if(!(elem1 = malloc(sizeof(t_list))))
        return (0);
    if(!(elem2 = malloc(sizeof(t_list))))
        return (0);
    if(!(elem3 = malloc(sizeof(t_list))))
        return (0);
    if(!(elem4 = malloc(sizeof(t_list))))
        return (0);
    if(!(elem5 = malloc(sizeof(t_list))))
        return (0);
    if(!(elem6 = malloc(sizeof(t_list))))
        return (0);

    elem1->next = elem2;
    elem2->next = elem3;
    elem3->next = elem4;
    elem4->next = elem5;
    elem5->next = elem6;
    elem6->next = NULL;

    elem6->content = (void *)str;
    ret = ft_lstlast(elem1);
    printf("\n%s\n", (char *)ret->content);
	// you should print the string "last element".
}
