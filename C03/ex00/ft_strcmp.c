/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 15:25:37 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/05 10:09:32 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] != 0)
	{
		if (s1[counter] == s2[counter])
		{
			counter++;
		}
		else
		{
			return (s1[counter] - s2[counter]);
		}
	}
	return (s1[counter] - s2[counter]);
}

/*int	main(void)
{
	char	string1[] = "testers";
	char	string2[] = "testing";

	printf("%d", ft_strcmp(string1, string2));

}
*/
