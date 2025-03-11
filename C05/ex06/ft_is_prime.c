/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 10:40:40 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/10 13:18:05 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	comparator;

	comparator = 2;
	if (nb < comparator)
	{
		return (0);
	}
	while (comparator < nb)
	{
		if (nb % comparator == 0)
		{
			return (0);
		}
		comparator++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d\n", ft_is_prime(7));
}
*/
