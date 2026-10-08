/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 13:47:32 by fejimene          #+#    #+#             */
/*   Updated: 2026/10/07 13:47:37 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

char	*get_next_line(int fd);
char	*ft_read(int fd, char *buffer);
char	*ft_clean(char *buffer, char *line);

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int a);
size_t	ft_strlen(const char *str);