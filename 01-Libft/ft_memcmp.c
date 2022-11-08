/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:07:55 by diarodri          #+#    #+#             */
/*   Updated: 2022/11/07 15:54:15 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    unsigned char	*s1;
	unsigned char	*s2;

	if (n == 0)
		return (0);
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (*s1 == *s2 && n > 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

/*int main (void) 
{
   char str1[15] = "Daaaiana";
   char str2[15] = "Diana2";
   int ret;


   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }
   return(0);
}*/