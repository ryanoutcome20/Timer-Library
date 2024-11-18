# Timer-Library

Timer-Library is a simple lightweight library that brings timer & timing functionality to the C programming language. Simply include the header file ("*timers.h*"). This isn't a perfect solution to the problem as I had trouble trying to get a perfect fix. See the note inside of the TCreate function for more information.

## Features
  - **Timing Functionality**: The ability to setup a timer to execute a function when the timer is completed.
  - **Restarting Functionality**: The ability to restart completed timer objects by simply calling a single function.

## Getting Started

### Prerequisites

Before you begin, make sure you have the following installed on your system:

- [GCC](https://gcc.gnu.org/) or similar C compiler.

Afterwhich ensure your compiler supports the C99 or newer standard. Use the -std=c99 flag with GCC if needed.

### Installation

1. Cloning the repository:
   ```bash
   git clone https://github.com/ryanoutcome20/Timer-Library.git
   ```
2. Copy the "*timers.h*" and "*timers.c*" file to your working directory.
3. Include the header file in your project:
  ```c
  #include "timers.h"
  ```

### Usage

For a full usage documentation refer to both the *tests* folder and documentation. Full documentation is auto-generated using [Doxygen](https://www.doxygen.nl/manual/starting.html). See the docs folder or generate it yourself using the provided Doxyfile. The header file contains special information that you can read as well.

### Contributing

If you find a bug or want to add a new feature, feel free to fork the repository and submit a pull request. This is mainly an internal tool for me to use so it may take a bit for your request to be merged.

## License

This project is licensed under the GNU General Public License v3.0 - see the [LICENSE](./LICENSE) file for more details.
