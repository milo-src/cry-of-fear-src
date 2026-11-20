
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100183a0 <.text+0x173a0>:
100183a0:	55                   	push   ebp
100183a1:	8b ec                	mov    ebp,esp
100183a3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100183a6:	83 f8 03             	cmp    eax,0x3
100183a9:	74 10                	je     0x100183bb
100183ab:	83 f8 02             	cmp    eax,0x2
100183ae:	74 0b                	je     0x100183bb
100183b0:	83 7d 0c 00          	cmp    DWORD PTR [ebp+0xc],0x0
100183b4:	74 0e                	je     0x100183c4
100183b6:	83 f8 01             	cmp    eax,0x1
100183b9:	74 0d                	je     0x100183c8
100183bb:	b8 01 00 00 00       	mov    eax,0x1
100183c0:	5d                   	pop    ebp
100183c1:	c2 08 00             	ret    0x8
100183c4:	85 c0                	test   eax,eax
100183c6:	75 f3                	jne    0x100183bb
100183c8:	33 c0                	xor    eax,eax
100183ca:	5d                   	pop    ebp
100183cb:	c2 08 00             	ret    0x8
