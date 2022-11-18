/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexam.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:21:27 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/17 23:56:59 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexam(unsigned int n)
{
	char		*b;
	int			l;
	
	b = "0123456789abcdef";
	l = 0;
	if (n >= 16)
		l += ft_hexam(n / 16);
	l += ft_putchar(b[n % 16]);
	//printf ("%d\n", l);
	// return (lent(b[n % 16]));
	return (l);
}
// int main()
// {
// 	printf("%d\n",ft_hexam(160));
// }