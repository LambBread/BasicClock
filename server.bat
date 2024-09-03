@echo off
cd bin
echo Starting server on port 6969...
python -m http.server 6969
cd..
