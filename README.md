# My First Kernel Module

Welcome to the **First Kernel Module** repository! This is a simple Linux kernel module written as part of my exploration into Linux kernel development. This module logs some messages to the kernel logs when loaded and unloaded, and serves as an assignment [Project 1]to build a basic kernel module that interacts with the Linux kernel log system.

## Table of Contents
- [Overview](#overview)
- [Requirements](#requirements)
- [How to Build](#how-to-build)
- [How to Use](#how-to-use)
- [License](#license)
- [Acknowledgements](#acknowledgements)

## Overview

This kernel module is designed for educational purposes. It serves as a basic introduction to the world of Linux kernel development and shows how to:
- Write and load a kernel module.
- Print messages to the kernel log.
- Use kernel module loading and unloading functions.

### Key Features:
- **Loading the module** prints a message to the kernel log (`dmesg`).
- **Unloading the module** prints a goodbye message to the kernel log.
- Demonstrates the **basic structure** of a Linux kernel module.

Upon loading, the module prints some kernel messages in the kernel space as taught in class.


### Lecturer
**Engineer Andropov Ajebua**

### Student
**Ojage Salathiel**

## Requirements

Before you can build and run this module, ensure you have the following:

- **Linux system** with kernel development support (I used Ubuntu 22.04 installed on a VM.).
- **Kernel headers** for the current kernel version. Install them using:
  ```bash
  sudo apt update
  sudo apt install linux-headers-$(uname -r)
