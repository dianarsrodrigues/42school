/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_swap_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:01:01 by diarodri          #+#    #+#             */
/*   Updated: 2023/01/03 15:01:03 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) + (octet << 4));
}

int main ()
{
	printf("%d", swap_bits(12));
	return (0);
}

