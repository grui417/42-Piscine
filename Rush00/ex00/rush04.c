/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42port...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 10:39:30 by grui-ant          #+#    #+#             */
/*   Updated: 2025/02/22 17:55:37 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_corner(int i, int j, int x, int y);

void	print_border(int i, int j, int x, int y);

void	print_corner(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
		ft_putchar('A');
	else if (i == x - 1 && j == 0)
	{
		ft_putchar('C');
	}
	else if (i == 0 && j == y - 1)
	{
		ft_putchar('C');
	}
	else if (i == x - 1 && j == y - 1)
		ft_putchar('A');
}

void	print_border(int i, int j, int x, int y)
{
	if (j == 0 || j == y - 1)
	{
		ft_putchar('B');
	}
	else if (i == 0 || i == x - 1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	j;
	int	i;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ((i == 0 || i == x - 1) && (j == 0 || j == y - 1))
			{
				print_corner(i, j, x, y);
			}
			else
			{
				print_border(i, j, x, y);
			}
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
