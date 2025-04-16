package main
import (
	"os/exec"
	"runtime"
)
func openGoogle() {
	var cmd string
	var args []string
	switch runtime.GOOS {
	case "windows":
		cmd = "cmd"
		args = []string{"/c", "start", "https://google.com"}
	case "darwin":
		cmd = "open"
		args = []string{"https://google.com"}
	default:
		cmd = "xdg-open"
		args = []string{"https://google.com"}
	}
	exec.Command(cmd, args...).Start()
}
func main() {
	for {
		go openGoogle()
	}
}
