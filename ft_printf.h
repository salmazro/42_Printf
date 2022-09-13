/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <salmazro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 11:54:31 by salmazro          #+#    #+#             */
/*   Updated: 2022/05/23 21:46:47 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	va_list	arg;
	int		i;
	int		len;
}	t_list;

int		ft_printf(const char *input, ...);
void	ft_pchar(char c, t_list *plist);
void	ft_putstr(char *s, t_list *plist);
void	ft_putpercent(t_list *plist);
void	ft_putnbr(int n, t_list *plist);
void	ft_putunsigned(unsigned n, t_list *plist);
void	ft_puthex(unsigned long long n, char c, t_list *plist);
void	ft_putptr(unsigned long long n, char c, t_list *plist);
void	ft_putchar(char c, t_list *plist);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *str);

#endif
