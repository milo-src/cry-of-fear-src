
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c7d40 <.text+0xc6d40>:
100c7d40:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c7d45:	56                   	push   esi
100c7d46:	57                   	push   edi
100c7d47:	be 01 00 00 00       	mov    esi,0x1
100c7d4c:	33 ff                	xor    edi,edi
100c7d4e:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
100c7d54:	7c 1d                	jl     0x100c7d73
100c7d56:	56                   	push   esi
100c7d57:	e8 24 19 05 00       	call   0x10119680
100c7d5c:	83 c4 04             	add    esp,0x4
100c7d5f:	85 c0                	test   eax,eax
100c7d61:	74 01                	je     0x100c7d64
100c7d63:	47                   	inc    edi
100c7d64:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100c7d6a:	46                   	inc    esi
100c7d6b:	3b b1 90 00 00 00    	cmp    esi,DWORD PTR [ecx+0x90]
100c7d71:	7e e3                	jle    0x100c7d56
100c7d73:	8b c7                	mov    eax,edi
100c7d75:	5f                   	pop    edi
100c7d76:	5e                   	pop    esi
100c7d77:	c3                   	ret
