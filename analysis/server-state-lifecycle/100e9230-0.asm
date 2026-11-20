
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e9230 <.text+0xe8230>:
100e9230:	55                   	push   ebp
100e9231:	8b ec                	mov    ebp,esp
100e9233:	83 ec 10             	sub    esp,0x10
100e9236:	57                   	push   edi
100e9237:	51                   	push   ecx
100e9238:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100e923f:	8b f9                	mov    edi,ecx
100e9241:	6a 00                	push   0x0
100e9243:	e8 f8 fe 00 00       	call   0x100f9140
100e9248:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e924b:	f3 0f 2c 40 54       	cvttss2si eax,DWORD PTR [eax+0x54]
100e9250:	89 87 a4 03 00 00    	mov    DWORD PTR [edi+0x3a4],eax
100e9256:	85 c0                	test   eax,eax
100e9258:	75 0a                	jne    0x100e9264
100e925a:	c7 87 a4 03 00 00 01 	mov    DWORD PTR [edi+0x3a4],0x1
100e9261:	00 00 00 
100e9264:	8b 07                	mov    eax,DWORD PTR [edi]
100e9266:	51                   	push   ecx
100e9267:	8b cf                	mov    ecx,edi
100e9269:	c7 47 78 b0 9a 0e 10 	mov    DWORD PTR [edi+0x78],0x100e9ab0
100e9270:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
100e9277:	ff 50 08             	call   DWORD PTR [eax+0x8]
100e927a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e927f:	68 88 b6 1c 10       	push   0x101cb688
100e9284:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100e9288:	f3 0f 58 05 00 1f 1a 	addss  xmm0,DWORD PTR ds:0x101a1f00
100e928f:	10 
100e9290:	f3 0f 11 87 d4 03 00 	movss  DWORD PTR [edi+0x3d4],xmm0
100e9297:	00 
100e9298:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e929d:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100e92a1:	f3 0f 58 05 00 1f 1a 	addss  xmm0,DWORD PTR ds:0x101a1f00
100e92a8:	10 
100e92a9:	f3 0f 11 87 d0 03 00 	movss  DWORD PTR [edi+0x3d0],xmm0
100e92b0:	00 
100e92b1:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100e92b7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e92bc:	83 c4 04             	add    esp,0x4
100e92bf:	d8 00                	fadd   DWORD PTR [eax]
100e92c1:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e92c4:	6a 64                	push   0x64
100e92c6:	6a 00                	push   0x0
100e92c8:	83 ec 08             	sub    esp,0x8
100e92cb:	d9 9f 2c 1f 00 00    	fstp   DWORD PTR [edi+0x1f2c]
100e92d1:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100e92d8:	3f 
100e92d9:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e92e0:	68 68 40 1a 10       	push   0x101a4068
100e92e5:	6a 01                	push   0x1
100e92e7:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e92ed:	e8 fe 36 01 00       	call   0x100fc9f0
100e92f2:	83 c4 1c             	add    esp,0x1c
100e92f5:	8d 8f 98 26 00 00    	lea    ecx,[edi+0x2698]
100e92fb:	6a 00                	push   0x0
100e92fd:	e8 3e e4 f2 ff       	call   0x10017740
100e9302:	6a 00                	push   0x0
100e9304:	8d 8f a0 26 00 00    	lea    ecx,[edi+0x26a0]
100e930a:	e8 31 e4 f2 ff       	call   0x10017740
100e930f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e9314:	8b 00                	mov    eax,DWORD PTR [eax]
100e9316:	89 87 ac 26 00 00    	mov    DWORD PTR [edi+0x26ac],eax
100e931c:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e931f:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x1000
100e9326:	10 00 00 
100e9329:	74 09                	je     0x100e9334
100e932b:	6a 01                	push   0x1
100e932d:	8b cf                	mov    ecx,edi
100e932f:	e8 bc 5c ff ff       	call   0x100deff0
100e9334:	53                   	push   ebx
100e9335:	56                   	push   esi
100e9336:	32 db                	xor    bl,bl
100e9338:	68 14 a4 1c 10       	push   0x101ca414
100e933d:	6a 00                	push   0x0
100e933f:	88 5d ff             	mov    BYTE PTR [ebp-0x1],bl
100e9342:	88 5d fe             	mov    BYTE PTR [ebp-0x2],bl
100e9345:	e8 16 f1 02 00       	call   0x10118460
100e934a:	83 c4 08             	add    esp,0x8
100e934d:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
100e9350:	85 c0                	test   eax,eax
100e9352:	74 21                	je     0x100e9375
100e9354:	c6 45 fe 01          	mov    BYTE PTR [ebp-0x2],0x1
100e9358:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100e935f:	00 
100e9360:	68 14 a4 1c 10       	push   0x101ca414
100e9365:	50                   	push   eax
100e9366:	e8 f5 f0 02 00       	call   0x10118460
100e936b:	83 c4 08             	add    esp,0x8
100e936e:	85 c0                	test   eax,eax
100e9370:	75 ee                	jne    0x100e9360
100e9372:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
100e9375:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100e937b:	b8 01 00 00 00       	mov    eax,0x1
100e9380:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
100e9383:	39 81 90 00 00 00    	cmp    DWORD PTR [ecx+0x90],eax
100e9389:	0f 8c a6 00 00 00    	jl     0x100e9435
100e938f:	90                   	nop
100e9390:	50                   	push   eax
100e9391:	e8 ea 02 03 00       	call   0x10119680
100e9396:	8b f0                	mov    esi,eax
100e9398:	83 c4 04             	add    esp,0x4
100e939b:	32 ff                	xor    bh,bh
100e939d:	89 75 f0             	mov    DWORD PTR [ebp-0x10],esi
100e93a0:	85 f6                	test   esi,esi
100e93a2:	74 70                	je     0x100e9414
100e93a4:	68 d8 b1 1d 10       	push   0x101db1d8
100e93a9:	8b cf                	mov    ecx,edi
100e93ab:	e8 00 56 f2 ff       	call   0x1000e9b0
100e93b0:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100e93b3:	8b f1                	mov    esi,ecx
100e93b5:	0f b6 df             	movzx  ebx,bh
100e93b8:	68 e8 b1 1d 10       	push   0x101db1e8
100e93bd:	39 81 2c 01 00 00    	cmp    DWORD PTR [ecx+0x12c],eax
100e93c3:	b8 01 00 00 00       	mov    eax,0x1
100e93c8:	8b cf                	mov    ecx,edi
100e93ca:	0f 44 d8             	cmove  ebx,eax
100e93cd:	e8 de 55 f2 ff       	call   0x1000e9b0
100e93d2:	39 86 2c 01 00 00    	cmp    DWORD PTR [esi+0x12c],eax
100e93d8:	0f 57 c9             	xorps  xmm1,xmm1
100e93db:	f3 0f 10 86 64 02 00 	movss  xmm0,DWORD PTR [esi+0x264]
100e93e2:	00 
100e93e3:	b8 01 00 00 00       	mov    eax,0x1
100e93e8:	0f b6 db             	movzx  ebx,bl
100e93eb:	0f 44 d8             	cmove  ebx,eax
100e93ee:	0f 2e c1             	ucomiss xmm0,xmm1
100e93f1:	9f                   	lahf
100e93f2:	f6 c4 44             	test   ah,0x44
100e93f5:	7a 1a                	jp     0x100e9411
100e93f7:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
100e93fa:	8b 01                	mov    eax,DWORD PTR [ecx]
100e93fc:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
100e9402:	85 c0                	test   eax,eax
100e9404:	75 04                	jne    0x100e940a
100e9406:	84 db                	test   bl,bl
100e9408:	74 07                	je     0x100e9411
100e940a:	b3 01                	mov    bl,0x1
100e940c:	88 5d ff             	mov    BYTE PTR [ebp-0x1],bl
100e940f:	eb 03                	jmp    0x100e9414
100e9411:	8a 5d ff             	mov    bl,BYTE PTR [ebp-0x1]
100e9414:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
100e9417:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100e941d:	40                   	inc    eax
100e941e:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
100e9421:	3b 81 90 00 00 00    	cmp    eax,DWORD PTR [ecx+0x90]
100e9427:	0f 8e 63 ff ff ff    	jle    0x100e9390
100e942d:	84 db                	test   bl,bl
100e942f:	0f 85 45 02 00 00    	jne    0x100e967a
100e9435:	80 7d fe 00          	cmp    BYTE PTR [ebp-0x2],0x0
100e9439:	0f 84 15 01 00 00    	je     0x100e9554
100e943f:	68 14 a4 1c 10       	push   0x101ca414
100e9444:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
100e9447:	e8 14 f0 02 00       	call   0x10118460
100e944c:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100e9452:	be 01 00 00 00       	mov    esi,0x1
100e9457:	83 c4 08             	add    esp,0x8
100e945a:	8b d8                	mov    ebx,eax
100e945c:	89 5d f0             	mov    DWORD PTR [ebp-0x10],ebx
100e945f:	39 b1 90 00 00 00    	cmp    DWORD PTR [ecx+0x90],esi
100e9465:	0f 8c 7d 00 00 00    	jl     0x100e94e8
100e946b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100e9470:	56                   	push   esi
100e9471:	e8 0a 02 03 00       	call   0x10119680
100e9476:	8b d8                	mov    ebx,eax
100e9478:	83 c4 04             	add    esp,0x4
100e947b:	85 db                	test   ebx,ebx
100e947d:	74 58                	je     0x100e94d7
100e947f:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100e9482:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100e9488:	6a 00                	push   0x0
100e948a:	ff 35 a4 66 22 10    	push   DWORD PTR ds:0x102266a4
100e9490:	6a 01                	push   0x1
100e9492:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e9498:	6a 00                	push   0x0
100e949a:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e94a0:	6a 00                	push   0x0
100e94a2:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e94a8:	6a 00                	push   0x0
100e94aa:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e94b0:	6a 00                	push   0x0
100e94b2:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e94b8:	6a 00                	push   0x0
100e94ba:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100e94c0:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e94c6:	83 c4 20             	add    esp,0x20
100e94c9:	8b cb                	mov    ecx,ebx
100e94cb:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100e94d2:	e8 29 11 00 00       	call   0x100ea600
100e94d7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e94dc:	46                   	inc    esi
100e94dd:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
100e94e3:	7e 8b                	jle    0x100e9470
100e94e5:	8b 5d f0             	mov    ebx,DWORD PTR [ebp-0x10]
100e94e8:	85 db                	test   ebx,ebx
100e94ea:	0f 84 8a 01 00 00    	je     0x100e967a
100e94f0:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100e94f3:	83 b8 50 02 00 00 00 	cmp    DWORD PTR [eax+0x250],0x0
100e94fa:	0f 85 7a 01 00 00    	jne    0x100e967a
100e9500:	83 b8 cc 01 00 00 00 	cmp    DWORD PTR [eax+0x1cc],0x0
100e9507:	0f 84 6d 01 00 00    	je     0x100e967a
100e950d:	50                   	push   eax
100e950e:	e8 ed 6e fa ff       	call   0x10090400
100e9513:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100e951a:	6a 03                	push   0x3
100e951c:	53                   	push   ebx
100e951d:	c6 80 dd 00 00 00 00 	mov    BYTE PTR [eax+0xdd],0x0
100e9524:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100e9527:	53                   	push   ebx
100e9528:	c7 80 50 02 00 00 01 	mov    DWORD PTR [eax+0x250],0x1
100e952f:	00 00 00 
100e9532:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e9537:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100e953a:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100e9540:	03 81 cc 01 00 00    	add    eax,DWORD PTR [ecx+0x1cc]
100e9546:	50                   	push   eax
100e9547:	e8 a4 8a 01 00       	call   0x10101ff0
100e954c:	83 c4 14             	add    esp,0x14
100e954f:	e9 26 01 00 00       	jmp    0x100e967a
100e9554:	bb 01 00 00 00       	mov    ebx,0x1
100e9559:	39 99 90 00 00 00    	cmp    DWORD PTR [ecx+0x90],ebx
100e955f:	0f 8c 15 01 00 00    	jl     0x100e967a
100e9565:	53                   	push   ebx
100e9566:	e8 15 01 03 00       	call   0x10119680
100e956b:	8b f0                	mov    esi,eax
100e956d:	83 c4 04             	add    esp,0x4
100e9570:	85 f6                	test   esi,esi
100e9572:	0f 84 f0 00 00 00    	je     0x100e9668
100e9578:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100e957e:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
100e9582:	f3 0f 58 05 e0 1e 1a 	addss  xmm0,DWORD PTR ds:0x101a1ee0
100e9589:	10 
100e958a:	c6 86 28 1f 00 00 00 	mov    BYTE PTR [esi+0x1f28],0x0
100e9591:	c6 86 e8 04 00 00 01 	mov    BYTE PTR [esi+0x4e8],0x1
100e9598:	f3 0f 11 86 24 1f 00 	movss  DWORD PTR [esi+0x1f24],xmm0
100e959f:	00 
100e95a0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e95a5:	8b 00                	mov    eax,DWORD PTR [eax]
100e95a7:	89 86 ec 04 00 00    	mov    DWORD PTR [esi+0x4ec],eax
100e95ad:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e95b0:	c7 86 f0 04 00 00 0a 	mov    DWORD PTR [esi+0x4f0],0xa
100e95b7:	00 00 00 
100e95ba:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e95c0:	6a 00                	push   0x0
100e95c2:	ff 35 7c 66 22 10    	push   DWORD PTR ds:0x1022667c
100e95c8:	6a 01                	push   0x1
100e95ca:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e95d0:	6a 00                	push   0x0
100e95d2:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e95d8:	6a 02                	push   0x2
100e95da:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e95e0:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e95e6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e95e9:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e95ef:	6a 00                	push   0x0
100e95f1:	ff 35 58 66 22 10    	push   DWORD PTR ds:0x10226658
100e95f7:	6a 01                	push   0x1
100e95f9:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e95ff:	68 28 a4 1c 10       	push   0x101ca428
100e9604:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100e960a:	6a 00                	push   0x0
100e960c:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100e9612:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e9618:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100e961b:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e9621:	6a 00                	push   0x0
100e9623:	ff 35 44 65 22 10    	push   DWORD PTR ds:0x10226544
100e9629:	6a 01                	push   0x1
100e962b:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e9631:	83 c4 40             	add    esp,0x40
100e9634:	6a 01                	push   0x1
100e9636:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e963c:	6a 01                	push   0x1
100e963e:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e9644:	83 c4 04             	add    esp,0x4
100e9647:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100e964e:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100e9654:	68 34 a4 1c 10       	push   0x101ca434
100e9659:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100e965f:	83 c4 08             	add    esp,0x8
100e9662:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e9668:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e966d:	43                   	inc    ebx
100e966e:	3b 98 90 00 00 00    	cmp    ebx,DWORD PTR [eax+0x90]
100e9674:	0f 8e eb fe ff ff    	jle    0x100e9565
100e967a:	8b cf                	mov    ecx,edi
100e967c:	e8 1f d2 00 00       	call   0x100f68a0
100e9681:	8b 8f 2c 25 00 00    	mov    ecx,DWORD PTR [edi+0x252c]
100e9687:	85 c9                	test   ecx,ecx
100e9689:	74 12                	je     0x100e969d
100e968b:	e8 40 e4 f2 ff       	call   0x10017ad0
100e9690:	8b 87 2c 25 00 00    	mov    eax,DWORD PTR [edi+0x252c]
100e9696:	c7 40 78 00 00 00 00 	mov    DWORD PTR [eax+0x78],0x0
100e969d:	83 ec 0c             	sub    esp,0xc
100e96a0:	8b cf                	mov    ecx,edi
100e96a2:	c7 44 24 08 00 00 a0 	mov    DWORD PTR [esp+0x8],0x42a00000
100e96a9:	42 
100e96aa:	c7 44 24 04 00 00 20 	mov    DWORD PTR [esp+0x4],0x41200000
100e96b1:	41 
100e96b2:	c7 04 24 00 00 a0 40 	mov    DWORD PTR [esp],0x40a00000
100e96b9:	e8 f2 fa 00 00       	call   0x100f91b0
100e96be:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e96c1:	83 b8 c4 01 00 00 03 	cmp    DWORD PTR [eax+0x1c4],0x3
100e96c8:	7c 07                	jl     0x100e96d1
100e96ca:	83 8f b4 05 00 00 27 	or     DWORD PTR [edi+0x5b4],0x27
100e96d1:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100e96d7:	85 c9                	test   ecx,ecx
100e96d9:	74 10                	je     0x100e96eb
100e96db:	8b 01                	mov    eax,DWORD PTR [ecx]
100e96dd:	ff 50 20             	call   DWORD PTR [eax+0x20]
100e96e0:	85 c0                	test   eax,eax
100e96e2:	74 07                	je     0x100e96eb
100e96e4:	83 8f b4 05 00 00 06 	or     DWORD PTR [edi+0x5b4],0x6
100e96eb:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100e96ee:	c6 87 a4 1e 00 00 00 	mov    BYTE PTR [edi+0x1ea4],0x0
100e96f5:	c7 87 d0 05 00 00 00 	mov    DWORD PTR [edi+0x5d0],0x0
100e96fc:	00 00 00 
100e96ff:	f3 0f 10 81 74 02 00 	movss  xmm0,DWORD PTR [ecx+0x274]
100e9706:	00 
100e9707:	0f 2e 05 c0 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a13c0
100e970e:	9f                   	lahf
100e970f:	f6 c4 44             	test   ah,0x44
100e9712:	7b 4c                	jnp    0x100e9760
100e9714:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100e971a:	6a 00                	push   0x0
100e971c:	ff 35 cc 65 22 10    	push   DWORD PTR ds:0x102265cc
100e9722:	6a 01                	push   0x1
100e9724:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e972a:	83 c4 0c             	add    esp,0xc
100e972d:	c7 04 24 00 00 16 43 	mov    DWORD PTR [esp],0x43160000
100e9734:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100e973a:	6a 00                	push   0x0
100e973c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e9742:	6a 01                	push   0x1
100e9744:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e974a:	83 c4 0c             	add    esp,0xc
100e974d:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e9753:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e9756:	c7 80 74 02 00 00 00 	mov    DWORD PTR [eax+0x274],0x42b40000
100e975d:	00 b4 42 
100e9760:	8b 8f 2c 25 00 00    	mov    ecx,DWORD PTR [edi+0x252c]
100e9766:	85 c9                	test   ecx,ecx
100e9768:	74 08                	je     0x100e9772
100e976a:	8b 01                	mov    eax,DWORD PTR [ecx]
100e976c:	ff 90 4c 01 00 00    	call   DWORD PTR [eax+0x14c]
100e9772:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100e9778:	ff 35 fc 66 22 10    	push   DWORD PTR ds:0x102266fc
100e977e:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100e9781:	8b 01                	mov    eax,DWORD PTR [ecx]
100e9783:	57                   	push   edi
100e9784:	ff 50 74             	call   DWORD PTR [eax+0x74]
100e9787:	8d 8f dc 24 00 00    	lea    ecx,[edi+0x24dc]
100e978d:	e8 ee df f2 ff       	call   0x10017780
100e9792:	85 c0                	test   eax,eax
100e9794:	74 2e                	je     0x100e97c4
100e9796:	8d 8f dc 24 00 00    	lea    ecx,[edi+0x24dc]
100e979c:	e8 ff df f2 ff       	call   0x100177a0
100e97a1:	51                   	push   ecx
100e97a2:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100e97a9:	8b c8                	mov    ecx,eax
100e97ab:	6a 00                	push   0x0
100e97ad:	8b 10                	mov    edx,DWORD PTR [eax]
100e97af:	57                   	push   edi
100e97b0:	57                   	push   edi
100e97b1:	ff 92 e8 00 00 00    	call   DWORD PTR [edx+0xe8]
100e97b7:	6a 00                	push   0x0
100e97b9:	8d 8f dc 24 00 00    	lea    ecx,[edi+0x24dc]
100e97bf:	e8 7c df f2 ff       	call   0x10017740
100e97c4:	8b 8f 0c 23 00 00    	mov    ecx,DWORD PTR [edi+0x230c]
100e97ca:	85 c9                	test   ecx,ecx
100e97cc:	74 1e                	je     0x100e97ec
100e97ce:	8b 01                	mov    eax,DWORD PTR [ecx]
100e97d0:	51                   	push   ecx
100e97d1:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100e97d8:	6a 00                	push   0x0
100e97da:	57                   	push   edi
100e97db:	57                   	push   edi
100e97dc:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
100e97e2:	c7 87 0c 23 00 00 00 	mov    DWORD PTR [edi+0x230c],0x0
100e97e9:	00 00 00 
100e97ec:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e97ef:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e97f5:	e8 c6 6d 01 00       	call   0x101005c0
100e97fa:	50                   	push   eax
100e97fb:	e8 10 71 01 00       	call   0x10100910
100e9800:	83 c4 08             	add    esp,0x8
100e9803:	85 c0                	test   eax,eax
100e9805:	74 07                	je     0x100e980e
100e9807:	8b c8                	mov    ecx,eax
100e9809:	e8 d2 70 01 00       	call   0x101008e0
100e980e:	80 bf a8 03 00 00 00 	cmp    BYTE PTR [edi+0x3a8],0x0
100e9815:	74 07                	je     0x100e981e
100e9817:	b8 f0 b1 1d 10       	mov    eax,0x101db1f0
100e981c:	eb 1a                	jmp    0x100e9838
100e981e:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e9821:	b9 0c b2 1d 10       	mov    ecx,0x101db20c
100e9826:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x4000
100e982d:	40 00 00 
100e9830:	b8 fc b1 1d 10       	mov    eax,0x101db1fc
100e9835:	0f 44 c1             	cmove  eax,ecx
100e9838:	50                   	push   eax
100e9839:	8b cf                	mov    ecx,edi
100e983b:	e8 70 51 f2 ff       	call   0x1000e9b0
100e9840:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100e9843:	8b f0                	mov    esi,eax
100e9845:	33 c0                	xor    eax,eax
100e9847:	83 fe ff             	cmp    esi,0xffffffff
100e984a:	0f 44 f0             	cmove  esi,eax
100e984d:	89 81 34 01 00 00    	mov    DWORD PTR [ecx+0x134],eax
100e9853:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100e9856:	56                   	push   esi
100e9857:	89 81 30 01 00 00    	mov    DWORD PTR [ecx+0x130],eax
100e985d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e9860:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e9866:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
100e986c:	83 c4 04             	add    esp,0x4
100e986f:	50                   	push   eax
100e9870:	e8 1b 5b f2 ff       	call   0x1000f390
100e9875:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e987a:	83 c4 08             	add    esp,0x8
100e987d:	8b cf                	mov    ecx,edi
100e987f:	d8 00                	fadd   DWORD PTR [eax]
100e9881:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e9884:	d9 9f f4 04 00 00    	fstp   DWORD PTR [edi+0x4f4]
100e988a:	89 b0 2c 01 00 00    	mov    DWORD PTR [eax+0x12c],esi
100e9890:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e9893:	c7 80 34 01 00 00 00 	mov    DWORD PTR [eax+0x134],0x0
100e989a:	00 00 00 
100e989d:	e8 3e 51 f2 ff       	call   0x1000e9e0
100e98a2:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100e98a5:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
100e98ac:	10 
100e98ad:	6a 00                	push   0x0
100e98af:	6a 00                	push   0x0
100e98b1:	66 0f d6 41 20       	movq   QWORD PTR [ecx+0x20],xmm0
100e98b6:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
100e98bb:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
100e98be:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100e98c1:	a1 f8 2e 22 10       	mov    eax,ds:0x10222ef8
100e98c6:	6a 00                	push   0x0
100e98c8:	89 81 b4 00 00 00    	mov    DWORD PTR [ecx+0xb4],eax
100e98ce:	8b cf                	mov    ecx,edi
100e98d0:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e98d3:	c7 80 74 01 00 00 01 	mov    DWORD PTR [eax+0x174],0x1
100e98da:	00 00 00 
100e98dd:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e98e0:	f3 0f 10 05 34 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f34
100e98e7:	10 
100e98e8:	f3 0f 11 40 20       	movss  DWORD PTR [eax+0x20],xmm0
100e98ed:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e98f0:	f3 0f 10 05 38 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f38
100e98f7:	10 
100e98f8:	f3 0f 11 40 24       	movss  DWORD PTR [eax+0x24],xmm0
100e98fd:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e9900:	c7 80 08 01 00 00 06 	mov    DWORD PTR [eax+0x108],0x6
100e9907:	00 00 00 
100e990a:	e8 31 a1 00 00       	call   0x100f3a40
100e990f:	6a 00                	push   0x0
100e9911:	8b cf                	mov    ecx,edi
100e9913:	e8 f8 94 00 00       	call   0x100f2e10
100e9918:	c7 87 dc 05 00 00 fe 	mov    DWORD PTR [edi+0x5dc],0xfffffffe
100e991f:	ff ff ff 
100e9922:	be 01 00 00 00       	mov    esi,0x1
100e9927:	c7 87 e0 05 00 00 fe 	mov    DWORD PTR [edi+0x5e0],0xfffffffe
100e992e:	ff ff ff 
100e9931:	c7 87 f8 24 00 00 00 	mov    DWORD PTR [edi+0x24f8],0x0
100e9938:	00 00 00 
100e993b:	c7 87 28 04 00 00 00 	mov    DWORD PTR [edi+0x428],0x0
100e9942:	00 00 00 
100e9945:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e994a:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
100e9950:	0f 8c 7d 00 00 00    	jl     0x100e99d3
100e9956:	56                   	push   esi
100e9957:	e8 24 fd 02 00       	call   0x10119680
100e995c:	83 c4 04             	add    esp,0x4
100e995f:	85 c0                	test   eax,eax
100e9961:	74 62                	je     0x100e99c5
100e9963:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100e9966:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e996c:	6a 00                	push   0x0
100e996e:	ff 35 d0 64 22 10    	push   DWORD PTR ds:0x102264d0
100e9974:	6a 01                	push   0x1
100e9976:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e997c:	ff b7 f8 24 00 00    	push   DWORD PTR [edi+0x24f8]
100e9982:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e9988:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e998b:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e9991:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100e9997:	50                   	push   eax
100e9998:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e999e:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100e99a4:	83 c4 1c             	add    esp,0x1c
100e99a7:	8b 01                	mov    eax,DWORD PTR [ecx]
100e99a9:	ff 50 20             	call   DWORD PTR [eax+0x20]
100e99ac:	85 c0                	test   eax,eax
100e99ae:	74 04                	je     0x100e99b4
100e99b0:	6a 01                	push   0x1
100e99b2:	eb 02                	jmp    0x100e99b6
100e99b4:	6a 00                	push   0x0
100e99b6:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e99bc:	83 c4 04             	add    esp,0x4
100e99bf:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e99c5:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e99ca:	46                   	inc    esi
100e99cb:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
100e99d1:	7e 83                	jle    0x100e9956
100e99d3:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e99d6:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e99dc:	6a 00                	push   0x0
100e99de:	ff 35 cc 64 22 10    	push   DWORD PTR ds:0x102264cc
100e99e4:	6a 01                	push   0x1
100e99e6:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e99ec:	6a 00                	push   0x0
100e99ee:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e99f4:	68 ff 00 00 00       	push   0xff
100e99f9:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e99ff:	68 ff 00 00 00       	push   0xff
100e9a04:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e9a0a:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e9a10:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e9a13:	c7 87 0c 25 00 00 00 	mov    DWORD PTR [edi+0x250c],0x0
100e9a1a:	00 00 00 
100e9a1d:	c7 87 08 25 00 00 00 	mov    DWORD PTR [edi+0x2508],0x0
100e9a24:	00 00 00 
100e9a27:	c7 80 18 02 00 00 00 	mov    DWORD PTR [eax+0x218],0x0
100e9a2e:	00 00 00 
100e9a31:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e9a34:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e9a3a:	6a 00                	push   0x0
100e9a3c:	ff 35 20 65 22 10    	push   DWORD PTR ds:0x10226520
100e9a42:	6a 01                	push   0x1
100e9a44:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100e9a4a:	6a 00                	push   0x0
100e9a4c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100e9a52:	83 c4 30             	add    esp,0x30
100e9a55:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100e9a5b:	80 bf 29 1f 00 00 00 	cmp    BYTE PTR [edi+0x1f29],0x0
100e9a62:	5e                   	pop    esi
100e9a63:	5b                   	pop    ebx
100e9a64:	75 13                	jne    0x100e9a79
100e9a66:	f6 87 b4 05 00 00 01 	test   BYTE PTR [edi+0x5b4],0x1
100e9a6d:	75 0a                	jne    0x100e9a79
100e9a6f:	8b 07                	mov    eax,DWORD PTR [edi]
100e9a71:	8b cf                	mov    ecx,edi
100e9a73:	ff 90 2c 02 00 00    	call   DWORD PTR [eax+0x22c]
100e9a79:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e9a7c:	c7 40 50 00 00 00 00 	mov    DWORD PTR [eax+0x50],0x0
100e9a83:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e9a86:	c7 40 58 00 00 00 00 	mov    DWORD PTR [eax+0x58],0x0
100e9a8d:	c6 87 0c 05 00 00 00 	mov    BYTE PTR [edi+0x50c],0x0
100e9a94:	c6 87 00 05 00 00 00 	mov    BYTE PTR [edi+0x500],0x0
100e9a9b:	5f                   	pop    edi
100e9a9c:	8b e5                	mov    esp,ebp
100e9a9e:	5d                   	pop    ebp
100e9a9f:	c2 08 00             	ret    0x8
