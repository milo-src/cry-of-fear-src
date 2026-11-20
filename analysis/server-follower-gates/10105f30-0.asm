
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10105f30 <.text+0x104f30>:
10105f30:	55                   	push   ebp
10105f31:	8b ec                	mov    ebp,esp
10105f33:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
10105f38:	0f 57 c0             	xorps  xmm0,xmm0
10105f3b:	0f 2f c1             	comiss xmm0,xmm1
10105f3e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10105f43:	72 18                	jb     0x10105f5d
10105f45:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10105f49:	f3 0f 58 05 a0 1e 1a 	addss  xmm0,DWORD PTR ds:0x101a1ea0
10105f50:	10 
10105f51:	f3 0f 11 81 dc 03 00 	movss  DWORD PTR [ecx+0x3dc],xmm0
10105f58:	00 
10105f59:	5d                   	pop    ebp
10105f5a:	c2 04 00             	ret    0x4
10105f5d:	f3 0f 58 08          	addss  xmm1,DWORD PTR [eax]
10105f61:	f3 0f 11 89 dc 03 00 	movss  DWORD PTR [ecx+0x3dc],xmm1
10105f68:	00 
10105f69:	5d                   	pop    ebp
10105f6a:	c2 04 00             	ret    0x4
