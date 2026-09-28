/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 10:54:41 by fejimene          #+#    #+#             */
/*   Updated: 2026/09/28 11:36:53 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del)
		(del)(lst->content);
	free(lst);
}
/*
int	main(void)
{
    char *texto = malloc(10); 
    t_list *nodo = ft_lstnew(texto);
    
    ft_lstdelone(nodo, free);
    printf("Nodo y su contenido borrados.\n");
    return (0);
}
*/
