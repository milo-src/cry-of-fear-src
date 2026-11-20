
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100d1a30 <.text+0xd0a30>:
100d1a30:	55                   	push   ebp
100d1a31:	8b ec                	mov    ebp,esp
100d1a33:	56                   	push   esi
100d1a34:	57                   	push   edi
100d1a35:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100d1a38:	8b f1                	mov    esi,ecx
100d1a3a:	57                   	push   edi
100d1a3b:	e8 a0 d3 04 00       	call   0x1011ede0
100d1a40:	85 c0                	test   eax,eax
100d1a42:	75 06                	jne    0x100d1a4a
100d1a44:	5f                   	pop    edi
100d1a45:	5e                   	pop    esi
100d1a46:	5d                   	pop    ebp
100d1a47:	c2 04 00             	ret    0x4
100d1a4a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100d1a4d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100d1a52:	6a 03                	push   0x3
100d1a54:	68 bc 7a 21 10       	push   0x10217abc
100d1a59:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
100d1a5f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100d1a65:	56                   	push   esi
100d1a66:	68 0c 7b 1d 10       	push   0x101d7b0c
100d1a6b:	85 d2                	test   edx,edx
100d1a6d:	74 10                	je     0x100d1a7f
100d1a6f:	03 c2                	add    eax,edx
100d1a71:	8b cf                	mov    ecx,edi
100d1a73:	50                   	push   eax
100d1a74:	e8 47 93 04 00       	call   0x1011adc0
100d1a79:	5f                   	pop    edi
100d1a7a:	5e                   	pop    esi
100d1a7b:	5d                   	pop    ebp
100d1a7c:	c2 04 00             	ret    0x4
100d1a7f:	03 01                	add    eax,DWORD PTR [ecx]
100d1a81:	8b cf                	mov    ecx,edi
100d1a83:	50                   	push   eax
100d1a84:	e8 37 93 04 00       	call   0x1011adc0
100d1a89:	5f                   	pop    edi
100d1a8a:	5e                   	pop    esi
100d1a8b:	5d                   	pop    ebp
100d1a8c:	c2 04 00             	ret    0x4
