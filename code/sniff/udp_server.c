/* Receiving packets using sockets */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/ip.h>

void main() {
	struct sockaddr_in server;
	struct sockaddr_in client;
	socklen_t clientlen = sizeof(client);
	char buf[512];

	int sock = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);


	memset((char*)&server, 0, sizeof(server));
	server.sin_family = AF_INET;

	server.sin_addr.s_addr = htonl(INADDR_ANY);
	server.sin_port = htons(9090);

	if (bind(sock, (struct sockaddr*) & server, sizeof(server)) < 0) {
		perror("ERROR on binding");
	}

	int buf_len = sizeof(buf);

	while (1) {
		bzero(buf, buf_len);

		recvfrom(sock, buf, buf_len - 1, 0, (struct sockaddr*) & client, &clientlen);

		printf("%s\n", buf);
	}
	close(sock);
}
