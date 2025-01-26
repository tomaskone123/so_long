# so_long

**so_long** is a simple 2D game project developed as part of the 42 Network curriculum. It focuses on implementing basic game mechanics, graphics rendering, and memory management using the **MLX42** library. The goal of this project is to create a small game while adhering to specific coding and performance requirements.

---

## Table of Contents
1. [About the Project](#about-the-project)
2. [Features](#features)
3. [Getting Started](#getting-started)
4. [Acknowledgments](#acknowledgments)

---

## About the Project

In **so_long**, the player navigates a small character through a maze-like map. The goal is to collect all collectible items, avoid obstacles, and reach the exit. The game demonstrates the use of **2D graphics**, basic game physics, and **event handling**.

This project emphasizes:
- **Mastery of memory management** to avoid leaks.
- **Handling input events** such as keyboard inputs.
- **Using the MLX42 library** to render graphics and display animations.

---

## Features

- 2D grid-based map system.
- Player movement with real-time updates.
- Collectible items that the player must pick up before exiting.
- Error handling for invalid maps and edge cases.
- Smooth graphics rendering using **MLX42**.
- Basic animations for the player and environment.

---

## Getting Started

### Prerequisites

- **MLX42**: Ensure you have MLX42 installed. Follow the [MLX42 documentation](https://github.com/codam-coding-college/MLX42) for installation instructions.
- **C compiler**: GCC or Clang is recommended.
- **Make**: For compiling the project.

---

## Controls

- **W** / **Arrow Up**: Move up.
- **A** / **Arrow Left**: Move left.
- **S** / **Arrow Down**: Move down.
- **D** / **Arrow Right**: Move right.
- **ESC**: Exit the game.

---

## Map Format

The game accepts maps in `.ber` format. Each map must follow these rules:
- The map must be rectangular.
- It must be surrounded by walls (`1`).
- It must contain at least:
  - One player starting position (`P`).
  - One exit (`E`).
  - One collectible item (`C`).

---

## Installation

1. Clone this repository:
   ```bash
   git clone https://github.com/tomaskone123/so_long.git
   cd so_long
   make
   ./so_long path/to/your_map.ber

---

## Acknowledgments

  - Thanks to the 42 Network for this project concept.
  - The MLX42 library for graphics rendering.
  - My peers for their support and feedback during development.
