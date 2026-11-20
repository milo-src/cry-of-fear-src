
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fa450 <.text+0xf9450>:
100fa450:	55                   	push   ebp
100fa451:	8b ec                	mov    ebp,esp
100fa453:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100fa456:	f6 80 a4 01 00 00 20 	test   BYTE PTR [eax+0x1a4],0x20
100fa45d:	75 09                	jne    0x100fa468
100fa45f:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100fa462:	89 81 bc 03 00 00    	mov    DWORD PTR [ecx+0x3bc],eax
100fa468:	5d                   	pop    ebp
100fa469:	c2 04 00             	ret    0x4
