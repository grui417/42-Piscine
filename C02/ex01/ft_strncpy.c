/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42port...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:57:35 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/02 15:13:17 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	comparator;

	comparator = 0;
	while (comparator < n && src[comparator] != '\0')
	{
		dest[comparator] = src[comparator];
		comparator++;
	}
	while (comparator < n)
	{
		dest[comparator] = '\0';
		comparator++;
	}
	return (dest);
}

/*int	main(void)
{
	char receiver[] = "";
	char donor[] = "firstprint";
	int number = 5;
	
	write(1, &receiver, 1);
	write(1, "\n", 1);
	ft_strncpy(receiver, donor, number);
	write(1, &receiver, 10);
	return (0);
}
*/
