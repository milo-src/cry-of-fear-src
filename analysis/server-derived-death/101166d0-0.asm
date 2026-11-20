
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101166d0 <.text+0x1156d0>:
101166d0:	55                   	push   ebp
101166d1:	8b ec                	mov    ebp,esp
101166d3:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
101166d8:	33 c0                	xor    eax,eax
101166da:	f3 0f 59 45 0c       	mulss  xmm0,DWORD PTR [ebp+0xc]
101166df:	f3 0f 2c c8          	cvttss2si ecx,xmm0
101166e3:	85 c9                	test   ecx,ecx
101166e5:	0f 49 c1             	cmovns eax,ecx
101166e8:	b9 ff ff 00 00       	mov    ecx,0xffff
101166ed:	3b c1                	cmp    eax,ecx
101166ef:	0f 4f c1             	cmovg  eax,ecx
101166f2:	5d                   	pop    ebp
101166f3:	c3                   	ret
