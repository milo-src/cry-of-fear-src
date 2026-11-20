
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10002940 <.text+0x1940>:
10002940:	55                   	push   ebp
10002941:	8b ec                	mov    ebp,esp
10002943:	83 ec 1c             	sub    esp,0x1c
10002946:	56                   	push   esi
10002947:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000294a:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
1000294f:	0f 5a c0             	cvtps2pd xmm0,xmm0
10002952:	f2 0f 59 05 98 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1398
10002959:	10 
1000295a:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1000295e:	0f 5a c0             	cvtps2pd xmm0,xmm0
10002961:	f2 0f 11 45 ec       	movsd  QWORD PTR [ebp-0x14],xmm0
10002966:	e8 55 93 16 00       	call   0x1016bcc0
1000296b:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
1000296f:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
10002974:	f2 0f 10 45 ec       	movsd  xmm0,QWORD PTR [ebp-0x14]
10002979:	e8 82 91 16 00       	call   0x1016bb00
1000297e:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10002982:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10002987:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
1000298b:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000298e:	f2 0f 59 05 98 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1398
10002995:	10 
10002996:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1000299a:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000299d:	f2 0f 11 45 ec       	movsd  QWORD PTR [ebp-0x14],xmm0
100029a2:	e8 19 93 16 00       	call   0x1016bcc0
100029a7:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100029ab:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100029b0:	f2 0f 10 45 ec       	movsd  xmm0,QWORD PTR [ebp-0x14]
100029b5:	e8 46 91 16 00       	call   0x1016bb00
100029ba:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100029be:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
100029c3:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
100029c8:	0f 5a c0             	cvtps2pd xmm0,xmm0
100029cb:	f2 0f 59 05 98 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1398
100029d2:	10 
100029d3:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100029d7:	0f 5a c0             	cvtps2pd xmm0,xmm0
100029da:	f2 0f 11 45 e4       	movsd  QWORD PTR [ebp-0x1c],xmm0
100029df:	e8 dc 92 16 00       	call   0x1016bcc0
100029e4:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100029e8:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
100029ed:	f2 0f 10 45 e4       	movsd  xmm0,QWORD PTR [ebp-0x1c]
100029f2:	e8 09 91 16 00       	call   0x1016bb00
100029f7:	f3 0f 10 7d f8       	movss  xmm7,DWORD PTR [ebp-0x8]
100029fc:	0f 57 e4             	xorps  xmm4,xmm4
100029ff:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10002a02:	f3 0f 10 6d f0       	movss  xmm5,DWORD PTR [ebp-0x10]
10002a07:	f3 0f 10 75 f4       	movss  xmm6,DWORD PTR [ebp-0xc]
10002a0c:	0f 28 d5             	movaps xmm2,xmm5
10002a0f:	f2 0f 5a e0          	cvtsd2ss xmm4,xmm0
10002a13:	0f 28 c7             	movaps xmm0,xmm7
10002a16:	f3 0f 59 d6          	mulss  xmm2,xmm6
10002a1a:	f3 0f 59 45 fc       	mulss  xmm0,DWORD PTR [ebp-0x4]
10002a1f:	0f 28 ca             	movaps xmm1,xmm2
10002a22:	f3 0f 59 55 08       	mulss  xmm2,DWORD PTR [ebp+0x8]
10002a27:	f3 0f 59 4d fc       	mulss  xmm1,DWORD PTR [ebp-0x4]
10002a2c:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10002a30:	0f 28 c7             	movaps xmm0,xmm7
10002a33:	f3 0f 59 45 08       	mulss  xmm0,DWORD PTR [ebp+0x8]
10002a38:	f3 0f 11 40 10       	movss  DWORD PTR [eax+0x10],xmm0
10002a3d:	0f 28 c6             	movaps xmm0,xmm6
10002a40:	0f 57 05 e0 13 1a 10 	xorps  xmm0,XMMWORD PTR ds:0x101a13e0
10002a47:	f3 0f 11 40 20       	movss  DWORD PTR [eax+0x20],xmm0
10002a4c:	0f 28 c4             	movaps xmm0,xmm4
10002a4f:	f3 0f 59 45 08       	mulss  xmm0,DWORD PTR [ebp+0x8]
10002a54:	f3 0f 5c c8          	subss  xmm1,xmm0
10002a58:	0f 28 c4             	movaps xmm0,xmm4
10002a5b:	f3 0f 59 45 fc       	mulss  xmm0,DWORD PTR [ebp-0x4]
10002a60:	f3 0f 58 d0          	addss  xmm2,xmm0
10002a64:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
10002a69:	0f 28 c5             	movaps xmm0,xmm5
10002a6c:	f3 0f 59 c7          	mulss  xmm0,xmm7
10002a70:	f3 0f 11 50 14       	movss  DWORD PTR [eax+0x14],xmm2
10002a75:	0f 28 d4             	movaps xmm2,xmm4
10002a78:	f3 0f 59 d6          	mulss  xmm2,xmm6
10002a7c:	f3 0f 11 40 24       	movss  DWORD PTR [eax+0x24],xmm0
10002a81:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
10002a86:	0f 57 05 e0 13 1a 10 	xorps  xmm0,XMMWORD PTR ds:0x101a13e0
10002a8d:	0f 28 ca             	movaps xmm1,xmm2
10002a90:	f3 0f 59 4d fc       	mulss  xmm1,DWORD PTR [ebp-0x4]
10002a95:	f3 0f 59 55 08       	mulss  xmm2,DWORD PTR [ebp+0x8]
10002a9a:	f3 0f 59 c5          	mulss  xmm0,xmm5
10002a9e:	f3 0f 59 6d fc       	mulss  xmm5,DWORD PTR [ebp-0x4]
10002aa3:	f3 0f 5c c8          	subss  xmm1,xmm0
10002aa7:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
10002aac:	f3 0f 5c d5          	subss  xmm2,xmm5
10002ab0:	f3 0f 59 e7          	mulss  xmm4,xmm7
10002ab4:	c7 40 0c 00 00 00 00 	mov    DWORD PTR [eax+0xc],0x0
10002abb:	c7 40 1c 00 00 00 00 	mov    DWORD PTR [eax+0x1c],0x0
10002ac2:	c7 40 2c 00 00 00 00 	mov    DWORD PTR [eax+0x2c],0x0
10002ac9:	f3 0f 11 60 28       	movss  DWORD PTR [eax+0x28],xmm4
10002ace:	f3 0f 11 50 18       	movss  DWORD PTR [eax+0x18],xmm2
10002ad3:	5e                   	pop    esi
10002ad4:	8b e5                	mov    esp,ebp
10002ad6:	5d                   	pop    ebp
10002ad7:	c3                   	ret
