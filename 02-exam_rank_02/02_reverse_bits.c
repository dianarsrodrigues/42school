/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_reverse_bits.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:53:23 by diarodri          #+#    #+#             */
/*   Updated: 2023/01/03 13:53:24 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char bit;
	int n = 8;
	
	while (n > 0)
	{
		bit = bit * 2 + (octet % 2);
		octet = octet / 2;
		n--;
	}
	return (bit);
}

int main ()
{
	printf("%d", reverse_bits(38));
	return (0);
}
