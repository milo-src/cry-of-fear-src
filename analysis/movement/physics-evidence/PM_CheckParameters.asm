
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10004170 <.text+0x3170>:
10004170:	55                   	push   ebp
10004171:	8b ec                	mov    ebp,esp
10004173:	83 e4 f8             	and    esp,0xfffffff8
10004176:	83 ec 1c             	sub    esp,0x1c
10004179:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1000417e:	33 c4                	xor    eax,esp
10004180:	89 44 24 18          	mov    DWORD PTR [esp+0x18],eax
10004184:	53                   	push   ebx
10004185:	56                   	push   esi
10004186:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
1000418c:	b9 00 10 00 00       	mov    ecx,0x1000
10004191:	8d 86 76 54 04 00    	lea    eax,[esi+0x45476]
10004197:	57                   	push   edi
10004198:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
1000419c:	66 85 08             	test   WORD PTR [eax],cx
1000419f:	74 1d                	je     0x100041be
100041a1:	f7 86 b8 00 00 00 00 	test   DWORD PTR [esi+0xb8],0x40000
100041a8:	00 04 00 
100041ab:	74 11                	je     0x100041be
100041ad:	8d be 6c 54 04 00    	lea    edi,[esi+0x4546c]
100041b3:	0f 57 d2             	xorps  xmm2,xmm2
100041b6:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
100041bc:	eb 3f                	jmp    0x100041fd
100041be:	f3 0f 10 96 6c 54 04 	movss  xmm2,DWORD PTR [esi+0x4546c]
100041c5:	00 
100041c6:	8d be 6c 54 04 00    	lea    edi,[esi+0x4546c]
100041cc:	0f 57 c0             	xorps  xmm0,xmm0
100041cf:	0f 2e d0             	ucomiss xmm2,xmm0
100041d2:	9f                   	lahf
100041d3:	f6 c4 44             	test   ah,0x44
100041d6:	7b 2b                	jnp    0x10004203
100041d8:	f3 0f 10 8e 68 54 04 	movss  xmm1,DWORD PTR [esi+0x45468]
100041df:	00 
100041e0:	0f 2e c8             	ucomiss xmm1,xmm0
100041e3:	9f                   	lahf
100041e4:	f6 c4 44             	test   ah,0x44
100041e7:	7b 1a                	jnp    0x10004203
100041e9:	f3 0f 59 0d d8 1d 1a 	mulss  xmm1,DWORD PTR ds:0x101a1dd8
100041f0:	10 
100041f1:	f3 0f 11 8e 68 54 04 	movss  DWORD PTR [esi+0x45468],xmm1
100041f8:	00 
100041f9:	f3 0f 10 17          	movss  xmm2,DWORD PTR [edi]
100041fd:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
10004203:	f3 0f 10 9e 68 54 04 	movss  xmm3,DWORD PTR [esi+0x45468]
1000420a:	00 
1000420b:	8d 86 68 54 04 00    	lea    eax,[esi+0x45468]
10004211:	f3 0f 10 8e 70 54 04 	movss  xmm1,DWORD PTR [esi+0x45470]
10004218:	00 
10004219:	8d 9e 70 54 04 00    	lea    ebx,[esi+0x45470]
1000421f:	0f 28 c3             	movaps xmm0,xmm3
10004222:	f3 0f 59 d2          	mulss  xmm2,xmm2
10004226:	89 44 24 0c          	mov    DWORD PTR [esp+0xc],eax
1000422a:	f3 0f 59 c3          	mulss  xmm0,xmm3
1000422e:	f3 0f 59 c9          	mulss  xmm1,xmm1
10004232:	f3 0f 58 d0          	addss  xmm2,xmm0
10004236:	f3 0f 11 5c 24 14    	movss  DWORD PTR [esp+0x14],xmm3
1000423c:	f3 0f 58 d1          	addss  xmm2,xmm1
10004240:	0f 57 c9             	xorps  xmm1,xmm1
10004243:	0f 5a c2             	cvtps2pd xmm0,xmm2
10004246:	66 0f 2e c8          	ucomisd xmm1,xmm0
1000424a:	77 06                	ja     0x10004252
1000424c:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10004250:	eb 05                	jmp    0x10004257
10004252:	e8 39 7c 16 00       	call   0x1016be90
10004257:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
1000425b:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
10004262:	9f                   	lahf
10004263:	f6 c4 44             	test   ah,0x44
10004266:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
1000426a:	7b 3d                	jnp    0x100042a9
1000426c:	f3 0f 10 8e f4 01 00 	movss  xmm1,DWORD PTR [esi+0x1f4]
10004273:	00 
10004274:	0f 2f c1             	comiss xmm0,xmm1
10004277:	76 30                	jbe    0x100042a9
10004279:	f3 0f 5e c8          	divss  xmm1,xmm0
1000427d:	f3 0f 10 44 24 14    	movss  xmm0,DWORD PTR [esp+0x14]
10004283:	f3 0f 59 c1          	mulss  xmm0,xmm1
10004287:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1000428b:	f3 0f 10 07          	movss  xmm0,DWORD PTR [edi]
1000428f:	f3 0f 59 c1          	mulss  xmm0,xmm1
10004293:	f3 0f 11 07          	movss  DWORD PTR [edi],xmm0
10004297:	f3 0f 10 03          	movss  xmm0,DWORD PTR [ebx]
1000429b:	f3 0f 59 c1          	mulss  xmm0,xmm1
1000429f:	f3 0f 11 03          	movss  DWORD PTR [ebx],xmm0
100042a3:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
100042a9:	f7 86 b8 00 00 00 00 	test   DWORD PTR [esi+0xb8],0x1001000
100042b0:	10 00 01 
100042b3:	75 09                	jne    0x100042be
100042b5:	83 be d0 00 00 00 00 	cmp    DWORD PTR [esi+0xd0],0x0
100042bc:	74 21                	je     0x100042df
100042be:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
100042c4:	33 c9                	xor    ecx,ecx
100042c6:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
100042ca:	c7 07 00 00 00 00    	mov    DWORD PTR [edi],0x0
100042d0:	c7 03 00 00 00 00    	mov    DWORD PTR [ebx],0x0
100042d6:	66 89 08             	mov    WORD PTR [eax],cx
100042d9:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
100042df:	8d 86 a0 00 00 00    	lea    eax,[esi+0xa0]
100042e5:	50                   	push   eax
100042e6:	e8 75 0f 00 00       	call   0x10005260
100042eb:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
100042f1:	68 94 1d 1a 10       	push   0x101a1d94
100042f6:	8d 81 f4 f3 04 00    	lea    eax,[ecx+0x4f3f4]
100042fc:	50                   	push   eax
100042fd:	8b 81 58 f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f558]
10004303:	ff d0                	call   eax
10004305:	50                   	push   eax
10004306:	e8 53 72 16 00       	call   0x1016b55e
1000430b:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10004311:	83 c4 10             	add    esp,0x10
10004314:	f3 0f 10 05 fc 1e 1a 	movss  xmm0,DWORD PTR ds:0x101a1efc
1000431b:	10 
1000431c:	0f 2f 81 14 02 00 00 	comiss xmm0,DWORD PTR [ecx+0x214]
10004323:	0f 86 1b 01 00 00    	jbe    0x10004444
10004329:	83 b9 d0 00 00 00 00 	cmp    DWORD PTR [ecx+0xd0],0x0
10004330:	0f 85 ea 00 00 00    	jne    0x10004420
10004336:	f3 0f 10 81 88 54 04 	movss  xmm0,DWORD PTR [ecx+0x45488]
1000433d:	00 
1000433e:	0f 2f 05 70 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1370
10004345:	76 24                	jbe    0x1000436b
10004347:	8b 81 80 54 04 00    	mov    eax,DWORD PTR [ecx+0x45480]
1000434d:	89 81 5c 54 04 00    	mov    DWORD PTR [ecx+0x4545c],eax
10004353:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10004359:	8b 81 84 54 04 00    	mov    eax,DWORD PTR [ecx+0x45484]
1000435f:	89 81 60 54 04 00    	mov    DWORD PTR [ecx+0x45460],eax
10004365:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000436b:	f3 0f 10 81 5c 54 04 	movss  xmm0,DWORD PTR [ecx+0x4545c]
10004372:	00 
10004373:	83 ec 08             	sub    esp,0x8
10004376:	f3 0f 58 81 a0 00 00 	addss  xmm0,DWORD PTR [ecx+0xa0]
1000437d:	00 
1000437e:	f3 0f 10 89 60 54 04 	movss  xmm1,DWORD PTR [ecx+0x45460]
10004385:	00 
10004386:	f3 0f 10 91 64 54 04 	movss  xmm2,DWORD PTR [ecx+0x45464]
1000438d:	00 
1000438e:	f3 0f 11 44 24 20    	movss  DWORD PTR [esp+0x20],xmm0
10004394:	f3 0f 10 81 a4 00 00 	movss  xmm0,DWORD PTR [ecx+0xa4]
1000439b:	00 
1000439c:	f3 0f 58 c1          	addss  xmm0,xmm1
100043a0:	f3 0f 11 44 24 24    	movss  DWORD PTR [esp+0x24],xmm0
100043a6:	f3 0f 10 81 a8 00 00 	movss  xmm0,DWORD PTR [ecx+0xa8]
100043ad:	00 
100043ae:	f3 0f 58 c2          	addss  xmm0,xmm2
100043b2:	f3 0f 11 44 24 28    	movss  DWORD PTR [esp+0x28],xmm0
100043b8:	8b 81 f4 f4 04 00    	mov    eax,DWORD PTR [ecx+0x4f4f4]
100043be:	f3 0f 10 40 68       	movss  xmm0,DWORD PTR [eax+0x68]
100043c3:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100043c9:	f3 0f 10 40 64       	movss  xmm0,DWORD PTR [eax+0x64]
100043ce:	8d 41 5c             	lea    eax,[ecx+0x5c]
100043d1:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100043d6:	50                   	push   eax
100043d7:	8d 44 24 24          	lea    eax,[esp+0x24]
100043db:	50                   	push   eax
100043dc:	e8 cf f7 ff ff       	call   0x10003bb0
100043e1:	d8 0d b8 1e 1a 10    	fmul   DWORD PTR ds:0x101a1eb8
100043e7:	83 c4 10             	add    esp,0x10
100043ea:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100043ef:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
100043f3:	f3 0f 10 44 24 10    	movss  xmm0,DWORD PTR [esp+0x10]
100043f9:	f3 0f 11 40 4c       	movss  DWORD PTR [eax+0x4c],xmm0
100043fe:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004403:	f3 0f 10 44 24 18    	movss  xmm0,DWORD PTR [esp+0x18]
10004409:	f3 0f 11 40 44       	movss  DWORD PTR [eax+0x44],xmm0
1000440e:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004413:	f3 0f 10 44 24 1c    	movss  xmm0,DWORD PTR [esp+0x1c]
10004419:	f3 0f 11 40 48       	movss  DWORD PTR [eax+0x48],xmm0
1000441e:	eb 1e                	jmp    0x1000443e
10004420:	8b 41 50             	mov    eax,DWORD PTR [ecx+0x50]
10004423:	89 41 44             	mov    DWORD PTR [ecx+0x44],eax
10004426:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000442c:	8b 41 54             	mov    eax,DWORD PTR [ecx+0x54]
1000442f:	89 41 48             	mov    DWORD PTR [ecx+0x48],eax
10004432:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10004438:	8b 41 58             	mov    eax,DWORD PTR [ecx+0x58]
1000443b:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
1000443e:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10004444:	83 b9 d0 00 00 00 00 	cmp    DWORD PTR [ecx+0xd0],0x0
1000444b:	74 0c                	je     0x10004459
1000444d:	c7 81 88 00 00 00 00 	mov    DWORD PTR [ecx+0x88],0xc1000000
10004454:	00 00 c1 
10004457:	eb 1f                	jmp    0x10004478
10004459:	f3 0f 10 81 88 00 00 	movss  xmm0,DWORD PTR [ecx+0x88]
10004460:	00 
10004461:	0f 2e 05 6c 1f 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1f6c
10004468:	9f                   	lahf
10004469:	f6 c4 44             	test   ah,0x44
1000446c:	7a 10                	jp     0x1000447e
1000446e:	c7 81 88 00 00 00 00 	mov    DWORD PTR [ecx+0x88],0x41e00000
10004475:	00 e0 41 
10004478:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000447e:	f3 0f 10 41 48       	movss  xmm0,DWORD PTR [ecx+0x48]
10004483:	0f 2f 05 c4 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a13c4
1000448a:	76 0d                	jbe    0x10004499
1000448c:	f3 0f 5c 05 cc 13 1a 	subss  xmm0,DWORD PTR ds:0x101a13cc
10004493:	10 
10004494:	f3 0f 11 41 48       	movss  DWORD PTR [ecx+0x48],xmm0
10004499:	8b 4c 24 24          	mov    ecx,DWORD PTR [esp+0x24]
1000449d:	5f                   	pop    edi
1000449e:	5e                   	pop    esi
1000449f:	5b                   	pop    ebx
100044a0:	33 cc                	xor    ecx,esp
100044a2:	e8 0c 97 13 00       	call   0x1013dbb3
100044a7:	8b e5                	mov    esp,ebp
100044a9:	5d                   	pop    ebp
100044aa:	c3                   	ret
100044ab:	cc                   	int3
100044ac:	cc                   	int3
100044ad:	cc                   	int3
100044ae:	cc                   	int3
100044af:	cc                   	int3
