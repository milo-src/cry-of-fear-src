
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ab4d0 <.text+0xaa4d0>:
100ab4d0:	55                   	push   ebp
100ab4d1:	8b ec                	mov    ebp,esp
100ab4d3:	83 ec 08             	sub    esp,0x8
100ab4d6:	56                   	push   esi
100ab4d7:	8b f1                	mov    esi,ecx
100ab4d9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ab4dc:	83 b8 08 01 00 00 05 	cmp    DWORD PTR [eax+0x108],0x5
100ab4e3:	0f 85 9c 00 00 00    	jne    0x100ab585
100ab4e9:	e8 32 38 01 00       	call   0x100bed20
100ab4ee:	8b 06                	mov    eax,DWORD PTR [esi]
100ab4f0:	0f 57 c0             	xorps  xmm0,xmm0
100ab4f3:	8b ce                	mov    ecx,esi
100ab4f5:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100ab4fa:	d9 5d f8             	fstp   DWORD PTR [ebp-0x8]
100ab4fd:	ff 90 68 01 00 00    	call   DWORD PTR [eax+0x168]
100ab503:	39 86 18 02 00 00    	cmp    DWORD PTR [esi+0x218],eax
100ab509:	74 32                	je     0x100ab53d
100ab50b:	f3 0f 10 05 3c ac 1c 	movss  xmm0,DWORD PTR ds:0x101cac3c
100ab512:	10 
100ab513:	f3 0f 10 4d f8       	movss  xmm1,DWORD PTR [ebp-0x8]
100ab518:	0f 2f c1             	comiss xmm0,xmm1
100ab51b:	76 0a                	jbe    0x100ab527
100ab51d:	f3 0f 10 05 c0 13 1a 	movss  xmm0,DWORD PTR ds:0x101a13c0
100ab524:	10 
100ab525:	eb 11                	jmp    0x100ab538
100ab527:	0f 2f 0d ec 1e 1a 10 	comiss xmm1,DWORD PTR ds:0x101a1eec
100ab52e:	76 0d                	jbe    0x100ab53d
100ab530:	f3 0f 10 05 78 1f 1a 	movss  xmm0,DWORD PTR ds:0x101a1f78
100ab537:	10 
100ab538:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100ab53d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ab542:	83 ec 0c             	sub    esp,0xc
100ab545:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
100ab54a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ab54d:	0f 5a c0             	cvtps2pd xmm0,xmm0
100ab550:	f2 0f 59 05 28 ac 1c 	mulsd  xmm0,QWORD PTR ds:0x101cac28
100ab557:	10 
100ab558:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100ab55c:	f3 0f 11 44 24 08    	movss  DWORD PTR [esp+0x8],xmm0
100ab562:	f3 0f 10 40 58       	movss  xmm0,DWORD PTR [eax+0x58]
100ab567:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100ab56d:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100ab572:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100ab577:	e8 24 bf 06 00       	call   0x101174a0
100ab57c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ab57f:	83 c4 0c             	add    esp,0xc
100ab582:	d9 58 58             	fstp   DWORD PTR [eax+0x58]
100ab585:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100ab588:	8b ce                	mov    ecx,esi
100ab58a:	e8 31 18 01 00       	call   0x100bcdc0
100ab58f:	5e                   	pop    esi
100ab590:	8b e5                	mov    esp,ebp
100ab592:	5d                   	pop    ebp
100ab593:	c2 04 00             	ret    0x4
