/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlorenz <frlorenz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 12:49:00 by frlorenz          #+#    #+#             */
/*   Updated: 2025/03/04 15:20:26 by frlorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

void ft_pwd(void)
{
    char    *buffer;

    buffer = getcwd(NULL, 0);
    if(!buffer)
        ft_error("getcwd error");
    else
    {
        printf("%s\n", buffer);
        free(buffer);
    }
}
