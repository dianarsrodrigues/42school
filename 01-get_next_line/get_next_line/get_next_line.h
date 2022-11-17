/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:31:23 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/17 15:06:14 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>

char    *get_next_line(int fd);
char	*get_line(char *src, int fd);

char	*ft_strjoin(char *src, char *buffer);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *str);

char	*ft_read_line(char *src);
char	*ft_save(char *src);

#endif