/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grui-ant <grui-ant@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:27:30 by grui-ant          #+#    #+#             */
/*   Updated: 2025/03/08 16:42:29 by grui-ant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	ac;
	int	counter;

	ac = argc - 1;
	counter = 0;
	if (argc >= 1)
	{
		while (ac > 0)
		{
			while (argv[ac][counter] != '\0')
			{
				write (1, &argv[ac][counter], 1);
				counter++;
			}
			write (1, "\n", 1);
			ac--;
			counter = 0;
		}
	}
}
