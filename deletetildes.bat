@echo off
::script for deleting vim's files
setlocal enabledelayedexpansion
echo Deleting all files ending with tildes...
set "deleted_count=0"
for /r %%f in (*~) do (
	if exist "%%f" (
		del "%%f"
		set /a "deleted_count+=1"
		echo Deleted: %%f
	)
)
echo.
echo Operation complete.
echo Total files deleted: %deleted_count%

endlocal
