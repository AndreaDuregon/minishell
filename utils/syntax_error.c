/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syntax_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aduregon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:54:54 by mcossu            #+#    #+#             */
/*   Updated: 2021/03/02 09:48:28 by aduregon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	set_syntax_err(void)
{
	errno = 22;
	printf(RED"Error: Syntax Error\n"NRM);
	return (0);
}
