#!/usr/bin/python3
from scapy.all import *

print("SENDING SPOOFED ICMP PACKET.........")
ip = IP(src="1.2.3.4", dst="10.20.30.40")
icmp = ICMP()
pkt = ip/icmp
pkt.show()
send(pkt,verbose=0)  
