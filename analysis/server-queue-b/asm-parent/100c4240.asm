
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c4240 <.text+0xc3240>:
100c4240:	55                   	push   ebp
100c4241:	8b ec                	mov    ebp,esp
100c4243:	83 ec 20             	sub    esp,0x20
100c4246:	0f 57 d2             	xorps  xmm2,xmm2
100c4249:	56                   	push   esi
100c424a:	57                   	push   edi
100c424b:	8b 3d 88 31 22 10    	mov    edi,DWORD PTR ds:0x10223188
100c4251:	f3 0f 10 4f 04       	movss  xmm1,DWORD PTR [edi+0x4]
100c4256:	0f 2e ca             	ucomiss xmm1,xmm2
100c4259:	9f                   	lahf
100c425a:	f6 c4 44             	test   ah,0x44
100c425d:	7b 1b                	jnp    0x100c427a
100c425f:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100c4262:	8b 4e 60             	mov    ecx,DWORD PTR [esi+0x60]
100c4265:	f6 c1 20             	test   cl,0x20
100c4268:	74 10                	je     0x100c427a
100c426a:	f3 0f 10 76 58       	movss  xmm6,DWORD PTR [esi+0x58]
100c426f:	0f 2f d6             	comiss xmm2,xmm6
100c4272:	72 0e                	jb     0x100c4282
100c4274:	83 e1 df             	and    ecx,0xffffffdf
100c4277:	89 4e 60             	mov    DWORD PTR [esi+0x60],ecx
100c427a:	33 c0                	xor    eax,eax
100c427c:	5f                   	pop    edi
100c427d:	5e                   	pop    esi
100c427e:	8b e5                	mov    esp,ebp
100c4280:	5d                   	pop    ebp
100c4281:	c3                   	ret
100c4282:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100c4285:	83 ba 08 01 00 00 07 	cmp    DWORD PTR [edx+0x108],0x7
100c428c:	75 11                	jne    0x100c429f
100c428e:	f3 0f 10 9a 00 01 00 	movss  xmm3,DWORD PTR [edx+0x100]
100c4295:	00 
100c4296:	0f 28 c1             	movaps xmm0,xmm1
100c4299:	f3 0f 58 c3          	addss  xmm0,xmm3
100c429d:	eb 0b                	jmp    0x100c42aa
100c429f:	f3 0f 10 1f          	movss  xmm3,DWORD PTR [edi]
100c42a3:	0f 28 c3             	movaps xmm0,xmm3
100c42a6:	f3 0f 58 c1          	addss  xmm0,xmm1
100c42aa:	0f 2f c6             	comiss xmm0,xmm6
100c42ad:	0f 82 15 02 00 00    	jb     0x100c44c8
100c42b3:	f3 0f 5c f3          	subss  xmm6,xmm3
100c42b7:	f3 0f 5e f1          	divss  xmm6,xmm1
100c42bb:	0f 2e f2             	ucomiss xmm6,xmm2
100c42be:	9f                   	lahf
100c42bf:	f6 c4 44             	test   ah,0x44
100c42c2:	0f 8b 00 02 00 00    	jnp    0x100c44c8
100c42c8:	f6 c1 40             	test   cl,0x40
100c42cb:	0f 84 ea 01 00 00    	je     0x100c44bb
100c42d1:	f6 c1 08             	test   cl,0x8
100c42d4:	75 16                	jne    0x100c42ec
100c42d6:	f3 0f 7e 42 20       	movq   xmm0,QWORD PTR [edx+0x20]
100c42db:	83 c9 08             	or     ecx,0x8
100c42de:	66 0f d6 46 40       	movq   QWORD PTR [esi+0x40],xmm0
100c42e3:	8b 42 28             	mov    eax,DWORD PTR [edx+0x28]
100c42e6:	89 46 48             	mov    DWORD PTR [esi+0x48],eax
100c42e9:	89 4e 60             	mov    DWORD PTR [esi+0x60],ecx
100c42ec:	f6 c1 10             	test   cl,0x10
100c42ef:	75 16                	jne    0x100c4307
100c42f1:	f3 0f 7e 42 5c       	movq   xmm0,QWORD PTR [edx+0x5c]
100c42f6:	83 c9 10             	or     ecx,0x10
100c42f9:	66 0f d6 46 4c       	movq   QWORD PTR [esi+0x4c],xmm0
100c42fe:	8b 42 64             	mov    eax,DWORD PTR [edx+0x64]
100c4301:	89 46 54             	mov    DWORD PTR [esi+0x54],eax
100c4304:	89 4e 60             	mov    DWORD PTR [esi+0x60],ecx
100c4307:	f3 0f 10 42 60       	movss  xmm0,DWORD PTR [edx+0x60]
100c430c:	f3 0f 10 62 20       	movss  xmm4,DWORD PTR [edx+0x20]
100c4311:	f3 0f 10 7a 24       	movss  xmm7,DWORD PTR [edx+0x24]
100c4316:	0f 28 d4             	movaps xmm2,xmm4
100c4319:	f3 0f 10 5a 28       	movss  xmm3,DWORD PTR [edx+0x28]
100c431e:	0f 28 cf             	movaps xmm1,xmm7
100c4321:	f3 0f 10 6a 5c       	movss  xmm5,DWORD PTR [edx+0x5c]
100c4326:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
100c4329:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
100c432e:	f3 0f 10 42 64       	movss  xmm0,DWORD PTR [edx+0x64]
100c4333:	f3 0f 11 65 f8       	movss  DWORD PTR [ebp-0x8],xmm4
100c4338:	f3 0f 11 5d fc       	movss  DWORD PTR [ebp-0x4],xmm3
100c433d:	f3 0f 11 6d f4       	movss  DWORD PTR [ebp-0xc],xmm5
100c4342:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
100c4347:	85 c0                	test   eax,eax
100c4349:	0f 84 b7 00 00 00    	je     0x100c4406
100c434f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100c4352:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100c4357:	f3 0f 10 68 20       	movss  xmm5,DWORD PTR [eax+0x20]
100c435c:	f3 0f 10 60 24       	movss  xmm4,DWORD PTR [eax+0x24]
100c4361:	f3 0f 5c d5          	subss  xmm2,xmm5
100c4365:	f3 0f 10 58 28       	movss  xmm3,DWORD PTR [eax+0x28]
100c436a:	f3 0f 5c cc          	subss  xmm1,xmm4
100c436e:	f3 0f 5c c3          	subss  xmm0,xmm3
100c4372:	f3 0f 59 d6          	mulss  xmm2,xmm6
100c4376:	f3 0f 59 ce          	mulss  xmm1,xmm6
100c437a:	f3 0f 59 c6          	mulss  xmm0,xmm6
100c437e:	f3 0f 58 ea          	addss  xmm5,xmm2
100c4382:	f3 0f 58 e1          	addss  xmm4,xmm1
100c4386:	f3 0f 58 d8          	addss  xmm3,xmm0
100c438a:	0f 14 ec             	unpcklps xmm5,xmm4
100c438d:	66 0f d6 6a 20       	movq   QWORD PTR [edx+0x20],xmm5
100c4392:	f3 0f 11 5d e8       	movss  DWORD PTR [ebp-0x18],xmm3
100c4397:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
100c439a:	89 42 28             	mov    DWORD PTR [edx+0x28],eax
100c439d:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
100c43a0:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c43a3:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100c43a6:	f3 0f 10 51 5c       	movss  xmm2,DWORD PTR [ecx+0x5c]
100c43ab:	f3 0f 10 49 60       	movss  xmm1,DWORD PTR [ecx+0x60]
100c43b0:	f3 0f 10 41 64       	movss  xmm0,DWORD PTR [ecx+0x64]
100c43b5:	f3 0f 10 68 5c       	movss  xmm5,DWORD PTR [eax+0x5c]
100c43ba:	f3 0f 10 60 60       	movss  xmm4,DWORD PTR [eax+0x60]
100c43bf:	f3 0f 5c d5          	subss  xmm2,xmm5
100c43c3:	f3 0f 10 58 64       	movss  xmm3,DWORD PTR [eax+0x64]
100c43c8:	f3 0f 5c cc          	subss  xmm1,xmm4
100c43cc:	f3 0f 5c c3          	subss  xmm0,xmm3
100c43d0:	f3 0f 59 d6          	mulss  xmm2,xmm6
100c43d4:	f3 0f 59 ce          	mulss  xmm1,xmm6
100c43d8:	f3 0f 59 c6          	mulss  xmm0,xmm6
100c43dc:	f3 0f 58 ea          	addss  xmm5,xmm2
100c43e0:	f3 0f 58 e1          	addss  xmm4,xmm1
100c43e4:	f3 0f 58 d8          	addss  xmm3,xmm0
100c43e8:	0f 14 ec             	unpcklps xmm5,xmm4
100c43eb:	f3 0f 10 65 f8       	movss  xmm4,DWORD PTR [ebp-0x8]
100c43f0:	f3 0f 11 5d e8       	movss  DWORD PTR [ebp-0x18],xmm3
100c43f5:	f3 0f 10 5d fc       	movss  xmm3,DWORD PTR [ebp-0x4]
100c43fa:	66 0f d6 69 5c       	movq   QWORD PTR [ecx+0x5c],xmm5
100c43ff:	f3 0f 10 6d f4       	movss  xmm5,DWORD PTR [ebp-0xc]
100c4404:	eb 4c                	jmp    0x100c4452
100c4406:	f3 0f 59 d6          	mulss  xmm2,xmm6
100c440a:	0f 28 c3             	movaps xmm0,xmm3
100c440d:	f3 0f 59 ce          	mulss  xmm1,xmm6
100c4411:	f3 0f 59 c6          	mulss  xmm0,xmm6
100c4415:	0f 14 d1             	unpcklps xmm2,xmm1
100c4418:	66 0f d6 52 20       	movq   QWORD PTR [edx+0x20],xmm2
100c441d:	0f 28 d6             	movaps xmm2,xmm6
100c4420:	f3 0f 11 45 e8       	movss  DWORD PTR [ebp-0x18],xmm0
100c4425:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
100c4428:	89 42 28             	mov    DWORD PTR [edx+0x28],eax
100c442b:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c442e:	f3 0f 10 49 60       	movss  xmm1,DWORD PTR [ecx+0x60]
100c4433:	f3 0f 59 51 5c       	mulss  xmm2,DWORD PTR [ecx+0x5c]
100c4438:	f3 0f 10 41 64       	movss  xmm0,DWORD PTR [ecx+0x64]
100c443d:	f3 0f 59 ce          	mulss  xmm1,xmm6
100c4441:	f3 0f 59 c6          	mulss  xmm0,xmm6
100c4445:	0f 14 d1             	unpcklps xmm2,xmm1
100c4448:	66 0f d6 51 5c       	movq   QWORD PTR [ecx+0x5c],xmm2
100c444d:	f3 0f 11 45 e8       	movss  DWORD PTR [ebp-0x18],xmm0
100c4452:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
100c4455:	83 ec 0c             	sub    esp,0xc
100c4458:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
100c445d:	f3 0f 10 4d ec       	movss  xmm1,DWORD PTR [ebp-0x14]
100c4462:	89 41 64             	mov    DWORD PTR [ecx+0x64],eax
100c4465:	8b cc                	mov    ecx,esp
100c4467:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c446a:	83 ec 0c             	sub    esp,0xc
100c446d:	f3 0f 5c 68 5c       	subss  xmm5,DWORD PTR [eax+0x5c]
100c4472:	f3 0f 5c 40 60       	subss  xmm0,DWORD PTR [eax+0x60]
100c4477:	f3 0f 5c 48 64       	subss  xmm1,DWORD PTR [eax+0x64]
100c447c:	f3 0f 11 29          	movss  DWORD PTR [ecx],xmm5
100c4480:	f3 0f 11 41 04       	movss  DWORD PTR [ecx+0x4],xmm0
100c4485:	f3 0f 11 49 08       	movss  DWORD PTR [ecx+0x8],xmm1
100c448a:	8b cc                	mov    ecx,esp
100c448c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c448f:	56                   	push   esi
100c4490:	f3 0f 5c 78 24       	subss  xmm7,DWORD PTR [eax+0x24]
100c4495:	f3 0f 5c 58 28       	subss  xmm3,DWORD PTR [eax+0x28]
100c449a:	f3 0f 5c 60 20       	subss  xmm4,DWORD PTR [eax+0x20]
100c449f:	f3 0f 11 79 04       	movss  DWORD PTR [ecx+0x4],xmm7
100c44a4:	f3 0f 11 59 08       	movss  DWORD PTR [ecx+0x8],xmm3
100c44a9:	f3 0f 11 21          	movss  DWORD PTR [ecx],xmm4
100c44ad:	e8 ee fa ff ff       	call   0x100c3fa0
100c44b2:	56                   	push   esi
100c44b3:	e8 78 03 00 00       	call   0x100c4830
100c44b8:	83 c4 20             	add    esp,0x20
100c44bb:	56                   	push   esi
100c44bc:	e8 8f 03 00 00       	call   0x100c4850
100c44c1:	83 c4 04             	add    esp,0x4
100c44c4:	83 66 60 df          	and    DWORD PTR [esi+0x60],0xffffffdf
100c44c8:	5f                   	pop    edi
100c44c9:	b8 01 00 00 00       	mov    eax,0x1
100c44ce:	5e                   	pop    esi
100c44cf:	8b e5                	mov    esp,ebp
100c44d1:	5d                   	pop    ebp
100c44d2:	c3                   	ret
