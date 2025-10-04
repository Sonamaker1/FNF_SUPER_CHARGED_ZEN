@echo off
setlocal EnableDelayedExpansion
set command=gcc -o main
	for /r %%i in (*.c) do (
		set command=!command! "%%i"
	)
set command=!command! -I./headers -L./lib -lraylibdll
!command!
pause