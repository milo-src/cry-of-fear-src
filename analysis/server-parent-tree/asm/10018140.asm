
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10018140 <.text+0x17140>:
10018140:	55                   	push   ebp
10018141:	8b ec                	mov    ebp,esp
10018143:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10018146:	83 ec 0c             	sub    esp,0xc
10018149:	83 b9 0c 01 00 00 04 	cmp    DWORD PTR [ecx+0x10c],0x4
10018150:	0f 85 f8 00 00 00    	jne    0x1001824e
10018156:	f3 0f 10 41 50       	movss  xmm0,DWORD PTR [ecx+0x50]
1001815b:	0f 57 db             	xorps  xmm3,xmm3
1001815e:	0f 2e c3             	ucomiss xmm0,xmm3
10018161:	9f                   	lahf
10018162:	f6 c4 44             	test   ah,0x44
10018165:	7a 20                	jp     0x10018187
10018167:	f3 0f 10 41 54       	movss  xmm0,DWORD PTR [ecx+0x54]
1001816c:	0f 2e c3             	ucomiss xmm0,xmm3
1001816f:	9f                   	lahf
10018170:	f6 c4 44             	test   ah,0x44
10018173:	7a 12                	jp     0x10018187
10018175:	f3 0f 10 41 58       	movss  xmm0,DWORD PTR [ecx+0x58]
1001817a:	0f 2e c3             	ucomiss xmm0,xmm3
1001817d:	9f                   	lahf
1001817e:	f6 c4 44             	test   ah,0x44
10018181:	0f 8b c7 00 00 00    	jnp    0x1001824e
10018187:	f3 0f 10 89 dc 00 00 	movss  xmm1,DWORD PTR [ecx+0xdc]
1001818e:	00 
1001818f:	f3 0f 10 15 80 1f 1a 	movss  xmm2,DWORD PTR ds:0x101a1f80
10018196:	10 
10018197:	f3 0f 10 81 e8 00 00 	movss  xmm0,DWORD PTR [ecx+0xe8]
1001819e:	00 
1001819f:	0f 54 ca             	andps  xmm1,xmm2
100181a2:	f3 0f 5f cb          	maxss  xmm1,xmm3
100181a6:	0f 54 c2             	andps  xmm0,xmm2
100181a9:	f3 0f 10 99 f0 00 00 	movss  xmm3,DWORD PTR [ecx+0xf0]
100181b0:	00 
100181b1:	0f 54 da             	andps  xmm3,xmm2
100181b4:	f3 0f 5f c1          	maxss  xmm0,xmm1
100181b8:	f3 0f 10 89 e0 00 00 	movss  xmm1,DWORD PTR [ecx+0xe0]
100181bf:	00 
100181c0:	0f 54 ca             	andps  xmm1,xmm2
100181c3:	f3 0f 5f c8          	maxss  xmm1,xmm0
100181c7:	f3 0f 10 81 ec 00 00 	movss  xmm0,DWORD PTR [ecx+0xec]
100181ce:	00 
100181cf:	0f 54 c2             	andps  xmm0,xmm2
100181d2:	f3 0f 5f c1          	maxss  xmm0,xmm1
100181d6:	f3 0f 10 89 e4 00 00 	movss  xmm1,DWORD PTR [ecx+0xe4]
100181dd:	00 
100181de:	0f 54 ca             	andps  xmm1,xmm2
100181e1:	f3 0f 10 51 08       	movss  xmm2,DWORD PTR [ecx+0x8]
100181e6:	0f 28 e2             	movaps xmm4,xmm2
100181e9:	f3 0f 5f c8          	maxss  xmm1,xmm0
100181ed:	f3 0f 5f d9          	maxss  xmm3,xmm1
100181f1:	f3 0f 10 49 0c       	movss  xmm1,DWORD PTR [ecx+0xc]
100181f6:	0f 28 c1             	movaps xmm0,xmm1
100181f9:	f3 0f 58 cb          	addss  xmm1,xmm3
100181fd:	f3 0f 5c c3          	subss  xmm0,xmm3
10018201:	f3 0f 5c e3          	subss  xmm4,xmm3
10018205:	f3 0f 58 d3          	addss  xmm2,xmm3
10018209:	f3 0f 11 89 d4 00 00 	movss  DWORD PTR [ecx+0xd4],xmm1
10018210:	00 
10018211:	f3 0f 10 49 10       	movss  xmm1,DWORD PTR [ecx+0x10]
10018216:	f3 0f 11 81 c8 00 00 	movss  DWORD PTR [ecx+0xc8],xmm0
1001821d:	00 
1001821e:	0f 28 c1             	movaps xmm0,xmm1
10018221:	f3 0f 5c c3          	subss  xmm0,xmm3
10018225:	f3 0f 11 a1 c4 00 00 	movss  DWORD PTR [ecx+0xc4],xmm4
1001822c:	00 
1001822d:	f3 0f 58 cb          	addss  xmm1,xmm3
10018231:	f3 0f 11 91 d0 00 00 	movss  DWORD PTR [ecx+0xd0],xmm2
10018238:	00 
10018239:	f3 0f 11 81 cc 00 00 	movss  DWORD PTR [ecx+0xcc],xmm0
10018240:	00 
10018241:	f3 0f 11 89 d8 00 00 	movss  DWORD PTR [ecx+0xd8],xmm1
10018248:	00 
10018249:	e9 8e 00 00 00       	jmp    0x100182dc
1001824e:	f3 0f 10 59 08       	movss  xmm3,DWORD PTR [ecx+0x8]
10018253:	f3 0f 10 89 e0 00 00 	movss  xmm1,DWORD PTR [ecx+0xe0]
1001825a:	00 
1001825b:	0f 28 d3             	movaps xmm2,xmm3
1001825e:	f3 0f 58 49 0c       	addss  xmm1,DWORD PTR [ecx+0xc]
10018263:	f3 0f 10 81 e4 00 00 	movss  xmm0,DWORD PTR [ecx+0xe4]
1001826a:	00 
1001826b:	f3 0f 58 91 dc 00 00 	addss  xmm2,DWORD PTR [ecx+0xdc]
10018272:	00 
10018273:	f3 0f 58 41 10       	addss  xmm0,DWORD PTR [ecx+0x10]
10018278:	0f 14 d1             	unpcklps xmm2,xmm1
1001827b:	66 0f d6 91 c4 00 00 	movq   QWORD PTR [ecx+0xc4],xmm2
10018282:	00 
10018283:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10018288:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1001828b:	89 81 cc 00 00 00    	mov    DWORD PTR [ecx+0xcc],eax
10018291:	f3 0f 10 49 0c       	movss  xmm1,DWORD PTR [ecx+0xc]
10018296:	f3 0f 10 41 10       	movss  xmm0,DWORD PTR [ecx+0x10]
1001829b:	f3 0f 58 99 e8 00 00 	addss  xmm3,DWORD PTR [ecx+0xe8]
100182a2:	00 
100182a3:	f3 0f 58 89 ec 00 00 	addss  xmm1,DWORD PTR [ecx+0xec]
100182aa:	00 
100182ab:	f3 0f 58 81 f0 00 00 	addss  xmm0,DWORD PTR [ecx+0xf0]
100182b2:	00 
100182b3:	f3 0f 10 a1 c4 00 00 	movss  xmm4,DWORD PTR [ecx+0xc4]
100182ba:	00 
100182bb:	0f 14 d9             	unpcklps xmm3,xmm1
100182be:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100182c3:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100182c6:	66 0f d6 99 d0 00 00 	movq   QWORD PTR [ecx+0xd0],xmm3
100182cd:	00 
100182ce:	89 81 d8 00 00 00    	mov    DWORD PTR [ecx+0xd8],eax
100182d4:	f3 0f 10 91 d0 00 00 	movss  xmm2,DWORD PTR [ecx+0xd0]
100182db:	00 
100182dc:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
100182e3:	10 
100182e4:	f3 0f 10 81 c8 00 00 	movss  xmm0,DWORD PTR [ecx+0xc8]
100182eb:	00 
100182ec:	f3 0f 5c e1          	subss  xmm4,xmm1
100182f0:	f3 0f 5c c1          	subss  xmm0,xmm1
100182f4:	f3 0f 58 d1          	addss  xmm2,xmm1
100182f8:	f3 0f 11 a1 c4 00 00 	movss  DWORD PTR [ecx+0xc4],xmm4
100182ff:	00 
10018300:	f3 0f 11 81 c8 00 00 	movss  DWORD PTR [ecx+0xc8],xmm0
10018307:	00 
10018308:	f3 0f 10 81 cc 00 00 	movss  xmm0,DWORD PTR [ecx+0xcc]
1001830f:	00 
10018310:	f3 0f 5c c1          	subss  xmm0,xmm1
10018314:	f3 0f 11 91 d0 00 00 	movss  DWORD PTR [ecx+0xd0],xmm2
1001831b:	00 
1001831c:	f3 0f 11 81 cc 00 00 	movss  DWORD PTR [ecx+0xcc],xmm0
10018323:	00 
10018324:	f3 0f 10 81 d4 00 00 	movss  xmm0,DWORD PTR [ecx+0xd4]
1001832b:	00 
1001832c:	f3 0f 58 c1          	addss  xmm0,xmm1
10018330:	f3 0f 11 81 d4 00 00 	movss  DWORD PTR [ecx+0xd4],xmm0
10018337:	00 
10018338:	f3 0f 10 81 d8 00 00 	movss  xmm0,DWORD PTR [ecx+0xd8]
1001833f:	00 
10018340:	f3 0f 58 c1          	addss  xmm0,xmm1
10018344:	f3 0f 11 81 d8 00 00 	movss  DWORD PTR [ecx+0xd8],xmm0
1001834b:	00 
1001834c:	8b e5                	mov    esp,ebp
1001834e:	5d                   	pop    ebp
1001834f:	c3                   	ret
