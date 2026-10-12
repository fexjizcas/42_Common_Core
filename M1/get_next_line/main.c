/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 10:04:24 by fejimene          #+#    #+#             */
/*   Updated: 2026/10/12 10:05:14 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	char	*line;

	while ((line = get_next_line(0)) != NULL)
	{
		printf ("%s", line);
		free (line);
	}
	return (0);
}
