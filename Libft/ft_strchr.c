/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:55:38 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/07 15:54:15 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
  while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}

/*int main (void) 
{
   const char str[] = "Diana .Rodrigues";
   const char ch = '.';

   printf("String after %c is - %s\n", ch, ft_strchr(str, ch));
   return(0);
}*/