#include "tree.h"

int	main(int argc, char *argv[], char *env[])
{
	t_buf		*buf;
	int			index;


	buf = (t_buf *)malloc(sizeof(t_buf));
	buf->argc_buf = &argc;
	buf->argv_buf = argv;
	buf->env_buf = env;
	index = 0;

	while (buf->argv[1][index])
	{

		index++;
	}


	return (0);
}
