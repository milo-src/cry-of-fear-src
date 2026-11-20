
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c9210 <.text+0xc8210>:
100c9210:	55                   	push   ebp
100c9211:	8b ec                	mov    ebp,esp
100c9213:	83 ec 0c             	sub    esp,0xc
100c9216:	53                   	push   ebx
100c9217:	56                   	push   esi
100c9218:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100c921b:	57                   	push   edi
100c921c:	68 78 63 1d 10       	push   0x101d6378
100c9221:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c9224:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c922a:	ff 15 ec 2f 22 10    	call   DWORD PTR ds:0x10222fec
100c9230:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c9233:	32 db                	xor    bl,bl
100c9235:	68 14 a4 1c 10       	push   0x101ca414
100c923a:	6a 00                	push   0x0
100c923c:	81 88 6c 01 00 00 00 00 00 80 	or     DWORD PTR [eax+0x16c],0x80000000
100c9246:	e8 15 f2 04 00       	call   0x10118460
100c924b:	83 c4 10             	add    esp,0x10
100c924e:	85 c0                	test   eax,eax
100c9250:	74 14                	je     0x100c9266
100c9252:	b3 01                	mov    bl,0x1
100c9254:	68 14 a4 1c 10       	push   0x101ca414
100c9259:	50                   	push   eax
100c925a:	e8 01 f2 04 00       	call   0x10118460
100c925f:	83 c4 08             	add    esp,0x8
100c9262:	85 c0                	test   eax,eax
100c9264:	75 ee                	jne    0x100c9254
100c9266:	80 3d a1 31 22 10 00 	cmp    BYTE PTR ds:0x102231a1,0x0
100c926d:	75 5e                	jne    0x100c92cd
100c926f:	80 3d 24 2f 22 10 00 	cmp    BYTE PTR ds:0x10222f24,0x0
100c9276:	75 55                	jne    0x100c92cd
100c9278:	c6 05 a1 31 22 10 01 	mov    BYTE PTR ds:0x102231a1,0x1
100c927f:	84 db                	test   bl,bl
100c9281:	74 09                	je     0x100c928c
100c9283:	68 b4 00 00 00       	push   0xb4
100c9288:	6a 3c                	push   0x3c
100c928a:	eb 19                	jmp    0x100c92a5
100c928c:	6a 05                	push   0x5
100c928e:	6a 01                	push   0x1
100c9290:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100c9296:	83 c4 08             	add    esp,0x8
100c9299:	83 f8 01             	cmp    eax,0x1
100c929c:	75 2f                	jne    0x100c92cd
100c929e:	68 f0 00 00 00       	push   0xf0
100c92a3:	6a 14                	push   0x14
100c92a5:	c6 05 a2 31 22 10 01 	mov    BYTE PTR ds:0x102231a2,0x1
100c92ac:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100c92b2:	83 c4 08             	add    esp,0x8
100c92b5:	66 0f 6e c0          	movd   xmm0,eax
100c92b9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c92be:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100c92c1:	f3 0f 58 00          	addss  xmm0,DWORD PTR [eax]
100c92c5:	f3 0f 11 05 a4 31 22 10 	movss  DWORD PTR ds:0x102231a4,xmm0
100c92cd:	83 3d 14 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f14,0x0
100c92d4:	74 4c                	je     0x100c9322
100c92d6:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100c92dc:	8b 01                	mov    eax,DWORD PTR [ecx]
100c92de:	ff 50 20             	call   DWORD PTR [eax+0x20]
100c92e1:	85 c0                	test   eax,eax
100c92e3:	74 3d                	je     0x100c9322
100c92e5:	83 3d 20 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f20,0x0
100c92ec:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c92ef:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c92f5:	6a 00                	push   0x0
100c92f7:	ff 35 d8 66 22 10    	push   DWORD PTR ds:0x102266d8
100c92fd:	6a 01                	push   0x1
100c92ff:	74 0a                	je     0x100c930b
100c9301:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100c9307:	6a 01                	push   0x1
100c9309:	eb 08                	jmp    0x100c9313
100c930b:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100c9311:	6a 00                	push   0x0
100c9313:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100c9319:	83 c4 14             	add    esp,0x14
100c931c:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100c9322:	83 3d 20 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f20,0x0
100c9329:	74 56                	je     0x100c9381
100c932b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c9330:	51                   	push   ecx
100c9331:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100c9338:	b9 d0 96 1b 10       	mov    ecx,0x101b96d0
100c933d:	6a 01                	push   0x1
100c933f:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
100c9345:	51                   	push   ecx
100c9346:	8b ce                	mov    ecx,esi
100c9348:	e8 73 12 02 00       	call   0x100ea5c0
100c934d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c9350:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c9356:	6a 00                	push   0x0
100c9358:	ff 35 7c 66 22 10    	push   DWORD PTR ds:0x1022667c
100c935e:	6a 01                	push   0x1
100c9360:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100c9366:	6a 00                	push   0x0
100c9368:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100c936e:	6a 00                	push   0x0
100c9370:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100c9376:	83 c4 18             	add    esp,0x18
100c9379:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100c937f:	eb 54                	jmp    0x100c93d5
100c9381:	68 80 15 1b 10       	push   0x101b1580
100c9386:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
100c938c:	8b d0                	mov    edx,eax
100c938e:	83 c4 04             	add    esp,0x4
100c9391:	85 d2                	test   edx,edx
100c9393:	74 40                	je     0x100c93d5
100c9395:	8b ca                	mov    ecx,edx
100c9397:	8d 79 01             	lea    edi,[ecx+0x1]
100c939a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100c93a0:	8a 01                	mov    al,BYTE PTR [ecx]
100c93a2:	41                   	inc    ecx
100c93a3:	84 c0                	test   al,al
100c93a5:	75 f9                	jne    0x100c93a0
100c93a7:	2b cf                	sub    ecx,edi
100c93a9:	83 f9 01             	cmp    ecx,0x1
100c93ac:	76 27                	jbe    0x100c93d5
100c93ae:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c93b3:	f3 0f 10 05 1c 2f 22 10 	movss  xmm0,DWORD PTR ds:0x10222f1c
100c93bb:	51                   	push   ecx
100c93bc:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100c93c1:	8b ce                	mov    ecx,esi
100c93c3:	ff 35 18 2f 22 10    	push   DWORD PTR ds:0x10222f18
100c93c9:	2b 90 98 00 00 00    	sub    edx,DWORD PTR [eax+0x98]
100c93cf:	52                   	push   edx
100c93d0:	e8 eb 11 02 00       	call   0x100ea5c0
100c93d5:	8b 0d 10 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222e10
100c93db:	85 c9                	test   ecx,ecx
100c93dd:	74 0a                	je     0x100c93e9
100c93df:	56                   	push   esi
100c93e0:	e8 ab fc f5 ff       	call   0x10029090
100c93e5:	84 c0                	test   al,al
100c93e7:	75 36                	jne    0x100c941f
100c93e9:	68 88 63 1d 10       	push   0x101d6388
100c93ee:	6a 00                	push   0x0
100c93f0:	e8 6b f0 04 00       	call   0x10118460
100c93f5:	8b f8                	mov    edi,eax
100c93f7:	83 c4 08             	add    esp,0x8
100c93fa:	85 ff                	test   edi,edi
100c93fc:	74 21                	je     0x100c941f
100c93fe:	66 90                	xchg   ax,ax
100c9400:	8b 17                	mov    edx,DWORD PTR [edi]
100c9402:	8b cf                	mov    ecx,edi
100c9404:	56                   	push   esi
100c9405:	ff 92 e4 00 00 00    	call   DWORD PTR [edx+0xe4]
100c940b:	68 88 63 1d 10       	push   0x101d6388
100c9410:	57                   	push   edi
100c9411:	e8 4a f0 04 00       	call   0x10118460
100c9416:	8b f8                	mov    edi,eax
100c9418:	83 c4 08             	add    esp,0x8
100c941b:	85 ff                	test   edi,edi
100c941d:	75 e1                	jne    0x100c9400
100c941f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c9424:	bf 01 00 00 00       	mov    edi,0x1
100c9429:	32 db                	xor    bl,bl
100c942b:	39 b8 90 00 00 00    	cmp    DWORD PTR [eax+0x90],edi
100c9431:	0f 8c a1 01 00 00    	jl     0x100c95d8
100c9437:	57                   	push   edi
100c9438:	e8 43 02 05 00       	call   0x10119680
100c943d:	8b d0                	mov    edx,eax
100c943f:	83 c4 04             	add    esp,0x4
100c9442:	85 d2                	test   edx,edx
100c9444:	74 7d                	je     0x100c94c3
100c9446:	80 ba e8 04 00 00 00 	cmp    BYTE PTR [edx+0x4e8],0x0
100c944d:	74 3e                	je     0x100c948d
100c944f:	8b 8a 24 1f 00 00    	mov    ecx,DWORD PTR [edx+0x1f24]
100c9455:	b3 01                	mov    bl,0x1
100c9457:	89 8e 24 1f 00 00    	mov    DWORD PTR [esi+0x1f24],ecx
100c945d:	8a 82 28 1f 00 00    	mov    al,BYTE PTR [edx+0x1f28]
100c9463:	88 86 28 1f 00 00    	mov    BYTE PTR [esi+0x1f28],al
100c9469:	8a 82 e8 04 00 00    	mov    al,BYTE PTR [edx+0x4e8]
100c946f:	88 86 e8 04 00 00    	mov    BYTE PTR [esi+0x4e8],al
100c9475:	8b 82 ec 04 00 00    	mov    eax,DWORD PTR [edx+0x4ec]
100c947b:	89 86 ec 04 00 00    	mov    DWORD PTR [esi+0x4ec],eax
100c9481:	8b 82 f0 04 00 00    	mov    eax,DWORD PTR [edx+0x4f0]
100c9487:	89 86 f0 04 00 00    	mov    DWORD PTR [esi+0x4f0],eax
100c948d:	8b 82 ac 05 00 00    	mov    eax,DWORD PTR [edx+0x5ac]
100c9493:	85 c0                	test   eax,eax
100c9495:	74 2c                	je     0x100c94c3
100c9497:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100c949a:	83 b8 54 02 00 00 01 	cmp    DWORD PTR [eax+0x254],0x1
100c94a1:	74 20                	je     0x100c94c3
100c94a3:	c6 86 c8 03 00 00 01 	mov    BYTE PTR [esi+0x3c8],0x1
100c94aa:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c94af:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100c94b3:	f3 0f 58 05 90 13 1a 10 	addss  xmm0,DWORD PTR ds:0x101a1390
100c94bb:	f3 0f 11 86 cc 03 00 00 	movss  DWORD PTR [esi+0x3cc],xmm0
100c94c3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c94c8:	47                   	inc    edi
100c94c9:	3b b8 90 00 00 00    	cmp    edi,DWORD PTR [eax+0x90]
100c94cf:	0f 8e 62 ff ff ff    	jle    0x100c9437
100c94d5:	84 db                	test   bl,bl
100c94d7:	0f 84 fb 00 00 00    	je     0x100c95d8
100c94dd:	8b 86 00 25 00 00    	mov    eax,DWORD PTR [esi+0x2500]
100c94e3:	a8 08                	test   al,0x8
100c94e5:	75 09                	jne    0x100c94f0
100c94e7:	83 c8 08             	or     eax,0x8
100c94ea:	89 86 00 25 00 00    	mov    DWORD PTR [esi+0x2500],eax
100c94f0:	a8 01                	test   al,0x1
100c94f2:	75 09                	jne    0x100c94fd
100c94f4:	83 c8 01             	or     eax,0x1
100c94f7:	89 86 00 25 00 00    	mov    DWORD PTR [esi+0x2500],eax
100c94fd:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c9500:	8b 81 a8 01 00 00    	mov    eax,DWORD PTR [ecx+0x1a8]
100c9506:	84 c0                	test   al,al
100c9508:	78 0b                	js     0x100c9515
100c950a:	0d 80 00 00 00       	or     eax,0x80
100c950f:	89 81 a8 01 00 00    	mov    DWORD PTR [ecx+0x1a8],eax
100c9515:	6a 00                	push   0x0
100c9517:	8b ce                	mov    ecx,esi
100c9519:	e8 d2 5a 01 00       	call   0x100deff0
100c951e:	6a 05                	push   0x5
100c9520:	68 ff 00 00 00       	push   0xff
100c9525:	83 ec 08             	sub    esp,0x8
100c9528:	c7 45 f4 00 00 00 00 	mov    DWORD PTR [ebp-0xc],0x0
100c952f:	8d 45 f4             	lea    eax,[ebp-0xc]
100c9532:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [ebp-0x8],0x0
100c9539:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100c9540:	c7 44 24 04 00 00 80 3f 	mov    DWORD PTR [esp+0x4],0x3f800000
100c9548:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100c954f:	50                   	push   eax
100c9550:	56                   	push   esi
100c9551:	e8 aa 06 05 00       	call   0x10119c00
100c9556:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c9559:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c955f:	6a 00                	push   0x0
100c9561:	ff 35 58 66 22 10    	push   DWORD PTR ds:0x10226658
100c9567:	6a 01                	push   0x1
100c9569:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100c956f:	68 28 a4 1c 10       	push   0x101ca428
100c9574:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100c957a:	6a 00                	push   0x0
100c957c:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100c9582:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100c9588:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c958b:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c9591:	6a 00                	push   0x0
100c9593:	ff 35 44 65 22 10    	push   DWORD PTR ds:0x10226544
100c9599:	6a 01                	push   0x1
100c959b:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100c95a1:	83 c4 40             	add    esp,0x40
100c95a4:	6a 01                	push   0x1
100c95a6:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100c95ac:	6a 01                	push   0x1
100c95ae:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100c95b4:	83 c4 04             	add    esp,0x4
100c95b7:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100c95be:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100c95c4:	68 34 a4 1c 10       	push   0x101ca434
100c95c9:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100c95cf:	83 c4 08             	add    esp,0x8
100c95d2:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100c95d8:	5f                   	pop    edi
100c95d9:	5e                   	pop    esi
100c95da:	5b                   	pop    ebx
100c95db:	8b e5                	mov    esp,ebp
100c95dd:	5d                   	pop    ebp
100c95de:	c2 04 00             	ret    0x4
