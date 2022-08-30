#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define WRONG_ARGS 1
#define MEM_ALLOC_ERR 2

int	ft_error(char *err, int ret)
{
	// error handling function
}

int	init_stacks()
{
	// you can choose whatever here, arrays, linked lists, double linked lists, circular lists ...
	// but make sure it is functional and clean before going to next steps
}

int main(int argc, char **argv)
{
	if (check_args(argc, argv))
		return (ft_error("format : ...", WRONG_ARGS));
	if (init_stacks())
		return (ft_error("failed to create stacks", MEM_ALLOC_ERR));
	
	return (0);
}