$subnet = "192.168.1"

$start = 1
$end = 254

$ping = 1

$outpath ="pingsweep.txt"

While ($start -le $end) {
    $ip = "$subnet.$start"

    $pingtest = Test-Connection -ComputerName $ip -Quiet -Count $ping -ErrorAction SilentlyContinue

    Write-Host "$ip - $pingtest"

    if($pingtest){
         Add-Content -LiteralPath $outpath ($ip + " is online")
    }

    $start++
}
