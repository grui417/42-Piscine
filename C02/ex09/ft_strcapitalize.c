/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42port...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:49:31 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/03 14:33:10 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	c;

	c = 0;
	if (str[c] >= 'a' && str[c] <= 'z')
	{
		str[c] = str[c] - 32;
	}
	c++;
	while (str[c])
	{
		if ((str[c - 1] < 47) && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] = str[c] - 32;
		}
		c++;
	}
	return (str);
}

/*int	main(void)
{
	char string[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s", ft_strcapitalize(string));
}
*/
