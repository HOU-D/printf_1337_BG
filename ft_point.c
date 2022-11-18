/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:08:37 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/17 23:43:08 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_point(unsigned long n)
{
	char		*b;
	int   		l;			
 	
	b = "0123456789abcdef";
	l = 0;
	if (n >= 16)
		l += ft_point(n / 16);
	l += ft_putchar(b[n % 16]);
	//printf ("%d\n", l);
	// return (lent(b[n % 16]));
	return (l);
}
/*int main()
{
	int a;
	ft_printf("%d\n",1554122);
	printf("%d",1554122);
	
}*/