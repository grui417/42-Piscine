/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:00:43 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/06 11:25:39 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	comp1;
	unsigned int	comp2;

	comp1 = 0;
	comp2 = 0;
	while (dest[comp1] != '\0')
	{
		comp1++;
	}
	while (src[comp2] != '\0' && comp2 < nb)
	{
		dest[comp1] = src[comp2];
		comp1++;
		comp2++;
	}
	dest[comp1] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char destination[] = "Ola";
	char source[] = "Adeus";

	ft_strncat(destination, source, 3);
	write (1, &destination, 10);
}
*/
