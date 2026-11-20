
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fa480 <.text+0xf9480>:
100fa480:	83 b9 bc 03 00 00 00 	cmp    DWORD PTR [ecx+0x3bc],0x0
100fa487:	74 21                	je     0x100fa4aa
100fa489:	81 c1 8c 01 00 00    	add    ecx,0x18c
100fa48f:	e8 fc d2 f1 ff       	call   0x10017790
100fa494:	85 c0                	test   eax,eax
100fa496:	74 12                	je     0x100fa4aa
100fa498:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100fa49b:	83 b8 74 01 00 00 00 	cmp    DWORD PTR [eax+0x174],0x0
100fa4a2:	75 06                	jne    0x100fa4aa
100fa4a4:	b8 01 00 00 00       	mov    eax,0x1
100fa4a9:	c3                   	ret
100fa4aa:	33 c0                	xor    eax,eax
100fa4ac:	c3                   	ret
