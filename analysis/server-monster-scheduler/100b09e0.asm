
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b09e0 <.text+0xaf9e0>:
100b09e0:	55                   	push   ebp
100b09e1:	8b ec                	mov    ebp,esp
100b09e3:	56                   	push   esi
100b09e4:	57                   	push   edi
100b09e5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100b09e8:	8b f1                	mov    esi,ecx
100b09ea:	57                   	push   edi
100b09eb:	e8 d0 14 01 00       	call   0x100c1ec0
100b09f0:	85 c0                	test   eax,eax
100b09f2:	75 06                	jne    0x100b09fa
100b09f4:	5f                   	pop    edi
100b09f5:	5e                   	pop    esi
100b09f6:	5d                   	pop    ebp
100b09f7:	c2 04 00             	ret    0x4
100b09fa:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b09fd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b0a02:	6a 04                	push   0x4
100b0a04:	68 78 69 21 10       	push   0x10216978
100b0a09:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
100b0a0f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100b0a15:	56                   	push   esi
100b0a16:	68 b0 e5 1c 10       	push   0x101ce5b0
100b0a1b:	85 d2                	test   edx,edx
100b0a1d:	74 10                	je     0x100b0a2f
100b0a1f:	03 c2                	add    eax,edx
100b0a21:	8b cf                	mov    ecx,edi
100b0a23:	50                   	push   eax
100b0a24:	e8 97 a3 06 00       	call   0x1011adc0
100b0a29:	5f                   	pop    edi
100b0a2a:	5e                   	pop    esi
100b0a2b:	5d                   	pop    ebp
100b0a2c:	c2 04 00             	ret    0x4
100b0a2f:	03 01                	add    eax,DWORD PTR [ecx]
100b0a31:	8b cf                	mov    ecx,edi
100b0a33:	50                   	push   eax
100b0a34:	e8 87 a3 06 00       	call   0x1011adc0
100b0a39:	5f                   	pop    edi
100b0a3a:	5e                   	pop    esi
100b0a3b:	5d                   	pop    ebp
100b0a3c:	c2 04 00             	ret    0x4
