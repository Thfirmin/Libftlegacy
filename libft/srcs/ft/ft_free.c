/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:11:41 by thfirmin          #+#    #+#             */
/*   Updated: 2023/05/23 13:26:27 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Thawan perdeu de vez
void	ft_free(void *ptr, t_mem **mem)
{
	t_mem	*set;
	t_mem	*aux;

	if (!mem || !*mem)
		return ;
	set = *mem;
	while (set)
	{
		if (set->ptr == ptr)
		{
			if (set == *mem)
				*mem = (**mem).next;
			else
				aux->next = set->next;
			free (set->ptr);
			free (set->context);
			free (set);
			return ;
		}
		aux = set;
		set = set->next;
	}
}
