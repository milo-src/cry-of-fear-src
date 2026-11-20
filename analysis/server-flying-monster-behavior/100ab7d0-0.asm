
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ab7d0 <.text+0xaa7d0>:
100ab7d0:	55                   	push   ebp
100ab7d1:	8b ec                	mov    ebp,esp
100ab7d3:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100ab7d6:	8b 02                	mov    eax,DWORD PTR [edx]
100ab7d8:	83 e8 08             	sub    eax,0x8
100ab7db:	74 46                	je     0x100ab823
100ab7dd:	83 e8 01             	sub    eax,0x1
100ab7e0:	74 09                	je     0x100ab7eb
100ab7e2:	89 55 08             	mov    DWORD PTR [ebp+0x8],edx
100ab7e5:	5d                   	pop    ebp
100ab7e6:	e9 25 3b 01 00       	jmp    0x100bf310
100ab7eb:	8b 81 80 03 00 00    	mov    eax,DWORD PTR [ecx+0x380]
100ab7f1:	85 c0                	test   eax,eax
100ab7f3:	74 38                	je     0x100ab82d
100ab7f5:	6a 64                	push   0x64
100ab7f7:	6a 00                	push   0x0
100ab7f9:	83 ec 08             	sub    esp,0x8
100ab7fc:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100ab803:	3f 
100ab804:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100ab80b:	50                   	push   eax
100ab80c:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100ab80f:	6a 04                	push   0x4
100ab811:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100ab817:	e8 d4 11 05 00       	call   0x100fc9f0
100ab81c:	83 c4 1c             	add    esp,0x1c
100ab81f:	5d                   	pop    ebp
100ab820:	c2 04 00             	ret    0x4
100ab823:	c7 81 74 03 00 00 00 	mov    DWORD PTR [ecx+0x374],0x43c80000
100ab82a:	00 c8 43 
100ab82d:	5d                   	pop    ebp
100ab82e:	c2 04 00             	ret    0x4
