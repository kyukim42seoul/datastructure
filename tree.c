#include "tree.h"

t_tree *new_tree()
{
	t_tree	*new;

	new = (t_tree *)malloc(sizeof(t_tree));
	new->left = NULL;
	new->right = NULL;
	return (new);
}

int	left_subtree(t_tree *root, t_tree *sub)
{
	if (root->left != NULL)
		root->left = NULL;
	root->left = sub;
	return (0);
}

int	right_subtree(t_tree *root, t_tree *sub)
{
	if (root->right != NULL)
		root->right = NULL;
	root->right = sub;
	return (0);
}

