[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/km2rJ6H2)
# CSCI 2270: Data Structures - Assignment 6

## Overview
Welcome to Assignment 6! This assignment will focus on the implementation and use of graphs. Please be sure that you have completed Assignment 5 before beginning this one. 

## Objectives
1. Implement an unweighted, directed graph
2. Implement a breadth-first traversal of the graph
3. Use a breadth-first search to compute reachability

## A Note On Assignment Compilation
For this assignment, a makefile has been created for you. You are allowed to edit this makefile as you wish, however, you may not rename any of the files we have given you. If you edit the makefile we have provided, it is important that you make sure that your executable file is named `graph`. Otherwise, your local copy of the testing script will not work properly.

To compile your code using the makefile, enter the following command to the terminal from your `assignment-6` directory:
```console
make
```

To compile your code without the makefile, enter the following command to the terminal from your `assignment-6` directory:
```console
g++ -std=c++17 src/main.cpp src/Graph.cpp -o graph
```

### Editing the Makefile
For this assignment, you may wish to include your own implementation of a Queue. If you wish to do this, you will need to edit the makefile to also compile your Queue class. When we compile your code for grading, we will use the `make` command. Be sure that your code compiles with this command, or you will get a grade of 0 on this assignment. 


## Where to Start
Before proceeding with the assignment, be sure to read the [instructions](assignment6.pdf) carefully. They are also available in [.docx form](assignment6.docx) for your convenience. Brief instructions on working with Github Classroom are included below. For a more detailed refresher, refer to [Assignment 0](https://classroom.github.com/a/LgHw2HOr).


### Working with git and Github
Working with git and Github can be broken down into four steps:
1. **Accept and clone the assignment.** Accept the assignment from Canvas. Find your unique repository URL and use the following command in your terminal to clone your assignment:
```console
git clone git@github.com:cuboulder-csci2270/assignment-2-MyGitUsername.git
```

2. **Complete your assignment.** You should only need to edit the files in the `src/` directory for this assignment. You may follow the steps below to test your assignment locally at any time.

3. **Add, commit, and push your changes to Github.** Update your submission on Github by using the add, commit, and push commands. For example:
```console
git add src/main.cpp
git commit -m "implemented insertStudentData"
git push
```

4. **Submit your assignment.** Follow the steps below to submit your assignment by the deadline.

## Assignment 6 Instructions
Follow the instructions detailed in the Assignment 6 writeup. You may push your code to Github as many times as you'd like before the deadline. Your code must pass all test cases to receive full credit. Be sure to submit a link to your repository on Canvas to receive credit for your Github submission.

### Testing your Assignment Locally
We have included a directory named tests, which we will use to test your code. **Do not make any changes to this directory or the tests will not work correctly.** You may use the tests we have provided to debug your code any time you'd like on your local machine. Test your code by following the steps below:

1. Compile your code. Run this step from your assignment-6 directory.
```console
make
```

2. Run the tests
```console
bash tests/run_tests.sh
```

The testing script will show you output detailing what questions, if any, you missed.  

### Running your Code Locally (without the test cases)
Sometimes you may need to run your code locally without putting your solution through all of our test cases. You may do this using the steps below:

1. Compile your code. Run this step from your assignment-5 directory.
```console
make
```

2. Run your program. Don't forget to give your program the appropriate command line arguments.
```console
./graph tests/profiles-short.csv 
```

## Submission
Be sure to push your final submission to Github before the deadline. You must also submit a link to your repository on Canvas. The link should look something like this: https://github.com/cuboulder-csci2270/assignment-6-MyGitUsername. You may re-submit the link as many times as you wish before the deadline, but since Github keeps track of your changes, this should not be necessary.

## Repository Organization

| Directory Name | Description |
| ------ | ------ |
| `src` | This is where your code will be stored. Any code you write should be put into this directory. Starter main.cpp, Graph.cpp, and Graph.hpp files have been created for you. If you wish to use your own Queue implementation, you should put the Queue.cpp and Queue.hpp files here as well. |
| `tests` | This is where the code and data used to test your code is stored. You should not need to change anything in this repository. You may refer to this folder to view the input files we use to test your code. |

## Additional References

If you are struggling to get started working with Github, you may find the following resources helpful:
* [A quick guide to git](https://rogerdudler.github.io/git-guide/)
* [Git cheat sheet](https://education.github.com/git-cheat-sheet-education.pdf)
* [Getting started with git](https://docs.github.com/en/get-started/getting-started-with-git)