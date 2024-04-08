/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lasenjo- <lasenjo-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 13:04:32 by lasenjo-          #+#    #+#             */
/*   Updated: 2024/03/27 15:52:13 by etrimini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_next_char(int pos_x, int pos_y, int val_x, int val_y)
{
	char	symbol;

	symbol = ' ';
	if (pos_x == 0 || pos_x + 1 == val_x)
	{
		symbol = '-';
		if (pos_y == 0 || pos_y + 1 == val_y)
			symbol = 'o';
	}
	else if (pos_y == 0 || pos_y + 1 == val_y)
		symbol = '|';
	ft_putchar(symbol);
}

void	rush(int x, int y)
{
	int		posx;
	int		posy;

	posx = 0;
	while (posx < x)
	{
		posy = 0;
		while (posy < y)
		{
			print_next_char(posx, posy, x, y);
			posy++;
		}
		ft_putchar('\n');
		posx++;
	}
}
