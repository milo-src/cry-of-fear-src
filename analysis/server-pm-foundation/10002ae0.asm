
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10002ae0 <.text+0x1ae0>:
10002ae0:	55                   	push   ebp
10002ae1:	8b ec                	mov    ebp,esp
10002ae3:	83 ec 18             	sub    esp,0x18
10002ae6:	56                   	push   esi
10002ae7:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10002aea:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
10002aef:	0f 5a c0             	cvtps2pd xmm0,xmm0
10002af2:	f2 0f 59 05 98 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1398
10002af9:	10 
10002afa:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10002afe:	0f 5a c0             	cvtps2pd xmm0,xmm0
10002b01:	f2 0f 11 45 e8       	movsd  QWORD PTR [ebp-0x18],xmm0
10002b06:	e8 b5 91 16 00       	call   0x1016bcc0
10002b0b:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10002b0f:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
10002b14:	f2 0f 10 45 e8       	movsd  xmm0,QWORD PTR [ebp-0x18]
10002b19:	e8 e2 8f 16 00       	call   0x1016bb00
10002b1e:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10002b22:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
10002b27:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
10002b2b:	0f 5a c0             	cvtps2pd xmm0,xmm0
10002b2e:	f2 0f 59 05 98 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1398
10002b35:	10 
10002b36:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10002b3a:	0f 5a c0             	cvtps2pd xmm0,xmm0
10002b3d:	f2 0f 11 45 e8       	movsd  QWORD PTR [ebp-0x18],xmm0
10002b42:	e8 79 91 16 00       	call   0x1016bcc0
10002b47:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10002b4b:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10002b50:	f2 0f 10 45 e8       	movsd  xmm0,QWORD PTR [ebp-0x18]
10002b55:	e8 a6 8f 16 00       	call   0x1016bb00
10002b5a:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10002b5e:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10002b63:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
10002b68:	0f 5a c0             	cvtps2pd xmm0,xmm0
10002b6b:	f2 0f 59 05 98 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1398
10002b72:	10 
10002b73:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10002b77:	0f 5a c0             	cvtps2pd xmm0,xmm0
10002b7a:	f2 0f 11 45 e8       	movsd  QWORD PTR [ebp-0x18],xmm0
10002b7f:	e8 3c 91 16 00       	call   0x1016bcc0
10002b84:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10002b88:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
10002b8d:	f2 0f 10 45 e8       	movsd  xmm0,QWORD PTR [ebp-0x18]
10002b92:	e8 69 8f 16 00       	call   0x1016bb00
10002b97:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10002b9a:	0f 57 d2             	xorps  xmm2,xmm2
10002b9d:	f3 0f 10 35 e0 13 1a 	movss  xmm6,DWORD PTR ds:0x101a13e0
10002ba4:	10 
10002ba5:	f3 0f 10 65 fc       	movss  xmm4,DWORD PTR [ebp-0x4]
10002baa:	f3 0f 10 7d f4       	movss  xmm7,DWORD PTR [ebp-0xc]
10002baf:	f3 0f 10 5d 08       	movss  xmm3,DWORD PTR [ebp+0x8]
10002bb4:	f3 0f 10 4d f8       	movss  xmm1,DWORD PTR [ebp-0x8]
10002bb9:	f2 0f 5a d0          	cvtsd2ss xmm2,xmm0
10002bbd:	5e                   	pop    esi
10002bbe:	f3 0f 11 55 ec       	movss  DWORD PTR [ebp-0x14],xmm2
10002bc3:	85 c0                	test   eax,eax
10002bc5:	74 22                	je     0x10002be9
10002bc7:	0f 28 c4             	movaps xmm0,xmm4
10002bca:	f3 0f 59 c7          	mulss  xmm0,xmm7
10002bce:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10002bd2:	0f 28 c4             	movaps xmm0,xmm4
10002bd5:	f3 0f 59 c3          	mulss  xmm0,xmm3
10002bd9:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
10002bde:	0f 28 c1             	movaps xmm0,xmm1
10002be1:	0f 57 c6             	xorps  xmm0,xmm6
10002be4:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
10002be9:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10002bec:	0f 28 eb             	movaps xmm5,xmm3
10002bef:	0f 57 ee             	xorps  xmm5,xmm6
10002bf2:	f3 0f 10 75 f0       	movss  xmm6,DWORD PTR [ebp-0x10]
10002bf7:	85 c0                	test   eax,eax
10002bf9:	74 5d                	je     0x10002c58
10002bfb:	f3 0f 10 65 fc       	movss  xmm4,DWORD PTR [ebp-0x4]
10002c00:	0f 28 da             	movaps xmm3,xmm2
10002c03:	f3 0f 59 1d d0 13 1a 	mulss  xmm3,DWORD PTR ds:0x101a13d0
10002c0a:	10 
10002c0b:	0f 28 d6             	movaps xmm2,xmm6
10002c0e:	f3 0f 59 d1          	mulss  xmm2,xmm1
10002c12:	0f 28 cb             	movaps xmm1,xmm3
10002c15:	f3 0f 59 df          	mulss  xmm3,xmm7
10002c19:	0f 28 c2             	movaps xmm0,xmm2
10002c1c:	f3 0f 59 cd          	mulss  xmm1,xmm5
10002c20:	f3 0f 59 55 08       	mulss  xmm2,DWORD PTR [ebp+0x8]
10002c25:	f3 0f 59 c7          	mulss  xmm0,xmm7
10002c29:	f3 0f 5c da          	subss  xmm3,xmm2
10002c2d:	f3 0f 10 55 ec       	movss  xmm2,DWORD PTR [ebp-0x14]
10002c32:	f3 0f 5c c8          	subss  xmm1,xmm0
10002c36:	0f 28 c6             	movaps xmm0,xmm6
10002c39:	f3 0f 59 05 d0 13 1a 	mulss  xmm0,DWORD PTR ds:0x101a13d0
10002c40:	10 
10002c41:	f3 0f 11 58 04       	movss  DWORD PTR [eax+0x4],xmm3
10002c46:	f3 0f 10 5d 08       	movss  xmm3,DWORD PTR [ebp+0x8]
10002c4b:	f3 0f 59 c4          	mulss  xmm0,xmm4
10002c4f:	f3 0f 11 08          	movss  DWORD PTR [eax],xmm1
10002c53:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
10002c58:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
10002c5b:	85 c0                	test   eax,eax
10002c5d:	74 35                	je     0x10002c94
10002c5f:	0f 28 ca             	movaps xmm1,xmm2
10002c62:	f3 0f 59 ee          	mulss  xmm5,xmm6
10002c66:	f3 0f 59 4d f8       	mulss  xmm1,DWORD PTR [ebp-0x8]
10002c6b:	f3 0f 59 f7          	mulss  xmm6,xmm7
10002c6f:	0f 28 c1             	movaps xmm0,xmm1
10002c72:	f3 0f 59 d4          	mulss  xmm2,xmm4
10002c76:	f3 0f 59 c7          	mulss  xmm0,xmm7
10002c7a:	f3 0f 59 cb          	mulss  xmm1,xmm3
10002c7e:	f3 0f 5c c5          	subss  xmm0,xmm5
10002c82:	f3 0f 11 50 08       	movss  DWORD PTR [eax+0x8],xmm2
10002c87:	f3 0f 5c ce          	subss  xmm1,xmm6
10002c8b:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10002c8f:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
10002c94:	8b e5                	mov    esp,ebp
10002c96:	5d                   	pop    ebp
10002c97:	c3                   	ret
