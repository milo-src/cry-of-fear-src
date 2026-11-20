
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011bfc0 <.text+0x11afc0>:
1011bfc0:	55                   	push   ebp
1011bfc1:	8b ec                	mov    ebp,esp
1011bfc3:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
1011bfc8:	33 c0                	xor    eax,eax
1011bfca:	0f 2f 45 08          	comiss xmm0,DWORD PTR [ebp+0x8]
1011bfce:	0f 93 c0             	setae  al
1011bfd1:	5d                   	pop    ebp
1011bfd2:	c3                   	ret
