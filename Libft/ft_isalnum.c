/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 11:41:23 by fejimene          #+#    #+#             */
/*   Updated: 2026/09/21 13:01:38 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Checks if a character is a letter or a number.
It uses ft_isalpha and ft_isdigit to check.
Returns 1 if true, 0 if false.
*/

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int main(void) {
    printf(ft_isalnum('A'));
    printf(ft_isalnum('-'));
    return (0);
}
*/