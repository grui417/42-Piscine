/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:59:44 by grui-ant          #+#    #+#             */
/*   Updated: 2025/02/22 19:54:59 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;
	int	n3;
	int n4;

	n1 = 0;
	n2 = 0;
	n3 = 0;
	n4 = 1;

	while ((n1 <= 9) && (n2 <= 9) && (n3 <= 9) && (n4 <= 9))
	{
		if (n4 == 9)
		{
			n3++;
			n4 = 0;
		}
		else
		{
			n4++;
		}
		if (n3 == 9)
		{
			n2++;
		}
	}
	
	if (n4 == 9)
	{
		n3++;
		n4 = 0;
	}

	if (n3 == 9)






	
	if (n3 == 9)
	
	while (n1 <= 7 && n2 <= 8 && n3 <= 9)
	{
		write (1, &n1, 3);
		write (1, &n2, 3);
		write (1, &n3, 3);

		n1++;
		n2++;
		n3++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return(0);
}
