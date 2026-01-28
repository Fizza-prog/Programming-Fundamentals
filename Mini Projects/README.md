# 🎯 Mini Projects - 1st Semester Programming

## 📌 Overview
This folder contains **major programming projects** completed during my **1st semester (2024)**. These projects demonstrate **practical application** of C++ programming concepts.

## 📋 Projects List

### 1. 🏫 Student Management System
- **📄 File:** `student_management_system.cpp`
- **💻 Language:** C++
- **📝 Description:** A **complete console-based system** to manage student records using **structures and arrays**.
- **✨ Features:**
  - ✅ Add new student records
  - ✅ View all students
  - ✅ Search student by roll number
  - ✅ Update student information
  - ✅ Delete student records
  - ✅ Array-based storage (up to 100 students)
- **🧠 Concepts Used:** Structures, Arrays, Functions, Control Flow

### 2. 🎮 Tic-Tac-Toe Game
- **📄 File:** `tic-tac-toe.cpp`
- **💻 Language:** C++
- **📝 Description:** An **interactive console-based** Tic-Tac-Toe game with **sound effects and colorful interface**.
- **✨ Features:**
  - ✅ Color-coded board display
  - ✅ Sound effects for different actions
  - ✅ Input validation
  - ✅ Win detection algorithm
  - ✅ Play again option
  - ✅ ASCII art interface
- **🧠 Concepts Used:** 2D Arrays, Functions, Windows API, Game Logic

## 🚀 How to Run

### 🪟 For Windows:
1. **Compile:**
   ```bash
   g++ student_management_system.cpp -o sms
   g++ tic-tac-toe.cpp -o tictactoe
   ```
2. **Run:**
   ```bash
   ./sms.exe
   ./tictactoe.exe
   ```

### 🐧 For Linux/Mac:
Remove Windows-specific headers (`windows.h`, `Beep`) from Tic-Tac-Toe first.

## 📚 Programming Concepts Demonstrated

### 🏫 Student Management System:
- **📊 Data Structures:** Arrays of Structures
- **💾 File I/O:** (Can be extended for file saving)
- **🧩 Modular Programming:** Separate functions for each operation
- **🖥️ User Interface:** Menu-driven console application

### 🎮 Tic-Tac-Toe Game:
- **🎯 Game Development:** Game loop, win condition checking
- **😊 User Experience:** Color coding, sound feedback
- ✅ **Input Validation:** Preventing invalid moves
- **🧩 Code Organization:** Multiple helper functions

## 🛠️ Technical Details

### 🏫 Student Management System:
```c++
struct Student {
    int roll;
    string name;
    float marks;
};
// Capacity: 100 students
// Operations: CRUD (Create, Read, Update, Delete)
```

### 🎮 Tic-Tac-Toe Game:
```c++
// Features included:
// - Beep() for sound effects
// - SetConsoleTextAttribute() for colors
// - 3x3 board representation
// - Turn-based gameplay
```

## 📊 Learning Outcomes
- ✅ **Practical application** of C++ fundamentals
- ✅ **Problem-solving** with real-world scenarios
- ✅ **Code organization** and modular design
- ✅ **User interface design** for console applications
- ✅ **Debugging and testing** complex programs

## 🔄 Future Improvements
1. **🏫 Student Management:** Add file persistence, sorting, GPA calculation
2. **🎮 Tic-Tac-Toe:** Add AI opponent, save game history, GUI version

## 📝 Notes
- Both programs are **✅ complete and runnable**
- Tested on **🪟 Windows 10/11** with Dev-C++/Code::Blocks
- No external libraries required (except Windows.h for sounds)

---
*📅 Last Updated: 2024 | 🎓 1st Semester Portfolio*
