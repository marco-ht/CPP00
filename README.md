# CPP Module 00

This repository contains my implementation of **C++ Module 00**, developed as part of the 42 School curriculum. This is the very first step in the C++ modules series, designed to introduce the fundamentals of **Object-Oriented Programming (OOP)** in C++98 and help transition from C to C++ by exploring the basic building blocks of the language.

**"Namespaces, classes, member functions, stdio streams, initialization lists, static, const, and some other basic concepts"**

## Table of Contents

- [Overview](#overview)
- [General Rules](#general-rules)
- [Exercises](#exercises)
  - [Exercise 00: Megaphone](#exercise-00-megaphone)
  - [Exercise 01: My Awesome PhoneBook](#exercise-01-my-awesome-phonebook)
  - [Exercise 02: The Job Of Your Dreams](#exercise-02-the-job-of-your-dreams)
- [Project Structure](#project-structure)
- [Installation](#installation)
- [Usage](#usage)
- [Acknowledgments](#acknowledgments)
- [Disclaimer](#disclaimer)
- [License](#license)

## Overview

C++ is a general-purpose programming language created by **Bjarne Stroustrup** as an extension of C, also called *"C with Classes"*.  
This module is a **starting point** for learning C++ and OOP principles designed to progressively discover key concepts such as:

- Namespaces  
- Classes and Objects  
- Member Functions  
- Streams (`iostream`)  
- Initialization Lists  
- `static` and `const` keywords  

All exercises in this module must be written in **C++98** and compiled using the appropriate flags.

## General Rules

- **Compilation:**
  - Compile with `c++ -Wall -Wextra -Werror`
  - Code must still compile with `-std=c++98`

- **Formatting & Naming:**
  - Exercises are stored in directories `ex00`, `ex01`, `ex02`, …  
  - Class names in `UpperCamelCase` (e.g., `PhoneBook`, `Contact`)  
  - Source files: `ClassName.cpp`  
  - Header files: `ClassName.hpp`  

- **Allowed / Forbidden:**
  - Allowed: most of the C++ standard library (`iostream`, `string`, etc.)  
  - Forbidden: external libraries, C++11 or newer, Boost, and the functions `printf`, `malloc`, `free`.  
  - Forbidden keywords: `using namespace <ns>`, `friend` (unless explicitly stated)  
  - STL containers and algorithms are only allowed starting from Module 08.  

- **Design Requirements:**
  - Avoid memory leaks when using `new` / `delete`  
  - Each header must be self-contained and protected by include guards  
  - No function implementations inside headers (except templates)

## Exercises

### Exercise 00: Megaphone

**Directory:** `ex00/`  
**Files to turn in:** `Makefile`, `megaphone.cpp`  

Write a simple program that transforms input strings into uppercase.  
If no arguments are provided, it outputs:

```
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```

**Example:**

```sh
$ ./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
$ ./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
$ ./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```

### Exercise 01: My Awesome PhoneBook

**Directory:** `ex01/`  
**Files to turn in:** `Makefile`, `*.cpp`, `*.hpp`

Implement a simple phonebook application with two classes:

**PhoneBook**
- Stores up to 8 contacts in a fixed array
- If the user adds a 9th contact, replace the oldest one

**Contact**
- Stores fields: first name, last name, nickname, phone number, darkest secret

**Program Commands:**
- `ADD` → add a new contact (fields are entered one by one, no empty values allowed)
- `SEARCH` → display all saved contacts in a table with 4 columns (index, first name, last name, nickname)
  - Each column is 10 characters wide, right-aligned
  - Longer values must be truncated with a `.` at the end
  - After listing, the program prompts for an index to display full contact info
- `EXIT` → quit the program
- Any other command is ignored.

### Exercise 02: The Job Of Your Dreams

**Directory:** `ex02/`  
**Files to turn in:** `Makefile`, `Account.cpp`, `Account.hpp`, `tests.cpp`

**Scenario:** you join GlobalBanksters United as a developer and must recreate a lost source file `Account.cpp`.  
You are provided with:
- `Account.hpp` (the header file)
- `tests.cpp` (unit tests)
- A log file containing expected program outputs

**Objective:**
Re-implement the `Account` class in `Account.cpp` so that the output of the tests matches the log file.  
Timestamps will differ, but the structure of the output must be identical.

*Note: This exercise is not mandatory to pass the module, but completing it demonstrates mastery of classes and member functions.*

## Project Structure

```
CPP00/
├── ex00/
│   ├── megaphone.cpp
│   └── Makefile
├── ex01/
│   ├── Contact.hpp
│   ├── Contact.cpp
│   ├── PhoneBook.hpp
│   ├── PhoneBook.cpp
│   ├── main.cpp
│   └── Makefile
├── ex02/
│   ├── Account.hpp
│   ├── Account.cpp
│   ├── tests.cpp
│   └── Makefile
└── README.md
```

## Installation

1. **Clone the Repository:**

   ```sh
   git clone https://github.com/yourusername/CPP00.git
   cd CPP00
   ```

2. **Build the Desired Exercise:**

   ```sh
   cd ex00 && make
   ```

## Usage

### Exercise 00

```sh
./megaphone "Hello World"
```
Output: `HELLO WORLD`

### Exercise 01

```sh
./phonebook
```

Enter `ADD`, `SEARCH`, or `EXIT` at the prompt.

### Exercise 02

```sh
./account
```

Runs it to verify the implementation.

## Acknowledgments

- Thanks to the 42 community, mentors, and fellow students for their guidance and support.
- Special thanks to the C++ documentation and reference materials:
  - [cplusplus.com - string](http://www.cplusplus.com/reference/string/string/)
  - [cplusplus.com - iomanip](http://www.cplusplus.com/reference/iomanip/)

## Disclaimer

**IMPORTANT**:
This project was developed solely as part of the educational curriculum at 42 School. The code in this repository is published only for demonstration purposes to showcase my programming and C++ development skills.

**Academic Integrity Notice**:
It is strictly prohibited to copy or present this code as your own work in any academic submissions at 42 School. Any misuse or uncredited use of this project will be considered a violation of 42 School's academic policies.

## License

This repository is licensed under the Creative Commons - NonCommercial-NoDerivatives (CC BY-NC-ND 4.0) license. You are free to share this repository as long as you:

- Provide appropriate credit.
- Do not use it for commercial purposes.
- Do not modify, transform, or build upon the material.

For further details, please refer to the CC BY-NC-ND 4.0 license documentation.

Developed with dedication and in strict adherence to the high standards of 42 School.
