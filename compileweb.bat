@echo off
setlocal enabledelayedexpansion
call deletetildes.bat
echo.
echo Finding all CPP files...
set "cpp_files="
cd src
for %%f in (*.cpp) do (
	if defined cpp_files (
		set "cpp_files=!cpp_files! %%f"
	) else (
		set "cpp_files=%%f"
	)
)
cd..
echo Done.
echo.
echo CPP Files : %cpp_files%
echo.
echo Compiling...
cd src

em++ -o ../bin/gamething.html %cpp_files% -lraylib -Os -Wall -L ../lib/raylib_wasm/lib -I ../lib/raylib_wasm/include -s USE_GLFW=3 -s ASYNCIFY -DPLATFORM_WEB

echo Done.
cd..
endlocal
