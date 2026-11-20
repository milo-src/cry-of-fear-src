
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000d4a0 <.text+0xc4a0>:
1000d4a0:	55                   	push   ebp
1000d4a1:	8b ec                	mov    ebp,esp
1000d4a3:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
1000d4a6:	f3 0f 10 0d d8 1d 1a 	movss  xmm1,DWORD PTR ds:0x101a1dd8
1000d4ad:	10 
1000d4ae:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000d4b1:	f3 0f 10 81 d0 00 00 	movss  xmm0,DWORD PTR [ecx+0xd0]
1000d4b8:	00 
1000d4b9:	f3 0f 58 81 c4 00 00 	addss  xmm0,DWORD PTR [ecx+0xc4]
1000d4c0:	00 
1000d4c1:	f3 0f 59 c1          	mulss  xmm0,xmm1
1000d4c5:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1000d4c9:	f3 0f 10 81 d4 00 00 	movss  xmm0,DWORD PTR [ecx+0xd4]
1000d4d0:	00 
1000d4d1:	f3 0f 58 81 c8 00 00 	addss  xmm0,DWORD PTR [ecx+0xc8]
1000d4d8:	00 
1000d4d9:	f3 0f 59 c1          	mulss  xmm0,xmm1
1000d4dd:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1000d4e2:	f3 0f 10 81 d8 00 00 	movss  xmm0,DWORD PTR [ecx+0xd8]
1000d4e9:	00 
1000d4ea:	f3 0f 58 81 cc 00 00 	addss  xmm0,DWORD PTR [ecx+0xcc]
1000d4f1:	00 
1000d4f2:	f3 0f 59 c1          	mulss  xmm0,xmm1
1000d4f6:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1000d4fb:	5d                   	pop    ebp
1000d4fc:	c2 04 00             	ret    0x4
