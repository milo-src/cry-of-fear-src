
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10003250 <.text+0x2250>:
10003250:	55                   	push   ebp
10003251:	8b ec                	mov    ebp,esp
10003253:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10003256:	33 d2                	xor    edx,edx
10003258:	56                   	push   esi
10003259:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000325c:	2b f1                	sub    esi,ecx
1000325e:	66 90                	xchg   ax,ax
10003260:	f3 0f 10 04 0e       	movss  xmm0,DWORD PTR [esi+ecx*1]
10003265:	0f 2e 01             	ucomiss xmm0,DWORD PTR [ecx]
10003268:	9f                   	lahf
10003269:	f6 c4 44             	test   ah,0x44
1000326c:	7a 11                	jp     0x1000327f
1000326e:	42                   	inc    edx
1000326f:	83 c1 04             	add    ecx,0x4
10003272:	83 fa 03             	cmp    edx,0x3
10003275:	7c e9                	jl     0x10003260
10003277:	b8 01 00 00 00       	mov    eax,0x1
1000327c:	5e                   	pop    esi
1000327d:	5d                   	pop    ebp
1000327e:	c3                   	ret
1000327f:	33 c0                	xor    eax,eax
10003281:	5e                   	pop    esi
10003282:	5d                   	pop    ebp
10003283:	c3                   	ret
