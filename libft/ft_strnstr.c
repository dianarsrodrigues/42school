/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:16:18 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/07 15:54:15 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/*#include <bsd/string.h>*/
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] == big[j + i] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}

/*int		main()
{
	char big[] = "Ola, quem mesmo fala? Não seai. Quem não mesmo sei. Não sei mesmo.";
	char little[] = "seai";

	char c[] = "Ola, quem mesmo fala? Não seai. Quem não mesmo sei. Não sei mesmo.";
	char d[] = "seai";

	printf("\n%s", strnstr(big, little, 1));
	printf("\n%s\n", ft_strnstr(c, d, 1));

	printf("\n%s", strnstr(big, little, -100));
	printf("\n%s\n", ft_strnstr(c, d, -100));

	printf("\n%s", strnstr(big, little, 0));
	printf("\n%s\n", ft_strnstr(c, d, 0));

	printf("\n%s", strnstr(big, little, -2));
	printf("\n%s\n", ft_strnstr(c, d, -2));

	printf("\n%s", strnstr(big, little, 10));
	printf("\n%s\n", ft_strnstr(c, d, 10));

	printf("\n%s", strnstr(big, little, 11));
	printf("\n%s\n", ft_strnstr(c, d, 11));

	printf("\n%s", strnstr(big, little, 12));
	printf("\n%s\n", ft_strnstr(c, d, 12));

	printf("\n%s", strnstr(big, little, 13));
	printf("\n%s\n", ft_strnstr(c, d, 13));

	printf("\n%s", strnstr(big, little, 14));
	printf("\n%s\n", ft_strnstr(c, d, 14));

	printf("\n%s", strnstr(big, little, 15));
	printf("\n%s\n", ft_strnstr(c, d, 15));

	printf("\n%s", strnstr(big, little, 100));
	printf("\n%s\n", ft_strnstr(c, d, 100));

	return (0);
}*/
