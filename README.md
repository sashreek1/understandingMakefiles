# understandingMakefiles
Makefile which will execute a small C++ program which would output some data to a text file. A python program will then read the data from this file and plot it.
  
# Usage
When you clone this repository you must have a director like this:
```
README.md
file_writer/
    Makefile
    main.cpp
    read_and_plot.py
```
To run these programs simply run :
```
make
```
# What is a makefile ?
Compiling the source code files can be tiring, especially when you have to include several source files and type the compiling command every time you need to compile. Makefiles are the solution to simplify this task.

Makefiles are special format files that help build and manage the projects automatically.
