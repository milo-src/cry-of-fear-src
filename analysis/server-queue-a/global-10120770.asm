
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10120770 <.text+0x11f770>:
10120770:	55                   	push   ebp
10120771:	8b ec                	mov    ebp,esp
10120773:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
10120776:	85 d2                	test   edx,edx
10120778:	75 06                	jne    0x10120780
1012077a:	33 c0                	xor    eax,eax
1012077c:	5d                   	pop    ebp
1012077d:	c2 04 00             	ret    0x4
10120780:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10120785:	56                   	push   esi
10120786:	8b 31                	mov    esi,DWORD PTR [ecx]
10120788:	57                   	push   edi
10120789:	8b b8 98 00 00 00    	mov    edi,DWORD PTR [eax+0x98]
1012078f:	03 fa                	add    edi,edx
10120791:	85 f6                	test   esi,esi
10120793:	74 3b                	je     0x101207d0
10120795:	8b c6                	mov    eax,esi
10120797:	8b cf                	mov    ecx,edi
10120799:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
101207a0:	8a 11                	mov    dl,BYTE PTR [ecx]
101207a2:	3a 10                	cmp    dl,BYTE PTR [eax]
101207a4:	75 1a                	jne    0x101207c0
101207a6:	84 d2                	test   dl,dl
101207a8:	74 12                	je     0x101207bc
101207aa:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
101207ad:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
101207b0:	75 0e                	jne    0x101207c0
101207b2:	83 c1 02             	add    ecx,0x2
101207b5:	83 c0 02             	add    eax,0x2
101207b8:	84 d2                	test   dl,dl
101207ba:	75 e4                	jne    0x101207a0
101207bc:	33 c0                	xor    eax,eax
101207be:	eb 05                	jmp    0x101207c5
101207c0:	1b c0                	sbb    eax,eax
101207c2:	83 c8 01             	or     eax,0x1
101207c5:	85 c0                	test   eax,eax
101207c7:	74 07                	je     0x101207d0
101207c9:	8b 76 64             	mov    esi,DWORD PTR [esi+0x64]
101207cc:	85 f6                	test   esi,esi
101207ce:	75 c5                	jne    0x10120795
101207d0:	5f                   	pop    edi
101207d1:	8b c6                	mov    eax,esi
101207d3:	5e                   	pop    esi
101207d4:	5d                   	pop    ebp
101207d5:	c2 04 00             	ret    0x4
