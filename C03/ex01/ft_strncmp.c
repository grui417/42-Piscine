/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 20:41:23 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/06 11:26:52 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n && s1[counter] != '\0' && s1[counter] == s2[counter])
	{
		counter++;
	}
	if (counter == n)
	{
		return (0);
	}
	return (s1[counter] - s2[counter]);
}

/*int	main(void)
{
	char	string1[] = "testers";
	char	string2[] = "testing";
	unsigned int n = 3;

	printf("%d", ft_strncmp(string1, string2, n));
	printf("%d", strncmp(string1, string2, n));
}
*/
