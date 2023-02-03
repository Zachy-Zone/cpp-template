# cpp-template

## Table of Content 

  - [Table of Content](#table-of-content)
  - [Introduction](#introduction)
  - [Dependencies](#dependencies)
  - [Build](#build)
  - [Run](#run)
  - [Test](#test)
  
  ## Appendix
  - [Parameters List](#parameters-list)


## Introduction
This is the cpp-template

## Dependencies

The following table summarizes the tools and libraries required to run cpp-template.

| Dependencies | Min. version | Recommended version |
| :--- | :--- | :--- |
| **G++** | 9.0 | 12.2  |

## Build
Build using the make file
```shell
make clean ; make release -j $(nproc)
```

## Run
Run the program
```shell
./build/cpp-template
```

## Test
Run the test to check system compatibility
```shell
./build/cpp-template --test
```

## Appendix

## Parameters List
All parameters are optional
```shell
--parameters - List of all valid parameters
--test - Run a test to validate system compatibility
--threads <total_threads> - Total threads to use. Default is the CPU total number of threads
```