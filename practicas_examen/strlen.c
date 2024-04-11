/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrimini <etrimini@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:43:13 by etrimini          #+#    #+#             */
/*   Updated: 2024/04/10 16:54:34 by etrimini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	strlen(char *str)
{
	int	count_number;

	count_number = 0;
	while (str != '\0')
	{
		count_number++;
		str++;
	}
	return (count_number);
}
