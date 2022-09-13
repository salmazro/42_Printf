/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <salmazro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 20:04:44 by salmazro          #+#    #+#             */
/*   Updated: 2022/06/08 19:10:32 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_getspecifier(const char *input, t_list *plist)
{
	if (input[plist->i] == '%')
		plist->i++;
	if (ft_strchr("cspdiuxX%", input[plist->i]) != 0)
		return (input[plist->i]);
	return (0);
}

void	ft_printspecifier(const char *input, t_list *plist)
{
	char	specifier;

	specifier = ft_getspecifier(input, plist);
	if (specifier == 'c')
		ft_pchar(va_arg(plist->arg, int), plist);
	else if (specifier == 's')
		ft_putstr(va_arg(plist->arg, char *), plist);
	else if (specifier == '%')
		ft_putpercent(plist);
	else if (specifier == 'd' || specifier == 'i')
	{
		ft_putnbr(va_arg(plist->arg, int), plist);
		plist->i++;
	}
	else if (specifier == 'u')
		ft_putunsigned(va_arg(plist->arg, unsigned long), plist);
	else if (specifier == 'x' || specifier == 'X')
	{
		ft_puthex(va_arg(plist->arg, unsigned int), specifier, plist);
		plist->i++;
	}
	else if (specifier == 'p')
		ft_putptr(va_arg(plist->arg, unsigned long long int), specifier, plist);
}

int	ft_printf(const char *input, ...)
{
	t_list	plist;

	plist.len = 0;
	plist.i = 0;
	va_start(plist.arg, input);
	while (input[plist.i] != 0)
	{
		if (input[plist.i] == '%')
		{
			ft_printspecifier(input, &plist);
		}
		else
		{
			write(1, &input[plist.i], 1);
			plist.i++;
			plist.len++;
		}
	}
	va_end(plist.arg);
	return (plist.len);
}
