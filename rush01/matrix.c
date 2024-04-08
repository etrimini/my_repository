/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etrimini <etrimini@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 15:20:16 by etrimini          #+#    #+#             */
/*   Updated: 2024/03/31 15:52:17 by etrimini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int mi_atoi(char *str)
{
    int numero;
    int signo;
    int i;

	numero = 0;
	signo = 1;
	i = 0;

    if (str[0] == '-')
	{
        signo = -1;
        i++; 
	}

    while (str[i] != '\0')
	{
        numero = numero * 10 + (str[i] - '0');
        i++;
	}

    return numero * signo;
}

void mostrar_enteros(char *strings[], int longitud)
{
    int i;

	i = 0;
    char buffer[20];
    while (i < longitud) {
        int numero = mi_atoi(strings[i]);
        int j = 0;
        int temp = numero;
        if (temp == 0) {
            buffer[j++] = '0';
        } else {
            if (temp < 0) {
                buffer[j++] = '-';
                temp = -temp;
            }
            int digits = 0;
            while (temp > 0) {
                buffer[j++] = '0' + (temp % 10);
                temp /= 10;
                digits++;
            }
            // Invertir el string en el buffer
            int left = (numero < 0) ? 1 : 0;
            int right = j - 1;
            while (left < right) {
                char temp = buffer[left];
                buffer[left] = buffer[right];
                buffer[right] = temp;
                left++;
                right--;
            }
        }
        buffer[j++] = '\n';

         write(STDOUT_FILENO, buffer, j);

        i++;
    }
}

int main() {
    char *strings[] = {"123", "456", "789"}; 
	int longitud = sizeof(strings) / sizeof(strings[0]); 
    mostrar_enteros(strings, longitud); 
    return 0;
}
