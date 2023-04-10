# Linking

When we run g++ with the -o flag, here's what we are actually saying

g++ -o cubed main.cpp

1) Compile our main.cpp file into main.o
2) Link main.o with any other needed binary files, resulting in cubed


## Linker error

```
/usr/bin/ld: /tmp/ccXwvZ6f.o: in function `main':
main.cpp:(.text+0x12): undefined reference to `cubed(int)'
collect2: error: ld returned 1 exit status
```

This is an example of a *linker error*.


## What's happening behind the scenes

```
g++ -std=c++17 -o cubed main.cpp cubed.cpp
```

The line above is equivalent to the following:

```
$ g++ -std=c++17 -c main.cpp
$ g++ -std=c++17 -c cubed.cpp
$ g++ -std=c++17 -o cubed main.o cubed.o
```
