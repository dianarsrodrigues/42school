/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:12:53 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/05 18:44:50 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ini;

	ini = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *ini && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}

/*int main (void) 
{
   int len;
   const char str[] = "Dia.na .Rodri.gues";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after last %c is - %s\n", ch, ret);
   return(0);
}*/