/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42port...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 13:49:31 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/03 10:12:25 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'A' && str[c] <= 'Z')
		{
			str[c] = str[c] + 32;
		}
		c++;
	}
	return (str);
}

/*int	main(void)
{
	char	string1[] = "furegkgGHkajdhhg";
	char	string2[] = "fghd6782fg";
	char	string3[] = "";
	
	printf("%s\n", ft_strlowcase(string1));
}
*/
