
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10002ca0 <.text+0x1ca0>:
10002ca0:	55                   	push   ebp
10002ca1:	8b ec                	mov    ebp,esp
10002ca3:	83 ec 20             	sub    esp,0x20
10002ca6:	56                   	push   esi
10002ca7:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10002caa:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
10002caf:	0f 5a c0             	cvtps2pd xmm0,xmm0
10002cb2:	f2 0f 59 05 98 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1398
10002cb9:	10 
10002cba:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10002cbe:	0f 5a c0             	cvtps2pd xmm0,xmm0
10002cc1:	f2 0f 11 45 ec       	movsd  QWORD PTR [ebp-0x14],xmm0
10002cc6:	e8 f5 8f 16 00       	call   0x1016bcc0
10002ccb:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10002ccf:	f3 0f 11 45 e8       	movss  DWORD PTR [ebp-0x18],xmm0
10002cd4:	f2 0f 10 45 ec       	movsd  xmm0,QWORD PTR [ebp-0x14]
10002cd9:	e8 22 8e 16 00       	call   0x1016bb00
10002cde:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10002ce2:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
10002ce7:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
10002ceb:	0f 5a c0             	cvtps2pd xmm0,xmm0
10002cee:	f2 0f 59 05 98 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1398
10002cf5:	10 
10002cf6:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10002cfa:	0f 5a c0             	cvtps2pd xmm0,xmm0
10002cfd:	f2 0f 11 45 f4       	movsd  QWORD PTR [ebp-0xc],xmm0
10002d02:	e8 b9 8f 16 00       	call   0x1016bcc0
10002d07:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10002d0b:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
10002d10:	f2 0f 10 45 f4       	movsd  xmm0,QWORD PTR [ebp-0xc]
10002d15:	e8 e6 8d 16 00       	call   0x1016bb00
10002d1a:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10002d1e:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10002d23:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
10002d28:	0f 5a c0             	cvtps2pd xmm0,xmm0
10002d2b:	f2 0f 59 05 98 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1398
10002d32:	10 
10002d33:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10002d37:	0f 5a c0             	cvtps2pd xmm0,xmm0
10002d3a:	f2 0f 11 45 e0       	movsd  QWORD PTR [ebp-0x20],xmm0
10002d3f:	e8 7c 8f 16 00       	call   0x1016bcc0
10002d44:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10002d48:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10002d4d:	f2 0f 10 45 e0       	movsd  xmm0,QWORD PTR [ebp-0x20]
10002d52:	e8 a9 8d 16 00       	call   0x1016bb00
10002d57:	f3 0f 10 6d f8       	movss  xmm5,DWORD PTR [ebp-0x8]
10002d5c:	0f 57 f6             	xorps  xmm6,xmm6
10002d5f:	f3 0f 10 65 f0       	movss  xmm4,DWORD PTR [ebp-0x10]
10002d64:	0f 28 d5             	movaps xmm2,xmm5
10002d67:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10002d6a:	f3 0f 10 7d e8       	movss  xmm7,DWORD PTR [ebp-0x18]
10002d6f:	f3 0f 59 d4          	mulss  xmm2,xmm4
10002d73:	5e                   	pop    esi
10002d74:	f2 0f 5a f0          	cvtsd2ss xmm6,xmm0
10002d78:	0f 28 de             	movaps xmm3,xmm6
10002d7b:	f3 0f 59 dc          	mulss  xmm3,xmm4
10002d7f:	85 c0                	test   eax,eax
10002d81:	74 45                	je     0x10002dc8
10002d83:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
10002d88:	0f 28 ca             	movaps xmm1,xmm2
10002d8b:	f3 0f 59 45 08       	mulss  xmm0,DWORD PTR [ebp+0x8]
10002d90:	f3 0f 59 4d 08       	mulss  xmm1,DWORD PTR [ebp+0x8]
10002d95:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10002d99:	0f 28 c6             	movaps xmm0,xmm6
10002d9c:	f3 0f 59 c7          	mulss  xmm0,xmm7
10002da0:	f3 0f 5c c8          	subss  xmm1,xmm0
10002da4:	0f 28 c7             	movaps xmm0,xmm7
10002da7:	0f 57 05 e0 13 1a 10 	xorps  xmm0,XMMWORD PTR ds:0x101a13e0
10002dae:	f3 0f 59 c5          	mulss  xmm0,xmm5
10002db2:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
10002db7:	0f 28 cb             	movaps xmm1,xmm3
10002dba:	f3 0f 59 4d 08       	mulss  xmm1,DWORD PTR [ebp+0x8]
10002dbf:	f3 0f 5c c8          	subss  xmm1,xmm0
10002dc3:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
10002dc8:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10002dcb:	85 c0                	test   eax,eax
10002dcd:	74 37                	je     0x10002e06
10002dcf:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
10002dd4:	f3 0f 59 c7          	mulss  xmm0,xmm7
10002dd8:	f3 0f 59 d7          	mulss  xmm2,xmm7
10002ddc:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10002de0:	0f 28 c6             	movaps xmm0,xmm6
10002de3:	f3 0f 59 45 08       	mulss  xmm0,DWORD PTR [ebp+0x8]
10002de8:	f3 0f 59 df          	mulss  xmm3,xmm7
10002dec:	f3 0f 58 d0          	addss  xmm2,xmm0
10002df0:	0f 28 c5             	movaps xmm0,xmm5
10002df3:	f3 0f 59 45 08       	mulss  xmm0,DWORD PTR [ebp+0x8]
10002df8:	f3 0f 5c d8          	subss  xmm3,xmm0
10002dfc:	f3 0f 11 50 04       	movss  DWORD PTR [eax+0x4],xmm2
10002e01:	f3 0f 11 58 08       	movss  DWORD PTR [eax+0x8],xmm3
10002e06:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
10002e09:	85 c0                	test   eax,eax
10002e0b:	74 1f                	je     0x10002e2c
10002e0d:	f3 0f 59 6d fc       	mulss  xmm5,DWORD PTR [ebp-0x4]
10002e12:	f3 0f 59 75 fc       	mulss  xmm6,DWORD PTR [ebp-0x4]
10002e17:	0f 57 25 e0 13 1a 10 	xorps  xmm4,XMMWORD PTR ds:0x101a13e0
10002e1e:	f3 0f 11 20          	movss  DWORD PTR [eax],xmm4
10002e22:	f3 0f 11 68 04       	movss  DWORD PTR [eax+0x4],xmm5
10002e27:	f3 0f 11 70 08       	movss  DWORD PTR [eax+0x8],xmm6
10002e2c:	8b e5                	mov    esp,ebp
10002e2e:	5d                   	pop    ebp
10002e2f:	c3                   	ret
