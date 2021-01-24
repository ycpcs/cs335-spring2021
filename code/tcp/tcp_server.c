/* Receiving packets using sockets */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/ip.h>

void main() {
	struct sockaddr_in server;
	struct sockaddr_in client;
	socklen_t client_len = sizeof(client);
	char buf[512];

	/* Step 1: Create a socket */
	int sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	/* Step 2: Bind to a port number */
	memset((char*)&server, 0, sizeof(server));
	server.sin_family = AF_INET;
	server.sin_addr.s_addr = htonl(INADDR_ANY);
	server.sin_port = htons(9090);

	if (bind(sock, (struct sockaddr*) & server, sizeof(server)) < 0) {
		perror("ERROR on binding");
	}

	/* Step 3: Listen for incomming connection */
	listen(sock, 5);

	/* Step 4: Accept a connection request */
	int client_sock = accept(sock, (struct sockaddr *)&client, &client_len);

	/* Step 5: Receive the data */
	int buf_len = sizeof(buf);
	bzero(buf, buf_len);

	recv(client_sock, buf, buf_len, 0);

	printf("Received: %s\n", buf);

	/* Close the connection */
	close(sock);
	close(client_sock);
}
