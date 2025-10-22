# Simple Shell

**Author:** Yvan-David  

---

## 📖 Project Overview

**Simple Shell** is a lightweight command-line interpreter written in **C**.  
It mimics the behavior of a basic Unix shell, allowing users to execute commands, navigate directories, and manage processes. This project is a demonstration of low-level system programming and process management in C.

The shell supports:

- Executing system commands (e.g., `ls`, `pwd`, `echo`)
- Command parsing and tokenization
- Handling arguments and multiple inputs
- Exiting the shell cleanly using `exit` or `Ctrl+D`

This project is designed to deepen understanding of:

- Process creation with `fork()`
- Program execution with `exec()` family functions
- Input/output handling
- Memory management in C

---

## 🛠️ Features

| Feature | Description |
|---------|-------------|
| Command execution | Run any executable available in the system PATH |
| Argument support | Pass arguments to commands, e.g., `ls -l /tmp` |
| Exit | Type `exit` or `Ctrl+D` to quit the shell |
| Error handling | Displays an error message if a command cannot be executed |

---

## 💻 Installation

1. **Clone the repository**
```bash
git clone https://github.com/YOUR_USERNAME/SimpleShell.git
cd SimpleShell
