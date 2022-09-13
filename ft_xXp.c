/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_xXp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <salmazro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:54:03 by salmazro          #+#    #+#             */
/*   Updated: 2022/05/23 21:34:30 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long long n, char c, t_list *plist)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	if (n > 15)
		ft_puthex(n / 16, c, plist);
	ft_putchar(hex[n % 16], plist);
}

void	ft_putptr(unsigned long long n, char c, t_list *plist)
{
	char	*hex;

	if (!n)
	{
		write(1, "0x0", 3);
		plist->len += 3;
		plist->i++;
	}
	else
	{
		write(1, "0x", 2);
		plist->len += 2;
		plist->i++;
		hex = "0123456789abcdef";
		if (c == 'X')
			hex = "0123456789ABCDEF";
		if (n > 15)
			ft_puthex(n / 16, c, plist);
		ft_putchar(hex[n % 16], plist);
	}
}
