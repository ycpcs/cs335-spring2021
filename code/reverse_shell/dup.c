#include<stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
	int fd = open("dup.txt", O_WRONLY | O_CREAT | O_APPEND);

	printf("%d\n", fd);
	if (fd > 0)
	{
		int cd = dup(fd);

		char message[50];
		strcpy(message, "This is using the copy file descriptor\n");
		write(cd, message, sizeof(message));

		strcpy(message, "This is using the original file descriptor\n");
		write(fd, message, sizeof(message));

		//getchar();

		close(cd);
		close(fd);
	}
	return 0;
}
