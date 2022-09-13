/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: salmazro <salmazro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 18:53:29 by salmazro          #+#    #+#             */
/*   Updated: 2022/06/09 18:48:48 by salmazro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	main(void)
{
	int	a;
	int	b;

	a = printf("%c and %d and %s %m", 'A', 0, "ogPrintf");
	printf("%c", '\n');
	b = ft_printf("%c and %d and %s %m", 'B', 0, "myPrintf");
	printf("%c", '\n');
	printf("%d and %d", a, b);
	return (0);
}
