# SWE-350 Milestone 2: Embedded Application Release 1

**Author:** Elijah Kabwe  
**Date:** November 7, 2026  
**Course:** SWE-350 – Embedded Systems  

## Overview
This repository contains the C source code for Milestone 2. The application implements bitwise operations for 32-bit decimal-to-binary conversion, basic bitwise logic gates (AND, OR), and a 7-segment decoder lookup table targeting the ARM HPS / DE10-Standard platform.

## Deliverable Links
- **GitHub Repository:** https://github.com/ComputingCoder-123/Milestone-2.git
- **Demonstration Screencast:** https://docs.google.com/videos/u/0/d/1oRfiIhy0nkfpQvW6-ItEUNkc08W1Z4GNyupkVJVUz5I/play?usp=chrome_extension_sharing 

## Project Structure
- `main.c`: Primary C source file containing bitwise algorithms and test suite execution.
- `Makefile`: Build configuration file for compiling the application using GCC.
- `Design_Report.docx`: Technical design specification and test plan documentation.

## How to Build and Run
1. Open terminal in the project directory.
2. Compile using GCC:
   ```bash
   gcc main.c -o milestone2