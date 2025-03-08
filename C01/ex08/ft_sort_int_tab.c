/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42port...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:21:41 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/01 15:48:26 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	valueholder;
	int	compa;
	int	compb;

	compa = 0;
	while (compa < size)
	{
		compb = compa + 1;
		while (compb < size)
		{
			if (tab[compa] > tab[compb])
			{
				valueholder = tab[compa];
				tab[compa] = tab[compb];
				tab[compb] = valueholder;
			}
			compb++;
		}
		compa++;
	}
}

/*int	main(void)
{
	int	numb[] = {7, 6, 2, 9, 4, 1};
	int size;
	int comparator;
	
	size = sizeof(numb) / sizeof(numb[0]);
	comparator = 0;
	while (comparator < size)
	{
		printf ("%d", numb[comparator]);
		comparator++;
	}
	comparator = 0;
	printf ("\n");
	ft_sort_int_tab (numb, size);
	while (comparator < size)
	{
		printf ("%d", numb[comparator]);
		comparator++;
	}
}
*/
