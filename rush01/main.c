/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: despanad <despanad@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 17:45:19 by despanad          #+#    #+#             */
/*   Updated: 2024/03/30 17:45:26 by despanad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void generatePermutations(int cuadricula[4][4], int fila, int columna, int parametros[]);

int main(int argc, char **argv)
{
    int     i;

    i = 1;
    // if (argc != 17)
    // {
    //     write(1, "Error: Debes proporcionar 16 parámetros.\n", 42);
    //     return 1;
    // }

    int parametros[16];
    while (i < argc)
    {
        // Falta crear una funcion que extraiga cada uno de los numeros del array
        parametros[i - 1] = argv[1][i] - '0';
        // printf("%d", parametros[i - 1]);
        i++;
     }
    int cuadricula[4][4] = {{1}}; // Inicializar la cuadrícula con ceros
    generatePermutations(cuadricula, 0, 0, parametros);
    return 0;
}
