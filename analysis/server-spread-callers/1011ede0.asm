
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011ede0 <.text+0x11dde0>:
1011ede0:	55                   	push   ebp
1011ede1:	8b ec                	mov    ebp,esp
1011ede3:	56                   	push   esi
1011ede4:	57                   	push   edi
1011ede5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1011ede8:	8b f1                	mov    esi,ecx
1011edea:	57                   	push   edi
1011edeb:	e8 90 ff ff ff       	call   0x1011ed80
1011edf0:	85 c0                	test   eax,eax
1011edf2:	75 06                	jne    0x1011edfa
1011edf4:	5f                   	pop    edi
1011edf5:	5e                   	pop    esi
1011edf6:	5d                   	pop    ebp
1011edf7:	c2 04 00             	ret    0x4
1011edfa:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1011edfd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011ee02:	6a 1b                	push   0x1b
1011ee04:	68 28 b3 21 10       	push   0x1021b328
1011ee09:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
1011ee0f:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011ee15:	56                   	push   esi
1011ee16:	68 a8 65 1e 10       	push   0x101e65a8
1011ee1b:	85 d2                	test   edx,edx
1011ee1d:	74 10                	je     0x1011ee2f
1011ee1f:	03 c2                	add    eax,edx
1011ee21:	8b cf                	mov    ecx,edi
1011ee23:	50                   	push   eax
1011ee24:	e8 97 bf ff ff       	call   0x1011adc0
1011ee29:	5f                   	pop    edi
1011ee2a:	5e                   	pop    esi
1011ee2b:	5d                   	pop    ebp
1011ee2c:	c2 04 00             	ret    0x4
1011ee2f:	03 01                	add    eax,DWORD PTR [ecx]
1011ee31:	8b cf                	mov    ecx,edi
1011ee33:	50                   	push   eax
1011ee34:	e8 87 bf ff ff       	call   0x1011adc0
1011ee39:	5f                   	pop    edi
1011ee3a:	5e                   	pop    esi
1011ee3b:	5d                   	pop    ebp
1011ee3c:	c2 04 00             	ret    0x4
