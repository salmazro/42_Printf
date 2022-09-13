/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <salmazro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:54:31 by salmazro          #+#    #+#             */
/*   Updated: 2022/06/08 19:14:26 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, t_list *plist)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		plist->len += 11;
		return ;
	}
	else if (n < 0)
	{
		ft_putchar('-', plist);
		n *= -1;
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar(n + 48, plist);
		return ;
	}
	else
	{
		ft_putnbr(n / 10, plist);
		ft_putnbr(n % 10, plist);
	}
}

void	ft_putunsigned(unsigned n, t_list *plist)
{
	if (n >= 0 && n <= 9)
	{
		ft_pchar(n + 48, plist);
		return ;
	}
	else
	{
		ft_putnbr(n / 10, plist);
		ft_putnbr(n % 10, plist);
		plist->i++;
	}
}
