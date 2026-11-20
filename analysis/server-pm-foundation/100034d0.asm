
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100034d0 <.text+0x24d0>:
100034d0:	55                   	push   ebp
100034d1:	8b ec                	mov    ebp,esp
100034d3:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
100034d6:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100034d9:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100034dc:	f3 0f 10 49 04       	movss  xmm1,DWORD PTR [ecx+0x4]
100034e1:	f3 0f 59 4a 04       	mulss  xmm1,DWORD PTR [edx+0x4]
100034e6:	f3 0f 10 02          	movss  xmm0,DWORD PTR [edx]
100034ea:	f3 0f 59 01          	mulss  xmm0,DWORD PTR [ecx]
100034ee:	f3 0f 58 c8          	addss  xmm1,xmm0
100034f2:	f3 0f 10 41 08       	movss  xmm0,DWORD PTR [ecx+0x8]
100034f7:	f3 0f 59 42 08       	mulss  xmm0,DWORD PTR [edx+0x8]
100034fc:	f3 0f 58 c8          	addss  xmm1,xmm0
10003500:	f3 0f 58 49 0c       	addss  xmm1,DWORD PTR [ecx+0xc]
10003505:	f3 0f 11 08          	movss  DWORD PTR [eax],xmm1
10003509:	f3 0f 10 49 10       	movss  xmm1,DWORD PTR [ecx+0x10]
1000350e:	f3 0f 59 0a          	mulss  xmm1,DWORD PTR [edx]
10003512:	f3 0f 10 41 14       	movss  xmm0,DWORD PTR [ecx+0x14]
10003517:	f3 0f 59 42 04       	mulss  xmm0,DWORD PTR [edx+0x4]
1000351c:	f3 0f 58 c8          	addss  xmm1,xmm0
10003520:	f3 0f 10 41 18       	movss  xmm0,DWORD PTR [ecx+0x18]
10003525:	f3 0f 59 42 08       	mulss  xmm0,DWORD PTR [edx+0x8]
1000352a:	f3 0f 58 c8          	addss  xmm1,xmm0
1000352e:	f3 0f 58 49 1c       	addss  xmm1,DWORD PTR [ecx+0x1c]
10003533:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
10003538:	f3 0f 10 41 24       	movss  xmm0,DWORD PTR [ecx+0x24]
1000353d:	f3 0f 10 49 20       	movss  xmm1,DWORD PTR [ecx+0x20]
10003542:	f3 0f 59 0a          	mulss  xmm1,DWORD PTR [edx]
10003546:	f3 0f 59 42 04       	mulss  xmm0,DWORD PTR [edx+0x4]
1000354b:	f3 0f 58 c8          	addss  xmm1,xmm0
1000354f:	f3 0f 10 41 28       	movss  xmm0,DWORD PTR [ecx+0x28]
10003554:	f3 0f 59 42 08       	mulss  xmm0,DWORD PTR [edx+0x8]
10003559:	f3 0f 58 c8          	addss  xmm1,xmm0
1000355d:	f3 0f 58 49 2c       	addss  xmm1,DWORD PTR [ecx+0x2c]
10003562:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
10003567:	5d                   	pop    ebp
10003568:	c3                   	ret
