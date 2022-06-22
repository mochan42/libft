//
//  main_ft_lstsize.c
//  Libft
//
//  Created by Monine CHAN on 07/08/2021.
//

#include "libft.h"
#include <stdio.h>

int ft_lstsize(t_list *lst);

int main()
{
    t_list  *n1, *n2, *n3, *n4;
    t_list  *head;
    
    if(!(n1 = malloc(sizeof(t_list))))
        return (0);
    if(!(n2 = malloc(sizeof(t_list))))
        return (0);
    if(!(n3 = malloc(sizeof(t_list))))
        return (0);
    if(!(n4 = malloc(sizeof(t_list))))
        return (0);
    if(!(head = malloc(sizeof(t_list))))
        return (0);
    
    char str1[]="42";
    char str2[]=" ";
    char str3[]="Wolfsburg";
    char str4[]="Next Generation Education";
    int res;
    
    n1->content = (void *)str1;
    n2->content = (void *)str2;
    n3->content = (void *)str3;
    n4->content = (void *)str4;
    
    head->next = n1;
    n4->next = NULL;
    n3->next = n4;
    n2->next = n3;
    n1->next = n2;
    
    res = ft_lstsize(head);
    printf("%d\n", res);
    
    return (0);
}
