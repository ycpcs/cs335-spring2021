---
layout: default
course_number: CS335
title: Resources
---

This page contains links to useful resources.

Development Environment
------------------------------------
- Microsoft  [Visual Studio](https://visualstudio.microsoft.com/) is an integrated development environment from Microsoft. It is used to develop computer programs, as well as websites, web apps, web services and mobile apps.
- [GCC](https://gcc.gnu.org/), the GNU Compiler Collection.
- [GDB](https://www.gnu.org/software/gdb/), the GNU Project Debugger.

Passive Capture
------------------------------------
- [Wireshark](https://www.wireshark.org/) is the most popular tool for passive packet capture and analysis.
- [Microsoft Message Analyzer](https://docs.microsoft.com/en-us/message-analyzer/microsoft-message-analyzer-operating-guide) is an extensible tool for analyzing network.
traffic on Windows. *Retired on November 25, 2019.*
- [TCPDump & libpcap](http://www.tcpdump.org/) is a powerful command-line packet analyzer; and libpcap, a portable C/C++ library for network traffic capture, and it's windows implementation [WinPcap](https://www.winpcap.org/).
  - Programming with [pcap](http://www.tcpdump.org/pcap.htm) by Tim Carstens.
- [netwox](http://www.cis.syr.edu/~wedu/Teaching/cis758/netw522/netwox-doc_html/) is a **netw**ork toolb**ox** is a network _toolbox_ for network administrators and network hackers.
- [netwib](http://www.cis.syr.edu/~wedu/seed/Labs/Lab_Setup/netw522/) is a <b>netw</b>ork l<b>ib</b>rary is a network _library_, for network administrators and network hackers.
  - netwox already contains several tools using the netwib network library.
- [netwag](http://www.cis.syr.edu/~wedu/seed/Labs/Lab_Setup/netw522/netwag-doc_html/) is a graphical front end for netwox.
  - netwox & netwag [Troubleshooting guide](docs\netwox.pdf)

Active Capture
------------------------------------
- The [Canape tool](https://github.com/ctxis/canape) as a generic network protocol man-in-the-middle testing, analyzing, and exploitation tool with a usable GUI.

Network Connectivity
------------------------------------
- The [Hping](http://www.hping.org/) tool is similar to the traditional ping utility, but it supports more than just ICMP echo requests.
- [Netcat](http://netcat.sourceforge.net/) is a command line tool that connects to an arbitrary TCP or UDP port and allows you to send and receive data.
  - Netcat cheat sheet [pocket reference guide](docs/netcat_cheat_sheet_v1.pdf)
- If you need to scan the open network interface on a remote system, nothing is better than [Nmap](https://nmap.org/).
- _netdiscover_ is a network address discovering tool, install by using `sudo apt-get install netdiscover`.
- [Masscan](https://github.com/robertdavidgraham/masscan/) is the world's fastest internet port scanner.

Web Testing (Web Proxies)
------------------------------------
- [Burp or Burp Suite](https://portswigger.net/burp) is the gold standard of commercial web application–testing tools.
- OWASP Zed Attack Proxy [ZAP](https://www.zaproxy.org/).
- [w3af](http://w3af.org/) is a Web Application Attack and Audit Framework.
- [mitmproxy](https://mitmproxy.org/) is an interactive, SSL/TLS-capable intercepting proxy with a console interface for HTTP/1, HTTP/2, and WebSockets.
- [Charles](https://www.charlesproxy.com/) is an HTTP proxy, an HTTP
monitor, and a reverse proxy. It enables you to view HTTPS traffic.

Vulnerability Exploitation
------------------------------------
- [Metasploit](https://github.com/rapid7/metasploit-framework) is pretty much the only game in town when you need a generic vulnerability exploitation framework, at least if you don’t want to pay for one.
- [Ettercap](https://www.ettercap-project.org/) is a comprehensive suite for man in the middle attacks.
- [Scapy](https://scapy.net/) is a network packet generation and manipulation library for Python.
- [sqlmap](http://sqlmap.org/) allows for easy discovery and exploitation of SQL injection vulnerabilities.
- [nessus](https://www.tenable.com/products/nessus/nessus-essentials) is a proprietary vulnerability scanner developed by Tenable Network Security.
- [Nikto](https://cirt.net/Nikto2) is an Open Source web server scanner.
- [OpenVAS](http://www.openvas.org/) is an Open Vulnerability Assessment Scanner.

Network Spoofing
------------------------------------
- [Ettercap](https://www.ettercap-project.org/) is a man-in-the-middle tool designed to
listen to network traffic between two devices.

Password Crackers
------------------------------------
- [Hash Suite](https://hashsuite.openwall.net/) is a Windows program to test security of password hashes.
- [John the Ripper](https://www.openwall.com/john/) is a fast Open Source password cracker.
  - The official [repo](https://github.com/magnumripper/JohnTheRipper/).
  - The [password hash file](http://contest-2012.korelogic.com/) bundle from the KoreLogic 2012 DEFCON challenge. Decompress with ```bzip2 -dk cmiyc_2012_password_hash_files.tar.bz2```
  - A large word list containing 1,493,677,782 words can be found at [crackstation](https://crackstation.net/crackstation-wordlist-password-cracking-dictionary.htm).
- [RainbowCrack](http://project-rainbowcrack.com/index.htm) crack hashes with rainbow tables.
- [Ophcrack](https://ophcrack.sourceforge.io/) is a free Windows password cracker based on rainbow tables.
- [THC-Hydra](https://github.com/vanhauser-thc/thc-hydra) is one of the most widely used _online_ hacking tool.
- [aircrack-ng](https://www.aircrack-ng.org/) is probably the best Wi-Fi hacking software available.
- Forgot your windows password? Try [ntpasswd](http://pogostick.net/~pnh/ntpasswd/)

Steganography
------------------------------------
- [OpenStego](https://www.openstego.com/) can hide any data within a cover file (e.g. images).
- [Camouflage](http://camouflage.unfiction.com/) allows any file to be hidden within any other file.

System Utilities
------------------------------------
- [Sysinternals Suite](https://docs.microsoft.com/en-us/sysinternals/) is a suite of more than 70 freeware utilities used to monitor, manage and troubleshoot the Windows operating system.

API Development
------------------------------------
- [Postman](https://www.getpostman.com/) API development environment.
- [Fiddler](https://www.telerik.com/fiddler) is free web debugging proxy for any browser, system or platform.
- [A RESTful Tutorial](https://www.restapitutorial.com/).

Forensics
------------------------------------
- [Open Source Digital Forensics](https://www.sleuthkit.org/).
- [OfflineRegistryView](https://www.nirsoft.net/utils/offline_registry_view.html) is a simple tool for Windows that allows you to read offline Registry files from external drive and view the desired Registry key in _.reg_ file format. OfflineRegistryView is by [NirSoft](https://www.nirsoft.net/) which also provides a plethora of other related tools.
- [sleuthkit.org](https://www.sleuthkit.org/) is the official website for The Sleuth Kit®, Autopsy®, and other open source digital investigation tools.  
- The Cyber Swiss Army Knife [CyberChef](https://gchq.github.io/CyberChef) - a web app for encryption, encoding, compression and data analysis.

Open-Source Intelligence
------------------------------------
- [OSINT Framework](https://osintframework.com/) provides holistic look at resources and techniques.
- [https://osintcurio.us/](https://osintcurio.us/)
- [OSINT framework](https://start.me/p/ZME8nR/osint) by Bruno Mortier.

Supplemental Material
------------------------------------
-  [High Performance Browser Networking](https://hpbn.co/) is what every web developer should know about networking and web performance.
-  [Eloquent JavaScript](https://eloquentjavascript.net/) is a book about JavaScript, programming, and the wonders of the digital.

Security Threats
------------------------------------
-  The [OWASP Top Ten Project](https://www.owasp.org/index.php/Category:OWASP_Top_Ten_Project) is a powerful awareness document for web application security.
-  The [OWASP Cheat Sheet Series](https://cheatsheetseries.owasp.org/) was created to provide a concise collection of high value information on specific application security topics.
- [CWE™](https://cwe.mitre.org/compatible/product.html) is a community-developed list of common software security weaknesses.
- [Web Security Threat Classiﬁcation](http://www.webappsec.org/projects/threat/).
- [The CAPTCHA Project](http://www.captcha.net/) Telling Humans and Computers Apart.
- [CVE Details](https://www.cvedetails.com/) the ultimate security vulnerability datasource.

Bounty Platform
-----------------------------------
- [HackerOne](https://www.hackerone.com/) is a vulnerability coordination and bug bounty platform that connects businesses with cybersecurity researchers.
- [Bugcrowd](https://www.bugcrowd.com/) is a crowdsourced security platform; managing organizations bug bounty, vulnerability disclosure, and next-gen pen test programs.

Penetration Testing Platforms
-----------------------------------
- [Hack The Box](https://www.hackthebox.eu/) is an online platform to test and advance your skills in penetration testing and cyber security.
- [Vulnhub](https://www.vulnhub.com/) provides materials that allows anyone to gain practical 'hands-on' experience in digital security.
- [Hack This Site](https://www.hackthissite.org/) is a legal free training ground for users to test and expand their hacking skills.
- The [wargames](https://overthewire.org/wargames/) offered by the OverTheWire community can help you to learn and practice security concepts in the form of fun-filled games.
- [We Chall](http://www.wechall.net) offers computer-related problems and links to other challenges.
- [Google Gruyere](https://google-gruyere.appspot.com/) - Web Application Exploits and Defenses
- [247CTF](https://247ctf.com/) The game never stops

Exploit Databases
-----------------------------------
- The [Exploit Database](https://www.exploit-db.com/) is a CVE compliant archive of public exploits and corresponding vulnerable software, developed for use by penetration testers and vulnerability researchers.
  - The [Google Hacking Database](https://www.exploit-db.com/google-hacking-database) is a project from the Exploit-DB.com domain name, an alternative way to find vulnerable apps and extract information or to gain privileges.
- [CXSecurity](https://cxsecurity.com/) database offers direct access to latest exploits from a web-based interface
- [Rapid7](https://opendata.rapid7.com/) repository of vetted computer software exploits and exploitable vulnerabilities.
- [Vulnerability Lab](https://www.vulnerability-lab.com/) offers access to a large vulnerability database complete with exploits and PoCs for research purposes.

Technical Documentation
-----------------------------------
