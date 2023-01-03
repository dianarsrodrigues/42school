/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 13:16:09 by diarodri          #+#    #+#             */
/*   Updated: 2023/01/03 13:16:10 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int n = 8;
	unsigned char bit;
	
	while (n--)
	{
		bit = (octet >> n & 1) + 48;
		write(1, &bit, 1);
	}
}

int main()
{
	print_bits(3);
	return(0);
}
