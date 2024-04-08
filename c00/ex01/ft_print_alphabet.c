/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrimini <etrimini@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:46:55 by etrimini          #+#    #+#             */
/*   Updated: 2024/03/24 19:57:12 by etrimini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	ascii;

	ascii = 97;
	while (ascii <= 122)
	{
		write(1, &ascii, 1);
		ascii++;
	}
}
