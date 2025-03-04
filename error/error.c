/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlorenz <frlorenz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:45:15 by frlorenz          #+#    #+#             */
/*   Updated: 2025/03/04 15:09:36 by frlorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void	ft_error(char *msg) //hay que hacerle mas pruebas a esto que no fuciona
{
	perror(msg);
}

void	custom_error(char *header, char *msg) // Muestra el mensaje de error correspondiente para cada caso de cada comando
{                                             // header => seria el comando que ha fallado
	ft_putstr_fd(header, 2);                  // msg => el mensaje de error correspondiente
	ft_putstr_fd(": ", 2);                    // cd ejemplo => cd: no such file or directory: ejemplo
	ft_putstr_fd(msg, 2);                     // PUEDE SER QUE EXISTA OTRA FORMA DE MOSTRAR ESTOS MENSAJES DE ERROR.
	ft_putstr_fd("\n", 2);
}
