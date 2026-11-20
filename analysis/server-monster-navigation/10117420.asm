
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10117420 <.text+0x116420>:
10117420:	55                   	push   ebp
10117421:	8b ec                	mov    ebp,esp
10117423:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
10117428:	0f 57 c0             	xorps  xmm0,xmm0
1011742b:	0f 2f c1             	comiss xmm0,xmm1
1011742e:	76 31                	jbe    0x10117461
10117430:	0f 28 c1             	movaps xmm0,xmm1
10117433:	b9 01 00 00 00       	mov    ecx,0x1
10117438:	f3 0f 5e 05 58 5a 1e 	divss  xmm0,DWORD PTR ds:0x101e5a58
1011743f:	10 
10117440:	f3 0f 2c c0          	cvttss2si eax,xmm0
10117444:	2b c8                	sub    ecx,eax
10117446:	69 c1 68 01 00 00    	imul   eax,ecx,0x168
1011744c:	66 0f 6e c0          	movd   xmm0,eax
10117450:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10117453:	f3 0f 58 c1          	addss  xmm0,xmm1
10117457:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
1011745c:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
1011745f:	5d                   	pop    ebp
10117460:	c3                   	ret
10117461:	f3 0f 10 15 cc 13 1a 	movss  xmm2,DWORD PTR ds:0x101a13cc
10117468:	10 
10117469:	0f 2f ca             	comiss xmm1,xmm2
1011746c:	72 21                	jb     0x1011748f
1011746e:	0f 28 c1             	movaps xmm0,xmm1
10117471:	f3 0f 5e c2          	divss  xmm0,xmm2
10117475:	f3 0f 2c c0          	cvttss2si eax,xmm0
10117479:	69 c0 68 01 00 00    	imul   eax,eax,0x168
1011747f:	66 0f 6e c0          	movd   xmm0,eax
10117483:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10117486:	f3 0f 5c c8          	subss  xmm1,xmm0
1011748a:	f3 0f 11 4d 08       	movss  DWORD PTR [ebp+0x8],xmm1
1011748f:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
10117492:	5d                   	pop    ebp
10117493:	c3                   	ret
