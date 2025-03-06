/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 10:43:22 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/06 11:27:26 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	comp1;
	int	comp2;

	comp1 = 0;
	comp2 = 0;
	while (dest[comp1] != '\0')
	{
		comp1++;
	}
	while (src[comp2] != '\0')
	{
		dest[comp1] = src[comp2];
		comp1++;
		comp2++;
	}
	dest[comp1] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	destination[] = "Ola";
	char	source[] = "Adeus";

	write (1, &destination, 3);
	write (1, "\n", 1);
	ft_strcat(destination, source);
	write (1, &destination, 8);
	write (1, "\n", 1);
}
*/
