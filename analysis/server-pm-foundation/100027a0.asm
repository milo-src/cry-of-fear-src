
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100027a0 <.text+0x17a0>:
100027a0:	55                   	push   ebp
100027a1:	8b ec                	mov    ebp,esp
100027a3:	83 ec 1c             	sub    esp,0x1c
100027a6:	56                   	push   esi
100027a7:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100027aa:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
100027af:	0f 5a c0             	cvtps2pd xmm0,xmm0
100027b2:	f2 0f 59 05 98 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1398
100027b9:	10 
100027ba:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100027be:	0f 5a c0             	cvtps2pd xmm0,xmm0
100027c1:	f2 0f 11 45 ec       	movsd  QWORD PTR [ebp-0x14],xmm0
100027c6:	e8 f5 94 16 00       	call   0x1016bcc0
100027cb:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100027cf:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
100027d4:	f2 0f 10 45 ec       	movsd  xmm0,QWORD PTR [ebp-0x14]
100027d9:	e8 22 93 16 00       	call   0x1016bb00
100027de:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100027e2:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100027e7:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
100027eb:	0f 5a c0             	cvtps2pd xmm0,xmm0
100027ee:	f2 0f 59 05 98 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1398
100027f5:	10 
100027f6:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100027fa:	0f 5a c0             	cvtps2pd xmm0,xmm0
100027fd:	f2 0f 11 45 ec       	movsd  QWORD PTR [ebp-0x14],xmm0
10002802:	e8 b9 94 16 00       	call   0x1016bcc0
10002807:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
1000280b:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
10002810:	f2 0f 10 45 ec       	movsd  xmm0,QWORD PTR [ebp-0x14]
10002815:	e8 e6 92 16 00       	call   0x1016bb00
1000281a:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
1000281e:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10002823:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
10002828:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000282b:	f2 0f 59 05 98 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1398
10002832:	10 
10002833:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10002837:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000283a:	f2 0f 11 45 e4       	movsd  QWORD PTR [ebp-0x1c],xmm0
1000283f:	e8 7c 94 16 00       	call   0x1016bcc0
10002844:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10002848:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
1000284d:	f2 0f 10 45 e4       	movsd  xmm0,QWORD PTR [ebp-0x1c]
10002852:	e8 a9 92 16 00       	call   0x1016bb00
10002857:	f3 0f 10 7d f8       	movss  xmm7,DWORD PTR [ebp-0x8]
1000285c:	0f 57 e4             	xorps  xmm4,xmm4
1000285f:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10002862:	f3 0f 10 6d f0       	movss  xmm5,DWORD PTR [ebp-0x10]
10002867:	f3 0f 10 75 f4       	movss  xmm6,DWORD PTR [ebp-0xc]
1000286c:	0f 28 d5             	movaps xmm2,xmm5
1000286f:	f2 0f 5a e0          	cvtsd2ss xmm4,xmm0
10002873:	0f 28 c7             	movaps xmm0,xmm7
10002876:	f3 0f 59 d6          	mulss  xmm2,xmm6
1000287a:	f3 0f 59 45 fc       	mulss  xmm0,DWORD PTR [ebp-0x4]
1000287f:	0f 28 ca             	movaps xmm1,xmm2
10002882:	f3 0f 59 55 08       	mulss  xmm2,DWORD PTR [ebp+0x8]
10002887:	f3 0f 59 4d fc       	mulss  xmm1,DWORD PTR [ebp-0x4]
1000288c:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10002890:	0f 28 c7             	movaps xmm0,xmm7
10002893:	f3 0f 59 45 08       	mulss  xmm0,DWORD PTR [ebp+0x8]
10002898:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1000289d:	0f 28 c6             	movaps xmm0,xmm6
100028a0:	0f 57 05 e0 13 1a 10 	xorps  xmm0,XMMWORD PTR ds:0x101a13e0
100028a7:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100028ac:	0f 28 c4             	movaps xmm0,xmm4
100028af:	f3 0f 59 45 08       	mulss  xmm0,DWORD PTR [ebp+0x8]
100028b4:	f3 0f 5c c8          	subss  xmm1,xmm0
100028b8:	0f 28 c4             	movaps xmm0,xmm4
100028bb:	f3 0f 59 45 fc       	mulss  xmm0,DWORD PTR [ebp-0x4]
100028c0:	f3 0f 58 d0          	addss  xmm2,xmm0
100028c4:	f3 0f 11 48 10       	movss  DWORD PTR [eax+0x10],xmm1
100028c9:	0f 28 c5             	movaps xmm0,xmm5
100028cc:	f3 0f 59 c7          	mulss  xmm0,xmm7
100028d0:	f3 0f 11 50 14       	movss  DWORD PTR [eax+0x14],xmm2
100028d5:	0f 28 d4             	movaps xmm2,xmm4
100028d8:	f3 0f 59 d6          	mulss  xmm2,xmm6
100028dc:	f3 0f 11 40 18       	movss  DWORD PTR [eax+0x18],xmm0
100028e1:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100028e6:	0f 57 05 e0 13 1a 10 	xorps  xmm0,XMMWORD PTR ds:0x101a13e0
100028ed:	0f 28 ca             	movaps xmm1,xmm2
100028f0:	f3 0f 59 4d fc       	mulss  xmm1,DWORD PTR [ebp-0x4]
100028f5:	f3 0f 59 55 08       	mulss  xmm2,DWORD PTR [ebp+0x8]
100028fa:	f3 0f 59 c5          	mulss  xmm0,xmm5
100028fe:	f3 0f 59 6d fc       	mulss  xmm5,DWORD PTR [ebp-0x4]
10002903:	f3 0f 5c c8          	subss  xmm1,xmm0
10002907:	f3 0f 11 48 20       	movss  DWORD PTR [eax+0x20],xmm1
1000290c:	f3 0f 5c d5          	subss  xmm2,xmm5
10002910:	f3 0f 59 e7          	mulss  xmm4,xmm7
10002914:	c7 40 0c 00 00 00 00 	mov    DWORD PTR [eax+0xc],0x0
1000291b:	c7 40 1c 00 00 00 00 	mov    DWORD PTR [eax+0x1c],0x0
10002922:	c7 40 2c 00 00 00 00 	mov    DWORD PTR [eax+0x2c],0x0
10002929:	f3 0f 11 60 28       	movss  DWORD PTR [eax+0x28],xmm4
1000292e:	f3 0f 11 50 24       	movss  DWORD PTR [eax+0x24],xmm2
10002933:	5e                   	pop    esi
10002934:	8b e5                	mov    esp,ebp
10002936:	5d                   	pop    ebp
10002937:	c3                   	ret
