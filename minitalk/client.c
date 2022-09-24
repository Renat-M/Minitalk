#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include "libft/libft.h"

int	g_j;

void	ft_handler(int sig)
{
	sig = 0;
	g_j = g_j >> 1;
	usleep(30);
}

int	main(int argc, char **argv)
{
	int		pid;
	int		len;

	if (argc != 3)
	{	
		write (1, "error\n", 6);
		return (-1);
	}
	signal(SIGUSR1, ft_handler);
	pid = ft_atoi(argv[1]);
	len = ft_strlen(argv[2]) + 1;
	while (len--)
	{
		g_j = 0b10000000;
		while (g_j > 0)
		{
			if (g_j & *argv[2])
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			pause();
		}
		argv[2]++;
	}
}
