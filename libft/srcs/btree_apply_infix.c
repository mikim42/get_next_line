/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_infix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 14:20:04 by mikim             #+#    #+#             */
/*   Updated: 2017/03/06 19:59:31 by mikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root == 0)
		return ;
	btree_apply_infix(root->left, *applyf);
	(*applyf)(root->item);
	btree_apply_infix(root->right, *applyf);
}
