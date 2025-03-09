/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 13:50:37 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/06 14:41:26 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	comp1;
	int	comp2;

	comp1 = 0;
	if (to_find[comp1] == '\0')
	{
		return (str);
	}
	while (str[comp1] != '\0')
	{
		comp2 = 0;
		while (str[comp1 + comp2] == to_find[comp2] && to_find[comp2] != '\0')
		{
			if (to_find[comp2 + 1] == '\0')
			{
				return (str + comp1);
			}
			comp2++;
		}
		comp1++;
	}
	return (0);
}

/*int	main(void)
{
	char string[] = "corambolas";
	char to_find[] = "ola";
	char *result;

	result = ft_strstr(string, to_find);
	printf("%s\n", result);
}
*/
