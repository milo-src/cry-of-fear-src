
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000aba0 <.text+0x9ba0>:
1000aba0:	55                   	push   ebp
1000aba1:	8b ec                	mov    ebp,esp
1000aba3:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
1000aba6:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000aba9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
1000abb0:	8a 10                	mov    dl,BYTE PTR [eax]
1000abb2:	3a 11                	cmp    dl,BYTE PTR [ecx]
1000abb4:	75 21                	jne    0x1000abd7
1000abb6:	84 d2                	test   dl,dl
1000abb8:	74 12                	je     0x1000abcc
1000abba:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1000abbd:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1000abc0:	75 15                	jne    0x1000abd7
1000abc2:	83 c0 02             	add    eax,0x2
1000abc5:	83 c1 02             	add    ecx,0x2
1000abc8:	84 d2                	test   dl,dl
1000abca:	75 e4                	jne    0x1000abb0
1000abcc:	33 c9                	xor    ecx,ecx
1000abce:	33 c0                	xor    eax,eax
1000abd0:	85 c9                	test   ecx,ecx
1000abd2:	0f 94 c0             	sete   al
1000abd5:	5d                   	pop    ebp
1000abd6:	c3                   	ret
1000abd7:	1b c9                	sbb    ecx,ecx
1000abd9:	33 c0                	xor    eax,eax
1000abdb:	83 c9 01             	or     ecx,0x1
1000abde:	85 c9                	test   ecx,ecx
1000abe0:	0f 94 c0             	sete   al
1000abe3:	5d                   	pop    ebp
1000abe4:	c3                   	ret
