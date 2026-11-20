
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b4aa0 <.text+0xb3aa0>:
100b4aa0:	55                   	push   ebp
100b4aa1:	8b ec                	mov    ebp,esp
100b4aa3:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100b4aa6:	b9 90 00 00 00       	mov    ecx,0x90
100b4aab:	56                   	push   esi
100b4aac:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100b4aaf:	57                   	push   edi
100b4ab0:	bf 48 2f 22 10       	mov    edi,0x10222f48
100b4ab5:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100b4ab7:	5f                   	pop    edi
100b4ab8:	a3 88 31 22 10       	mov    ds:0x10223188,eax
100b4abd:	5e                   	pop    esi
100b4abe:	5d                   	pop    ebp
100b4abf:	c2 08 00             	ret    0x8
