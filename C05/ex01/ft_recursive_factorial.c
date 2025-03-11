/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:21:24 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/09 13:41:45 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
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
	return (result * ft_recursive_factorial(nb - 1));
}

/*int	main(void)
{
	int	number;

	number = 12;
	printf("%d\n", ft_recursive_factorial(number));
}
*/
