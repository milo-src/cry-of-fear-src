
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10016a30 <.text+0x15a30>:
10016a30:	55                   	push   ebp
10016a31:	8b ec                	mov    ebp,esp
10016a33:	56                   	push   esi
10016a34:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10016a37:	85 f6                	test   esi,esi
10016a39:	74 3d                	je     0x10016a78
10016a3b:	8b 76 7c             	mov    esi,DWORD PTR [esi+0x7c]
10016a3e:	85 f6                	test   esi,esi
10016a40:	74 36                	je     0x10016a78
10016a42:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10016a45:	83 b9 a8 01 00 00 00 	cmp    DWORD PTR [ecx+0x1a8],0x0
10016a4c:	7d 1e                	jge    0x10016a6c
10016a4e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016a53:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10016a59:	03 01                	add    eax,DWORD PTR [ecx]
10016a5b:	50                   	push   eax
10016a5c:	68 90 60 1a 10       	push   0x101a6090
10016a61:	6a 04                	push   0x4
10016a63:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10016a69:	83 c4 0c             	add    esp,0xc
10016a6c:	8b 06                	mov    eax,DWORD PTR [esi]
10016a6e:	8b ce                	mov    ecx,esi
10016a70:	5e                   	pop    esi
10016a71:	5d                   	pop    ebp
10016a72:	ff a0 e0 00 00 00    	jmp    DWORD PTR [eax+0xe0]
10016a78:	5e                   	pop    esi
10016a79:	5d                   	pop    ebp
10016a7a:	c3                   	ret
