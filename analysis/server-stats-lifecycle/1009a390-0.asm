
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1009a390 <.text+0x99390>:
1009a390:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1009a393:	6a 00                	push   0x0
1009a395:	8b 88 d8 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d8]
1009a39b:	85 c9                	test   ecx,ecx
1009a39d:	74 18                	je     0x1009a3b7
1009a39f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1009a3a4:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1009a3aa:	03 c1                	add    eax,ecx
1009a3ac:	50                   	push   eax
1009a3ad:	ff 15 60 2f 22 10    	call   DWORD PTR ds:0x10222f60
1009a3b3:	83 c4 08             	add    esp,0x8
1009a3b6:	c3                   	ret
1009a3b7:	68 84 a0 1c 10       	push   0x101ca084
1009a3bc:	ff 15 60 2f 22 10    	call   DWORD PTR ds:0x10222f60
1009a3c2:	83 c4 08             	add    esp,0x8
1009a3c5:	c3                   	ret
