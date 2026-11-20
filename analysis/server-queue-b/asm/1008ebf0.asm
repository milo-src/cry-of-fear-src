
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008ebf0 <.text+0x8dbf0>:
1008ebf0:	55                   	push   ebp
1008ebf1:	8b ec                	mov    ebp,esp
1008ebf3:	56                   	push   esi
1008ebf4:	57                   	push   edi
1008ebf5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1008ebf8:	8b f1                	mov    esi,ecx
1008ebfa:	57                   	push   edi
1008ebfb:	e8 20 3f 07 00       	call   0x10102b20
1008ec00:	85 c0                	test   eax,eax
1008ec02:	75 06                	jne    0x1008ec0a
1008ec04:	5f                   	pop    edi
1008ec05:	5e                   	pop    esi
1008ec06:	5d                   	pop    ebp
1008ec07:	c2 04 00             	ret    0x4
1008ec0a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008ec0d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008ec12:	6a 03                	push   0x3
1008ec14:	68 d0 3a 21 10       	push   0x10213ad0
1008ec19:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
1008ec1f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1008ec25:	56                   	push   esi
1008ec26:	68 e0 f7 1b 10       	push   0x101bf7e0
1008ec2b:	85 d2                	test   edx,edx
1008ec2d:	74 10                	je     0x1008ec3f
1008ec2f:	03 c2                	add    eax,edx
1008ec31:	8b cf                	mov    ecx,edi
1008ec33:	50                   	push   eax
1008ec34:	e8 87 c1 08 00       	call   0x1011adc0
1008ec39:	5f                   	pop    edi
1008ec3a:	5e                   	pop    esi
1008ec3b:	5d                   	pop    ebp
1008ec3c:	c2 04 00             	ret    0x4
1008ec3f:	03 01                	add    eax,DWORD PTR [ecx]
1008ec41:	8b cf                	mov    ecx,edi
1008ec43:	50                   	push   eax
1008ec44:	e8 77 c1 08 00       	call   0x1011adc0
1008ec49:	5f                   	pop    edi
1008ec4a:	5e                   	pop    esi
1008ec4b:	5d                   	pop    ebp
1008ec4c:	c2 04 00             	ret    0x4
