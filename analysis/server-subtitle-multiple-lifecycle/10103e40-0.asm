
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10103e40 <.text+0x102e40>:
10103e40:	55                   	push   ebp
10103e41:	8b ec                	mov    ebp,esp
10103e43:	56                   	push   esi
10103e44:	57                   	push   edi
10103e45:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10103e48:	8b f1                	mov    esi,ecx
10103e4a:	57                   	push   edi
10103e4b:	e8 b0 41 f1 ff       	call   0x10018000
10103e50:	85 c0                	test   eax,eax
10103e52:	75 06                	jne    0x10103e5a
10103e54:	5f                   	pop    edi
10103e55:	5e                   	pop    esi
10103e56:	5d                   	pop    ebp
10103e57:	c2 04 00             	ret    0x4
10103e5a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10103e5d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10103e62:	6a 04                	push   0x4
10103e64:	68 d8 9b 21 10       	push   0x10219bd8
10103e69:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
10103e6f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10103e75:	56                   	push   esi
10103e76:	68 50 f7 1d 10       	push   0x101df750
10103e7b:	85 d2                	test   edx,edx
10103e7d:	74 10                	je     0x10103e8f
10103e7f:	03 c2                	add    eax,edx
10103e81:	8b cf                	mov    ecx,edi
10103e83:	50                   	push   eax
10103e84:	e8 37 6f 01 00       	call   0x1011adc0
10103e89:	5f                   	pop    edi
10103e8a:	5e                   	pop    esi
10103e8b:	5d                   	pop    ebp
10103e8c:	c2 04 00             	ret    0x4
10103e8f:	03 01                	add    eax,DWORD PTR [ecx]
10103e91:	8b cf                	mov    ecx,edi
10103e93:	50                   	push   eax
10103e94:	e8 27 6f 01 00       	call   0x1011adc0
10103e99:	5f                   	pop    edi
10103e9a:	5e                   	pop    esi
10103e9b:	5d                   	pop    ebp
10103e9c:	c2 04 00             	ret    0x4
