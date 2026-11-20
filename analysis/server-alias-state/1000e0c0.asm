
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000e0c0 <.text+0xd0c0>:
1000e0c0:	55                   	push   ebp
1000e0c1:	8b ec                	mov    ebp,esp
1000e0c3:	56                   	push   esi
1000e0c4:	57                   	push   edi
1000e0c5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1000e0c8:	8b f1                	mov    esi,ecx
1000e0ca:	57                   	push   edi
1000e0cb:	e8 30 9f 00 00       	call   0x10018000
1000e0d0:	85 c0                	test   eax,eax
1000e0d2:	75 06                	jne    0x1000e0da
1000e0d4:	5f                   	pop    edi
1000e0d5:	5e                   	pop    esi
1000e0d6:	5d                   	pop    ebp
1000e0d7:	c2 04 00             	ret    0x4
1000e0da:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000e0dd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000e0e2:	6a 01                	push   0x1
1000e0e4:	68 d8 10 21 10       	push   0x102110d8
1000e0e9:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
1000e0ef:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1000e0f5:	56                   	push   esi
1000e0f6:	68 5c 29 1a 10       	push   0x101a295c
1000e0fb:	85 d2                	test   edx,edx
1000e0fd:	74 10                	je     0x1000e10f
1000e0ff:	03 c2                	add    eax,edx
1000e101:	8b cf                	mov    ecx,edi
1000e103:	50                   	push   eax
1000e104:	e8 b7 cc 10 00       	call   0x1011adc0
1000e109:	5f                   	pop    edi
1000e10a:	5e                   	pop    esi
1000e10b:	5d                   	pop    ebp
1000e10c:	c2 04 00             	ret    0x4
1000e10f:	03 01                	add    eax,DWORD PTR [ecx]
1000e111:	8b cf                	mov    ecx,edi
1000e113:	50                   	push   eax
1000e114:	e8 a7 cc 10 00       	call   0x1011adc0
1000e119:	5f                   	pop    edi
1000e11a:	5e                   	pop    esi
1000e11b:	5d                   	pop    ebp
1000e11c:	c2 04 00             	ret    0x4
