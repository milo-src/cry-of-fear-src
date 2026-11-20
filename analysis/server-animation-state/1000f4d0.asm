
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000f4d0 <.text+0xe4d0>:
1000f4d0:	55                   	push   ebp
1000f4d1:	8b ec                	mov    ebp,esp
1000f4d3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000f4d6:	85 c0                	test   eax,eax
1000f4d8:	75 02                	jne    0x1000f4dc
1000f4da:	5d                   	pop    ebp
1000f4db:	c3                   	ret
1000f4dc:	8b 88 a8 00 00 00    	mov    ecx,DWORD PTR [eax+0xa8]
1000f4e2:	33 d2                	xor    edx,edx
1000f4e4:	53                   	push   ebx
1000f4e5:	8b 98 a4 00 00 00    	mov    ebx,DWORD PTR [eax+0xa4]
1000f4eb:	83 c1 2c             	add    ecx,0x2c
1000f4ee:	56                   	push   esi
1000f4ef:	57                   	push   edi
1000f4f0:	33 f6                	xor    esi,esi
1000f4f2:	83 cf ff             	or     edi,0xffffffff
1000f4f5:	85 db                	test   ebx,ebx
1000f4f7:	7e 24                	jle    0x1000f51d
1000f4f9:	03 c8                	add    ecx,eax
1000f4fb:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000f4fe:	66 90                	xchg   ax,ax
1000f500:	39 41 fc             	cmp    DWORD PTR [ecx-0x4],eax
1000f503:	75 0d                	jne    0x1000f512
1000f505:	8b 01                	mov    eax,DWORD PTR [ecx]
1000f507:	3b c6                	cmp    eax,esi
1000f509:	7e 04                	jle    0x1000f50f
1000f50b:	8b f0                	mov    esi,eax
1000f50d:	8b fa                	mov    edi,edx
1000f50f:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000f512:	42                   	inc    edx
1000f513:	81 c1 b0 00 00 00    	add    ecx,0xb0
1000f519:	3b d3                	cmp    edx,ebx
1000f51b:	7c e3                	jl     0x1000f500
1000f51d:	8b c7                	mov    eax,edi
1000f51f:	5f                   	pop    edi
1000f520:	5e                   	pop    esi
1000f521:	5b                   	pop    ebx
1000f522:	5d                   	pop    ebp
1000f523:	c3                   	ret
