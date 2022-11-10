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
#include <stdio.h>

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	if (str && set)
	{
		start = 0;
		end = ft_strlen(str);
		while (str[start] && ft_strchr(set, str[start]))
			start++;
		while (str[end - 1] && ft_strchr(set, str[end - 1]) && end > start)
			end--;
		trim = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!trim)
			return (NULL);
		ft_strlcpy(trim, &str[start], end - start + 1);
		return (trim);
	}
	return (NULL);
}

/*int		main(void)
{
	char *str = "Diana Rodrigues";
	char *tirar = "ana";
	char *here;

	here = ft_strtrim(str, tirar);
	printf("%s\n", str);
	printf("%s", here);
}*/
