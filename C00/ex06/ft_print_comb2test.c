/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:59:44 by grui-ant          #+#    #+#             */
/*   Updated: 2025/02/24 12:43:57 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;
	int	n3;
	int n4;

	while ((n1 <= 9) && (n2 <= 9) && (n3 <= 9) && (n4 <= 9))
	{
		if (n1 == 9 && n2 == 8 && n3 == 9 && n4 == 9)
		{
			write (1, &n1, 1);
			write (1, &n2, 1);
			write (1, ", ", 2);
			write (1, &n3, 1);
			write (1, &n4, 1);
			write (1, 0, 1);
		}
		else
		{
			write (1, &n1, 1);
			write (1, &n2, 1);
			write (1, ", ", 2);
			write (1, &n3, 1);
			write (1, &n4, 1);
			write (1, ", ", 2);
		}

		n1 = '0';
		while (n1 <= 9)
		{
			n2 = '0';
			while
		}
	}
}


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
