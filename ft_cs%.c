/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cs%.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <salmazro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:54:31 by salmazro          #+#    #+#             */
/*   Updated: 2022/06/07 18:22:34 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pchar(char c, t_list *plist)
{
	ft_putchar(c, plist);
	plist->i++;
}

void	ft_putstr(char *s, t_list *plist)
{
	int	j;

	if (s == NULL)
	{
		write (1, "(null)", 6);
		plist->len += 6;
		plist->i++;
	}
	else
	{
		j = ft_strlen(s);
		write (1, s, j);
		plist->len += j;
		plist->i++;
	}
}

void	ft_putpercent(t_list *plist)
{
	ft_putchar('%', plist);
	plist->i++;
}
