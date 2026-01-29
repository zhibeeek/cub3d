# cub3d
# 🧠 Cub3D — Backend / C Logic Responsibility

## 👤 My Role
I am responsible for the **backend and core C logic** of the Cub3D project.  
My focus is on **C fundamentals**: memory management, parsing, validation, data structures, and clean program architecture.  
I do **not** handle raycasting or graphics-heavy logic.

---

## 📁 File Parsing & Input Handling

### ☐ `.cub` File Parsing
- ☐ Open the file safely
- ☐ Read line by line
- ☐ Ignore empty lines correctly
- ☐ Detect invalid file structure
- ☐ Print clear error messages
- ☐ Exit cleanly with proper cleanup

---

## 🗺️ Map Parsing & Validation

### ☐ Map Storage
- ☐ Store the map as `char **`
- ☐ Track map width and height
- ☐ Normalize uneven row lengths
- ☐ Prevent out-of-bounds access

### ☐ Map Validation Rules
- ☐ Map is fully enclosed by walls
- ☐ Only allowed characters are present (`0`, `1`, `N`, `S`, `E`, `W`)
- ☐ Exactly one player starting position
- ☐ No memory leaks on invalid maps

---

## 🧍 Player Data & Movement Logic

### ☐ Player Initialization
- ☐ Extract player position from the map
- ☐ Store initial direction
- ☐ Remove player marker from the map
- ☐ Initialize movement parameters

### ☐ Movement & Collision
- ☐ Forward / backward movement
- ☐ Left / right strafing (logic only)
- ☐ Wall collision detection
- ☐ No access outside map boundaries

---

## 🧠 Data Structures & Architecture

- ☐ Define `t_map` struct
- ☐ Define `t_player` struct
- ☐ Define main `t_game` (or `t_data`) struct
- ☐ Clear ownership of allocated memory
- ☐ No unnecessary global variables

---

## 🧹 Memory Management

- ☐ Every `malloc` has a matching `free`
- ☐ Free map memory correctly
- ☐ Free parsed configuration data
- ☐ Clean exit on error
- ☐ Tested with `valgrind`

---

## ⚠️ Error Handling

- ☐ Invalid file format
- ☐ Invalid map layout
- ☐ Multiple or missing player start
- ☐ Allocation failures
- ☐ Graceful shutdown with cleanup

---

## 🧰 Utility Functions

- ☐ String helpers (`split`, `trim`, etc.)
- ☐ Safe allocation wrappers
- ☐ Validation helpers
- ☐ No duplicated logic

---

## 🤝 Interface With Graphics Part

- ☐ Backend exposes clean, read-only structs
- ☐ Rendering code does not modify map/player data
- ☐ Clear separation between logic and rendering
- ☐ Backend works independently of rendering

---

## 📏 Code Quality & Norm

- ☐ Norm-compliant code
- ☐ Functions kept small and focused
- ☐ Clear and consistent naming
- ☐ Logical file separation
- ☐ No dead or unused code

---

## 🧪 Testing Strategy

- ☐ Test parsing independently
- ☐ Test invalid maps and edge cases
- ☐ Test movement logic without rendering
- ☐ Verify no memory leaks

---

## ✅ Completion Criteria

- ☐ Backend runs without graphics
- ☐ No crashes or leaks
- ☐ All errors handled gracefully
- ☐ Clean handoff to rendering module

---

> **Design principle:**  
> Graphics may change, but **correct C logic, memory safety, and validation are mandatory**.
