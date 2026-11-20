
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bf2e0 <.text+0xbe2e0>:
100bf2e0:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100bf2e3:	ba 02 00 00 00       	mov    edx,0x2
100bf2e8:	f3 0f 10 80 64 01 00 	movss  xmm0,DWORD PTR [eax+0x164]
100bf2ef:	00 
100bf2f0:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
100bf2f7:	9f                   	lahf
100bf2f8:	33 c9                	xor    ecx,ecx
100bf2fa:	f6 c4 44             	test   ah,0x44
100bf2fd:	0f 4a ca             	cmovp  ecx,edx
100bf300:	8b c1                	mov    eax,ecx
100bf302:	c3                   	ret
