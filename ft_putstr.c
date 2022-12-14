/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:20:48 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/17 22:03:33 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int				i;

i = 0;
	if (!s)
	{	
		write(1,"(null)",6);
		return(6);
	}
	else
		write(1, s, ft_strlen(s));
	return(ft_strlen(s));
	
}

/*int main()
{
	int i=0;
	char s[] = "";
	ft_putstr(NULL,i);
}*/