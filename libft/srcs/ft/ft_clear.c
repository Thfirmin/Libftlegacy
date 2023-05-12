/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thfirmin <thfirmin@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:39:13 by thfirmin          #+#    #+#             */
/*   Updated: 2023/05/12 13:40:10 by thfirmin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Deletes each node from this list node
void	ft_clear(t_mem **mem, void (*del)(void *))
{
	t_mem	*nxt;

	while (*mem)
	{
		nxt = (**mem).next;
		if (del)
			del((**mem).pointer);
		free (*mem);
		*mem = nxt;
	}
}
