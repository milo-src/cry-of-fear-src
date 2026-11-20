
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10102b20 <.text+0x101b20>:
10102b20:	55                   	push   ebp
10102b21:	8b ec                	mov    ebp,esp
10102b23:	56                   	push   esi
10102b24:	57                   	push   edi
10102b25:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10102b28:	8b f1                	mov    esi,ecx
10102b2a:	57                   	push   edi
10102b2b:	e8 70 bf f0 ff       	call   0x1000eaa0
10102b30:	85 c0                	test   eax,eax
10102b32:	75 06                	jne    0x10102b3a
10102b34:	5f                   	pop    edi
10102b35:	5e                   	pop    esi
10102b36:	5d                   	pop    ebp
10102b37:	c2 04 00             	ret    0x4
10102b3a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10102b3d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10102b42:	6a 14                	push   0x14
10102b44:	68 98 9a 21 10       	push   0x10219a98
10102b49:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
10102b4f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10102b55:	56                   	push   esi
10102b56:	68 e0 f4 1d 10       	push   0x101df4e0
10102b5b:	85 d2                	test   edx,edx
10102b5d:	74 10                	je     0x10102b6f
10102b5f:	03 c2                	add    eax,edx
10102b61:	8b cf                	mov    ecx,edi
10102b63:	50                   	push   eax
10102b64:	e8 57 82 01 00       	call   0x1011adc0
10102b69:	5f                   	pop    edi
10102b6a:	5e                   	pop    esi
10102b6b:	5d                   	pop    ebp
10102b6c:	c2 04 00             	ret    0x4
10102b6f:	03 01                	add    eax,DWORD PTR [ecx]
10102b71:	8b cf                	mov    ecx,edi
10102b73:	50                   	push   eax
10102b74:	e8 47 82 01 00       	call   0x1011adc0
10102b79:	5f                   	pop    edi
10102b7a:	5e                   	pop    esi
10102b7b:	5d                   	pop    ebp
10102b7c:	c2 04 00             	ret    0x4
