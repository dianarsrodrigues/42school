/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:45:04 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/08 00:11:34 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	size_t	i;
	size_t	j;
	char	*tab;

	if (str1 == (void *)0 || str2 == (void *)0)
		return (NULL);
	i = ft_strlen(str1) + ft_strlen(str2);
	tab = (char *)malloc(sizeof(char) * (i + 1));
	if (tab == (void *)0)
		return (NULL);
	i = 0;
	while (str1[i] != '\0')
	{
		tab[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j] != '\0')
	{
		tab[i + j] = str2[j];
		j++;
	}
	tab[i + j] = '\0';
	return (tab);
}

/*int		main(void)
{
	char *str1 = "diana";
	char *str2 = "rodrigues";
	char *str3;

	printf("%s\n%s\n", str1, str2);

	str3 = ft_strjoin(str1, str2);

	printf("%s", str3);
	return (0);
}*/
