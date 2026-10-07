/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 11:48:24 by fejimene          #+#    #+#             */
/*   Updated: 2026/10/06 11:50:50 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read(int fd, char *buffer)
{
	char	*res;
	int		byte_read;

	res = malloc(sizeof (char) * BUFFER_SIZE + 1);
	if (res == NULL)
		return (NULL);
	byte_read = 1;
	while (!ft_strchr(buffer, '\n') && bytes_read != 0)
	{
		byte_read = read (fd, res, BUFFER_SIZE);
		if (byte_read == -1)
		{
			free (res);
			return (NULL);
		}
		res[byte_read] = '\0';
		buffer = ft_strjoin(buffer, res);
	}
	free (res);
	return (buffer);
}

char	*ft_line(char *buffer)
{

}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = ft_read(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_line(buffer);
	return (line);
}
