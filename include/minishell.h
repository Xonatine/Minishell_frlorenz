/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frlorenz <frlorenz@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 12:35:21 by miniore           #+#    #+#             */
/*   Updated: 2025/03/04 14:31:23 by frlorenz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

#include "../Libft/libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <signal.h>

typedef struct tokens
{
	char	*command;
	char	*option;
	t_list	*arguments;
}	tok_lst;


//int ft_strtok(char *str);
int ft_valid_com(char *command);
int ft_tokenize(char *input);
int	is_redirct(char c);
int	is_space(char c);
int	is_quotes(char c);
int	is_dquotes(char c);

#endif