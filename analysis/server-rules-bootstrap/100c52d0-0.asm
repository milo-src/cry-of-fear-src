
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c52d0 <.text+0xc42d0>:
100c52d0:	f3 0f 10 05 a8 46 21 	movss  xmm0,DWORD PTR ds:0x102146a8
100c52d7:	10 
100c52d8:	ba 01 00 00 00       	mov    edx,0x1
100c52dd:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
100c52e4:	9f                   	lahf
100c52e5:	33 c9                	xor    ecx,ecx
100c52e7:	f6 c4 44             	test   ah,0x44
100c52ea:	0f 4a ca             	cmovp  ecx,edx
100c52ed:	8b c1                	mov    eax,ecx
100c52ef:	c3                   	ret
