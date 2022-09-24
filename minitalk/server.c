#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include "libft/libft.h"

struct s_server
{
	char	c;
	int		n;
};

struct s_server	g_cn;

void	ft_handler(int sig, siginfo_t *siginfo, void *context)
{
	int	i;

	context = NULL;
	i = 0b10000000;
	if (SIGUSR1 == sig)
		g_cn.c = g_cn.c | i >> g_cn.n;
	g_cn.n++;
	if (g_cn.n == 8)
	{
		if (g_cn.c == '\0')
			write(1, "\n", 1);
		else
			write(1, &g_cn.c, 1);
		g_cn.n = 0;
		g_cn.c = 0b00000000;
	}
	usleep(30);
	kill(siginfo -> si_pid, SIGUSR1);
}

int	main(void)
{
	char				*pid;
	struct sigaction	act;

	g_cn.c = 0b00000000;
	g_cn.n = 0;
	pid = ft_itoa(getpid());
	write (1, pid, ft_strlen(pid));
	free(pid);
	write (1, "\n", 1);
	act.sa_sigaction = &ft_handler;
	act.sa_flags = SA_SIGINFO;
	sigemptyset(&act.sa_mask);
	sigaddset(&act.sa_mask, SIGUSR1);
	sigaddset(&act.sa_mask, SIGUSR2);
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	while (1)
		pause();
}
