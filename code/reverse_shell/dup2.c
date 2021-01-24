#include<stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
	int in = open("input.txt", O_RDONLY);
	int out = open("output.txt", O_RDWR | O_CREAT | O_APPEND);

	if (in > 0 && out > 0)
	{
		dup2(in, STDIN_FILENO);
		dup2(out, STDOUT_FILENO);

		char message[50];
		memset(message, 0x00, sizeof(message));

		fgets(message, sizeof(message), stdin);
		printf("%s\n", message);

		close(in);
		close(out);
	}
	return 0;
}
