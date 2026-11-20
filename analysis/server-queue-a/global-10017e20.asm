
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10017e20 <.text+0x16e20>:
10017e20:	56                   	push   esi
10017e21:	8b f1                	mov    esi,ecx
10017e23:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10017e26:	81 88 a8 01 00 00 00 	or     DWORD PTR [eax+0x1a8],0x80000000
10017e2d:	00 00 80 
10017e30:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10017e33:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
10017e3a:	00 00 00 
10017e3d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10017e40:	c7 80 08 01 00 00 00 	mov    DWORD PTR [eax+0x108],0x0
10017e47:	00 00 00 
10017e4a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10017e4d:	81 88 18 01 00 00 80 	or     DWORD PTR [eax+0x118],0x80
10017e54:	00 00 00 
10017e57:	e8 74 fc ff ff       	call   0x10017ad0
10017e5c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10017e5f:	83 c0 08             	add    eax,0x8
10017e62:	50                   	push   eax
10017e63:	56                   	push   esi
10017e64:	e8 77 21 10 00       	call   0x10119fe0
10017e69:	83 c4 08             	add    esp,0x8
10017e6c:	5e                   	pop    esi
10017e6d:	c3                   	ret
