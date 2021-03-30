---
layout: default
course_number: CS335
title: Lab - Cross-Site Request Forgery Attack
---

# Lab - Cross-Site Request Forgery (CSRF) Attack Lab

### Lab Description and Tasks

[CSRF Attack Lab.pdf](Web_CSRF_Elgg.pdf)

Additional information on the SEED project [site](https://seedsecuritylabs.org/Labs_16.04/Web/Web_CSRF_Elgg/).

- Make sure you answer the questions under Task 3
- You must provide a screenshot of the network traffic with each attack.
- *Extra Credit - no localhost*:
  - Server VM is hosting the web site
  - Attacker VM is hosting the malicious web site
  - User and Attacker are both using:
    - Web site hosted by the server
    - Malicious web site hosted by the attacker

#### Login information

User | User Name | Password
-----|----------|---------
Admin | admin | seedelgg
Alice | alice | seedalice
Boby | boby | seedboby
Charlie | charlie | seedcharlie
Samy | samy | seedsamy

### References

 - [Firefox Developer Tools](https://developer.mozilla.org/en-US/docs/Tools)
 - [HTTP Header Live](https://addons.mozilla.org/en-US/firefox/addon/http-header-live/) Displays the HTTP header. Edit it and send it.
 - The HTML &lt;form&gt; Element [Reference](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/form)
 - [SameSite](https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Set-Cookie/SameSite) Cookies

### Grading

Post your report in [Marmoset](https://cs.ycp.edu/marmoset) by the scheduled due date in the syllabus. Your grade for this lab will be composed of:
- 30% - Design
- 30% - Observations
- 40% - Explanation
- *Extra Credit* if you pursue further investigation, beyond what is required by the lab description.
