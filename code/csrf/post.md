---
layout: default
course_number: CS335
title: Code - Edit Profile template 
---

Edit profile template  

```html
<html>
  <body>
    <h1>This page forges an HTTP POST request.</h1>
    <script type="text/javascript">
      function forge_post() {

        var fields;

        <!--
          add to form fields here
        -->

        var p = document.createElement("form");
        p.action = "";
        p.innerHTML = fields;
        p.method = "";
        document.body.appendChild(p);
        p.submit();
      }

      window.onload = function() { forge_post();}
    </script>
  </body>
</html>
```
