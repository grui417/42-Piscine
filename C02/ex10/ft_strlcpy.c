/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42port...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:24:12 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/03 15:21:07 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	comparator;

	comparator = 0;
	while (comparator < size && src[comparator] != '\0')
	{
		dest[comparator] = src[comparator];
		comparator++;
	}
	while (comparator < size)
	{
		dest[comparator] = '\0';
		comparator++;
	}
	return (comparator);
}

int	main(void)
{
	char *receiver = "";
	char *donor = "testing dawg";
	char number = '4';

	printf("%s\n", receiver);
	printf("%s\n", donor);
	ft_strlcpy(receiver, donor, number);
	printf("%s\n", receiver);
	printf("%s\n", donor);
}
