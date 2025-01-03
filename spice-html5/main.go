package main

import (
	"embed"
	"net/http"
)

//go:embed static/*
var content embed.FS

func main() {
	// 使用 embed 提供静态文件
	fs := http.FileServer(http.FS(content))
	http.Handle("/", fs)

	port := ":8080"
	http.ListenAndServe(port, nil)
}
