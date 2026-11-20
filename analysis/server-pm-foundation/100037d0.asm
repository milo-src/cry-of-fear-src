
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100037d0 <.text+0x27d0>:
100037d0:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
100037d6:	0f 57 c0             	xorps  xmm0,xmm0
100037d9:	f3 0f 10 89 c0 00 00 	movss  xmm1,DWORD PTR [ecx+0xc0]
100037e0:	00 
100037e1:	0f 2e c8             	ucomiss xmm1,xmm0
100037e4:	9f                   	lahf
100037e5:	f6 c4 44             	test   ah,0x44
100037e8:	7a 08                	jp     0x100037f2
100037ea:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
100037f1:	10 
100037f2:	8b 81 f4 f4 04 00    	mov    eax,DWORD PTR [ecx+0x4f4f4]
100037f8:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100037fc:	f3 0f 59 c1          	mulss  xmm0,xmm1
10003800:	f3 0f 10 49 64       	movss  xmm1,DWORD PTR [ecx+0x64]
10003805:	f3 0f 59 41 10       	mulss  xmm0,DWORD PTR [ecx+0x10]
1000380a:	f3 0f 5c c8          	subss  xmm1,xmm0
1000380e:	f3 0f 11 49 64       	movss  DWORD PTR [ecx+0x64],xmm1
10003813:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10003818:	f3 0f 10 40 7c       	movss  xmm0,DWORD PTR [eax+0x7c]
1000381d:	f3 0f 59 41 10       	mulss  xmm0,DWORD PTR [ecx+0x10]
10003822:	f3 0f 58 c1          	addss  xmm0,xmm1
10003826:	f3 0f 11 41 64       	movss  DWORD PTR [ecx+0x64],xmm0
1000382b:	c7 40 7c 00 00 00 00 	mov    DWORD PTR [eax+0x7c],0x0
10003832:	e9 49 10 00 00       	jmp    0x10004880
