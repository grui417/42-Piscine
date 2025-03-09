/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42port...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:14:56 by grui-ant          #+#    #+#             */
/*   Updated: 2025/02/26 11:10:34 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	valueofa;

	valueofa = *a;
	*a = *a / *b;
	*b = valueofa % *b;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
}
*/
