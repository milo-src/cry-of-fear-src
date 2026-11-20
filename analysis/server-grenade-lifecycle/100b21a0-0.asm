
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b21a0 <.text+0xb11a0>:
100b21a0:	55                   	push   ebp
100b21a1:	8b ec                	mov    ebp,esp
100b21a3:	83 ec 0c             	sub    esp,0xc
100b21a6:	56                   	push   esi
100b21a7:	8b f1                	mov    esi,ecx
100b21a9:	8b 06                	mov    eax,DWORD PTR [esi]
100b21ab:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
100b21b1:	85 c0                	test   eax,eax
100b21b3:	75 0e                	jne    0x100b21c3
100b21b5:	56                   	push   esi
100b21b6:	e8 45 77 06 00       	call   0x10119900
100b21bb:	83 c4 04             	add    esp,0x4
100b21be:	5e                   	pop    esi
100b21bf:	8b e5                	mov    esp,ebp
100b21c1:	5d                   	pop    ebp
100b21c2:	c3                   	ret
100b21c3:	51                   	push   ecx
100b21c4:	8b ce                	mov    ecx,esi
100b21c6:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100b21cd:	e8 ce cb f5 ff       	call   0x1000eda0
100b21d2:	8b 06                	mov    eax,DWORD PTR [esi]
100b21d4:	dd d8                	fstp   st(0)
100b21d6:	51                   	push   ecx
100b21d7:	8b ce                	mov    ecx,esi
100b21d9:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
100b21e0:	ff 50 08             	call   DWORD PTR [eax+0x8]
100b21e3:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b21e6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b21eb:	f3 0f 10 99 e8 01 00 	movss  xmm3,DWORD PTR [ecx+0x1e8]
100b21f2:	00 
100b21f3:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
100b21f7:	0f 28 c3             	movaps xmm0,xmm3
100b21fa:	f3 0f 5c 05 90 13 1a 	subss  xmm0,DWORD PTR ds:0x101a1390
100b2201:	10 
100b2202:	0f 2f c8             	comiss xmm1,xmm0
100b2205:	76 60                	jbe    0x100b2267
100b2207:	f3 0f 10 51 24       	movss  xmm2,DWORD PTR [ecx+0x24]
100b220c:	f3 0f 5c d9          	subss  xmm3,xmm1
100b2210:	f3 0f 10 49 28       	movss  xmm1,DWORD PTR [ecx+0x28]
100b2215:	8d 45 f4             	lea    eax,[ebp-0xc]
100b2218:	f3 0f 10 41 20       	movss  xmm0,DWORD PTR [ecx+0x20]
100b221d:	51                   	push   ecx
100b221e:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
100b2225:	f3 0f 59 d3          	mulss  xmm2,xmm3
100b2229:	68 90 01 00 00       	push   0x190
100b222e:	f3 0f 59 cb          	mulss  xmm1,xmm3
100b2232:	50                   	push   eax
100b2233:	f3 0f 58 51 0c       	addss  xmm2,DWORD PTR [ecx+0xc]
100b2238:	f3 0f 59 c3          	mulss  xmm0,xmm3
100b223c:	6a 20                	push   0x20
100b223e:	f3 0f 58 49 10       	addss  xmm1,DWORD PTR [ecx+0x10]
100b2243:	f3 0f 58 41 08       	addss  xmm0,DWORD PTR [ecx+0x8]
100b2248:	f3 0f 11 55 f8       	movss  DWORD PTR [ebp-0x8],xmm2
100b224d:	f3 0f 11 4d fc       	movss  DWORD PTR [ebp-0x4],xmm1
100b2252:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100b2257:	e8 c4 e5 04 00       	call   0x10100820
100b225c:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b225f:	83 c4 10             	add    esp,0x10
100b2262:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b2267:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100b226b:	0f 2f 81 e8 01 00 00 	comiss xmm0,DWORD PTR [ecx+0x1e8]
100b2272:	72 07                	jb     0x100b227b
100b2274:	c7 46 78 90 14 0b 10 	mov    DWORD PTR [esi+0x78],0x100b1490
100b227b:	83 b9 c4 01 00 00 00 	cmp    DWORD PTR [ecx+0x1c4],0x0
100b2282:	74 4c                	je     0x100b22d0
100b2284:	83 b9 c8 01 00 00 ef 	cmp    DWORD PTR [ecx+0x1c8],0xffffffef
100b228b:	7e 43                	jle    0x100b22d0
100b228d:	f3 0f 10 59 20       	movss  xmm3,DWORD PTR [ecx+0x20]
100b2292:	f3 0f 10 51 24       	movss  xmm2,DWORD PTR [ecx+0x24]
100b2297:	f3 0f 10 0d d8 1d 1a 	movss  xmm1,DWORD PTR ds:0x101a1dd8
100b229e:	10 
100b229f:	f3 0f 10 41 28       	movss  xmm0,DWORD PTR [ecx+0x28]
100b22a4:	f3 0f 59 d9          	mulss  xmm3,xmm1
100b22a8:	f3 0f 59 d1          	mulss  xmm2,xmm1
100b22ac:	f3 0f 59 c1          	mulss  xmm0,xmm1
100b22b0:	0f 14 da             	unpcklps xmm3,xmm2
100b22b3:	66 0f d6 59 20       	movq   QWORD PTR [ecx+0x20],xmm3
100b22b8:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100b22bd:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100b22c0:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
100b22c3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b22c6:	c7 80 3c 01 00 00 cd 	mov    DWORD PTR [eax+0x13c],0x3e4ccccd
100b22cd:	cc 4c 3e 
100b22d0:	5e                   	pop    esi
100b22d1:	8b e5                	mov    esp,ebp
100b22d3:	5d                   	pop    ebp
100b22d4:	c3                   	ret
