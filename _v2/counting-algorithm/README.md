# Counting Algorithm Project

## Overview

This project implements a counting algorithm using linked lists for stack management. The counting algorithm is an efficient sorting technique that counts the occurrences of each unique element in the input data and uses this information to determine the position of each element in the sorted output.

## Project Structure

```
counting-algorithm
├── src
│   ├── main.c
│   ├── stack.c
│   ├── stack.h
│   ├── counting_algorithm.c
│   └── counting_algorithm.h
├── Makefile
└── README.md
```

## Files Description

- **src/main.c**: Entry point of the application. Initializes the program, manages input, and calls functions to perform the counting algorithm.
  
- **src/stack.c**: Implements the linked list data structure for the stack. Includes functions for creating a stack, pushing elements, popping elements, and checking if the stack is empty.

- **src/stack.h**: Header file that defines the structure for the linked list node and declares the functions implemented in `stack.c`.

- **src/counting_algorithm.c**: Contains the implementation of the counting algorithm. Utilizes the stack to perform counting sort based on the linked list structure.

- **src/counting_algorithm.h**: Header file that declares the functions related to the counting algorithm, allowing them to be used in other source files.

- **Makefile**: Contains build instructions for compiling the project, specifying source files, compiler options, and targets for building the executable.

## Building the Project

To build the project, navigate to the project directory and run:

```
make
```

This will compile the source files and create the executable.

## Running the Project

After building, you can run the program with:

```
./counting_algorithm <input_file>
```

Replace `<input_file>` with the path to the file containing the numbers to be sorted.

## Example Usage

1. Create a text file named `input.txt` with the following content:
   ```
   4
   2
   3
   1
   5
   ```

2. Run the program:
   ```
   ./counting_algorithm input.txt
   ```

3. The sorted output will be displayed.

## License

This project is licensed under the MIT License. See the LICENSE file for details.