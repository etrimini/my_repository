/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrimini <etrimini@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 15:00:42 by etrimini          #+#    #+#             */
/*   Updated: 2024/03/21 20:41:46 by etrimini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char v_i, char v_f, char v_g)
{
	write(1, &v_i, 1);
	write(1, &v_f, 1);
	write(1, &v_g, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	f;
	char	g;

	i = '0';
	while (i <= '7')
	{
		f = i + 1;
		while (f <= '8')
		{
			g = f + 1;
			while (g <= '9')
			{
				print(i, f, g);
				if (i != '7')
				{
					write(1, ", ", 2);
				}
				g++;
			}
			f++;
		}
		i++;
	}
}
