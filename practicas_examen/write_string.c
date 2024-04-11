/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrimini <etrimini@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:28:56 by etrimini          #+#    #+#             */
/*   Updated: 2024/04/10 16:41:15 by etrimini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void write_string(char *str)
{
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	write(STDOUT_FILENO, str, length);
}

int main(void)
{
	char *mensaje;

	mensaje = "hola a todos ,is amigos";
	write_string(mensaje);
	return (0);
}
