/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:30:45 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/17 22:43:21 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

/*	localizar a linha que deverá ser lida em nosso fd */
char	*get_line(char *src, int fd)
{
	char	*buffer;
	int		size;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	size = 1;
/*	enquanto procuramos nosso caractere '\n' */
	while (!ft_strchr(src, '\n') && size != 0)
	{
/*	verificar os bytes lidos e, caso não tenha ocorrido nenhum erro, salvar a quantidade de bytes lidos */
		size = read(fd, buffer, BUFFER_SIZE);
		if (size == -1)
		{
			free(buffer);
			return (NULL);
		}
/*	adicionar um caractere nulo a ultima posicao armazenada em nosso buffer */
		buffer[size] = '\0';
/*	concatenar nossas string */
		src = ft_strjoin(src, buffer);
	}
	free(buffer);
	return (src);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*next_line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
/*	ler nossa linha em busca do caractere '\n' ou de qualquer erro*/
	next_line = get_line(next_line, fd);
	if (!next_line)
		return (NULL);
/*	retornar a linha que foi "lida" */
	line = ft_read_line(next_line);
/*	salvar todo conteudo que ainda nao foi lido de nosso fd */
	next_line = ft_save(next_line);
/*	retornar nossa linha que foi "lida" */
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
	i = 0;
	while (i < 7)
	{
		line = get_next_line(fd1);
		printf("line [%02d]: %s %d", i, line, fd1);
		free(line);
		line = get_next_line(fd2);
		printf("line [%02d]: %s %d", i, line, fd2);
		free(line);
		line = get_next_line(fd3);
		printf("line [%02d]: %s %d", i, line, fd3);
		free(line);
		i++;
	}
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}*/