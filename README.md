# 🚀 C Training Workspace

[![C Version](https://img.shields.io/badge/C-17-blue.svg)](https://en.cppreference.com/w/c/17)
[![Build Status](https://img.shields.io/badge/build-passing-brightgreen.svg)](#)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

A dedicated workspace for sharpening **C programming** skills, focusing on low-level concepts, memory management, and advanced features.

---

## 📂 Modules Overview

This repository is organized into specific modules, each targetting a core area of C development:

| Module | Description | Key Concepts |
| :--- | :--- | :--- |
| **[Formatted I/O](./Formatted_Input_Output)** | Handling formatted data stream input and output. | `printf`, `scanf`, Format Specifiers. |
| **[Bitwise Operators](./bitwise_operators)** | Low-level bit manipulation techniques. | AND, OR, XOR, Shifting, Masks. |
| **[Dynamic Arrays](./dynamic_arrays)** | Hand-crafted dynamic memory management. | `malloc`, `realloc`, `free`, Array Resizing. |
| **[Threads](./threads)** | Concurrent programming implementations. | `pthreads`, Mutexes, Race Conditions. |

---

## 🛠️ Getting Started

### Prerequisites

Ensure you have the following installed on your system:

- **Compiler**: `gcc` or `clang` (supporting C17)
- **Build System**: `CMake` (version 3.10 or higher)
- **Make**: Standard GNU Make or equivalent

### Installation & Build

1.  **Clone the repository:**
    ```bash
    git clone https://github.com/yourusername/C_training.git
    cd C_training
    ```

2.  **Generate build files:**
    ```bash
    mkdir build && cd build
    cmake ..
    ```

3.  **Compile the project:**
    ```bash
    make
    ```

---

## 🏗️ Project Structure

```text
.
├── Formatted_Input_Output/ # Formatted I/O (printf/scanf) exercises
├── bitwise_operators/  # Bit manipulation exercises
├── dynamic_arrays/     # Memory management & dynamic structures
├── threads/            # Concurrency and pthreads
├── build/              # Compiled binaries (generated)
└── CMakeLists.txt      # Root build configuration
```

---

## 🎯 Learning Goals

- Master **Formatted I/O** for precise data display and reading.
- Master **Pointer Arithmetic** and memory layout.
- Understand the intricacies of **Bitwise logic** for optimization.
- Build robust **Dynamic Data Structures** from scratch.
- Implement efficient **Multi-threaded** applications using POSIX threads.

---

## 🤝 Contributing

This is a personal learning workspace, but suggestions and improvements are always welcome! Feel free to open an issue or submit a pull request.

---

*Happy Coding!* 💻
