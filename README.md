# Huffman Encoding – Text Compression Utility

This project implements a file compression and decompression utility using **Huffman Encoding**, a classic algorithm for lossless data compression. The project combines a **C++ core** (for efficient encoding/decoding using STL data structures) with a **Python-based CLI wrapper** for usability. It demonstrates both **algorithmic depth** and **software engineering practices**, including testing, validation, and performance evaluation.

## Table of Contents
- [Introduction](#introduction)
- [Problem Definition](#problem-definition)
- [Features](#features)
- [Installation](#installation)
- [Usage](#usage)
- [Results](#results)
- [References](#references)
- [License](#license)

## Introduction
Data compression is critical for reducing storage requirements and transmission costs in modern computing systems. Huffman Encoding is a **lossless compression technique** that assigns variable-length codes to input characters based on their frequencies, ensuring optimal space efficiency.

This project develops a **file compression tool** leveraging Huffman Encoding with a **C++ backend** and a **Python CLI wrapper**. The implementation reduces file sizes by up to **45–60%**, supports configurable workflows, and validates output correctness through checksum verification.

## Problem Definition
The goal is to implement a tool that:
- **Compresses text files** using Huffman Encoding into a compact binary format.
- **Decompresses compressed files** back to their original form without loss.
- Ensures high performance with efficient data structures.
- Provides a user-friendly command-line interface for execution.

## Features
- **C++ Core:** Efficient Huffman Encoding/Decoding using STL priority queues and hash maps.
- **Python CLI:** Command-line support for compression/decompression with configurable file paths.
- **Lossless Compression:** Up to **60% reduction** in text file sizes while ensuring exact recovery.
- **Performance:** Handles files up to **50MB** with **O(n log n)** time complexity.
- **Robustness:** Includes checksum verification, edge-case handling (empty files, single characters), and multi-dataset validation.

## Installation
### System requirements
- Python 3.8+ (3.9 or 3.10 recommended).
- g++ (C++17 or newer) for compiling the Huffman core.
- `git` for cloning the repository.

### Clone & build
```bash
git clone https://github.com/your-username/huffman-compression.git
cd huffman-compression

# Build C++ core
cd cpp
g++ -std=c++17 -O2 -o huffman main.cpp huffman.cpp

# Go to Python wrapper
cd ../python
pip install -r requirements.txt

```
## References

- **David A. Huffman (1952):** *A Method for the Construction of Minimum-Redundancy Codes*  
- **CLRS Textbook:** *Introduction to Algorithms* (3rd Edition, Chapter on Greedy Algorithms)  
- **C++ STL Documentation:** [cppreference.com](https://en.cppreference.com/)  
- **Huffman Coding Tutorial:** [GeeksforGeeks Article](https://www.geeksforgeeks.org/huffman-coding-greedy-algo-3/)  

---

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
