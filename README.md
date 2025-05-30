# 🎯 Custom Compiler

This repository contains a **custom-built compiler** developed in `C`, created as part of our **Project-Based Learning (PBL)** assignment for the *Compiler Construction* course at **Graphic Era University** 🏫.

📄 The compiler follows the rules defined in the provided `Language_Specifications.pdf` and processes input source files accordingly. If the input passes **both syntax and semantic checks**, the compiler generates equivalent **assembly-level output** 🛠️.
👉 Sample input programs are available in the `Compiler/testcases/` folder.

> ✅ **Note:** The compiler is built for **GCC 5.4.0** and tested on **Ubuntu 16.04**.  
> 🪟 For Windows, install [Cygwin](https://www.cygwin.com/) to run the compiler.

---

## ⚙️ How to Build the Compiler

```bash
cd Compiler
make


✔️ This creates an executable named `compiler` in the same directory.

---

## 🚀 Running the Compiler with Testcases

```bash
./compiler <path-to-testcase-file> <output-asm-file-name>
```

📋 After running, a menu appears with 11 options.
🔢 Select the option to perform the task:

* Choose `10` to generate **assembly code**.
* Choose `0` to **exit** safely.
  *(Note: Ctrl + C may leave the `.asm` file empty)*

🛠️ Example to compile and run the generated ASM:

```bash
nasm -felf64 code.asm
gcc code.o
./a.out
```

---

## 🧩 Compiler Workflow (Option 10)

| 🔄 **Phase**         | 📝 **Description**                                                                |
| -------------------- | --------------------------------------------------------------------------------- |
| 🧊 Lexical Analysis  | Scans input and breaks it into tokens based on the defined rules.                 |
| 🧱 Syntax Analysis   | Builds a parse tree from tokens. Halts on any syntax errors.                      |
| 🧠 Semantic Analysis | Forms an Abstract Syntax Tree (AST) and builds a symbol table.                    |
| ⚙️ Code Generation   | Produces x86-64 assembly for valid programs. Supports only `main()` and integers. |

---
## 👨‍💻 **Author**

**Raghav Shukla**
📌 [GitHub Profile](https://github.com/raghavshuklaofficial)

---

## 📄 **License**

This project is licensed under the **MIT License**. See the [LICENSE](LICENSE) file for details.

---
---

📌 *Academic project focused on compiler design using C — highlighting all major compilation phases from lexical to code generation.*

```
