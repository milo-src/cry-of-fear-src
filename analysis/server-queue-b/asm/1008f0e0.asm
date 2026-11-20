
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008f0e0 <.text+0x8e0e0>:
1008f0e0:	55                   	push   ebp
1008f0e1:	8b ec                	mov    ebp,esp
1008f0e3:	83 ec 0c             	sub    esp,0xc
1008f0e6:	56                   	push   esi
1008f0e7:	8b f1                	mov    esi,ecx
1008f0e9:	8b 06                	mov    eax,DWORD PTR [esi]
1008f0eb:	ff 50 30             	call   DWORD PTR [eax+0x30]
1008f0ee:	ff 76 04             	push   DWORD PTR [esi+0x4]
1008f0f1:	e8 0a 2d 07 00       	call   0x10101e00
1008f0f6:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008f0f9:	83 c4 04             	add    esp,0x4
1008f0fc:	f3 0f 10 1d d0 13 1a 	movss  xmm3,DWORD PTR ds:0x101a13d0
1008f103:	10 
1008f104:	f6 81 a4 01 00 00 02 	test   BYTE PTR [ecx+0x1a4],0x2
1008f10b:	74 31                	je     0x1008f13e
1008f10d:	f3 0f 10 51 44       	movss  xmm2,DWORD PTR [ecx+0x44]
1008f112:	f3 0f 10 49 48       	movss  xmm1,DWORD PTR [ecx+0x48]
1008f117:	f3 0f 10 41 4c       	movss  xmm0,DWORD PTR [ecx+0x4c]
1008f11c:	f3 0f 59 d3          	mulss  xmm2,xmm3
1008f120:	f3 0f 59 cb          	mulss  xmm1,xmm3
1008f124:	f3 0f 59 c3          	mulss  xmm0,xmm3
1008f128:	0f 14 d1             	unpcklps xmm2,xmm1
1008f12b:	66 0f d6 51 44       	movq   QWORD PTR [ecx+0x44],xmm2
1008f130:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008f135:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1008f138:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
1008f13b:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008f13e:	f3 0f 7e 41 50       	movq   xmm0,QWORD PTR [ecx+0x50]
1008f143:	f3 0f 10 96 08 01 00 	movss  xmm2,DWORD PTR [esi+0x108]
1008f14a:	00 
1008f14b:	66 0f d6 86 34 01 00 	movq   QWORD PTR [esi+0x134],xmm0
1008f152:	00 
1008f153:	0f 28 da             	movaps xmm3,xmm2
1008f156:	8b 41 58             	mov    eax,DWORD PTR [ecx+0x58]
1008f159:	89 86 3c 01 00 00    	mov    DWORD PTR [esi+0x13c],eax
1008f15f:	f3 0f 10 49 48       	movss  xmm1,DWORD PTR [ecx+0x48]
1008f164:	f3 0f 59 59 44       	mulss  xmm3,DWORD PTR [ecx+0x44]
1008f169:	f3 0f 10 41 4c       	movss  xmm0,DWORD PTR [ecx+0x4c]
1008f16e:	f3 0f 59 ca          	mulss  xmm1,xmm2
1008f172:	f3 0f 58 59 50       	addss  xmm3,DWORD PTR [ecx+0x50]
1008f177:	f3 0f 59 c2          	mulss  xmm0,xmm2
1008f17b:	f3 0f 58 49 54       	addss  xmm1,DWORD PTR [ecx+0x54]
1008f180:	f3 0f 58 41 58       	addss  xmm0,DWORD PTR [ecx+0x58]
1008f185:	0f 14 d9             	unpcklps xmm3,xmm1
1008f188:	66 0f d6 9e 40 01 00 	movq   QWORD PTR [esi+0x140],xmm3
1008f18f:	00 
1008f190:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008f195:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1008f198:	89 86 48 01 00 00    	mov    DWORD PTR [esi+0x148],eax
1008f19e:	8b 81 a4 01 00 00    	mov    eax,DWORD PTR [ecx+0x1a4]
1008f1a4:	d1 e8                	shr    eax,1
1008f1a6:	f7 d0                	not    eax
1008f1a8:	83 e0 04             	and    eax,0x4
1008f1ab:	89 81 0c 01 00 00    	mov    DWORD PTR [ecx+0x10c],eax
1008f1b1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008f1b4:	c7 80 08 01 00 00 07 	mov    DWORD PTR [eax+0x108],0x7
1008f1bb:	00 00 00 
1008f1be:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008f1c1:	83 c0 08             	add    eax,0x8
1008f1c4:	50                   	push   eax
1008f1c5:	56                   	push   esi
1008f1c6:	e8 15 ae 08 00       	call   0x10119fe0
1008f1cb:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
1008f1ce:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008f1d3:	8b 8a b8 00 00 00    	mov    ecx,DWORD PTR [edx+0xb8]
1008f1d9:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1008f1df:	51                   	push   ecx
1008f1e0:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
1008f1e6:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
1008f1ec:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008f1ef:	83 c4 10             	add    esp,0x10
1008f1f2:	f3 0f 10 81 fc 01 00 	movss  xmm0,DWORD PTR [ecx+0x1fc]
1008f1f9:	00 
1008f1fa:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1008f201:	9f                   	lahf
1008f202:	f6 c4 44             	test   ah,0x44
1008f205:	7a 0d                	jp     0x1008f214
1008f207:	c7 81 fc 01 00 00 00 	mov    DWORD PTR [ecx+0x1fc],0x42c80000
1008f20e:	00 c8 42 
1008f211:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008f214:	f6 81 a4 01 00 00 01 	test   BYTE PTR [ecx+0x1a4],0x1
1008f21b:	0f 84 9e 00 00 00    	je     0x1008f2bf
1008f221:	f3 0f 7e 86 40 01 00 	movq   xmm0,QWORD PTR [esi+0x140]
1008f228:	00 
1008f229:	66 0f d6 41 50       	movq   QWORD PTR [ecx+0x50],xmm0
1008f22e:	8b 86 48 01 00 00    	mov    eax,DWORD PTR [esi+0x148]
1008f234:	89 41 58             	mov    DWORD PTR [ecx+0x58],eax
1008f237:	f3 0f 10 8e 34 01 00 	movss  xmm1,DWORD PTR [esi+0x134]
1008f23e:	00 
1008f23f:	f3 0f 10 96 38 01 00 	movss  xmm2,DWORD PTR [esi+0x138]
1008f246:	00 
1008f247:	f3 0f 10 9e 3c 01 00 	movss  xmm3,DWORD PTR [esi+0x13c]
1008f24e:	00 
1008f24f:	f3 0f 7e 86 34 01 00 	movq   xmm0,QWORD PTR [esi+0x134]
1008f256:	00 
1008f257:	8b 86 3c 01 00 00    	mov    eax,DWORD PTR [esi+0x13c]
1008f25d:	66 0f d6 86 40 01 00 	movq   QWORD PTR [esi+0x140],xmm0
1008f264:	00 
1008f265:	89 86 48 01 00 00    	mov    DWORD PTR [esi+0x148],eax
1008f26b:	f3 0f 11 8e 34 01 00 	movss  DWORD PTR [esi+0x134],xmm1
1008f272:	00 
1008f273:	f3 0f 11 96 38 01 00 	movss  DWORD PTR [esi+0x138],xmm2
1008f27a:	00 
1008f27b:	f3 0f 11 9e 3c 01 00 	movss  DWORD PTR [esi+0x13c],xmm3
1008f282:	00 
1008f283:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008f286:	f3 0f 10 1d d0 13 1a 	movss  xmm3,DWORD PTR ds:0x101a13d0
1008f28d:	10 
1008f28e:	f3 0f 10 51 44       	movss  xmm2,DWORD PTR [ecx+0x44]
1008f293:	f3 0f 10 49 48       	movss  xmm1,DWORD PTR [ecx+0x48]
1008f298:	f3 0f 10 41 4c       	movss  xmm0,DWORD PTR [ecx+0x4c]
1008f29d:	f3 0f 59 d3          	mulss  xmm2,xmm3
1008f2a1:	f3 0f 59 cb          	mulss  xmm1,xmm3
1008f2a5:	f3 0f 59 c3          	mulss  xmm0,xmm3
1008f2a9:	0f 14 d1             	unpcklps xmm2,xmm1
1008f2ac:	66 0f d6 51 44       	movq   QWORD PTR [ecx+0x44],xmm2
1008f2b1:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008f2b6:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1008f2b9:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
1008f2bc:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1008f2bf:	c7 86 00 01 00 00 01 	mov    DWORD PTR [esi+0x100],0x1
1008f2c6:	00 00 00 
1008f2c9:	ba 20 da 08 10       	mov    edx,0x1008da20
1008f2ce:	8b 81 a4 01 00 00    	mov    eax,DWORD PTR [ecx+0x1a4]
1008f2d4:	33 c9                	xor    ecx,ecx
1008f2d6:	25 00 05 00 00       	and    eax,0x500
1008f2db:	3d 00 01 00 00       	cmp    eax,0x100
1008f2e0:	0f 45 ca             	cmovne ecx,edx
1008f2e3:	89 4e 7c             	mov    DWORD PTR [esi+0x7c],ecx
1008f2e6:	5e                   	pop    esi
1008f2e7:	8b e5                	mov    esp,ebp
1008f2e9:	5d                   	pop    ebp
1008f2ea:	c3                   	ret
