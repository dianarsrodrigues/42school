/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:47:53 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/08 21:49:16 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	i;

	if (!str || !set)
		return (0);
	while (*str && ft_strchr(set, *str))
		str++;
	i = ft_strlen(str);
	while (i && ft_strchr(set, str[i]))
		i--;
	return (ft_substr(str, 0, i + 1));
}

/*int		main(void)
{
	char *str = "Diana Raquel Rodrigues";
	char *tirar = "Rodrigues";
	char *here;

	here = ft_strtrim(str, tirar);
	here2 = strtok(str2, tirar2);
	printf("%s\n", str);
	printf("%s", here);
	
}*/
