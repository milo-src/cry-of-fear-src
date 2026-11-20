
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100122a0 <.text+0x112a0>:
100122a0:	55                   	push   ebp
100122a1:	8b ec                	mov    ebp,esp
100122a3:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100122a8:	0f 54 05 80 1f 1a 10 	andps  xmm0,XMMWORD PTR ds:0x101a1f80
100122af:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100122b2:	0f 5a c0             	cvtps2pd xmm0,xmm0
100122b5:	f2 0f 59 05 00 47 1a 	mulsd  xmm0,QWORD PTR ds:0x101a4700
100122bc:	10 
100122bd:	f2 0f 2c d0          	cvttsd2si edx,xmm0
100122c1:	0f 57 c0             	xorps  xmm0,xmm0
100122c4:	0f 2f 45 08          	comiss xmm0,DWORD PTR [ebp+0x8]
100122c8:	76 0c                	jbe    0x100122d6
100122ca:	c7 80 54 01 00 00 00 	mov    DWORD PTR [eax+0x154],0x3f800000
100122d1:	00 80 3f 
100122d4:	eb 0a                	jmp    0x100122e0
100122d6:	c7 80 54 01 00 00 00 	mov    DWORD PTR [eax+0x154],0x0
100122dd:	00 00 00 
100122e0:	8b c2                	mov    eax,edx
100122e2:	c1 f8 08             	sar    eax,0x8
100122e5:	66 0f 6e c0          	movd   xmm0,eax
100122e9:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100122ec:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100122ef:	f3 0f 11 80 58 01 00 	movss  DWORD PTR [eax+0x158],xmm0
100122f6:	00 
100122f7:	0f b6 c2             	movzx  eax,dl
100122fa:	66 0f 6e c0          	movd   xmm0,eax
100122fe:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10012301:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10012304:	f3 0f 11 80 5c 01 00 	movss  DWORD PTR [eax+0x15c],xmm0
1001230b:	00 
1001230c:	5d                   	pop    ebp
1001230d:	c2 04 00             	ret    0x4
