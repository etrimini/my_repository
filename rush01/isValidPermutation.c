/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isValidPermutation.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 04:03:22 by despanad          #+#    #+#             */
/*   Updated: 2024/03/31 04:03:25 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Función para verificar si una permutación cumple con las restricciones del juego
int isValidPermutation(int grid[4][4], int row, int column)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < row)
    {
        if (grid[i][column] == grid[row][column])
        {
            return (0); // Número repetido en la columna
        }
        i++;
    }
    while (j < column)
    {
        if (grid[row][j] == grid[row][column])
        {
            return (0); // Número repetido en la fila
        }
        j++;
    }
    return (1);
}