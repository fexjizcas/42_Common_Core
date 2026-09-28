/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 11:06:58 by fejimene          #+#    #+#             */
/*   Updated: 2026/09/28 11:39:27 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f || !lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	sumar(void *content)
{
	int	*num = (int *)content;
	*num = *num + 1;
}

int main(void)
{
    int	n1 = 10;
	int	n2 = 20;

	t_list *lista = ft_lstnew(&n1);
    ft_lstadd_back(&lista, ft_lstnew(&n2));
    ft_lstiter(lista, sumar);
    printf("Primero: %d\n", *(int *)lista -> content);
	printf("Segundo: %d\n", *(int *)lista -> next -> content);
    return (0);
}
*/
