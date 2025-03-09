/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42port...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 10:54:27 by grui-ant          #+#    #+#             */
/*   Updated: 2025/02/27 10:47:41 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	valueholder;

	valueholder = *a;
	*a = *b;
	*b = valueholder;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 20;
	printf ("%d\n", a);
	printf ("%d\n", b);
	ft_swap(&a, &b);
	printf ("%d\n", a);
	printf ("%d\n", b);
}
*/
