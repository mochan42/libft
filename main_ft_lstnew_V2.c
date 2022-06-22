///* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstnew_V2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 03/09/2021 21:51 by mochan               #+#    #+#             */
/*   Updated: 03/09/2021 21:51 by mochan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstprint(t_list *head);

int	main()
{
	t_list *head;
	char test_first[2] = "1";
	char test_second[4] = "22";
	char test_third[6] = "333";
	char test_fourth[10] = "4444";
	char test_fith[10] = "55555";

	printf("Start Tests\n");
	printf("*****\n");
	printf("Testing ft_lstnew\n");
	t_list *test_lstfirst = ft_lstnew(test_first);
	t_list *test_lstsecond = ft_lstnew(test_second);
	t_list *test_lstthird = ft_lstnew(test_third);
	t_list *test_lstfourth = ft_lstnew(test_fourth);
	t_list *test_lstfith = ft_lstnew(test_fith);
	
	char test_sixth[12] = "666666";
	t_list *test_lstsixth = ft_lstnew(test_sixth);
	
	head = test_lstfirst;
	test_lstfirst->next = test_lstsecond;
	test_lstsecond->next = test_lstthird;
	test_lstthird->next = test_lstsixth;
	test_lstsixth->next = test_lstfourth;
	test_lstfourth->next = test_lstfith;
	test_lstfith->next = NULL;
	
	ft_lstprint(head);	
	return (0);
}
