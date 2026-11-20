
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10003490 <.text+0x2490>:
10003490:	55                   	push   ebp
10003491:	8b ec                	mov    ebp,esp
10003493:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10003496:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
1000349b:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1000349e:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
100034a2:	f3 0f 59 c1          	mulss  xmm0,xmm1
100034a6:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100034aa:	f3 0f 10 41 04       	movss  xmm0,DWORD PTR [ecx+0x4]
100034af:	f3 0f 59 c1          	mulss  xmm0,xmm1
100034b3:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100034b8:	f3 0f 10 41 08       	movss  xmm0,DWORD PTR [ecx+0x8]
100034bd:	f3 0f 59 c1          	mulss  xmm0,xmm1
100034c1:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100034c6:	5d                   	pop    ebp
100034c7:	c3                   	ret
