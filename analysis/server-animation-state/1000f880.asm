
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000f880 <.text+0xe880>:
1000f880:	55                   	push   ebp
1000f881:	8b ec                	mov    ebp,esp
1000f883:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1000f886:	56                   	push   esi
1000f887:	85 c9                	test   ecx,ecx
1000f889:	0f 84 a0 01 00 00    	je     0x1000fa2f
1000f88f:	8b 91 98 00 00 00    	mov    edx,DWORD PTR [ecx+0x98]
1000f895:	33 c0                	xor    eax,eax
1000f897:	8b 75 10             	mov    esi,DWORD PTR [ebp+0x10]
1000f89a:	03 d1                	add    edx,ecx
1000f89c:	8b 89 94 00 00 00    	mov    ecx,DWORD PTR [ecx+0x94]
1000f8a2:	85 c9                	test   ecx,ecx
1000f8a4:	7e 0d                	jle    0x1000f8b3
1000f8a6:	39 72 14             	cmp    DWORD PTR [edx+0x14],esi
1000f8a9:	74 10                	je     0x1000f8bb
1000f8ab:	40                   	inc    eax
1000f8ac:	83 c2 18             	add    edx,0x18
1000f8af:	3b c1                	cmp    eax,ecx
1000f8b1:	7c f3                	jl     0x1000f8a6
1000f8b3:	3b c1                	cmp    eax,ecx
1000f8b5:	0f 8d 74 01 00 00    	jge    0x1000fa2f
1000f8bb:	f6 42 04 38          	test   BYTE PTR [edx+0x4],0x38
1000f8bf:	f3 0f 10 55 14       	movss  xmm2,DWORD PTR [ebp+0x14]
1000f8c4:	0f 84 f0 00 00 00    	je     0x1000f9ba
1000f8ca:	f3 0f 10 62 0c       	movss  xmm4,DWORD PTR [edx+0xc]
1000f8cf:	f3 0f 10 5a 08       	movss  xmm3,DWORD PTR [edx+0x8]
1000f8d4:	0f 2f dc             	comiss xmm3,xmm4
1000f8d7:	76 07                	jbe    0x1000f8e0
1000f8d9:	0f 57 15 e0 13 1a 10 	xorps  xmm2,XMMWORD PTR ds:0x101a13e0
1000f8e0:	0f 5a cb             	cvtps2pd xmm1,xmm3
1000f8e3:	0f 5a c4             	cvtps2pd xmm0,xmm4
1000f8e6:	f2 0f 58 0d d0 33 1a 	addsd  xmm1,QWORD PTR ds:0x101a33d0
1000f8ed:	10 
1000f8ee:	66 0f 2f c8          	comisd xmm1,xmm0
1000f8f2:	72 4e                	jb     0x1000f942
1000f8f4:	f3 0f 58 dc          	addss  xmm3,xmm4
1000f8f8:	0f 57 c9             	xorps  xmm1,xmm1
1000f8fb:	f2 0f 10 25 a8 13 1a 	movsd  xmm4,QWORD PTR ds:0x101a13a8
1000f902:	10 
1000f903:	f3 0f 5a ca          	cvtss2sd xmm1,xmm2
1000f907:	0f 5a db             	cvtps2pd xmm3,xmm3
1000f90a:	f2 0f 59 1d 48 1e 1a 	mulsd  xmm3,QWORD PTR ds:0x101a1e48
1000f911:	10 
1000f912:	0f 28 c3             	movaps xmm0,xmm3
1000f915:	f2 0f 58 c4          	addsd  xmm0,xmm4
1000f919:	66 0f 2f c8          	comisd xmm1,xmm0
1000f91d:	f3 0f 10 0d cc 13 1a 	movss  xmm1,DWORD PTR ds:0x101a13cc
1000f924:	10 
1000f925:	76 04                	jbe    0x1000f92b
1000f927:	f3 0f 5c d1          	subss  xmm2,xmm1
1000f92b:	0f 57 c0             	xorps  xmm0,xmm0
1000f92e:	f2 0f 5c dc          	subsd  xmm3,xmm4
1000f932:	f3 0f 5a c2          	cvtss2sd xmm0,xmm2
1000f936:	66 0f 2f d8          	comisd xmm3,xmm0
1000f93a:	76 7e                	jbe    0x1000f9ba
1000f93c:	f3 0f 58 d1          	addss  xmm2,xmm1
1000f940:	eb 78                	jmp    0x1000f9ba
1000f942:	0f 2f 15 cc 13 1a 10 	comiss xmm2,DWORD PTR ds:0x101a13cc
1000f949:	76 2d                	jbe    0x1000f978
1000f94b:	f3 0f 5a d2          	cvtss2sd xmm2,xmm2
1000f94f:	0f 28 c2             	movaps xmm0,xmm2
1000f952:	f2 0f 5e 05 b8 13 1a 	divsd  xmm0,QWORD PTR ds:0x101a13b8
1000f959:	10 
1000f95a:	f2 0f 2c c0          	cvttsd2si eax,xmm0
1000f95e:	66 0f 6e c0          	movd   xmm0,eax
1000f962:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
1000f966:	f2 0f 59 05 b8 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a13b8
1000f96d:	10 
1000f96e:	f2 0f 5c d0          	subsd  xmm2,xmm0
1000f972:	f2 0f 5a d2          	cvtsd2ss xmm2,xmm2
1000f976:	eb 42                	jmp    0x1000f9ba
1000f978:	0f 57 c0             	xorps  xmm0,xmm0
1000f97b:	0f 2f c2             	comiss xmm0,xmm2
1000f97e:	76 3a                	jbe    0x1000f9ba
1000f980:	0f 57 db             	xorps  xmm3,xmm3
1000f983:	f2 0f 10 05 78 1e 1a 	movsd  xmm0,QWORD PTR ds:0x101a1e78
1000f98a:	10 
1000f98b:	f3 0f 5a da          	cvtss2sd xmm3,xmm2
1000f98f:	0f 28 cb             	movaps xmm1,xmm3
1000f992:	f2 0f 5e 0d b8 13 1a 	divsd  xmm1,QWORD PTR ds:0x101a13b8
1000f999:	10 
1000f99a:	f2 0f 5c c1          	subsd  xmm0,xmm1
1000f99e:	f2 0f 2c c0          	cvttsd2si eax,xmm0
1000f9a2:	66 0f 6e c0          	movd   xmm0,eax
1000f9a6:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
1000f9aa:	f2 0f 59 05 b8 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a13b8
1000f9b1:	10 
1000f9b2:	f2 0f 58 c3          	addsd  xmm0,xmm3
1000f9b6:	66 0f 5a d0          	cvtpd2ps xmm2,xmm0
1000f9ba:	f3 0f 5c 52 08       	subss  xmm2,DWORD PTR [edx+0x8]
1000f9bf:	f3 0f 10 42 0c       	movss  xmm0,DWORD PTR [edx+0xc]
1000f9c4:	33 c9                	xor    ecx,ecx
1000f9c6:	f3 0f 5c 42 08       	subss  xmm0,DWORD PTR [edx+0x8]
1000f9cb:	f3 0f 59 15 c0 22 1a 	mulss  xmm2,DWORD PTR ds:0x101a22c0
1000f9d2:	10 
1000f9d3:	f3 0f 5e d0          	divss  xmm2,xmm0
1000f9d7:	f3 0f 2c c2          	cvttss2si eax,xmm2
1000f9db:	85 c0                	test   eax,eax
1000f9dd:	0f 49 c8             	cmovns ecx,eax
1000f9e0:	b8 ff 00 00 00       	mov    eax,0xff
1000f9e5:	3b c8                	cmp    ecx,eax
1000f9e7:	0f 4f c8             	cmovg  ecx,eax
1000f9ea:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1000f9ed:	88 8c 30 40 01 00 00 	mov    BYTE PTR [eax+esi*1+0x140],cl
1000f9f4:	f3 0f 10 52 08       	movss  xmm2,DWORD PTR [edx+0x8]
1000f9f9:	f3 0f 10 42 0c       	movss  xmm0,DWORD PTR [edx+0xc]
1000f9fe:	f3 0f 5c c2          	subss  xmm0,xmm2
1000fa02:	5e                   	pop    esi
1000fa03:	0f 5a c8             	cvtps2pd xmm1,xmm0
1000fa06:	66 0f 6e c1          	movd   xmm0,ecx
1000fa0a:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
1000fa0e:	f2 0f 59 05 c8 33 1a 	mulsd  xmm0,QWORD PTR ds:0x101a33c8
1000fa15:	10 
1000fa16:	f2 0f 59 c8          	mulsd  xmm1,xmm0
1000fa1a:	0f 5a c2             	cvtps2pd xmm0,xmm2
1000fa1d:	f2 0f 58 c8          	addsd  xmm1,xmm0
1000fa21:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
1000fa25:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
1000fa2a:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
1000fa2d:	5d                   	pop    ebp
1000fa2e:	c3                   	ret
1000fa2f:	d9 45 14             	fld    DWORD PTR [ebp+0x14]
1000fa32:	5e                   	pop    esi
1000fa33:	5d                   	pop    ebp
1000fa34:	c3                   	ret
