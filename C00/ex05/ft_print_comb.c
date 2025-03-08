/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:59:44 by grui-ant          #+#    #+#             */
/*   Updated: 2025/02/24 12:16:59 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int n1)
{
	write (1, &n1, 1);
}

void	ft_if_cond(int n1, int n2, int n3)
{
	if (n1 == 55 && n2 == 56 && n3 == 57)
	{
		ft_putchar(n1);
		ft_putchar(n2);
		ft_putchar(n3);
		write (1, 0, 1);
	}
	else
	{
		ft_putchar(n1);
		ft_putchar(n2);
		ft_putchar(n3);
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 48;
	while (n1 <= 55)
	{
		n2 = n1 + 1;
		while (n2 <= 56)
		{
			n3 = n2 + 1;
			while (n3 <= 57)
			{
				ft_if_cond(n1, n2, n3);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}
