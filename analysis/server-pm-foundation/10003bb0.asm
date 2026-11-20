
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10003bb0 <.text+0x2bb0>:
10003bb0:	55                   	push   ebp
10003bb1:	8b ec                	mov    ebp,esp
10003bb3:	83 ec 30             	sub    esp,0x30
10003bb6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
10003bbb:	33 c5                	xor    eax,ebp
10003bbd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10003bc0:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10003bc3:	8d 4d e4             	lea    ecx,[ebp-0x1c]
10003bc6:	51                   	push   ecx
10003bc7:	8d 4d f0             	lea    ecx,[ebp-0x10]
10003bca:	51                   	push   ecx
10003bcb:	8d 4d d8             	lea    ecx,[ebp-0x28]
10003bce:	51                   	push   ecx
10003bcf:	50                   	push   eax
10003bd0:	e8 0b ef ff ff       	call   0x10002ae0
10003bd5:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
10003bd8:	83 c4 10             	add    esp,0x10
10003bdb:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10003bdf:	f3 0f 59 45 f0       	mulss  xmm0,DWORD PTR [ebp-0x10]
10003be4:	f3 0f 10 48 04       	movss  xmm1,DWORD PTR [eax+0x4]
10003be9:	f3 0f 59 4d f4       	mulss  xmm1,DWORD PTR [ebp-0xc]
10003bee:	f3 0f 58 c8          	addss  xmm1,xmm0
10003bf2:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
10003bf7:	f3 0f 59 45 f8       	mulss  xmm0,DWORD PTR [ebp-0x8]
10003bfc:	33 c0                	xor    eax,eax
10003bfe:	f3 0f 58 c8          	addss  xmm1,xmm0
10003c02:	0f 57 c0             	xorps  xmm0,xmm0
10003c05:	0f 2f c1             	comiss xmm0,xmm1
10003c08:	0f 54 0d 80 1f 1a 10 	andps  xmm1,XMMWORD PTR ds:0x101a1f80
10003c0f:	0f 96 c0             	setbe  al
10003c12:	8d 04 45 ff ff ff ff 	lea    eax,[eax*2-0x1]
10003c19:	66 0f 6e c0          	movd   xmm0,eax
10003c1d:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10003c20:	f3 0f 11 45 d0       	movss  DWORD PTR [ebp-0x30],xmm0
10003c25:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
10003c2a:	0f 2f c1             	comiss xmm0,xmm1
10003c2d:	76 22                	jbe    0x10003c51
10003c2f:	f3 0f 59 4d 10       	mulss  xmm1,DWORD PTR [ebp+0x10]
10003c34:	d9 45 d0             	fld    DWORD PTR [ebp-0x30]
10003c37:	f3 0f 5e c8          	divss  xmm1,xmm0
10003c3b:	f3 0f 11 4d d4       	movss  DWORD PTR [ebp-0x2c],xmm1
10003c40:	d8 4d d4             	fmul   DWORD PTR [ebp-0x2c]
10003c43:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10003c46:	33 cd                	xor    ecx,ebp
10003c48:	e8 66 9f 13 00       	call   0x1013dbb3
10003c4d:	8b e5                	mov    esp,ebp
10003c4f:	5d                   	pop    ebp
10003c50:	c3                   	ret
10003c51:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
10003c56:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10003c59:	d9 45 d0             	fld    DWORD PTR [ebp-0x30]
10003c5c:	33 cd                	xor    ecx,ebp
10003c5e:	f3 0f 11 45 d4       	movss  DWORD PTR [ebp-0x2c],xmm0
10003c63:	d8 4d d4             	fmul   DWORD PTR [ebp-0x2c]
10003c66:	e8 48 9f 13 00       	call   0x1013dbb3
10003c6b:	8b e5                	mov    esp,ebp
10003c6d:	5d                   	pop    ebp
10003c6e:	c3                   	ret
