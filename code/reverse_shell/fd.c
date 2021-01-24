#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{
	int fd = open("foo.txt", O_RDWR | O_CREAT);

	printf("fd = %d\n", fd);
	if (fd > 0)
	{
		close(fd);
	}

	//printf("stdin = %d\n", STDIN_FILENO);
	//printf("stdout = %d\n", STDOUT_FILENO);

	return 0;
}
