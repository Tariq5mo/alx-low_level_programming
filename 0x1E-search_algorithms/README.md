# 0x1E. Search Algorithms

Hey there! I'm an ALX student working on the Search Algorithms project—a core part of my Software Engineering curriculum.

## Learning Objectives

- Understand what a search algorithm is.
- Learn how to implement and explain linear search.
- Learn how to implement and explain binary search.
- Choose the best search algorithm based on specific needs.

## Requirements

- **General:**
  - Editors used: `vi`, `vim`, `emacs`
  - Compilation: All files compiled on Ubuntu 20.04 LTS with `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
  - Each file ends with a new line
  - Code follows the Betty style
  - No global variables and no more than 5 functions per file
  - Only the `printf` function is allowed from the standard library
  - All function prototypes are in `search_algos.h` with proper include guards

## Tasks

### 0. Linear Search (mandatory)

Search for a value in an integer array using linear search.
**Prototype:** `int linear_search(int *array, size_t size, int value);`

### 1. Binary Search (mandatory)

Search for a value in a sorted array using binary search.
**Prototype:** `int binary_search(int *array, size_t size, int value);`

### 2. Big O #0 (mandatory)

Determine the worst-case time complexity of a linear search in an array of size n.

### 3. Big O #1 (mandatory)

Determine the worst-case space complexity of an iterative linear search in an array of size n.

### 4. Big O #2 (mandatory)

Determine the worst-case time complexity for binary search in an array of size n.

### 5. Big O #3 (mandatory)

Determine the worst-case space complexity of binary search in an array of size n.

### 6. Big O #4 (mandatory)

Determine the space complexity of the function `allocate_map(int n, int m)`.

### 7. Jump Search (advanced)

Implement jump search on a sorted array using the square root of its size as the jump step.
**Prototype:** `int jump_search(int *array, size_t size, int value);`

- Print every value that is checked.
- Return the first index where the value is found, or `-1` if not found or if the array is NULL.

## Repository

- **GitHub Repository:** `alx-low_level_programming`
- **Directory:** `0x1E-search_algorithms`
