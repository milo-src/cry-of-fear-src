
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100032d0 <.text+0x22d0>:
100032d0:	55                   	push   ebp
100032d1:	8b ec                	mov    ebp,esp
100032d3:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
100032d6:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
100032db:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100032de:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
100032e1:	f3 0f 10 02          	movss  xmm0,DWORD PTR [edx]
100032e5:	f3 0f 59 c1          	mulss  xmm0,xmm1
100032e9:	f3 0f 58 01          	addss  xmm0,DWORD PTR [ecx]
100032ed:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100032f1:	f3 0f 10 42 04       	movss  xmm0,DWORD PTR [edx+0x4]
100032f6:	f3 0f 59 c1          	mulss  xmm0,xmm1
100032fa:	f3 0f 58 41 04       	addss  xmm0,DWORD PTR [ecx+0x4]
100032ff:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
10003304:	f3 0f 10 42 08       	movss  xmm0,DWORD PTR [edx+0x8]
10003309:	f3 0f 59 c1          	mulss  xmm0,xmm1
1000330d:	f3 0f 58 41 08       	addss  xmm0,DWORD PTR [ecx+0x8]
10003312:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
10003317:	5d                   	pop    ebp
10003318:	c3                   	ret
