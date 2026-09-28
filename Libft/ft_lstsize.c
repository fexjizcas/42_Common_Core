/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 10:19:28 by fejimene          #+#    #+#             */
/*   Updated: 2026/09/28 11:41:06 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}
/*
int main(void)
{
    t_list *lista = ft_lstnew("1");
    lista -> next = ft_lstnew("2");
    lista -> next -> next = ft_lstnew("3");
    
    printf("Tamaño de la lista: %u\n", ft_lstsize(lista));
    free(lista->next->next);
    free(lista->next);
    free(lista);
    return (0);
}
*/
