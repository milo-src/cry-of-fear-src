
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10116490 <.text+0x115490>:
10116490:	55                   	push   ebp
10116491:	8b ec                	mov    ebp,esp
10116493:	8b 01                	mov    eax,DWORD PTR [ecx]
10116495:	56                   	push   esi
10116496:	85 c0                	test   eax,eax
10116498:	74 22                	je     0x101164bc
1011649a:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
1011649d:	85 d2                	test   edx,edx
1011649f:	78 1b                	js     0x101164bc
101164a1:	8b 70 20             	mov    esi,DWORD PTR [eax+0x20]
101164a4:	33 c9                	xor    ecx,ecx
101164a6:	85 f6                	test   esi,esi
101164a8:	7e 12                	jle    0x101164bc
101164aa:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
101164ad:	0f 1f 00             	nop    DWORD PTR [eax]
101164b0:	39 10                	cmp    DWORD PTR [eax],edx
101164b2:	74 0f                	je     0x101164c3
101164b4:	41                   	inc    ecx
101164b5:	83 c0 18             	add    eax,0x18
101164b8:	3b ce                	cmp    ecx,esi
101164ba:	7c f4                	jl     0x101164b0
101164bc:	33 c0                	xor    eax,eax
101164be:	5e                   	pop    esi
101164bf:	5d                   	pop    ebp
101164c0:	c2 04 00             	ret    0x4
101164c3:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
101164c6:	5e                   	pop    esi
101164c7:	5d                   	pop    ebp
101164c8:	c2 04 00             	ret    0x4
