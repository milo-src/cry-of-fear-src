
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000f1a0 <.text+0xe1a0>:
1000f1a0:	55                   	push   ebp
1000f1a1:	8b ec                	mov    ebp,esp
1000f1a3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000f1a6:	85 c0                	test   eax,eax
1000f1a8:	75 14                	jne    0x1000f1be
1000f1aa:	68 a8 33 1a 10       	push   0x101a33a8
1000f1af:	6a 04                	push   0x4
1000f1b1:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000f1b7:	83 c4 08             	add    esp,0x8
1000f1ba:	33 c0                	xor    eax,eax
1000f1bc:	5d                   	pop    ebp
1000f1bd:	c3                   	ret
1000f1be:	8b 80 8c 00 00 00    	mov    eax,DWORD PTR [eax+0x8c]
1000f1c4:	5d                   	pop    ebp
1000f1c5:	c3                   	ret
