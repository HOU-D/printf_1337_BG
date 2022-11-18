/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoakoumi <hoakoumi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:02:54 by hoakoumi          #+#    #+#             */
/*   Updated: 2022/11/17 23:13:08 by hoakoumi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_putchar(char c);
int		ft_hexa(unsigned int n);
int		ft_hexam(unsigned int n);
int		ft_putnbr(int n);
size_t	ft_strlen(const char *s);
int		ft_unsig(unsigned	int n);
int		ft_putstr(char *s);
int		ft_putpoi(unsigned int n);
int		ft_printf(const char *format, ...);
char	*ft_strchr(const char *s, int c);
int	ft_point(unsigned long n);


#endif

