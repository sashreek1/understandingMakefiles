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
<img src="https://cdn.dribbble.com/users/6491/screenshots/2738115/makefile-logo-v2.png" style="width: 100px; max-width: 100%; height: auto" title="Click for the larger version." />

Compiling the source code files can be tiring, especially when you have to include several source files and type the compiling command every time you need to compile. Makefiles are the solution to simplify this task.

Makefiles are special format files that help build and manage the projects automatically.  
  
Make is called a build tool - it builds data files, plots, papers, programs or libraries. It can also update existing files if desired.

Make tracks the dependencies between the files it creates and the files used to create these. If one of the original files (e.g. a data file) is changed, then Make knows to recreate, or update, the files that depend upon this file 
