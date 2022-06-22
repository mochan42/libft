//
//  main_ft_lstadd_back.c
//  Libft
//
//  Created by Monine CHAN on 08/08/2021.
//

#include "libft.h"
#include <stdio.h>

void	ft_lstprint(t_list *head);

int    main()
{
    t_list   *toto = ft_lstnew("toto");
    t_list   *tata = ft_lstnew("tata");
    t_list   *titi = ft_lstnew("titi");
    t_list   *blabla = ft_lstnew("blabla");
    toto->next = tata;
    tata->next = titi;
	printf("Original list: ");
	ft_lstprint(toto);
    ft_lstadd_back(&toto,blabla);
	printf("Original list with added list in the back: ");
	ft_lstprint(toto);
	printf("\n");
    return (0);
}
