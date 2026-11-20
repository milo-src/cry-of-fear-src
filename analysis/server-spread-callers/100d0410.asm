
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100d0410 <.text+0xcf410>:
100d0410:	55                   	push   ebp
100d0411:	8b ec                	mov    ebp,esp
100d0413:	51                   	push   ecx
100d0414:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100d0419:	56                   	push   esi
100d041a:	8b f1                	mov    esi,ecx
100d041c:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
100d0422:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100d0425:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x4000
100d042c:	40 00 00 
100d042f:	74 0f                	je     0x100d0440
100d0431:	0f 5a c0             	cvtps2pd xmm0,xmm0
100d0434:	f2 0f 59 05 58 1e 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1e58
100d043b:	10 
100d043c:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100d0440:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100d0445:	e8 16 fb ff ff       	call   0x100cff60
100d044a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100d044f:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
100d0452:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100d0457:	f3 0f 58 45 fc       	addss  xmm0,DWORD PTR [ebp-0x4]
100d045c:	8b 00                	mov    eax,DWORD PTR [eax]
100d045e:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
100d0461:	89 86 00 02 00 00    	mov    DWORD PTR [esi+0x200],eax
100d0467:	0f 2f 05 90 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1390
100d046e:	f3 0f 11 86 04 02 00 	movss  DWORD PTR [esi+0x204],xmm0
100d0475:	00 
100d0476:	76 0a                	jbe    0x100d0482
100d0478:	c7 86 04 02 00 00 00 	mov    DWORD PTR [esi+0x204],0x3f800000
100d047f:	00 80 3f 
100d0482:	5e                   	pop    esi
100d0483:	8b e5                	mov    esp,ebp
100d0485:	5d                   	pop    ebp
100d0486:	c2 04 00             	ret    0x4
