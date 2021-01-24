---
layout: default
course_number: CS335
title: "Quiz 2 - Cybersecurity"
---

### Quiz 2 - 100 points


#### Web Security
- (10 pts) I have the following page. If a request is sent from inside the iframe, is it considered as a cross-site request or not? If not, how can be this secured?

```html
<html>
   <body>
      <h2>My Example Page</h2>
      <p>You can totally use this my.ycp frame.</p>
      <iframe src="https://my.ycp.edu" height="600" width="600"></iframe>
   </body>
</html>
```

- (5 pts) List the differences between XSS and CSRF attacks?

- (10 pts) The fundamental cause of Cross-Site Scripting (XSS) vulnerabilities is that HTML allows JavaScript code to be mixed with data. From Cybersecurity security perspective - mixing user data with code is very dangerous. XSS is such an example. Provide two other examples that can be used to demonstrate that mixing code with data is bad for security.

- (10 pts) I updated the Elgg web site to use the following SQL statement (note the line break in the _WHERE_ clause). Is this sufficient to prevent SQL Injection attacks? If not, can you come up with SQL statement to exploit this vulnerability.

```sql
SELECT * FROM employee
WHERE eid= ’$eid’ AND
      password=’$password’
```

- (10 pts) Update the following command to use prepared statement.

```sql
UPDATE employee SET password=’$newpwd’ WHERE eid =’$eid’ and password=’$oldpwd’;
```

- (10 pts) Pro and cons of using Content Security Policy of defeating XSS attacks. How about CSRF.

- (5 pts) We use bank32.com in our examples when discussing Public Key Infrastructure. I want to change the name to bank 64.com To cut time and cost, I want to use the same certiﬁcate, instead of generating a new one. Would that be possible and why?

- (5 pts) If the public key of a root CA is compromised, what damages can an attacker achieve?  

#### Hands On
- (15 pts) One of my friends recently purchased an old Xerox printer and he asked me to help him set it up. I had to import a Xerox certificate since it was missing from his computer. The common name (CN) of the certificate was “Xerox Generic Root Certificate Authority”. After we successfully set up the printer, I was curious to see how many other printers using this certificate are connected to the internet.
  - (3 pts) Explain how can I find devices using this certificate.
  - (10 pts) Provide your search criteria and sample results. Do not attempt to log in into any servers you do not own, even with the default password.
  - (2 pts) Any Lessons learned.


- (10 pts) Can you tell me the joke hidden in [escape.pdf](files/escape.pdf).

- (10 pts) What am I trying to tell you [kec.jpg](files/kec.jpg). If you get stuck, try using [strings](https://linux.die.net/man/1/strings)
