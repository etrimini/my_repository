/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*  ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrimini <etrimini@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:48:25 by etrimini          #+#    #+#             */
/*   Updated: 2024/03/24 20:12:31 by etrimini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	ascii;

	ascii = 122;
	while (ascii >= 97)
	{
		write(1, &ascii, 1);
		ascii--;
	}
}
