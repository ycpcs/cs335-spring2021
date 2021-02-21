/* Sniffing packets using sockets */

#include <unistd.h>
#include <stdio.h>
#include <linux/if_packet.h>
#include <net/ethernet.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <string.h>

void main() {
	struct sockaddr saddr;
	struct packet_mreq mr;
	socklen_t clientlen = sizeof(saddr);
	char buf[512];

	int sock = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_ALL));

	memset(&mr, 0x00, sizeof(mr));
	mr.mr_type = PACKET_MR_PROMISC;
	setsockopt(sock, SOL_PACKET, PACKET_ADD_MEMBERSHIP, &mr, sizeof(mr));

	int buf_len = sizeof(buf) - 1;

	while (1) {
		bzero(buf, buf_len);

		if (recvfrom(sock, buf, buf_len, 0, (struct sockaddr*)&saddr, (socklen_t *)&clientlen)) {
			printf("Received a packet.\n");
		}
	}
	close(sock);
}
