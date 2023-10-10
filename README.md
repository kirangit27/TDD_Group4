# Test-Driven Development - Group 4

## TTD_Group4 Badges
![CICD Workflow status](https://github.com/kirangit27/TDD_Group4/actions/workflows/run-unit-test-and-upload-codecov.yml/badge.svg) [![codecov](https://codecov.io/gh/kirangit27/TDD_Group4/branch/main/graph/badge.svg)](https://codecov.io/gh/kirangit27/TDD_Group4) [![License](https://img.shields.io/badge/license-MIT-blue.svg)](LICENSE)

## Overview:

In a pair programming exercise for implementing a PID controller for Acme Robotics, a group of four members was divided into teams of two, each comprising a driver and a navigator. These roles were then swapped in the second phase of the exercise to both implement and evaluate the other group's code design for the PID controller.

Authors:

Part 1 
- Kiran S Patil (Driver)
- Patrik Dominik Pordi (Navigator)

Part 2
- Hritvik Choudhari (Driver)
- Mudit Singal (Navigator)

## Compilation
```
$ git clone https://github.com/kirangit27/TDD_Group4.git
$ cd TDD_Group4
$ cmake -S ./ -B build/
$ cmake --build build/
```
## Testing
```
$ cd build/
$ ctest --test-dir build/
```
## Notes
- The results for cpplint and cppcheck are included in the results folder.
- Doxygen-generated docs are present in the Documentation folder.



