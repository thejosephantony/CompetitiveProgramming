package main

import "fmt"

func main() {
  var a, b, res int64
  fmt.Scanf("%d %d", &a,&b)
  res = a * a + b * b
  fmt.Println(res)
}