/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:51:43 by fejimene          #+#    #+#             */
/*   Updated: 2026/09/22 09:57:20 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Converts a lowercase letter to an uppercase letter.
If the character is between 'a' and 'z', it subtracts 32 from its ASCII value.
*/

int	ft_toupper(int n)
{
	if (n >= 97 && n <= 122)
	{
		n = n - 32;
	}
	return (n);
}
/*
int main(void) {
    printf(ft_toupper('m'));
    return (0);
}
*/