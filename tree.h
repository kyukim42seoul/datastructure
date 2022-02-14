#ifndef TREE_H
# define TREE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef enum
{
	num;
	plus;
	minus;
	alphabet;
	space;
	pipe;
}	temphabet;

typedef struct s_tree
{
	temphabet		type;
	void			*content;
	int				priority;
	struct s_tree	*left_tree;
	struct s_tree	*right_tree;
}					t_tree;

typedef struct s_buf
{
	void	*argc_buf;
	void	*argv_buf;
	void	*env_buf;
	void	*empty_buf;
}			t_buf;

//tree.c
t_tree *new_tree();
int		left_subtree(t_tree *root, t_tree *sub);
int		right_subtree(t_tree *root, t_tree *sub);

#endif
