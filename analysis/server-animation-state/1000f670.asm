
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000f670 <.text+0xe670>:
1000f670:	55                   	push   ebp
1000f671:	8b ec                	mov    ebp,esp
1000f673:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000f676:	56                   	push   esi
1000f677:	57                   	push   edi
1000f678:	85 c0                	test   eax,eax
1000f67a:	0f 84 34 01 00 00    	je     0x1000f7b4
1000f680:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
1000f683:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
1000f686:	69 97 2c 01 00 00 b0 	imul   edx,DWORD PTR [edi+0x12c],0xb0
1000f68d:	00 00 00 
1000f690:	03 90 a8 00 00 00    	add    edx,DWORD PTR [eax+0xa8]
1000f696:	03 d0                	add    edx,eax
1000f698:	8b 84 b2 80 00 00 00 	mov    eax,DWORD PTR [edx+esi*4+0x80]
1000f69f:	85 c0                	test   eax,eax
1000f6a1:	0f 84 0d 01 00 00    	je     0x1000f7b4
1000f6a7:	f3 0f 10 55 14       	movss  xmm2,DWORD PTR [ebp+0x14]
1000f6ac:	a8 38                	test   al,0x38
1000f6ae:	74 7e                	je     0x1000f72e
1000f6b0:	f3 0f 10 a4 b2 90 00 	movss  xmm4,DWORD PTR [edx+esi*4+0x90]
1000f6b7:	00 00 
1000f6b9:	f3 0f 10 9c b2 88 00 	movss  xmm3,DWORD PTR [edx+esi*4+0x88]
1000f6c0:	00 00 
1000f6c2:	0f 2f dc             	comiss xmm3,xmm4
1000f6c5:	76 07                	jbe    0x1000f6ce
1000f6c7:	0f 57 15 e0 13 1a 10 	xorps  xmm2,XMMWORD PTR ds:0x101a13e0
1000f6ce:	0f 5a cb             	cvtps2pd xmm1,xmm3
1000f6d1:	0f 5a c4             	cvtps2pd xmm0,xmm4
1000f6d4:	f2 0f 58 0d d0 33 1a 	addsd  xmm1,QWORD PTR ds:0x101a33d0
1000f6db:	10 
1000f6dc:	66 0f 2f c8          	comisd xmm1,xmm0
1000f6e0:	72 4c                	jb     0x1000f72e
1000f6e2:	f3 0f 58 dc          	addss  xmm3,xmm4
1000f6e6:	0f 57 c9             	xorps  xmm1,xmm1
1000f6e9:	f2 0f 10 25 a8 13 1a 	movsd  xmm4,QWORD PTR ds:0x101a13a8
1000f6f0:	10 
1000f6f1:	f3 0f 5a ca          	cvtss2sd xmm1,xmm2
1000f6f5:	0f 5a db             	cvtps2pd xmm3,xmm3
1000f6f8:	f2 0f 59 1d 48 1e 1a 	mulsd  xmm3,QWORD PTR ds:0x101a1e48
1000f6ff:	10 
1000f700:	0f 28 c3             	movaps xmm0,xmm3
1000f703:	f2 0f 58 c4          	addsd  xmm0,xmm4
1000f707:	66 0f 2f c8          	comisd xmm1,xmm0
1000f70b:	f3 0f 10 0d cc 13 1a 	movss  xmm1,DWORD PTR ds:0x101a13cc
1000f712:	10 
1000f713:	76 04                	jbe    0x1000f719
1000f715:	f3 0f 5c d1          	subss  xmm2,xmm1
1000f719:	0f 57 c0             	xorps  xmm0,xmm0
1000f71c:	f2 0f 5c dc          	subsd  xmm3,xmm4
1000f720:	f3 0f 5a c2          	cvtss2sd xmm0,xmm2
1000f724:	66 0f 2f d8          	comisd xmm3,xmm0
1000f728:	76 04                	jbe    0x1000f72e
1000f72a:	f3 0f 58 d1          	addss  xmm2,xmm1
1000f72e:	f3 0f 10 8c b2 88 00 	movss  xmm1,DWORD PTR [edx+esi*4+0x88]
1000f735:	00 00 
1000f737:	33 c9                	xor    ecx,ecx
1000f739:	f3 0f 10 84 b2 90 00 	movss  xmm0,DWORD PTR [edx+esi*4+0x90]
1000f740:	00 00 
1000f742:	f3 0f 5c d1          	subss  xmm2,xmm1
1000f746:	f3 0f 5c c1          	subss  xmm0,xmm1
1000f74a:	f3 0f 59 15 c0 22 1a 	mulss  xmm2,DWORD PTR ds:0x101a22c0
1000f751:	10 
1000f752:	f3 0f 5e d0          	divss  xmm2,xmm0
1000f756:	f3 0f 2c c2          	cvttss2si eax,xmm2
1000f75a:	85 c0                	test   eax,eax
1000f75c:	0f 49 c8             	cmovns ecx,eax
1000f75f:	b8 ff 00 00 00       	mov    eax,0xff
1000f764:	3b c8                	cmp    ecx,eax
1000f766:	0f 4f c8             	cmovg  ecx,eax
1000f769:	88 8c 37 44 01 00 00 	mov    BYTE PTR [edi+esi*1+0x144],cl
1000f770:	f3 0f 10 94 b2 88 00 	movss  xmm2,DWORD PTR [edx+esi*4+0x88]
1000f777:	00 00 
1000f779:	f3 0f 10 84 b2 90 00 	movss  xmm0,DWORD PTR [edx+esi*4+0x90]
1000f780:	00 00 
1000f782:	f3 0f 5c c2          	subss  xmm0,xmm2
1000f786:	5f                   	pop    edi
1000f787:	5e                   	pop    esi
1000f788:	0f 5a c8             	cvtps2pd xmm1,xmm0
1000f78b:	66 0f 6e c1          	movd   xmm0,ecx
1000f78f:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
1000f793:	f2 0f 59 05 c8 33 1a 	mulsd  xmm0,QWORD PTR ds:0x101a33c8
1000f79a:	10 
1000f79b:	f2 0f 59 c8          	mulsd  xmm1,xmm0
1000f79f:	0f 5a c2             	cvtps2pd xmm0,xmm2
1000f7a2:	f2 0f 58 c8          	addsd  xmm1,xmm0
1000f7a6:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
1000f7aa:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
1000f7af:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
1000f7b2:	5d                   	pop    ebp
1000f7b3:	c3                   	ret
1000f7b4:	d9 45 14             	fld    DWORD PTR [ebp+0x14]
1000f7b7:	5f                   	pop    edi
1000f7b8:	5e                   	pop    esi
1000f7b9:	5d                   	pop    ebp
1000f7ba:	c3                   	ret
