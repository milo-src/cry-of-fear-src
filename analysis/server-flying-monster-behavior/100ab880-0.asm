
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ab880 <.text+0xaa880>:
100ab880:	55                   	push   ebp
100ab881:	8b ec                	mov    ebp,esp
100ab883:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100ab886:	83 b8 08 01 00 00 05 	cmp    DWORD PTR [eax+0x108],0x5
100ab88d:	75 0c                	jne    0x100ab89b
100ab88f:	8b 81 74 03 00 00    	mov    eax,DWORD PTR [ecx+0x374]
100ab895:	89 81 f0 00 00 00    	mov    DWORD PTR [ecx+0xf0],eax
100ab89b:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100ab8a0:	51                   	push   ecx
100ab8a1:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100ab8a6:	e8 a5 4e 01 00       	call   0x100c0750
100ab8ab:	5d                   	pop    ebp
100ab8ac:	c2 04 00             	ret    0x4
