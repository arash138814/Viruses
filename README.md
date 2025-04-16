# System Stress Testing Toolkit

## What is this project?
This project includes several scripts for **system and network stress testing**. With these tools, you can see how much stress your system can withstand on **CPU**, **RAM**, **disk** or **network**. The codes are written in 4 popular languages ​​(**Python**, **Go**, **C** and **PowerShell**) and are designed for **learning** and **testing in controlled environments**.

> ⚠️ **Important**: This tool is for **learning and research** purposes only. Please use it only in lab environments where you are authorized and do not damage other people's systems. I am not responsible for any misuse.

## 📂 Project Structure

- `📂 Folder Bomber`
  ➤ This script creates a whole folder with consecutive names (1 to N) and causes the operating system to hang.
  ➤ python "Folder Bomber.py"
  ➤ gcc "Folder Bomber.c" -o "Folder-Bomber.exe" & .\Folder-Bomber.exe
  ➤ go run "Folder Bomber.go"
  ➤ "Folder Bomber.ps1"
- `💻 RAM and CPU Consumption`
  ➤ This script unnecessarily consumes CPU and RAM and causes the system to hang.
  ➤ python "RAM and CPU consumption.py"
  ➤ gcc "RAM and CPU consumption.c" -o "RAM-and-CPU-consumption.exe" & .\RAM-and-CPU-consumption.exe
  ➤ go run "RAM and CPU consumption.go"
  ➤ "RAM and CPU consumption.ps1"
- `🌐 URL Bomber`
  ➤ This script crashes the browser by quickly opening Google (or any other URL) and may even freeze the system. Unfortunately, you can't open the browser directly in C, so I didn't write this script in C.
  ➤ python "URL Bomber.py"
  ➤ go run "URL Bomber.py"
  ➤ "URL Bomber.ps1"

## What do I need?
To run these scripts, you will need:
Python 3 (for .py files)
Go (for .go files)
PowerShell (for .ps1 files)
GCC (for .c files)
A test environment (e.g. a virtual machine) that will not harm your system.

🌟 SEO Keywords
Ethical Hacking Tools, OS Stress Testing, Python Penetration Testing, Go Lang Security Tools, Browser Crash Exploit, RAM Overload Tester, Folder Bomb Generator, Cybersecurity Research
