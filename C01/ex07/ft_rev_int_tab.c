/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42port...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 14:17:31 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/01 15:27:38 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	valueholder;
	int	comparator;

	comparator = 0;
	while (comparator < size / 2)
	{
		valueholder = tab[comparator];
		tab[comparator] = tab[(size - comparator) - 1];
		tab[(size - comparator) - 1] = valueholder;
		comparator++;
	}
}

/*int	main(void)
{
	int	numb[] = {9, 5, 7, 6, 8, 4};
	int	size;
	int	comparator;

	size = sizeof(numb) / sizeof(numb[0]);
	comparator = 0;
	ft_rev_int_tab(numb, size);
	while (comparator < size)
	{
		printf ("%d", numb[comparator]);
		comparator++;
		if (comparator < size)
		{
			printf(", ");
		}
	}
	comparator = 0;
	return (0);
}
*/
