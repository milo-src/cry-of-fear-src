
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10012420 <.text+0x11420>:
10012420:	55                   	push   ebp
10012421:	8b ec                	mov    ebp,esp
10012423:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
10012426:	f3 0f 10 0d d8 1d 1a 	movss  xmm1,DWORD PTR ds:0x101a1dd8
1001242d:	10 
1001242e:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10012431:	f3 0f 10 81 d0 00 00 	movss  xmm0,DWORD PTR [ecx+0xd0]
10012438:	00 
10012439:	f3 0f 58 81 c4 00 00 	addss  xmm0,DWORD PTR [ecx+0xc4]
10012440:	00 
10012441:	f3 0f 59 c1          	mulss  xmm0,xmm1
10012445:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10012449:	f3 0f 10 81 d4 00 00 	movss  xmm0,DWORD PTR [ecx+0xd4]
10012450:	00 
10012451:	f3 0f 58 81 c8 00 00 	addss  xmm0,DWORD PTR [ecx+0xc8]
10012458:	00 
10012459:	f3 0f 59 c1          	mulss  xmm0,xmm1
1001245d:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
10012462:	f3 0f 10 81 d8 00 00 	movss  xmm0,DWORD PTR [ecx+0xd8]
10012469:	00 
1001246a:	f3 0f 58 81 cc 00 00 	addss  xmm0,DWORD PTR [ecx+0xcc]
10012471:	00 
10012472:	f3 0f 59 c1          	mulss  xmm0,xmm1
10012476:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1001247b:	5d                   	pop    ebp
1001247c:	c3                   	ret
