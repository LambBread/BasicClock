@echo off
call deletetildes.bat
cmake -S . -B build
cmake --build build --config Release
