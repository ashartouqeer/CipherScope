
# CipherScope
### Beginner Cryptanalysis Toolkit in C++

CipherScope is a beginner-level cybersecurity project developed using C++. It demonstrates fundamental cryptanalysis techniques through letter frequency analysis and Caesar cipher brute force.

## Features

- Letter frequency counting
- Frequency percentage calculation
- Visual frequency bars
- Ranking letters according to frequency
- Caesar cipher brute force (all 26 shifts)
- User-provided ciphertext input

## Technologies Used

- C++
- Standard C++ Library
- Arrays
- Loops and nested loops
- Conditional statements
- Basic string manipulation

## How It Works

### 1. Frequency Analysis
The program counts the occurrences of each alphabetic character and calculates its percentage in the ciphertext.

### 2. Caesar Cipher Brute Force
The program tests all 26 possible Caesar cipher shifts and displays the resulting plaintext candidates.

## Screenshots

### Frequency Analysis
![Frequency Analysis](screenshots/frequency_analysis.png)

### Caesar Cipher Brute Force
![Caesar Brute Force](screenshots/caesar_bruteforce.png)

## How to Run

1. Download or clone this repository.
2. Open `main.cpp` in a C++ compiler.
3. Compile and run the program.
4. Enter your ciphertext.
5. Select the analysis method.

## Limitations

- Frequency analysis provides statistical information but does not automatically decrypt arbitrary substitution ciphers.
- Caesar brute force only works against Caesar-shift encryption.
- The program currently supports English alphabetic characters.

## Author

Ashar Toqeer

Computer Science Student

---
**Language:** C++
