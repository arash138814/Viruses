package main

import (
	"fmt"
	"os"
	"runtime"
)

func main() {
	i := 0
	for {
		dirname := fmt.Sprintf("%d", i)

		var err error
		err = os.Mkdir(dirname, 0777)

		if err != nil {
			fmt.Printf("mkdir failed (%s): %v\n", runtime.GOOS, err)
			break
		}
		i++
	}
}
