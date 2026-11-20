
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101162e0 <.text+0x1152e0>:
101162e0:	55                   	push   ebp
101162e1:	8b ec                	mov    ebp,esp
101162e3:	56                   	push   esi
101162e4:	8b 31                	mov    esi,DWORD PTR [ecx]
101162e6:	85 f6                	test   esi,esi
101162e8:	74 12                	je     0x101162fc
101162ea:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
101162ed:	39 56 08             	cmp    DWORD PTR [esi+0x8],edx
101162f0:	0f 4c 56 08          	cmovl  edx,DWORD PTR [esi+0x8]
101162f4:	29 56 04             	sub    DWORD PTR [esi+0x4],edx
101162f7:	8b 01                	mov    eax,DWORD PTR [ecx]
101162f9:	29 50 08             	sub    DWORD PTR [eax+0x8],edx
101162fc:	5e                   	pop    esi
101162fd:	5d                   	pop    ebp
101162fe:	c2 04 00             	ret    0x4
