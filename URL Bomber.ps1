function Open-Google {
    Start-Process "https://google.com"
}
while ($true) {
    Start-Job -ScriptBlock ${function:Open-Google}
}
