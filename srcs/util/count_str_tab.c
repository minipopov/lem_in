/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_str_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akarasso <akarasso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:51:55 by akarasso          #+#    #+#             */
/*   Updated: 2018/07/17 15:46:54 by akarasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_str_tab(char **s)
{
	int i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	return (i);
}
