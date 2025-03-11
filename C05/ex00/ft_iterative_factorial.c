/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:21:24 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/08 19:37:37 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	if (nb < 0)
	{
		return (0);
	}
	result = nb;
	if (nb > 1)
	{
		while (nb > 1)
		{
			result = result * (nb - 1);
			nb--;
		}
	}
	return (result);
}

/*int	main(void)
{
	int	number;

	number = 12;
	printf("%d\n", ft_iterative_factorial(number));
}
*/
