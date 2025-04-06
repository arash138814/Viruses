package main

import (
	"fmt"
	"math/rand"
	"sort"
	"strings"
	"time"
)

func cpuHog() {
	for {
		randString := randomString(100000)
		sortedString := sortString(randString)
		_ = sortedString
	}
}
func randomString(n int) string {
	chars := "abcdefghijklmnopqrstuvwxyz"
	result := make([]byte, n)
	for i := range result {
		result[i] = chars[rand.Intn(len(chars))]
	}
	return string(result)
}
func sortString(s string) string {
	arr := strings.Split(s, "")
	sort.Strings(arr)
	return strings.Join(arr, "")
}
func memoryHog() {
	var memoryList [][]byte
	for {
		memoryList = append(memoryList, make([]byte, 10*1024*1024))
	}
}
func main() {
	for i := 0; i < 4; i++ {
		go cpuHog()
	}
	for i := 0; i < 2; i++ {
		go memoryHog()
	}
	select {}
}
