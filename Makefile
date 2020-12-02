.PHONY: clean

all: main

main: src/main.c
	gcc -Wall -o main src/main.c -lssl -lcrypto

clean:
	rm -rf main
