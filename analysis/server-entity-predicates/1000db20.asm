
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000db20 <.text+0xcb20>:
1000db20:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
1000db23:	f3 0f 10 41 20       	movss  xmm0,DWORD PTR [ecx+0x20]
1000db28:	0f 2e 05 34 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f34
1000db2f:	9f                   	lahf
1000db30:	f6 c4 44             	test   ah,0x44
1000db33:	7a 27                	jp     0x1000db5c
1000db35:	f3 0f 10 41 24       	movss  xmm0,DWORD PTR [ecx+0x24]
1000db3a:	0f 2e 05 38 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f38
1000db41:	9f                   	lahf
1000db42:	f6 c4 44             	test   ah,0x44
1000db45:	7a 15                	jp     0x1000db5c
1000db47:	f3 0f 10 41 28       	movss  xmm0,DWORD PTR [ecx+0x28]
1000db4c:	0f 2e 05 3c 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f3c
1000db53:	9f                   	lahf
1000db54:	f6 c4 44             	test   ah,0x44
1000db57:	7a 03                	jp     0x1000db5c
1000db59:	33 c0                	xor    eax,eax
1000db5b:	c3                   	ret
1000db5c:	b8 01 00 00 00       	mov    eax,0x1
1000db61:	c3                   	ret
