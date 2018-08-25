#include <stdio.h>
#include "get_next_line.h"

int main()
{
	char *str;

	while(1)
	{
		get_next_line(0, &str);
		printf("str : %s\n", str);
		if (!ft_strcmp(str, "exit"))
		{
			free(str);
			break;
		}
		free(str);
	}
}
