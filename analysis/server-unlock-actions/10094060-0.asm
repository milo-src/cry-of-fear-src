
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10094060 <.text+0x93060>:
10094060:	55                   	push   ebp
10094061:	8b ec                	mov    ebp,esp
10094063:	56                   	push   esi
10094064:	6a 00                	push   0x0
10094066:	e8 b5 df ff ff       	call   0x10092020
1009406b:	8b f0                	mov    esi,eax
1009406d:	8d 45 10             	lea    eax,[ebp+0x10]
10094070:	50                   	push   eax
10094071:	56                   	push   esi
10094072:	e8 69 5f 08 00       	call   0x10119fe0
10094077:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1009407a:	33 c9                	xor    ecx,ecx
1009407c:	f3 0f 10 5d 28       	movss  xmm3,DWORD PTR [ebp+0x28]
10094081:	83 c4 0c             	add    esp,0xc
10094084:	38 4d 0c             	cmp    BYTE PTR [ebp+0xc],cl
10094087:	0f 57 c0             	xorps  xmm0,xmm0
1009408a:	8b 45 1c             	mov    eax,DWORD PTR [ebp+0x1c]
1009408d:	f3 0f 10 4d 30       	movss  xmm1,DWORD PTR [ebp+0x30]
10094092:	0f 95 c1             	setne  cl
10094095:	f3 0f 10 55 2c       	movss  xmm2,DWORD PTR [ebp+0x2c]
1009409a:	0f 2e d8             	ucomiss xmm3,xmm0
1009409d:	89 8a a4 01 00 00    	mov    DWORD PTR [edx+0x1a4],ecx
100940a3:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100940a6:	89 81 10 01 00 00    	mov    DWORD PTR [ecx+0x110],eax
100940ac:	9f                   	lahf
100940ad:	f6 c4 44             	test   ah,0x44
100940b0:	7a 12                	jp     0x100940c4
100940b2:	0f 2e d0             	ucomiss xmm2,xmm0
100940b5:	9f                   	lahf
100940b6:	f6 c4 44             	test   ah,0x44
100940b9:	7a 09                	jp     0x100940c4
100940bb:	0f 2e c8             	ucomiss xmm1,xmm0
100940be:	9f                   	lahf
100940bf:	f6 c4 44             	test   ah,0x44
100940c2:	7b 32                	jnp    0x100940f6
100940c4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100940c7:	c7 80 10 01 00 00 9a 	mov    DWORD PTR [eax+0x110],0x29a
100940ce:	02 00 00 
100940d1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100940d4:	c7 80 08 01 00 00 05 	mov    DWORD PTR [eax+0x108],0x5
100940db:	00 00 00 
100940de:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100940e1:	f3 0f 11 58 20       	movss  DWORD PTR [eax+0x20],xmm3
100940e6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100940e9:	f3 0f 11 50 24       	movss  DWORD PTR [eax+0x24],xmm2
100940ee:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100940f1:	f3 0f 11 48 28       	movss  DWORD PTR [eax+0x28],xmm1
100940f6:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100940f9:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100940fc:	89 81 d8 01 00 00    	mov    DWORD PTR [ecx+0x1d8],eax
10094102:	8b ce                	mov    ecx,esi
10094104:	8b 06                	mov    eax,DWORD PTR [esi]
10094106:	ff 50 2c             	call   DWORD PTR [eax+0x2c]
10094109:	68 30 21 1a 10       	push   0x101a2130
1009410e:	6a 00                	push   0x0
10094110:	e8 4b 43 08 00       	call   0x10118460
10094115:	83 c4 08             	add    esp,0x8
10094118:	85 c0                	test   eax,eax
1009411a:	74 1a                	je     0x10094136
1009411c:	ff 70 04             	push   DWORD PTR [eax+0x4]
1009411f:	e8 bc e4 f7 ff       	call   0x100125e0
10094124:	83 c4 04             	add    esp,0x4
10094127:	85 c0                	test   eax,eax
10094129:	74 0b                	je     0x10094136
1009412b:	8b 16                	mov    edx,DWORD PTR [esi]
1009412d:	8b ce                	mov    ecx,esi
1009412f:	50                   	push   eax
10094130:	ff 92 18 01 00 00    	call   DWORD PTR [edx+0x118]
10094136:	f3 0f 10 4d 20       	movss  xmm1,DWORD PTR [ebp+0x20]
1009413b:	0f 5a c1             	cvtps2pd xmm0,xmm1
1009413e:	66 0f 2f 05 f8 1d 1a 	comisd xmm0,QWORD PTR ds:0x101a1df8
10094145:	10 
10094146:	72 14                	jb     0x1009415c
10094148:	8b 06                	mov    eax,DWORD PTR [esi]
1009414a:	51                   	push   ecx
1009414b:	8b ce                	mov    ecx,esi
1009414d:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
10094152:	ff 50 08             	call   DWORD PTR [eax+0x8]
10094155:	c7 46 78 f0 84 09 10 	mov    DWORD PTR [esi+0x78],0x100984f0
1009415c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10094161:	b9 74 2d 1c 10       	mov    ecx,0x101c2d74
10094166:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1009416c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009416f:	89 08                	mov    DWORD PTR [eax],ecx
10094171:	8b c6                	mov    eax,esi
10094173:	5e                   	pop    esi
10094174:	5d                   	pop    ebp
10094175:	c3                   	ret
