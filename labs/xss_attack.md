---
layout: default
course_number: CS335
title: Lab - Cross-Site Scripting Attack
---

# Lab - Cross-Site Scripting (XSS) Attack Lab

### Lab Description and Tasks

[XSS Attack Lab.pdf](Web_XSS_Elgg.pdf)

Additional information on the SEED project [site](https://seedsecuritylabs.org/Labs_16.04/Web/Web_XSS_Elgg/).

- You must provide a screenshot of the network traffic with each attack.
- *Extra Credit - use a secondary server*:
  - Attacker VM is hosting the malicious script. Feel free to use the CSRF Attacker site to host it.

  #### Login information

  User | User Name | Password
  -----|----------|---------
  Admin | admin | seedelgg
  Alice | alice | seedalice
  Boby | boby | seedboby
  Charlie | charlie | seedcharlie
  Samy | samy | seedsamy


### History of Samy's worm
- [The MySpace Worm that Changed the Internet Forever](https://www.vice.com/en_us/article/wnjwb4/the-myspace-worm-that-changed-the-internet-forever)
- [https://samy.pl/myspace/](https://samy.pl/myspace/)
- [Technical explanation of The MySpace Worm](https://samy.pl/myspace/tech.html)
- [Cross-Site Scripting Worm Hits MySpace](https://betanews.com/2005/10/13/cross-site-scripting-worm-hits-myspace/)
- [Cross-Site Scripting Worm Floods MySpace](https://it.slashdot.org/story/05/10/14/126233/cross-site-scripting-worm-floods-myspace)
- Video: [MySpace Worm Animated Story](https://www.youtube.com/watch?v=DtnuaHl378M)

### References

- [Firefox Developer Tools](https://developer.mozilla.org/en-US/docs/Tools)  
- [HTTP Header Live](https://addons.mozilla.org/en-US/firefox/addon/http-header-live/) Displays the HTTP header. Edit it and send it.  
- The HTML &lt;form&gt; Element [Reference](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/form)
- [XMLHttpRequest](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest)
- [Using XMLHttpRequest](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest/Using_XMLHttpRequest)
- [Element.innerHTML](https://developer.mozilla.org/en-US/docs/Web/API/Element/innerHTML) gets or sets the HTML markup contained within the element.

### Grading

Post your report in [Marmoset](https://cs.ycp.edu/marmoset) by the scheduled due date in the syllabus. Your grade for this lab will be composed of:
- 30% - Design
- 30% - Observations
- 40% - Explanation
- *Extra Credit* if you pursue further investigation, beyond what is required by the lab description.
