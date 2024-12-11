# Sorting Algorithms

Welcome to the Sorting Algorithms project! This repository contains implementations of various sorting algorithms in C. Each algorithm is implemented in its own file and includes a main function to demonstrate its usage.

## Table of Contents

- [Introduction](#introduction)
- [Algorithms](#algorithms)
	- [Bubble Sort](#bubble-sort)
	- [Selection Sort](#selection-sort)
- [Usage](#usage)
- [Files](#files)
- [License](#license)

## Introduction

Sorting algorithms are fundamental in computer science. They are used to arrange data in a particular order, typically in ascending or descending order. This project provides implementations of some of the most common sorting algorithms.

## Algorithms

### Bubble Sort

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

### Selection Sort

Selection Sort is an in-place comparison sorting algorithm. It has an O(n²) time complexity, making it inefficient on large lists, and generally performs worse than the similar insertion sort. Selection sort is noted for its simplicity and has performance advantages over more complicated algorithms in certain situations.

## Usage

To compile and run any of the sorting algorithms, use the following commands:

```sh
gcc -o bubble_sort 0-bubble_sort.c print_array.c
./bubble_sort

gcc -o selection_sort 2-selection_sort.c print_array.c
./selection_sort
```

## Files

- `0-bubble_sort.c`: Implementation of the Bubble Sort algorithm.
- `2-selection_sort.c`: Implementation of the Selection Sort algorithm.
- `print_array.c`: Utility function to print arrays.
- `sort.h`: Header file containing function prototypes and type definitions.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
