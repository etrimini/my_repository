/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generatePermutations.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 03:52:21 by despanad          #+#    #+#             */
/*   Updated: 2024/03/31 03:52:26 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int isValidPermutation(int grid[4][4], int row, int column); 
void printGrid(int grid[4][4]);
int winnerCombination(int grid[4][4], int parametros[]);

// Función para verificar si un número ya está en una row
int inRow(int grid[4][4], int row, int num)
{
    int j;

    j = 0;
    while (j < 4)
    {
        if (grid[row][j] == num)
        {
            return (1);
        }
        j++;
    }
    return (0);
}

// Función para verificar si un número ya está en una columna
int inColumn(int grid[4][4], int column, int num)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (grid[i][column] == num)
        {
            return (1);
        }
        i++;
    }
    return (0);
}

// Función recursiva para generar todas las permutaciones posibles
void generatePermutations(int grid[4][4], int row, int column, int parametros[])
{
    int num;

    num = 1;
    if (row == 4)
    {
        // if (winnerCombination(grid, parametros))
        // {
            printGrid(grid); // Imprimir la cuadrícula
            write(1, "\n", 1);
        // }
        return;
    }
    while (num <= 4)
    {
        if (!inRow(grid, row, num) && !inColumn(grid, column, num))
        {
            grid[row][column] = num;
            // if (isValidPermutation(grid, row, column))
            // {
                if (column == 4 - 1)
                {
                    generatePermutations(grid, row + 1, 0, parametros);
                }
                else
                {
                    generatePermutations(grid, row, column + 1, parametros);
                }
            // }
            grid[row][column] = 0; // Restablecer el valor para la siguiente iteración
        }
        num++;
    }
}