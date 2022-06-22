///* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochan <mochan@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 04/09/2021 11:48 by mochan               #+#    #+#             */
/*   Updated: 04/09/2021 11:48 by mochan              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "libft.h"
#include <stdio.h>

void	ft_lstprint(t_list *head);

static void			ft_print_result(char *content)
{
	int		len;

	len = 0;
	while (content[len])
		len++;
	write(1, content, len);
}

static int	nb_free_done;

static void		ft_del(void *content)
{
	free(content);
	nb_free_done++;
}

static t_list		*get_lst_new_elem(void *content)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	elem->content = content;
	elem->next = NULL;
	return (elem);
}

static void			free_memory_and_return(char **tab, int i)
{
	while (i >= 0)
	{
		free(tab[i]);
		i--;
	}
	free(tab);
}

static void			free_memory_lst_and_return(t_list *elem)
{
	t_list		*tmp;

	while (elem)
	{
		tmp = elem->next;
		free(elem);
		elem = tmp;
	}
}

static char			**get_content_lst(int size)
{
	char	**tab;
	int		i;
	char	str [] = "abcdef";

	if (!(tab = (char **)malloc(sizeof(*tab) * size + 1)))
		return (0);
	tab[size] = NULL;
	i = 0;
	while (i < size)
	{
		str[0] += i % 25;
		if (!(tab[i] = strdup(str)))
		{
			free_memory_and_return(tab, i - 1);
			return (NULL);
		}
		i++;
	}
	return (tab);
}

static t_list		*get_elem_lst(t_list *begin, char **tab, int i)
{
	t_list		*elem;

	if (!(elem = get_lst_new_elem(tab[i])))
	{
		free_memory_lst_and_return(begin);
		free_memory_and_return(tab, 4);
		return (NULL);
	}
	return (elem);
}

static void			check_lstdelone(t_list *elem)
{
	if (elem)
		ft_print_result((char *)elem->content);
	else
		ft_print_result("NULL");
	write(1, "\n", 1);

}

int					 main(int argc, const char *argv[])
{
	t_list		*elem;
	t_list		*elem2;
	t_list		*elem3;
	t_list		*elem4;
	char		**tab;
	
	printf("argc (number of arguments) = %d\n", argc);
	printf("What is inside the argument(s) argv[] ?\n");
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	
	if (argc == 1 || (!(tab = get_content_lst(4))))
		return (0);
	elem = NULL;
	if (!(elem = get_elem_lst(elem, tab, 0)))
		return (0);
	if (!(elem2 = get_elem_lst(elem, tab, 1)))
		return (0);
	elem->next = elem2;
	if (!(elem3 = get_elem_lst(elem, tab, 2)))
		return (0);
	elem2->next = elem3;
	if (!(elem4 = get_elem_lst(elem, tab, 3)))
		return (0);
	elem3->next = elem4;
	nb_free_done = 0;
	

	if (atoi(argv[1]) == 1)
	{
		printf("\nLinked list before ft_lstdelone : \n");
		ft_lstprint(elem);
		ft_lstdelone(elem3, &ft_del);
		printf("Linked list after ft_lstdelone : \n");
		ft_lstprint(elem);
		printf("\n");
		elem3 = NULL;
		elem2->next = NULL;
		nb_free_done += '0';
		free(tab[3]);
		free_memory_and_return(tab, 1);
		free(elem4);
	}
	else
		free_memory_and_return(tab, 4);
	free_memory_lst_and_return(elem);
	return (0);
}

