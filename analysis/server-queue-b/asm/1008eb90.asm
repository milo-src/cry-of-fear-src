
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008eb90 <.text+0x8db90>:
1008eb90:	55                   	push   ebp
1008eb91:	8b ec                	mov    ebp,esp
1008eb93:	56                   	push   esi
1008eb94:	57                   	push   edi
1008eb95:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1008eb98:	8b f1                	mov    esi,ecx
1008eb9a:	57                   	push   edi
1008eb9b:	e8 80 3f 07 00       	call   0x10102b20
1008eba0:	85 c0                	test   eax,eax
1008eba2:	75 06                	jne    0x1008ebaa
1008eba4:	5f                   	pop    edi
1008eba5:	5e                   	pop    esi
1008eba6:	5d                   	pop    ebp
1008eba7:	c2 04 00             	ret    0x4
1008ebaa:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008ebad:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008ebb2:	6a 0a                	push   0xa
1008ebb4:	68 30 3a 21 10       	push   0x10213a30
1008ebb9:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
1008ebbf:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1008ebc5:	56                   	push   esi
1008ebc6:	68 b0 f3 1b 10       	push   0x101bf3b0
1008ebcb:	85 d2                	test   edx,edx
1008ebcd:	74 10                	je     0x1008ebdf
1008ebcf:	03 c2                	add    eax,edx
1008ebd1:	8b cf                	mov    ecx,edi
1008ebd3:	50                   	push   eax
1008ebd4:	e8 e7 c1 08 00       	call   0x1011adc0
1008ebd9:	5f                   	pop    edi
1008ebda:	5e                   	pop    esi
1008ebdb:	5d                   	pop    ebp
1008ebdc:	c2 04 00             	ret    0x4
1008ebdf:	03 01                	add    eax,DWORD PTR [ecx]
1008ebe1:	8b cf                	mov    ecx,edi
1008ebe3:	50                   	push   eax
1008ebe4:	e8 d7 c1 08 00       	call   0x1011adc0
1008ebe9:	5f                   	pop    edi
1008ebea:	5e                   	pop    esi
1008ebeb:	5d                   	pop    ebp
1008ebec:	c2 04 00             	ret    0x4
