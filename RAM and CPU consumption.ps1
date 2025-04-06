function cpu-hog {
    while ($true) {
        $randString = -join ((65..90) + (97..122) | Get-Random -Count 100000 | ForEach-Object { [char]$_ })
        $sortedString = -join ($randString.ToCharArray() | Sort-Object)
    }
}
function memory-hog {
    $memoryList = @()
    while ($true) {
        $memoryList += (' ' * 10MB)
    }
}
$runspaces = @()
for ($i = 0; $i -lt 4; $i++) {
    $runspaces += [runspacefactory]::CreateRunspace()  
    $runspaces[$i].Open()
    $runspaces[$i].SessionStateProxy.SetVariable("cpu-hog", $function:cpu-hog)
    $runspaces[$i].ExecuteAsync($function:cpu-hog)
}
for ($i = 0; $i -lt 2; $i++) {
    $runspaces += [runspacefactory]::CreateRunspace()  
    $runspaces[$i + 4].Open()
    $runspaces[$i + 4].SessionStateProxy.SetVariable("memory-hog", $function:memory-hog)
    $runspaces[$i + 4].ExecuteAsync($function:memory-hog)
}
while ($true) {
    Start-Sleep -Seconds 1
}
