/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printGrid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 04:01:17 by despanad          #+#    #+#             */
/*   Updated: 2024/03/31 04:01:23 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// Función para imprimir la cuadrícula
void printGrid(int grid[4][4])
{
    int i = 0;
    while (i < 4)
    {
        int j = 0;
        while (j < 4)
        {
            char buffer[2];                     // Buffer para almacenar el número y el espacio
            buffer[0] = grid[i][j] + '0';      // Convertir el número a carácter y almacenarlo
            buffer[1] = ' ';                    // Añadir un espacio después del número
            write(1, buffer, 2);                // Escribir en la salida estándar
            j++;
        }
        write(1, "\n", 1); // Escribir la nueva línea
        i++;
    }
}