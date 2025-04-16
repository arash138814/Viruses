# System Stress Testing Toolkit

## What is this project?
This project includes several scripts for **system and network stress testing**. With these tools, you can see how much stress your system can withstand on **CPU**, **RAM**, **disk** or **network**. The codes are written in 4 popular languages ​​(**Python**, **Go**, **C** and **PowerShell**) and are designed for **learning** and **testing in controlled environments**.

> ⚠️ **Important**: This tool is for **learning and research** purposes only. Please use it only in lab environments where you are authorized and do not damage other people's systems. I am not responsible for any misuse.

## 📂 Project Structure

- `📂 Folder Bomber`
  ➤ This script creates a whole folder with consecutive names (1 to N) and causes the operating system to hang.
- `💻 RAM and CPU Consumption`
  ➤ This script unnecessarily consumes CPU and RAM and causes the system to hang.
- `🌐 URL Bomber`
  ➤ This script crashes the browser by quickly opening Google (or any other URL) and may even freeze the system. Unfortunately, you can't open the browser directly in C, so I didn't write this script in C.

## What do I need?
To run these scripts, you will need:
- Python 3 (for .py files)
- Go (for .go files)
- PowerShell (for .ps1 files)
- GCC (for .c files)
- A test environment (e.g. a virtual machine) that will not harm your system.

### How do I install?
- 1.Download the project:
```bash
git clone https://github.com/arash138814/bypass-av.git
cd bypass-av.git
```
- 2.Code execution:
```bash
python "FileName.py"
gcc "FileName.c" -o test.exe & ./test.exe
go run "Filename.go"
".\Filename.ps1"
```
