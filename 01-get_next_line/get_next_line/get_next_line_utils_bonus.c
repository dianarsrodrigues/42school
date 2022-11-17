/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:32:35 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/17 21:51:00 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *str)
{
	size_t	a;

	a = 0;
	if (!str)
		return (0);
	while (str[a] != '\0')
		a++;
	return (a);
}

/* aponta em uma string a ultima ocorrencia de um caracter */
char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

/* concatena duas strings */
char	*ft_strjoin(char *src, char *buffer)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (!src)
	{
		src = (char *)malloc(1 * sizeof(char));
		src[0] = '\0';
	}
	if (!src || !buffer)
		return (NULL);
	str = (char *)malloc(sizeof(char) * ((ft_strlen(src) + ft_strlen(buffer)) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	while (buffer[j] != '\0')
		str[i++] = buffer[j++];
	str[ft_strlen(src) + ft_strlen(buffer)] = '\0';
	free(src);
	return (str);
}

/*	retornar a linha que esta sendo "lida" neste momento */
char	*ft_read_line(char *src)
{
	size_t	i;
	char	*str;

	i = 0;
/*	procurar pelo caractere nulo '\0' ou quebra de linha '\n' */
	if (src[i] == '\0')
		return (NULL);	
	while (src[i] != '\0' && src[i] != '\n')
		i++;
/*	alocar memoria suficiente em nossa nova string */
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
	{
		free(str);
		return (NULL);
	}
	i = 0;
/*	copiar caractere por caractere de nosso source para nossa nova string */
	while (src[i] != '\0' && src[i] != '\n')
	{
		str[i] = src[i];
		i++;
	}
/*	caso nossa string tenha sido copiada ate a quebra de linha, temos que obritoriamente printar uma quebra de linha */
	if (src[i] == '\n')
	{
		str[i] = '\n';
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*	"salvar" em um ponteiro estatico o restante do conteudo de nosso fd */
char	*ft_save(char *src)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
/*	procurar pelo caractere nulo '\0' ou quebra de linha '\n' */
	while (src[i] && src[i] != '\n')
		i++;
/*	caso nossa string tenha sido copiada ate a quebra de linha, iremos fazer nossa alocacao de memoria */
	if (!src[i])
	{
		free(src);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(src) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
/*	copiar caractere por caractere de nosso source para nossa nova string */
	while (src[i])
		str[j++] = src[i++];
	str[j] = '\0';
	free(src);
	return (str);
}
