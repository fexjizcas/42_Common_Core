/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fejimene <fejimene@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:39:02 by fejimene          #+#    #+#             */
/*   Updated: 2026/10/12 11:39:04 by fejimene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*ft_read(int fd, char *buffer);
char	*ft_line(char *buffer);
char	*ft_clean(char *buffer, char *line);
char	*ft_free_and_null(char *res, char *buffer);

char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(const char *str, int a);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);

#endif