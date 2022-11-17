/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:31:53 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/17 22:52:34 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

char	*get_line(char *src, int fd)
{
	char	*buffer;
	int		size;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	size = 1;
	while (!ft_strchr(src, '\n') && size != 0)
	{
		size = read(fd, buffer, BUFFER_SIZE);
		if (size == -1)
		{
			free(buffer);
			return (NULL);
		}
		buffer[size] = '\0';
		src = ft_strjoin(src, buffer);
	}
	free(buffer);
	return (src);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*next_line[4096];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	next_line[fd] = get_line(next_line[fd], fd);
	if (!next_line[fd])
		return (NULL);
	line = ft_read_line(next_line[fd]);
	next_line[fd] = ft_save(next_line[fd]);
	return (line);
}

/*int    main(void)
{
    char	*line;
	int		i;
	int		fd1;
	int		fd2;
	int		fd3;
	
	fd1 = open("texto.txt", O_RDONLY);
	fd2 = open("texto2.txt", O_RDONLY);
	fd3 = open("texto3.txt", O_RDONLY);
	i = 1;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd2);
		printf("line [%02d]: %s", i, line);
		free(line);
		line = get_next_line(fd3);
		printf("line [%02d]: %s", i, line);
		free(line);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}*/