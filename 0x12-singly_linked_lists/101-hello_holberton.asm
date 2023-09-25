SECTION .data
	m:	db "Hello, Holberton", 0
	f:	db "%s", 10, 0

SECTION .text
		extern printf
		global main
	main:
		mov esi, m
		mov edi, f
		mov eax, 0
		call printf

		mov eax, 0
		ret
