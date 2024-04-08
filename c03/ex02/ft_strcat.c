/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrimini <etrimini@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:00:59 by etrimini          #+#    #+#             */
/*   Updated: 2024/04/04 17:31:39 by etrimini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*i;

	i = dest;
	while (*i)
	{
		i++;
	}
	while (*src)
	{
		*i = *src;
		i++;
		src++;
	}
	*i = '\0';
	return (dest);
}
