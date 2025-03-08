/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42port...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:49:31 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/02 16:33:53 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	if (str[c] == 0)
	{
		return (1);
	}
	while (str[c] != '\0')
	{
		if (str[c] < 32 || str[c] > 126)
		{
			return (0);
		}
		c++;
	}
	return (1);
}

/*int	main(void)
{
	char	*string1 = "\n";
	char	*string2 = "fghd6782fg";
	char	*string3 = "";
	
	printf("%d\n", ft_str_is_printable(string3));
}
*/
