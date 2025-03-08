/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42port...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:57:35 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/02 15:06:15 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	comparator;

	comparator = 0;
	while (src[comparator] != '\0')
	{
		dest[comparator] = src[comparator];
		comparator++;
	}
	dest[comparator] = '\0';
	return (dest);
}

/*int	main(void)
{
	char receiver[] = "";
	char donor[] = "firstprint";
	write(1, &receiver, 1);
	write(1, "\n", 1);
	ft_strcpy(receiver, donor);
	write(1, &receiver, 12);
	return (0);
}
*/
