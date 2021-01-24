/* Receiving packets using sockets */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/ip.h>
#include <arpa/inet.h>

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
	int buf_len = sizeof(buf);

	int client_sock;
	while (1) {
		/* Step 4: Accept a connection request */
		client_sock = accept(sock, (struct sockaddr *)&client, &client_len);

		printf("Connected to: %s\n", inet_ntoa(client.sin_addr));

		if (fork() == 0) {
			close(sock);

			/* Step 5: Recieve the data */
			bzero(buf, buf_len);
			recv(client_sock, buf, buf_len, 0);

			printf("Received: %s\n", buf);
			close(client_sock);
			return;
		} else {
			close(client_sock);
		}
	}
	/* Step 6: Close the connection */
	close(sock);
}
