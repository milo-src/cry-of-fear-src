
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000b2f0 <.text+0xa2f0>:
1000b2f0:	55                   	push   ebp
1000b2f1:	8b ec                	mov    ebp,esp
1000b2f3:	83 e4 f8             	and    esp,0xfffffff8
1000b2f6:	83 ec 24             	sub    esp,0x24
1000b2f9:	53                   	push   ebx
1000b2fa:	56                   	push   esi
1000b2fb:	57                   	push   edi
1000b2fc:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1000b2ff:	8b f1                	mov    esi,ecx
1000b301:	8b 17                	mov    edx,DWORD PTR [edi]
1000b303:	8d 42 ff             	lea    eax,[edx-0x1]
1000b306:	83 f8 5b             	cmp    eax,0x5b
1000b309:	77 47                	ja     0x1000b352
1000b30b:	0f b6 80 88 bb 00 10 	movzx  eax,BYTE PTR [eax+0x1000bb88]
1000b312:	ff 24 85 48 bb 00 10 	jmp    DWORD PTR [eax*4+0x1000bb48]
1000b319:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000b31c:	8b 16                	mov    edx,DWORD PTR [esi]
1000b31e:	f3 0f 2c 80 b0 00 00 	cvttss2si eax,DWORD PTR [eax+0xb0]
1000b325:	00 
1000b326:	50                   	push   eax
1000b327:	8b 82 30 01 00 00    	mov    eax,DWORD PTR [edx+0x130]
1000b32d:	ff d0                	call   eax
1000b32f:	8b ce                	mov    ecx,esi
1000b331:	dd d8                	fstp   st(0)
1000b333:	e8 78 32 0b 00       	call   0x100be5b0
1000b338:	85 c0                	test   eax,eax
1000b33a:	74 16                	je     0x1000b352
1000b33c:	f7 86 80 01 00 00 00 	test   DWORD PTR [esi+0x180],0x40000000
1000b343:	00 00 40 
1000b346:	75 0a                	jne    0x1000b352
1000b348:	c7 86 2c 02 00 00 04 	mov    DWORD PTR [esi+0x22c],0x4
1000b34f:	00 00 00 
1000b352:	5f                   	pop    edi
1000b353:	5e                   	pop    esi
1000b354:	5b                   	pop    ebx
1000b355:	8b e5                	mov    esp,ebp
1000b357:	5d                   	pop    ebp
1000b358:	c2 04 00             	ret    0x4
1000b35b:	33 c9                	xor    ecx,ecx
1000b35d:	83 fa 41             	cmp    edx,0x41
1000b360:	0f 94 c1             	sete   cl
1000b363:	8d 0c cd 84 01 00 00 	lea    ecx,[ecx*8+0x184]
1000b36a:	03 ce                	add    ecx,esi
1000b36c:	e8 1f c4 00 00       	call   0x10017790
1000b371:	85 c0                	test   eax,eax
1000b373:	74 66                	je     0x1000b3db
1000b375:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000b378:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000b37b:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
1000b380:	f3 0f 10 48 10       	movss  xmm1,DWORD PTR [eax+0x10]
1000b385:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
1000b38a:	8d 44 24 18          	lea    eax,[esp+0x18]
1000b38e:	f3 0f 5c 51 0c       	subss  xmm2,DWORD PTR [ecx+0xc]
1000b393:	f3 0f 5c 49 10       	subss  xmm1,DWORD PTR [ecx+0x10]
1000b398:	f3 0f 5c 41 08       	subss  xmm0,DWORD PTR [ecx+0x8]
1000b39d:	50                   	push   eax
1000b39e:	f3 0f 11 54 24 20    	movss  DWORD PTR [esp+0x20],xmm2
1000b3a4:	f3 0f 11 4c 24 24    	movss  DWORD PTR [esp+0x24],xmm1
1000b3aa:	f3 0f 11 44 24 1c    	movss  DWORD PTR [esp+0x1c],xmm0
1000b3b0:	e8 7b f5 10 00       	call   0x1011a930
1000b3b5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000b3b8:	83 c4 04             	add    esp,0x4
1000b3bb:	8b ce                	mov    ecx,esi
1000b3bd:	d9 98 ac 00 00 00    	fstp   DWORD PTR [eax+0xac]
1000b3c3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000b3c6:	8b 16                	mov    edx,DWORD PTR [esi]
1000b3c8:	f3 0f 2c 80 b0 00 00 	cvttss2si eax,DWORD PTR [eax+0xb0]
1000b3cf:	00 
1000b3d0:	50                   	push   eax
1000b3d1:	8b 82 30 01 00 00    	mov    eax,DWORD PTR [edx+0x130]
1000b3d7:	ff d0                	call   eax
1000b3d9:	dd d8                	fstp   st(0)
1000b3db:	83 be f8 00 00 00 00 	cmp    DWORD PTR [esi+0xf8],0x0
1000b3e2:	e9 53 ff ff ff       	jmp    0x1000b33a
1000b3e7:	8b 86 f4 02 00 00    	mov    eax,DWORD PTR [esi+0x2f4]
1000b3ed:	83 ec 0c             	sub    esp,0xc
1000b3f0:	8b cc                	mov    ecx,esp
1000b3f2:	89 01                	mov    DWORD PTR [ecx],eax
1000b3f4:	8b 86 f8 02 00 00    	mov    eax,DWORD PTR [esi+0x2f8]
1000b3fa:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000b3fd:	8b 86 fc 02 00 00    	mov    eax,DWORD PTR [esi+0x2fc]
1000b403:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000b406:	8b ce                	mov    ecx,esi
1000b408:	e8 e3 4c 0b 00       	call   0x100c00f0
1000b40d:	8b ce                	mov    ecx,esi
1000b40f:	e9 05 ff ff ff       	jmp    0x1000b319
1000b414:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000b417:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1000b41d:	ff 15 8c 2f 22 10    	call   DWORD PTR ds:0x10222f8c
1000b423:	83 c4 04             	add    esp,0x4
1000b426:	85 c0                	test   eax,eax
1000b428:	0f 84 24 ff ff ff    	je     0x1000b352
1000b42e:	50                   	push   eax
1000b42f:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
1000b435:	83 c4 04             	add    esp,0x4
1000b438:	e9 fb fe ff ff       	jmp    0x1000b338
1000b43d:	8b 86 f4 02 00 00    	mov    eax,DWORD PTR [esi+0x2f4]
1000b443:	83 ec 0c             	sub    esp,0xc
1000b446:	8b cc                	mov    ecx,esp
1000b448:	89 01                	mov    DWORD PTR [ecx],eax
1000b44a:	8b 86 f8 02 00 00    	mov    eax,DWORD PTR [esi+0x2f8]
1000b450:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000b453:	8b 86 fc 02 00 00    	mov    eax,DWORD PTR [esi+0x2fc]
1000b459:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000b45c:	8b ce                	mov    ecx,esi
1000b45e:	e8 8d 4c 0b 00       	call   0x100c00f0
1000b463:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000b466:	8b ce                	mov    ecx,esi
1000b468:	8b 16                	mov    edx,DWORD PTR [esi]
1000b46a:	f3 0f 2c 80 b0 00 00 	cvttss2si eax,DWORD PTR [eax+0xb0]
1000b471:	00 
1000b472:	50                   	push   eax
1000b473:	8b 82 30 01 00 00    	mov    eax,DWORD PTR [edx+0x130]
1000b479:	ff d0                	call   eax
1000b47b:	dd d8                	fstp   st(0)
1000b47d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000b482:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1000b486:	0f 2f 86 0c 02 00 00 	comiss xmm0,DWORD PTR [esi+0x20c]
1000b48d:	0f 82 bf fe ff ff    	jb     0x1000b352
1000b493:	e9 a4 fe ff ff       	jmp    0x1000b33c
1000b498:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
1000b49e:	e8 dd c2 00 00       	call   0x10017780
1000b4a3:	85 c0                	test   eax,eax
1000b4a5:	75 13                	jne    0x1000b4ba
1000b4a7:	81 8e 80 01 00 00 00 	or     DWORD PTR [esi+0x180],0x40000000
1000b4ae:	00 00 40 
1000b4b1:	5f                   	pop    edi
1000b4b2:	5e                   	pop    esi
1000b4b3:	5b                   	pop    ebx
1000b4b4:	8b e5                	mov    esp,ebp
1000b4b6:	5d                   	pop    ebp
1000b4b7:	c2 04 00             	ret    0x4
1000b4ba:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000b4bd:	f3 0f 10 8e c4 02 00 	movss  xmm1,DWORD PTR [esi+0x2c4]
1000b4c4:	00 
1000b4c5:	f3 0f 10 86 c8 02 00 	movss  xmm0,DWORD PTR [esi+0x2c8]
1000b4cc:	00 
1000b4cd:	f3 0f 5c 40 0c       	subss  xmm0,DWORD PTR [eax+0xc]
1000b4d2:	f3 0f 5c 48 08       	subss  xmm1,DWORD PTR [eax+0x8]
1000b4d7:	f3 0f 59 c0          	mulss  xmm0,xmm0
1000b4db:	f3 0f 59 c9          	mulss  xmm1,xmm1
1000b4df:	f3 0f 58 c1          	addss  xmm0,xmm1
1000b4e3:	0f 57 c9             	xorps  xmm1,xmm1
1000b4e6:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000b4e9:	66 0f 2e c8          	ucomisd xmm1,xmm0
1000b4ed:	77 06                	ja     0x1000b4f5
1000b4ef:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1000b4f3:	eb 05                	jmp    0x1000b4fa
1000b4f5:	e8 96 09 16 00       	call   0x1016be90
1000b4fa:	0f 57 c9             	xorps  xmm1,xmm1
1000b4fd:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
1000b501:	f3 0f 10 47 04       	movss  xmm0,DWORD PTR [edi+0x4]
1000b506:	0f 2f c1             	comiss xmm0,xmm1
1000b509:	f3 0f 11 4c 24 10    	movss  DWORD PTR [esp+0x10],xmm1
1000b50f:	0f 87 8c 00 00 00    	ja     0x1000b5a1
1000b515:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
1000b51b:	e8 80 c2 00 00       	call   0x100177a0
1000b520:	f3 0f 10 8e c4 02 00 	movss  xmm1,DWORD PTR [esi+0x2c4]
1000b527:	00 
1000b528:	f3 0f 10 96 c8 02 00 	movss  xmm2,DWORD PTR [esi+0x2c8]
1000b52f:	00 
1000b530:	f3 0f 10 86 cc 02 00 	movss  xmm0,DWORD PTR [esi+0x2cc]
1000b537:	00 
1000b538:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000b53b:	f3 0f 10 5f 04       	movss  xmm3,DWORD PTR [edi+0x4]
1000b540:	f3 0f 11 5c 24 14    	movss  DWORD PTR [esp+0x14],xmm3
1000b546:	f3 0f 5c 50 0c       	subss  xmm2,DWORD PTR [eax+0xc]
1000b54b:	f3 0f 5c 48 08       	subss  xmm1,DWORD PTR [eax+0x8]
1000b550:	f3 0f 5c 40 10       	subss  xmm0,DWORD PTR [eax+0x10]
1000b555:	f3 0f 59 d2          	mulss  xmm2,xmm2
1000b559:	f3 0f 59 c9          	mulss  xmm1,xmm1
1000b55d:	f3 0f 59 c0          	mulss  xmm0,xmm0
1000b561:	f3 0f 58 d1          	addss  xmm2,xmm1
1000b565:	0f 57 c9             	xorps  xmm1,xmm1
1000b568:	f3 0f 58 d0          	addss  xmm2,xmm0
1000b56c:	0f 5a c2             	cvtps2pd xmm0,xmm2
1000b56f:	66 0f 2e c8          	ucomisd xmm1,xmm0
1000b573:	77 06                	ja     0x1000b57b
1000b575:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1000b579:	eb 05                	jmp    0x1000b580
1000b57b:	e8 10 09 16 00       	call   0x1016be90
1000b580:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
1000b584:	0f 57 c9             	xorps  xmm1,xmm1
1000b587:	f3 0f 5a c8          	cvtss2sd xmm1,xmm0
1000b58b:	f3 0f 10 47 04       	movss  xmm0,DWORD PTR [edi+0x4]
1000b590:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000b593:	f2 0f 59 05 48 1e 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1e48
1000b59a:	10 
1000b59b:	66 0f 2f c8          	comisd xmm1,xmm0
1000b59f:	76 7f                	jbe    0x1000b620
1000b5a1:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
1000b5a7:	e8 f4 c1 00 00       	call   0x100177a0
1000b5ac:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000b5af:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
1000b5b4:	66 0f d6 86 c4 02 00 	movq   QWORD PTR [esi+0x2c4],xmm0
1000b5bb:	00 
1000b5bc:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
1000b5bf:	89 86 cc 02 00 00    	mov    DWORD PTR [esi+0x2cc],eax
1000b5c5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000b5c8:	f3 0f 10 8e c4 02 00 	movss  xmm1,DWORD PTR [esi+0x2c4]
1000b5cf:	00 
1000b5d0:	f3 0f 10 86 c8 02 00 	movss  xmm0,DWORD PTR [esi+0x2c8]
1000b5d7:	00 
1000b5d8:	f3 0f 5c 40 0c       	subss  xmm0,DWORD PTR [eax+0xc]
1000b5dd:	f3 0f 5c 48 08       	subss  xmm1,DWORD PTR [eax+0x8]
1000b5e2:	f3 0f 59 c0          	mulss  xmm0,xmm0
1000b5e6:	f3 0f 59 c9          	mulss  xmm1,xmm1
1000b5ea:	f3 0f 58 c1          	addss  xmm0,xmm1
1000b5ee:	0f 57 c9             	xorps  xmm1,xmm1
1000b5f1:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000b5f4:	66 0f 2e c8          	ucomisd xmm1,xmm0
1000b5f8:	77 06                	ja     0x1000b600
1000b5fa:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1000b5fe:	eb 05                	jmp    0x1000b605
1000b600:	e8 8b 08 16 00       	call   0x1016be90
1000b605:	0f 57 c9             	xorps  xmm1,xmm1
1000b608:	8b ce                	mov    ecx,esi
1000b60a:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
1000b60e:	f3 0f 11 4c 24 10    	movss  DWORD PTR [esp+0x10],xmm1
1000b614:	e8 97 27 0b 00       	call   0x100bddb0
1000b619:	f3 0f 10 47 04       	movss  xmm0,DWORD PTR [edi+0x4]
1000b61e:	eb 06                	jmp    0x1000b626
1000b620:	f3 0f 10 44 24 14    	movss  xmm0,DWORD PTR [esp+0x14]
1000b626:	f3 0f 10 4c 24 10    	movss  xmm1,DWORD PTR [esp+0x10]
1000b62c:	0f 2f c1             	comiss xmm0,xmm1
1000b62f:	76 26                	jbe    0x1000b657
1000b631:	f7 86 80 01 00 00 00 	test   DWORD PTR [esi+0x180],0x40000000
1000b638:	00 00 40 
1000b63b:	75 0a                	jne    0x1000b647
1000b63d:	c7 86 2c 02 00 00 04 	mov    DWORD PTR [esi+0x22c],0x4
1000b644:	00 00 00 
1000b647:	8b ce                	mov    ecx,esi
1000b649:	e8 22 64 0b 00       	call   0x100c1a70
1000b64e:	5f                   	pop    edi
1000b64f:	5e                   	pop    esi
1000b650:	5b                   	pop    ebx
1000b651:	8b e5                	mov    esp,ebp
1000b653:	5d                   	pop    ebp
1000b654:	c2 04 00             	ret    0x4
1000b657:	f3 0f 10 05 bc 22 1a 	movss  xmm0,DWORD PTR ds:0x101a22bc
1000b65e:	10 
1000b65f:	0f 2f c1             	comiss xmm0,xmm1
1000b662:	76 1c                	jbe    0x1000b680
1000b664:	83 be d0 02 00 00 03 	cmp    DWORD PTR [esi+0x2d0],0x3
1000b66b:	74 13                	je     0x1000b680
1000b66d:	c7 86 d0 02 00 00 03 	mov    DWORD PTR [esi+0x2d0],0x3
1000b674:	00 00 00 
1000b677:	5f                   	pop    edi
1000b678:	5e                   	pop    esi
1000b679:	5b                   	pop    ebx
1000b67a:	8b e5                	mov    esp,ebp
1000b67c:	5d                   	pop    ebp
1000b67d:	c2 04 00             	ret    0x4
1000b680:	0f 2f 0d c8 13 1a 10 	comiss xmm1,DWORD PTR ds:0x101a13c8
1000b687:	0f 82 c5 fc ff ff    	jb     0x1000b352
1000b68d:	83 be d0 02 00 00 04 	cmp    DWORD PTR [esi+0x2d0],0x4
1000b694:	0f 84 b8 fc ff ff    	je     0x1000b352
1000b69a:	c7 86 d0 02 00 00 04 	mov    DWORD PTR [esi+0x2d0],0x4
1000b6a1:	00 00 00 
1000b6a4:	5f                   	pop    edi
1000b6a5:	5e                   	pop    esi
1000b6a6:	5b                   	pop    ebx
1000b6a7:	8b e5                	mov    esp,ebp
1000b6a9:	5d                   	pop    ebp
1000b6aa:	c2 04 00             	ret    0x4
1000b6ad:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
1000b6b3:	e8 c8 c0 00 00       	call   0x10017780
1000b6b8:	85 c0                	test   eax,eax
1000b6ba:	0f 84 e7 fd ff ff    	je     0x1000b4a7
1000b6c0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000b6c3:	f3 0f 10 8e c4 02 00 	movss  xmm1,DWORD PTR [esi+0x2c4]
1000b6ca:	00 
1000b6cb:	f3 0f 10 86 c8 02 00 	movss  xmm0,DWORD PTR [esi+0x2c8]
1000b6d2:	00 
1000b6d3:	f3 0f 5c 40 0c       	subss  xmm0,DWORD PTR [eax+0xc]
1000b6d8:	f3 0f 5c 48 08       	subss  xmm1,DWORD PTR [eax+0x8]
1000b6dd:	f3 0f 59 c0          	mulss  xmm0,xmm0
1000b6e1:	f3 0f 59 c9          	mulss  xmm1,xmm1
1000b6e5:	f3 0f 58 c1          	addss  xmm0,xmm1
1000b6e9:	0f 57 c9             	xorps  xmm1,xmm1
1000b6ec:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000b6ef:	66 0f 2e c8          	ucomisd xmm1,xmm0
1000b6f3:	77 06                	ja     0x1000b6fb
1000b6f5:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1000b6f9:	eb 05                	jmp    0x1000b700
1000b6fb:	e8 90 07 16 00       	call   0x1016be90
1000b700:	0f 57 c9             	xorps  xmm1,xmm1
1000b703:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
1000b707:	f3 0f 10 86 60 03 00 	movss  xmm0,DWORD PTR [esi+0x360]
1000b70e:	00 
1000b70f:	0f 2f c1             	comiss xmm0,xmm1
1000b712:	f3 0f 11 4c 24 10    	movss  DWORD PTR [esp+0x10],xmm1
1000b718:	0f 87 96 00 00 00    	ja     0x1000b7b4
1000b71e:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
1000b724:	e8 77 c0 00 00       	call   0x100177a0
1000b729:	f3 0f 10 8e c4 02 00 	movss  xmm1,DWORD PTR [esi+0x2c4]
1000b730:	00 
1000b731:	f3 0f 10 96 c8 02 00 	movss  xmm2,DWORD PTR [esi+0x2c8]
1000b738:	00 
1000b739:	f3 0f 10 86 cc 02 00 	movss  xmm0,DWORD PTR [esi+0x2cc]
1000b740:	00 
1000b741:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000b744:	f3 0f 10 9e 60 03 00 	movss  xmm3,DWORD PTR [esi+0x360]
1000b74b:	00 
1000b74c:	f3 0f 11 5c 24 14    	movss  DWORD PTR [esp+0x14],xmm3
1000b752:	f3 0f 5c 50 0c       	subss  xmm2,DWORD PTR [eax+0xc]
1000b757:	f3 0f 5c 48 08       	subss  xmm1,DWORD PTR [eax+0x8]
1000b75c:	f3 0f 5c 40 10       	subss  xmm0,DWORD PTR [eax+0x10]
1000b761:	f3 0f 59 d2          	mulss  xmm2,xmm2
1000b765:	f3 0f 59 c9          	mulss  xmm1,xmm1
1000b769:	f3 0f 59 c0          	mulss  xmm0,xmm0
1000b76d:	f3 0f 58 d1          	addss  xmm2,xmm1
1000b771:	0f 57 c9             	xorps  xmm1,xmm1
1000b774:	f3 0f 58 d0          	addss  xmm2,xmm0
1000b778:	0f 5a c2             	cvtps2pd xmm0,xmm2
1000b77b:	66 0f 2e c8          	ucomisd xmm1,xmm0
1000b77f:	77 06                	ja     0x1000b787
1000b781:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1000b785:	eb 05                	jmp    0x1000b78c
1000b787:	e8 04 07 16 00       	call   0x1016be90
1000b78c:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
1000b790:	0f 57 c9             	xorps  xmm1,xmm1
1000b793:	f3 0f 5a c8          	cvtss2sd xmm1,xmm0
1000b797:	f3 0f 10 86 60 03 00 	movss  xmm0,DWORD PTR [esi+0x360]
1000b79e:	00 
1000b79f:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000b7a2:	f2 0f 59 05 48 1e 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1e48
1000b7a9:	10 
1000b7aa:	66 0f 2f c8          	comisd xmm1,xmm0
1000b7ae:	0f 86 b2 00 00 00    	jbe    0x1000b866
1000b7b4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000b7b9:	8b 8e 58 03 00 00    	mov    ecx,DWORD PTR [esi+0x358]
1000b7bf:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1000b7c5:	51                   	push   ecx
1000b7c6:	6a 00                	push   0x0
1000b7c8:	e8 c3 cd 10 00       	call   0x10118590
1000b7cd:	83 c4 08             	add    esp,0x8
1000b7d0:	85 c0                	test   eax,eax
1000b7d2:	74 13                	je     0x1000b7e7
1000b7d4:	8b c8                	mov    ecx,eax
1000b7d6:	e8 65 fd 0f 00       	call   0x1010b540
1000b7db:	50                   	push   eax
1000b7dc:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
1000b7e2:	e8 59 bf 00 00       	call   0x10017740
1000b7e7:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
1000b7ed:	e8 ae bf 00 00       	call   0x100177a0
1000b7f2:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1000b7f5:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
1000b7fa:	66 0f d6 86 c4 02 00 	movq   QWORD PTR [esi+0x2c4],xmm0
1000b801:	00 
1000b802:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
1000b805:	89 86 cc 02 00 00    	mov    DWORD PTR [esi+0x2cc],eax
1000b80b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000b80e:	f3 0f 10 8e c4 02 00 	movss  xmm1,DWORD PTR [esi+0x2c4]
1000b815:	00 
1000b816:	f3 0f 10 86 c8 02 00 	movss  xmm0,DWORD PTR [esi+0x2c8]
1000b81d:	00 
1000b81e:	f3 0f 5c 40 0c       	subss  xmm0,DWORD PTR [eax+0xc]
1000b823:	f3 0f 5c 48 08       	subss  xmm1,DWORD PTR [eax+0x8]
1000b828:	f3 0f 59 c0          	mulss  xmm0,xmm0
1000b82c:	f3 0f 59 c9          	mulss  xmm1,xmm1
1000b830:	f3 0f 58 c1          	addss  xmm0,xmm1
1000b834:	0f 57 c9             	xorps  xmm1,xmm1
1000b837:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000b83a:	66 0f 2e c8          	ucomisd xmm1,xmm0
1000b83e:	77 06                	ja     0x1000b846
1000b840:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1000b844:	eb 05                	jmp    0x1000b84b
1000b846:	e8 45 06 16 00       	call   0x1016be90
1000b84b:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
1000b84f:	8b ce                	mov    ecx,esi
1000b851:	f3 0f 11 44 24 10    	movss  DWORD PTR [esp+0x10],xmm0
1000b857:	e8 54 25 0b 00       	call   0x100bddb0
1000b85c:	f3 0f 10 86 60 03 00 	movss  xmm0,DWORD PTR [esi+0x360]
1000b863:	00 
1000b864:	eb 06                	jmp    0x1000b86c
1000b866:	f3 0f 10 44 24 14    	movss  xmm0,DWORD PTR [esp+0x14]
1000b86c:	0f 2f 44 24 10       	comiss xmm0,DWORD PTR [esp+0x10]
1000b871:	0f 86 db fa ff ff    	jbe    0x1000b352
1000b877:	f7 86 80 01 00 00 00 	test   DWORD PTR [esi+0x180],0x40000000
1000b87e:	00 00 40 
1000b881:	75 0a                	jne    0x1000b88d
1000b883:	c7 86 2c 02 00 00 04 	mov    DWORD PTR [esi+0x22c],0x4
1000b88a:	00 00 00 
1000b88d:	8b ce                	mov    ecx,esi
1000b88f:	e8 dc 61 0b 00       	call   0x100c1a70
1000b894:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000b899:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1000b89f:	03 86 58 03 00 00    	add    eax,DWORD PTR [esi+0x358]
1000b8a5:	50                   	push   eax
1000b8a6:	6a 00                	push   0x0
1000b8a8:	e8 e3 cc 10 00       	call   0x10118590
1000b8ad:	83 c4 08             	add    esp,0x8
1000b8b0:	c7 86 58 03 00 00 00 	mov    DWORD PTR [esi+0x358],0x0
1000b8b7:	00 00 00 
1000b8ba:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
1000b8c0:	8b d8                	mov    ebx,eax
1000b8c2:	6a 00                	push   0x0
1000b8c4:	e8 77 be 00 00       	call   0x10017740
1000b8c9:	85 db                	test   ebx,ebx
1000b8cb:	74 11                	je     0x1000b8de
1000b8cd:	56                   	push   esi
1000b8ce:	8b cb                	mov    ecx,ebx
1000b8d0:	e8 5b 3a 10 00       	call   0x1010f330
1000b8d5:	5f                   	pop    edi
1000b8d6:	5e                   	pop    esi
1000b8d7:	5b                   	pop    ebx
1000b8d8:	8b e5                	mov    esp,ebp
1000b8da:	5d                   	pop    ebp
1000b8db:	c2 04 00             	ret    0x4
1000b8de:	68 18 20 1a 10       	push   0x101a2018
1000b8e3:	6a 01                	push   0x1
1000b8e5:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000b8eb:	83 c4 08             	add    esp,0x8
1000b8ee:	5f                   	pop    edi
1000b8ef:	5e                   	pop    esi
1000b8f0:	5b                   	pop    ebx
1000b8f1:	8b e5                	mov    esp,ebp
1000b8f3:	5d                   	pop    ebp
1000b8f4:	c2 04 00             	ret    0x4
1000b8f7:	83 be b8 02 00 00 00 	cmp    DWORD PTR [esi+0x2b8],0x0
1000b8fe:	0f 85 4e fa ff ff    	jne    0x1000b352
1000b904:	f7 86 80 01 00 00 00 	test   DWORD PTR [esi+0x180],0x40000000
1000b90b:	00 00 40 
1000b90e:	75 0a                	jne    0x1000b91a
1000b910:	c7 86 2c 02 00 00 04 	mov    DWORD PTR [esi+0x22c],0x4
1000b917:	00 00 00 
1000b91a:	e8 51 61 0b 00       	call   0x100c1a70
1000b91f:	5f                   	pop    edi
1000b920:	5e                   	pop    esi
1000b921:	5b                   	pop    ebx
1000b922:	8b e5                	mov    esp,ebp
1000b924:	5d                   	pop    ebp
1000b925:	c2 04 00             	ret    0x4
1000b928:	83 be f8 00 00 00 00 	cmp    DWORD PTR [esi+0xf8],0x0
1000b92f:	0f 84 1d fa ff ff    	je     0x1000b352
1000b935:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000b938:	f3 0f 10 80 34 01 00 	movss  xmm0,DWORD PTR [eax+0x134]
1000b93f:	00 
1000b940:	0f 2f 05 c0 22 1a 10 	comiss xmm0,DWORD PTR ds:0x101a22c0
1000b947:	0f 82 05 fa ff ff    	jb     0x1000b352
1000b94d:	c7 80 74 01 00 00 02 	mov    DWORD PTR [eax+0x174],0x2
1000b954:	00 00 00 
1000b957:	8b 06                	mov    eax,DWORD PTR [esi]
1000b959:	51                   	push   ecx
1000b95a:	c7 46 78 a0 7a 01 10 	mov    DWORD PTR [esi+0x78],0x10017aa0
1000b961:	c7 04 24 00 00 a0 41 	mov    DWORD PTR [esp],0x41a00000
1000b968:	ff 50 08             	call   DWORD PTR [eax+0x8]
1000b96b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000b96e:	8b ce                	mov    ecx,esi
1000b970:	c7 80 3c 01 00 00 00 	mov    DWORD PTR [eax+0x13c],0x0
1000b977:	00 00 00 
1000b97a:	e8 71 0a 0b 00       	call   0x100bc3f0
1000b97f:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000b982:	85 c0                	test   eax,eax
1000b984:	75 37                	jne    0x1000b9bd
1000b986:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
1000b98a:	8d 44 24 18          	lea    eax,[esp+0x18]
1000b98e:	50                   	push   eax
1000b98f:	c7 44 24 1c 00 00 80 	mov    DWORD PTR [esp+0x1c],0x40800000
1000b996:	40 
1000b997:	8d 44 24 28          	lea    eax,[esp+0x28]
1000b99b:	c7 44 24 20 00 00 80 	mov    DWORD PTR [esp+0x20],0x40800000
1000b9a2:	40 
1000b9a3:	c7 44 24 24 00 00 80 	mov    DWORD PTR [esp+0x24],0x3f800000
1000b9aa:	3f 
1000b9ab:	c7 44 24 28 00 00 80 	mov    DWORD PTR [esp+0x28],0xc0800000
1000b9b2:	c0 
1000b9b3:	c7 44 24 2c 00 00 80 	mov    DWORD PTR [esp+0x2c],0xc0800000
1000b9ba:	c0 
1000b9bb:	eb 65                	jmp    0x1000ba22
1000b9bd:	f3 0f 10 89 e4 00 00 	movss  xmm1,DWORD PTR [ecx+0xe4]
1000b9c4:	00 
1000b9c5:	8d 44 24 24          	lea    eax,[esp+0x24]
1000b9c9:	f3 0f 10 91 ec 00 00 	movss  xmm2,DWORD PTR [ecx+0xec]
1000b9d0:	00 
1000b9d1:	f3 0f 10 81 e8 00 00 	movss  xmm0,DWORD PTR [ecx+0xe8]
1000b9d8:	00 
1000b9d9:	f3 0f 58 0d 90 13 1a 	addss  xmm1,DWORD PTR ds:0x101a1390
1000b9e0:	10 
1000b9e1:	f3 0f 11 44 24 24    	movss  DWORD PTR [esp+0x24],xmm0
1000b9e7:	f3 0f 11 54 24 28    	movss  DWORD PTR [esp+0x28],xmm2
1000b9ed:	50                   	push   eax
1000b9ee:	8d 44 24 1c          	lea    eax,[esp+0x1c]
1000b9f2:	f3 0f 11 4c 24 30    	movss  DWORD PTR [esp+0x30],xmm1
1000b9f8:	f3 0f 10 89 e0 00 00 	movss  xmm1,DWORD PTR [ecx+0xe0]
1000b9ff:	00 
1000ba00:	f3 0f 10 91 e4 00 00 	movss  xmm2,DWORD PTR [ecx+0xe4]
1000ba07:	00 
1000ba08:	f3 0f 10 81 dc 00 00 	movss  xmm0,DWORD PTR [ecx+0xdc]
1000ba0f:	00 
1000ba10:	f3 0f 11 44 24 1c    	movss  DWORD PTR [esp+0x1c],xmm0
1000ba16:	f3 0f 11 4c 24 20    	movss  DWORD PTR [esp+0x20],xmm1
1000ba1c:	f3 0f 11 54 24 24    	movss  DWORD PTR [esp+0x24],xmm2
1000ba22:	50                   	push   eax
1000ba23:	51                   	push   ecx
1000ba24:	e8 07 e6 10 00       	call   0x1011a030
1000ba29:	8b 06                	mov    eax,DWORD PTR [esi]
1000ba2b:	83 c4 0c             	add    esp,0xc
1000ba2e:	8b ce                	mov    ecx,esi
1000ba30:	ff 90 2c 01 00 00    	call   DWORD PTR [eax+0x12c]
1000ba36:	85 c0                	test   eax,eax
1000ba38:	74 10                	je     0x1000ba4a
1000ba3a:	8b ce                	mov    ecx,esi
1000ba3c:	e8 0f f2 07 00       	call   0x1008ac50
1000ba41:	5f                   	pop    edi
1000ba42:	5e                   	pop    esi
1000ba43:	5b                   	pop    ebx
1000ba44:	8b e5                	mov    esp,ebp
1000ba46:	5d                   	pop    ebp
1000ba47:	c2 04 00             	ret    0x4
1000ba4a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000ba4d:	51                   	push   ecx
1000ba4e:	c7 04 24 00 00 f0 41 	mov    DWORD PTR [esp],0x41f00000
1000ba55:	83 c0 08             	add    eax,0x8
1000ba58:	68 80 01 00 00       	push   0x180
1000ba5d:	50                   	push   eax
1000ba5e:	6a 08                	push   0x8
1000ba60:	e8 bb 4d 0f 00       	call   0x10100820
1000ba65:	83 c4 10             	add    esp,0x10
1000ba68:	5f                   	pop    edi
1000ba69:	5e                   	pop    esi
1000ba6a:	5b                   	pop    ebx
1000ba6b:	8b e5                	mov    esp,ebp
1000ba6d:	5d                   	pop    ebp
1000ba6e:	c2 04 00             	ret    0x4
1000ba71:	8b 86 f4 02 00 00    	mov    eax,DWORD PTR [esi+0x2f4]
1000ba77:	83 ec 0c             	sub    esp,0xc
1000ba7a:	8b cc                	mov    ecx,esp
1000ba7c:	89 01                	mov    DWORD PTR [ecx],eax
1000ba7e:	8b 86 f8 02 00 00    	mov    eax,DWORD PTR [esi+0x2f8]
1000ba84:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1000ba87:	8b 86 fc 02 00 00    	mov    eax,DWORD PTR [esi+0x2fc]
1000ba8d:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1000ba90:	8b ce                	mov    ecx,esi
1000ba92:	e8 59 46 0b 00       	call   0x100c00f0
1000ba97:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000ba9a:	8b ce                	mov    ecx,esi
1000ba9c:	8b 16                	mov    edx,DWORD PTR [esi]
1000ba9e:	f3 0f 2c 80 b0 00 00 	cvttss2si eax,DWORD PTR [eax+0xb0]
1000baa5:	00 
1000baa6:	50                   	push   eax
1000baa7:	8b 82 30 01 00 00    	mov    eax,DWORD PTR [edx+0x130]
1000baad:	ff d0                	call   eax
1000baaf:	dd d8                	fstp   st(0)
1000bab1:	83 be f8 00 00 00 00 	cmp    DWORD PTR [esi+0xf8],0x0
1000bab8:	0f 84 94 f8 ff ff    	je     0x1000b352
1000babe:	c7 86 14 02 00 00 00 	mov    DWORD PTR [esi+0x214],0x0
1000bac5:	00 00 00 
1000bac8:	e9 6f f8 ff ff       	jmp    0x1000b33c
1000bacd:	8b 8e 4c 03 00 00    	mov    ecx,DWORD PTR [esi+0x34c]
1000bad3:	83 b9 a8 03 00 00 00 	cmp    DWORD PTR [ecx+0x3a8],0x0
1000bada:	0f 8f 72 f8 ff ff    	jg     0x1000b352
1000bae0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000bae5:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1000bae9:	0f 2f 81 ac 03 00 00 	comiss xmm0,DWORD PTR [ecx+0x3ac]
1000baf0:	0f 82 5c f8 ff ff    	jb     0x1000b352
1000baf6:	e9 41 f8 ff ff       	jmp    0x1000b33c
1000bafb:	83 be f8 00 00 00 00 	cmp    DWORD PTR [esi+0xf8],0x0
1000bb02:	0f 84 4a f8 ff ff    	je     0x1000b352
1000bb08:	8b 8e 4c 03 00 00    	mov    ecx,DWORD PTR [esi+0x34c]
1000bb0e:	8b 81 9c 03 00 00    	mov    eax,DWORD PTR [ecx+0x39c]
1000bb14:	85 c0                	test   eax,eax
1000bb16:	0f 8e 20 f8 ff ff    	jle    0x1000b33c
1000bb1c:	48                   	dec    eax
1000bb1d:	89 81 9c 03 00 00    	mov    DWORD PTR [ecx+0x39c],eax
1000bb23:	8b 86 4c 03 00 00    	mov    eax,DWORD PTR [esi+0x34c]
1000bb29:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1000bb2c:	8b 80 a0 03 00 00    	mov    eax,DWORD PTR [eax+0x3a0]
1000bb32:	89 81 34 01 00 00    	mov    DWORD PTR [ecx+0x134],eax
1000bb38:	8b ce                	mov    ecx,esi
1000bb3a:	e8 a1 2e 00 00       	call   0x1000e9e0
1000bb3f:	5f                   	pop    edi
1000bb40:	5e                   	pop    esi
1000bb41:	5b                   	pop    ebx
1000bb42:	8b e5                	mov    esp,ebp
1000bb44:	5d                   	pop    ebp
1000bb45:	c2 04 00             	ret    0x4
