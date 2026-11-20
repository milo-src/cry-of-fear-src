
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101164f0 <.text+0x1154f0>:
101164f0:	55                   	push   ebp
101164f1:	8b ec                	mov    ebp,esp
101164f3:	8b 01                	mov    eax,DWORD PTR [ecx]
101164f5:	56                   	push   esi
101164f6:	85 c0                	test   eax,eax
101164f8:	74 22                	je     0x1011651c
101164fa:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
101164fd:	85 d2                	test   edx,edx
101164ff:	74 1b                	je     0x1011651c
10116501:	8b 70 20             	mov    esi,DWORD PTR [eax+0x20]
10116504:	33 c9                	xor    ecx,ecx
10116506:	85 f6                	test   esi,esi
10116508:	7e 12                	jle    0x1011651c
1011650a:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1011650d:	83 c0 04             	add    eax,0x4
10116510:	39 10                	cmp    DWORD PTR [eax],edx
10116512:	74 10                	je     0x10116524
10116514:	41                   	inc    ecx
10116515:	83 c0 18             	add    eax,0x18
10116518:	3b ce                	cmp    ecx,esi
1011651a:	7c f4                	jl     0x10116510
1011651c:	83 c8 ff             	or     eax,0xffffffff
1011651f:	5e                   	pop    esi
10116520:	5d                   	pop    ebp
10116521:	c2 04 00             	ret    0x4
10116524:	8b c1                	mov    eax,ecx
10116526:	5e                   	pop    esi
10116527:	5d                   	pop    ebp
10116528:	c2 04 00             	ret    0x4
