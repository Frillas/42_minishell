/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:41:11 by aroullea          #+#    #+#             */
/*   Updated: 2025/04/18 15:58:32 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_big_buf(int fd, char *buffer, char *rem);
char	*check_buf_size(int fd, char *remaining);
char	*ft_add_line(char *line);
char	*ft_strchr(const char *s, int c);
char	*strings_join(char *s1, char const *s2, size_t k, size_t l);
size_t	ft_strlen(const char *s);
char	*ft_add_remain(char *remain);
void	ft_cpy(size_t size, char *new_rem, char *end);
char	*ft_small_buf(int fd, char *rem, int nb);

#endif
