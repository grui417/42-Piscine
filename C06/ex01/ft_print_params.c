/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:08:30 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/08 16:24:51 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	counter;
	int	ac;

	counter = 0;
	ac = 1;
	if (argc >= 1)
	{
		while (ac < argc)
		{
			while (argv[ac][counter] != '\0')
			{
				write (1, &argv[ac][counter], 1);
				counter++;
			}
			write (1, "\n", 1);
			ac++;
			counter = 0;
		}
	}
}
