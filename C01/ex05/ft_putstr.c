/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42port...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:13:44 by grui-ant          #+#    #+#             */
/*   Updated: 2025/02/27 10:55:42 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	comparator;

	comparator = 0;
	while (str[comparator])
	{
		write (1, &str[comparator], 1);
		comparator++;
	}
}

/*int	main(void)
{
	char	string[] = "Wassup LMAO";
	ft_putstr(string);
}
*/
