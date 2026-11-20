
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c23e0 <.text+0xc13e0>:
100c23e0:	55                   	push   ebp
100c23e1:	8b ec                	mov    ebp,esp
100c23e3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100c23e6:	25 7f ff ff ff       	and    eax,0xffffff7f
100c23eb:	83 f8 10             	cmp    eax,0x10
100c23ee:	74 0e                	je     0x100c23fe
100c23f0:	a9 00 01 00 00       	test   eax,0x100
100c23f5:	75 07                	jne    0x100c23fe
100c23f7:	b8 01 00 00 00       	mov    eax,0x1
100c23fc:	5d                   	pop    ebp
100c23fd:	c3                   	ret
100c23fe:	33 c0                	xor    eax,eax
100c2400:	5d                   	pop    ebp
100c2401:	c3                   	ret
