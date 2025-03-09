/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 15:16:08 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/08 15:48:06 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	counter;

	counter = 0;
	if (argc >= 1)
	{
		while (argv[0][counter] != '\0')
		{
			write (1, &argv[0][counter], 1);
			counter++;
		}
		write (1, "\n", 1);
	}
}
