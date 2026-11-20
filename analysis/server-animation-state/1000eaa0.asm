
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000eaa0 <.text+0xdaa0>:
1000eaa0:	55                   	push   ebp
1000eaa1:	8b ec                	mov    ebp,esp
1000eaa3:	56                   	push   esi
1000eaa4:	57                   	push   edi
1000eaa5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1000eaa8:	8b f1                	mov    esi,ecx
1000eaaa:	57                   	push   edi
1000eaab:	e8 10 40 0f 00       	call   0x10102ac0
1000eab0:	85 c0                	test   eax,eax
1000eab2:	75 06                	jne    0x1000eaba
1000eab4:	5f                   	pop    edi
1000eab5:	5e                   	pop    esi
1000eab6:	5d                   	pop    ebp
1000eab7:	c2 04 00             	ret    0x4
1000eaba:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000eabd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000eac2:	6a 05                	push   0x5
1000eac4:	68 78 11 21 10       	push   0x10211178
1000eac9:	8b 91 d0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d0]
1000eacf:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1000ead5:	56                   	push   esi
1000ead6:	68 38 2e 1a 10       	push   0x101a2e38
1000eadb:	85 d2                	test   edx,edx
1000eadd:	74 10                	je     0x1000eaef
1000eadf:	03 c2                	add    eax,edx
1000eae1:	8b cf                	mov    ecx,edi
1000eae3:	50                   	push   eax
1000eae4:	e8 d7 c2 10 00       	call   0x1011adc0
1000eae9:	5f                   	pop    edi
1000eaea:	5e                   	pop    esi
1000eaeb:	5d                   	pop    ebp
1000eaec:	c2 04 00             	ret    0x4
1000eaef:	03 01                	add    eax,DWORD PTR [ecx]
1000eaf1:	8b cf                	mov    ecx,edi
1000eaf3:	50                   	push   eax
1000eaf4:	e8 c7 c2 10 00       	call   0x1011adc0
1000eaf9:	5f                   	pop    edi
1000eafa:	5e                   	pop    esi
1000eafb:	5d                   	pop    ebp
1000eafc:	c2 04 00             	ret    0x4
