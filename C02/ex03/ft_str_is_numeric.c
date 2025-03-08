/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42port...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:49:31 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/02 16:34:20 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	comparator;

	comparator = 0;
	if (str[comparator] == 0)
	{
		return (1);
	}
	while (str[comparator] != '\0')
	{
		if (str[comparator] < 48 || str[comparator] > 57)
		{
			return (0);
		}
		comparator++;
	}
	return (1);
}

/*int	main(void)
{
	char	*string1 = "264826749";
	char	*string2 = "54fghd6782fg";
	char	*string3 = "";
	
	printf("%d\n", ft_str_is_numeric(string1));
}
*/
