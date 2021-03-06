/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_str_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <akarasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:52:59 by akarasso          #+#    #+#             */
/*   Updated: 2018/07/18 07:47:49 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem.h"

int		free_str_tab(char **s)
{
	int i;

	i = 0;
	while (s[i])
	{
		free(s[i++]);
	}
	free(s[i]);
	free(s);
	return (1);
}
