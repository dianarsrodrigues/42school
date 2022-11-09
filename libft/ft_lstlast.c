/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 21:08:54 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/08 21:08:55 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (NULL);
    last = lst;
    while(last->next != NULL)
    {
        last = last->next;
    }
	return (last);
}

/*int		main(void)
{
	t_list *head;
	t_list *dois;
	t_list *tres;
	t_list *quatro;
	t_list *last;

	head = ft_lstnew("UM");
	dois = ft_lstnew("DOIS");
	tres = ft_lstnew("TRES");
	quatro = ft_lstnew("QUATRO");

	head->next = dois;
	dois->next = tres;
	tres->next = quatro;

	printf("\nO ultimo t_list eh -- %s -- e tem pointer de %p \n", (char *)quatro->content, quatro->next);

	last = ft_lstlast(head);

	printf("O ultimo t_list eh -- %s -- e tem pointer de %p \n", (char *)last->content, last->next);
}*/