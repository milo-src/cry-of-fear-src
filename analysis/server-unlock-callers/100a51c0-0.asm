
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100a51c0 <.text+0xa41c0>:
100a51c0:	55                   	push   ebp
100a51c1:	8b ec                	mov    ebp,esp
100a51c3:	83 ec 0c             	sub    esp,0xc
100a51c6:	68 30 21 1a 10       	push   0x101a2130
100a51cb:	6a 00                	push   0x0
100a51cd:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
100a51d0:	e8 8b 32 07 00       	call   0x10118460
100a51d5:	83 c4 08             	add    esp,0x8
100a51d8:	85 c0                	test   eax,eax
100a51da:	0f 84 d9 06 00 00    	je     0x100a58b9
100a51e0:	57                   	push   edi
100a51e1:	ff 70 04             	push   DWORD PTR [eax+0x4]
100a51e4:	e8 f7 d3 f6 ff       	call   0x100125e0
100a51e9:	8b f8                	mov    edi,eax
100a51eb:	83 c4 04             	add    esp,0x4
100a51ee:	85 ff                	test   edi,edi
100a51f0:	0f 84 c2 06 00 00    	je     0x100a58b8
100a51f6:	53                   	push   ebx
100a51f7:	33 db                	xor    ebx,ebx
100a51f9:	56                   	push   esi
100a51fa:	57                   	push   edi
100a51fb:	38 9f 80 06 00 00    	cmp    BYTE PTR [edi+0x680],bl
100a5201:	74 07                	je     0x100a520a
100a5203:	e8 58 dd fe ff       	call   0x10092f60
100a5208:	eb 05                	jmp    0x100a520f
100a520a:	e8 d1 da fe ff       	call   0x10092ce0
100a520f:	83 c4 04             	add    esp,0x4
100a5212:	8b c8                	mov    ecx,eax
100a5214:	38 9f 80 06 00 00    	cmp    BYTE PTR [edi+0x680],bl
100a521a:	0f 84 16 04 00 00    	je     0x100a5636
100a5220:	57                   	push   edi
100a5221:	e8 3a dd fe ff       	call   0x10092f60
100a5226:	8b d0                	mov    edx,eax
100a5228:	83 c4 04             	add    esp,0x4
100a522b:	83 fa 02             	cmp    edx,0x2
100a522e:	b8 07 00 00 00       	mov    eax,0x7
100a5233:	0f 4e d8             	cmovle ebx,eax
100a5236:	b8 06 00 00 00       	mov    eax,0x6
100a523b:	8d 4a fd             	lea    ecx,[edx-0x3]
100a523e:	83 f9 01             	cmp    ecx,0x1
100a5241:	b9 05 00 00 00       	mov    ecx,0x5
100a5246:	0f 46 d8             	cmovbe ebx,eax
100a5249:	8d 42 fb             	lea    eax,[edx-0x5]
100a524c:	3b c1                	cmp    eax,ecx
100a524e:	8d 42 f5             	lea    eax,[edx-0xb]
100a5251:	0f 46 d9             	cmovbe ebx,ecx
100a5254:	83 f8 03             	cmp    eax,0x3
100a5257:	b9 04 00 00 00       	mov    ecx,0x4
100a525c:	8d 42 f1             	lea    eax,[edx-0xf]
100a525f:	0f 46 d9             	cmovbe ebx,ecx
100a5262:	83 f8 01             	cmp    eax,0x1
100a5265:	b9 03 00 00 00       	mov    ecx,0x3
100a526a:	0f 46 d9             	cmovbe ebx,ecx
100a526d:	83 fa 11             	cmp    edx,0x11
100a5270:	75 05                	jne    0x100a5277
100a5272:	8d 59 ff             	lea    ebx,[ecx-0x1]
100a5275:	eb 0a                	jmp    0x100a5281
100a5277:	83 fa 12             	cmp    edx,0x12
100a527a:	7c 05                	jl     0x100a5281
100a527c:	bb 01 00 00 00       	mov    ebx,0x1
100a5281:	33 c0                	xor    eax,eax
100a5283:	33 f6                	xor    esi,esi
100a5285:	38 87 80 06 00 00    	cmp    BYTE PTR [edi+0x680],al
100a528b:	8b cf                	mov    ecx,edi
100a528d:	6a 01                	push   0x1
100a528f:	56                   	push   esi
100a5290:	0f 95 c0             	setne  al
100a5293:	56                   	push   esi
100a5294:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
100a5297:	e8 64 7d 03 00       	call   0x100dd000
100a529c:	b9 01 00 00 00       	mov    ecx,0x1
100a52a1:	84 c0                	test   al,al
100a52a3:	0f 45 f1             	cmovne esi,ecx
100a52a6:	89 75 f4             	mov    DWORD PTR [ebp-0xc],esi
100a52a9:	33 f6                	xor    esi,esi
100a52ab:	56                   	push   esi
100a52ac:	56                   	push   esi
100a52ad:	51                   	push   ecx
100a52ae:	8b cf                	mov    ecx,edi
100a52b0:	e8 4b 7d 03 00       	call   0x100dd000
100a52b5:	6a 00                	push   0x0
100a52b7:	84 c0                	test   al,al
100a52b9:	8b cf                	mov    ecx,edi
100a52bb:	6a 00                	push   0x0
100a52bd:	b8 01 00 00 00       	mov    eax,0x1
100a52c2:	6a 02                	push   0x2
100a52c4:	0f 45 f0             	cmovne esi,eax
100a52c7:	e8 34 7d 03 00       	call   0x100dd000
100a52cc:	84 c0                	test   al,al
100a52ce:	74 03                	je     0x100a52d3
100a52d0:	83 ce 02             	or     esi,0x2
100a52d3:	6a 00                	push   0x0
100a52d5:	6a 00                	push   0x0
100a52d7:	6a 04                	push   0x4
100a52d9:	8b cf                	mov    ecx,edi
100a52db:	e8 20 7d 03 00       	call   0x100dd000
100a52e0:	84 c0                	test   al,al
100a52e2:	74 03                	je     0x100a52e7
100a52e4:	83 ce 04             	or     esi,0x4
100a52e7:	6a 00                	push   0x0
100a52e9:	6a 00                	push   0x0
100a52eb:	6a 08                	push   0x8
100a52ed:	8b cf                	mov    ecx,edi
100a52ef:	e8 0c 7d 03 00       	call   0x100dd000
100a52f4:	84 c0                	test   al,al
100a52f6:	74 03                	je     0x100a52fb
100a52f8:	83 ce 08             	or     esi,0x8
100a52fb:	6a 00                	push   0x0
100a52fd:	6a 00                	push   0x0
100a52ff:	6a 10                	push   0x10
100a5301:	8b cf                	mov    ecx,edi
100a5303:	e8 f8 7c 03 00       	call   0x100dd000
100a5308:	84 c0                	test   al,al
100a530a:	74 03                	je     0x100a530f
100a530c:	83 ce 10             	or     esi,0x10
100a530f:	6a 00                	push   0x0
100a5311:	6a 00                	push   0x0
100a5313:	6a 20                	push   0x20
100a5315:	8b cf                	mov    ecx,edi
100a5317:	e8 e4 7c 03 00       	call   0x100dd000
100a531c:	84 c0                	test   al,al
100a531e:	74 03                	je     0x100a5323
100a5320:	83 ce 20             	or     esi,0x20
100a5323:	6a 00                	push   0x0
100a5325:	6a 00                	push   0x0
100a5327:	6a 40                	push   0x40
100a5329:	8b cf                	mov    ecx,edi
100a532b:	e8 d0 7c 03 00       	call   0x100dd000
100a5330:	84 c0                	test   al,al
100a5332:	74 03                	je     0x100a5337
100a5334:	83 ce 40             	or     esi,0x40
100a5337:	6a 00                	push   0x0
100a5339:	6a 00                	push   0x0
100a533b:	68 80 00 00 00       	push   0x80
100a5340:	8b cf                	mov    ecx,edi
100a5342:	e8 b9 7c 03 00       	call   0x100dd000
100a5347:	84 c0                	test   al,al
100a5349:	74 06                	je     0x100a5351
100a534b:	81 ce 80 00 00 00    	or     esi,0x80
100a5351:	6a 00                	push   0x0
100a5353:	6a 00                	push   0x0
100a5355:	68 00 01 00 00       	push   0x100
100a535a:	8b cf                	mov    ecx,edi
100a535c:	e8 9f 7c 03 00       	call   0x100dd000
100a5361:	84 c0                	test   al,al
100a5363:	74 06                	je     0x100a536b
100a5365:	81 ce 00 01 00 00    	or     esi,0x100
100a536b:	6a 00                	push   0x0
100a536d:	6a 00                	push   0x0
100a536f:	68 00 02 00 00       	push   0x200
100a5374:	8b cf                	mov    ecx,edi
100a5376:	e8 85 7c 03 00       	call   0x100dd000
100a537b:	84 c0                	test   al,al
100a537d:	74 06                	je     0x100a5385
100a537f:	81 ce 00 02 00 00    	or     esi,0x200
100a5385:	6a 00                	push   0x0
100a5387:	6a 00                	push   0x0
100a5389:	68 00 04 00 00       	push   0x400
100a538e:	8b cf                	mov    ecx,edi
100a5390:	e8 6b 7c 03 00       	call   0x100dd000
100a5395:	84 c0                	test   al,al
100a5397:	74 06                	je     0x100a539f
100a5399:	81 ce 00 04 00 00    	or     esi,0x400
100a539f:	6a 00                	push   0x0
100a53a1:	6a 00                	push   0x0
100a53a3:	68 00 08 00 00       	push   0x800
100a53a8:	8b cf                	mov    ecx,edi
100a53aa:	e8 51 7c 03 00       	call   0x100dd000
100a53af:	84 c0                	test   al,al
100a53b1:	74 06                	je     0x100a53b9
100a53b3:	81 ce 00 08 00 00    	or     esi,0x800
100a53b9:	6a 00                	push   0x0
100a53bb:	6a 00                	push   0x0
100a53bd:	68 00 10 00 00       	push   0x1000
100a53c2:	8b cf                	mov    ecx,edi
100a53c4:	e8 37 7c 03 00       	call   0x100dd000
100a53c9:	84 c0                	test   al,al
100a53cb:	74 06                	je     0x100a53d3
100a53cd:	81 ce 00 10 00 00    	or     esi,0x1000
100a53d3:	6a 00                	push   0x0
100a53d5:	6a 00                	push   0x0
100a53d7:	68 00 20 00 00       	push   0x2000
100a53dc:	8b cf                	mov    ecx,edi
100a53de:	e8 1d 7c 03 00       	call   0x100dd000
100a53e3:	84 c0                	test   al,al
100a53e5:	74 06                	je     0x100a53ed
100a53e7:	81 ce 00 20 00 00    	or     esi,0x2000
100a53ed:	6a 00                	push   0x0
100a53ef:	6a 00                	push   0x0
100a53f1:	68 00 40 00 00       	push   0x4000
100a53f6:	8b cf                	mov    ecx,edi
100a53f8:	e8 03 7c 03 00       	call   0x100dd000
100a53fd:	84 c0                	test   al,al
100a53ff:	74 06                	je     0x100a5407
100a5401:	81 ce 00 40 00 00    	or     esi,0x4000
100a5407:	6a 00                	push   0x0
100a5409:	6a 00                	push   0x0
100a540b:	68 00 80 00 00       	push   0x8000
100a5410:	8b cf                	mov    ecx,edi
100a5412:	e8 e9 7b 03 00       	call   0x100dd000
100a5417:	84 c0                	test   al,al
100a5419:	74 06                	je     0x100a5421
100a541b:	81 ce 00 80 00 00    	or     esi,0x8000
100a5421:	6a 00                	push   0x0
100a5423:	6a 00                	push   0x0
100a5425:	68 00 00 01 00       	push   0x10000
100a542a:	8b cf                	mov    ecx,edi
100a542c:	e8 cf 7b 03 00       	call   0x100dd000
100a5431:	84 c0                	test   al,al
100a5433:	74 06                	je     0x100a543b
100a5435:	81 ce 00 00 01 00    	or     esi,0x10000
100a543b:	6a 00                	push   0x0
100a543d:	6a 00                	push   0x0
100a543f:	68 00 00 02 00       	push   0x20000
100a5444:	8b cf                	mov    ecx,edi
100a5446:	e8 b5 7b 03 00       	call   0x100dd000
100a544b:	84 c0                	test   al,al
100a544d:	74 06                	je     0x100a5455
100a544f:	81 ce 00 00 02 00    	or     esi,0x20000
100a5455:	6a 00                	push   0x0
100a5457:	6a 00                	push   0x0
100a5459:	68 00 00 04 00       	push   0x40000
100a545e:	8b cf                	mov    ecx,edi
100a5460:	e8 9b 7b 03 00       	call   0x100dd000
100a5465:	84 c0                	test   al,al
100a5467:	74 06                	je     0x100a546f
100a5469:	81 ce 00 00 04 00    	or     esi,0x40000
100a546f:	6a 00                	push   0x0
100a5471:	6a 00                	push   0x0
100a5473:	68 00 00 08 00       	push   0x80000
100a5478:	8b cf                	mov    ecx,edi
100a547a:	e8 81 7b 03 00       	call   0x100dd000
100a547f:	84 c0                	test   al,al
100a5481:	74 06                	je     0x100a5489
100a5483:	81 ce 00 00 08 00    	or     esi,0x80000
100a5489:	6a 00                	push   0x0
100a548b:	6a 00                	push   0x0
100a548d:	68 00 00 10 00       	push   0x100000
100a5492:	8b cf                	mov    ecx,edi
100a5494:	e8 67 7b 03 00       	call   0x100dd000
100a5499:	84 c0                	test   al,al
100a549b:	74 06                	je     0x100a54a3
100a549d:	81 ce 00 00 10 00    	or     esi,0x100000
100a54a3:	6a 00                	push   0x0
100a54a5:	6a 00                	push   0x0
100a54a7:	68 00 00 20 00       	push   0x200000
100a54ac:	8b cf                	mov    ecx,edi
100a54ae:	e8 4d 7b 03 00       	call   0x100dd000
100a54b3:	84 c0                	test   al,al
100a54b5:	74 06                	je     0x100a54bd
100a54b7:	81 ce 00 00 20 00    	or     esi,0x200000
100a54bd:	6a 00                	push   0x0
100a54bf:	6a 00                	push   0x0
100a54c1:	68 00 00 40 00       	push   0x400000
100a54c6:	8b cf                	mov    ecx,edi
100a54c8:	e8 33 7b 03 00       	call   0x100dd000
100a54cd:	84 c0                	test   al,al
100a54cf:	74 06                	je     0x100a54d7
100a54d1:	81 ce 00 00 40 00    	or     esi,0x400000
100a54d7:	6a 00                	push   0x0
100a54d9:	6a 00                	push   0x0
100a54db:	68 00 00 80 00       	push   0x800000
100a54e0:	8b cf                	mov    ecx,edi
100a54e2:	e8 19 7b 03 00       	call   0x100dd000
100a54e7:	84 c0                	test   al,al
100a54e9:	74 06                	je     0x100a54f1
100a54eb:	81 ce 00 00 80 00    	or     esi,0x800000
100a54f1:	6a 00                	push   0x0
100a54f3:	6a 00                	push   0x0
100a54f5:	68 00 00 00 01       	push   0x1000000
100a54fa:	8b cf                	mov    ecx,edi
100a54fc:	e8 ff 7a 03 00       	call   0x100dd000
100a5501:	84 c0                	test   al,al
100a5503:	74 06                	je     0x100a550b
100a5505:	81 ce 00 00 00 01    	or     esi,0x1000000
100a550b:	6a 00                	push   0x0
100a550d:	6a 00                	push   0x0
100a550f:	68 00 00 00 02       	push   0x2000000
100a5514:	8b cf                	mov    ecx,edi
100a5516:	e8 e5 7a 03 00       	call   0x100dd000
100a551b:	84 c0                	test   al,al
100a551d:	74 06                	je     0x100a5525
100a551f:	81 ce 00 00 00 02    	or     esi,0x2000000
100a5525:	6a 00                	push   0x0
100a5527:	6a 00                	push   0x0
100a5529:	68 00 00 00 04       	push   0x4000000
100a552e:	8b cf                	mov    ecx,edi
100a5530:	e8 cb 7a 03 00       	call   0x100dd000
100a5535:	84 c0                	test   al,al
100a5537:	74 06                	je     0x100a553f
100a5539:	81 ce 00 00 00 04    	or     esi,0x4000000
100a553f:	6a 00                	push   0x0
100a5541:	6a 00                	push   0x0
100a5543:	68 00 00 00 08       	push   0x8000000
100a5548:	8b cf                	mov    ecx,edi
100a554a:	e8 b1 7a 03 00       	call   0x100dd000
100a554f:	84 c0                	test   al,al
100a5551:	74 06                	je     0x100a5559
100a5553:	81 ce 00 00 00 08    	or     esi,0x8000000
100a5559:	6a 00                	push   0x0
100a555b:	6a 00                	push   0x0
100a555d:	68 00 00 00 10       	push   0x10000000
100a5562:	8b cf                	mov    ecx,edi
100a5564:	e8 97 7a 03 00       	call   0x100dd000
100a5569:	84 c0                	test   al,al
100a556b:	74 06                	je     0x100a5573
100a556d:	81 ce 00 00 00 10    	or     esi,0x10000000
100a5573:	6a 00                	push   0x0
100a5575:	6a 00                	push   0x0
100a5577:	68 00 00 00 20       	push   0x20000000
100a557c:	8b cf                	mov    ecx,edi
100a557e:	e8 7d 7a 03 00       	call   0x100dd000
100a5583:	84 c0                	test   al,al
100a5585:	74 06                	je     0x100a558d
100a5587:	81 ce 00 00 00 20    	or     esi,0x20000000
100a558d:	6a 00                	push   0x0
100a558f:	6a 00                	push   0x0
100a5591:	68 00 00 00 40       	push   0x40000000
100a5596:	8b cf                	mov    ecx,edi
100a5598:	e8 63 7a 03 00       	call   0x100dd000
100a559d:	84 c0                	test   al,al
100a559f:	74 06                	je     0x100a55a7
100a55a1:	81 ce 00 00 00 40    	or     esi,0x40000000
100a55a7:	6a 00                	push   0x0
100a55a9:	6a 00                	push   0x0
100a55ab:	68 00 00 00 80       	push   0x80000000
100a55b0:	8b cf                	mov    ecx,edi
100a55b2:	e8 49 7a 03 00       	call   0x100dd000
100a55b7:	84 c0                	test   al,al
100a55b9:	74 06                	je     0x100a55c1
100a55bb:	81 ce 00 00 00 80    	or     esi,0x80000000
100a55c1:	80 bf 78 06 00 00 00 	cmp    BYTE PTR [edi+0x678],0x0
100a55c8:	74 3d                	je     0x100a5607
100a55ca:	80 bf 79 06 00 00 00 	cmp    BYTE PTR [edi+0x679],0x0
100a55d1:	74 34                	je     0x100a5607
100a55d3:	80 bf 80 06 00 00 00 	cmp    BYTE PTR [edi+0x680],0x0
100a55da:	74 2b                	je     0x100a5607
100a55dc:	6a 00                	push   0x0
100a55de:	6a 00                	push   0x0
100a55e0:	68 00 00 00 01       	push   0x1000000
100a55e5:	8b cf                	mov    ecx,edi
100a55e7:	e8 14 7a 03 00       	call   0x100dd000
100a55ec:	84 c0                	test   al,al
100a55ee:	75 12                	jne    0x100a5602
100a55f0:	6a 00                	push   0x0
100a55f2:	6a 00                	push   0x0
100a55f4:	6a 00                	push   0x0
100a55f6:	68 00 00 00 01       	push   0x1000000
100a55fb:	8b cf                	mov    ecx,edi
100a55fd:	e8 ce d8 04 00       	call   0x100f2ed0
100a5602:	be 00 00 00 01       	mov    esi,0x1000000
100a5607:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100a560a:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100a5610:	6a 00                	push   0x0
100a5612:	ff 35 8c 66 22 10    	push   DWORD PTR ds:0x1022668c
100a5618:	6a 01                	push   0x1
100a561a:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100a5620:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100a5623:	83 c4 10             	add    esp,0x10
100a5626:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100a5629:	83 b8 d8 01 00 00 00 	cmp    DWORD PTR [eax+0x1d8],0x0
100a5630:	74 62                	je     0x100a5694
100a5632:	6a 01                	push   0x1
100a5634:	eb 60                	jmp    0x100a5696
100a5636:	33 c0                	xor    eax,eax
100a5638:	bb 07 00 00 00       	mov    ebx,0x7
100a563d:	83 f9 04             	cmp    ecx,0x4
100a5640:	ba 06 00 00 00       	mov    edx,0x6
100a5645:	0f 4f d8             	cmovg  ebx,eax
100a5648:	8d 41 fb             	lea    eax,[ecx-0x5]
100a564b:	83 f8 03             	cmp    eax,0x3
100a564e:	8d 41 f3             	lea    eax,[ecx-0xd]
100a5651:	0f 46 da             	cmovbe ebx,edx
100a5654:	83 f8 03             	cmp    eax,0x3
100a5657:	ba 05 00 00 00       	mov    edx,0x5
100a565c:	8d 41 ef             	lea    eax,[ecx-0x11]
100a565f:	0f 46 da             	cmovbe ebx,edx
100a5662:	83 f8 03             	cmp    eax,0x3
100a5665:	ba 04 00 00 00       	mov    edx,0x4
100a566a:	8d 41 eb             	lea    eax,[ecx-0x15]
100a566d:	0f 46 da             	cmovbe ebx,edx
100a5670:	ba 03 00 00 00       	mov    edx,0x3
100a5675:	3b c2                	cmp    eax,edx
100a5677:	0f 46 da             	cmovbe ebx,edx
100a567a:	83 f9 1c             	cmp    ecx,0x1c
100a567d:	0f 8d f9 fb ff ff    	jge    0x100a527c
100a5683:	83 f9 18             	cmp    ecx,0x18
100a5686:	0f 8e f5 fb ff ff    	jle    0x100a5281
100a568c:	8d 5a ff             	lea    ebx,[edx-0x1]
100a568f:	e9 ed fb ff ff       	jmp    0x100a5281
100a5694:	6a 00                	push   0x0
100a5696:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a569c:	83 c4 04             	add    esp,0x4
100a569f:	68 70 2d 1c 10       	push   0x101c2d70
100a56a4:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100a56aa:	ff b7 3c 06 00 00    	push   DWORD PTR [edi+0x63c]
100a56b0:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a56b6:	ff b7 40 06 00 00    	push   DWORD PTR [edi+0x640]
100a56bc:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a56c2:	ff b7 44 06 00 00    	push   DWORD PTR [edi+0x644]
100a56c8:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a56ce:	ff b7 48 06 00 00    	push   DWORD PTR [edi+0x648]
100a56d4:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a56da:	83 c4 14             	add    esp,0x14
100a56dd:	8b cf                	mov    ecx,edi
100a56df:	e8 cc 68 03 00       	call   0x100dbfb0
100a56e4:	51                   	push   ecx
100a56e5:	d9 1c 24             	fstp   DWORD PTR [esp]
100a56e8:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100a56ee:	ff b7 50 06 00 00    	push   DWORD PTR [edi+0x650]
100a56f4:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a56fa:	ff b7 54 06 00 00    	push   DWORD PTR [edi+0x654]
100a5700:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a5706:	ff b7 58 06 00 00    	push   DWORD PTR [edi+0x658]
100a570c:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a5712:	f3 0f 2c 87 5c 06 00 	cvttss2si eax,DWORD PTR [edi+0x65c]
100a5719:	00 
100a571a:	50                   	push   eax
100a571b:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a5721:	f3 0f 2c 87 60 06 00 	cvttss2si eax,DWORD PTR [edi+0x660]
100a5728:	00 
100a5729:	50                   	push   eax
100a572a:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a5730:	ff b7 64 06 00 00    	push   DWORD PTR [edi+0x664]
100a5736:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a573c:	ff b7 68 06 00 00    	push   DWORD PTR [edi+0x668]
100a5742:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a5748:	ff b7 6c 06 00 00    	push   DWORD PTR [edi+0x66c]
100a574e:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a5754:	ff b7 70 06 00 00    	push   DWORD PTR [edi+0x670]
100a575a:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a5760:	ff b7 74 06 00 00    	push   DWORD PTR [edi+0x674]
100a5766:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a576c:	83 c4 2c             	add    esp,0x2c
100a576f:	80 bf 78 06 00 00 00 	cmp    BYTE PTR [edi+0x678],0x0
100a5776:	74 0d                	je     0x100a5785
100a5778:	80 bf 79 06 00 00 00 	cmp    BYTE PTR [edi+0x679],0x0
100a577f:	74 04                	je     0x100a5785
100a5781:	6a 01                	push   0x1
100a5783:	eb 02                	jmp    0x100a5787
100a5785:	6a 00                	push   0x0
100a5787:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a578d:	83 c4 04             	add    esp,0x4
100a5790:	6a 1e                	push   0x1e
100a5792:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a5798:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100a579b:	83 c4 04             	add    esp,0x4
100a579e:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100a57a1:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
100a57a8:	74 04                	je     0x100a57ae
100a57aa:	6a 01                	push   0x1
100a57ac:	eb 02                	jmp    0x100a57b0
100a57ae:	6a 00                	push   0x0
100a57b0:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a57b6:	83 c4 04             	add    esp,0x4
100a57b9:	ff b7 7c 06 00 00    	push   DWORD PTR [edi+0x67c]
100a57bf:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a57c5:	56                   	push   esi
100a57c6:	ff 15 14 30 22 10    	call   DWORD PTR ds:0x10223014
100a57cc:	6a 00                	push   0x0
100a57ce:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a57d4:	53                   	push   ebx
100a57d5:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a57db:	83 c4 10             	add    esp,0x10
100a57de:	80 bf 80 06 00 00 00 	cmp    BYTE PTR [edi+0x680],0x0
100a57e5:	5e                   	pop    esi
100a57e6:	5b                   	pop    ebx
100a57e7:	74 04                	je     0x100a57ed
100a57e9:	6a 01                	push   0x1
100a57eb:	eb 02                	jmp    0x100a57ef
100a57ed:	6a 00                	push   0x0
100a57ef:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a57f5:	83 c4 04             	add    esp,0x4
100a57f8:	6a 01                	push   0x1
100a57fa:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a5800:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100a5806:	83 c4 04             	add    esp,0x4
100a5809:	85 c9                	test   ecx,ecx
100a580b:	74 0d                	je     0x100a581a
100a580d:	8b 01                	mov    eax,DWORD PTR [ecx]
100a580f:	ff 50 20             	call   DWORD PTR [eax+0x20]
100a5812:	85 c0                	test   eax,eax
100a5814:	74 04                	je     0x100a581a
100a5816:	6a 01                	push   0x1
100a5818:	eb 02                	jmp    0x100a581c
100a581a:	6a 00                	push   0x0
100a581c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a5822:	83 c4 04             	add    esp,0x4
100a5825:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
100a5828:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a582e:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
100a5831:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a5837:	83 c4 08             	add    esp,0x8
100a583a:	8b cf                	mov    ecx,edi
100a583c:	6a 00                	push   0x0
100a583e:	6a 01                	push   0x1
100a5840:	6a 00                	push   0x0
100a5842:	e8 b9 77 03 00       	call   0x100dd000
100a5847:	84 c0                	test   al,al
100a5849:	74 04                	je     0x100a584f
100a584b:	6a 01                	push   0x1
100a584d:	eb 02                	jmp    0x100a5851
100a584f:	6a 00                	push   0x0
100a5851:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a5857:	83 c4 04             	add    esp,0x4
100a585a:	8b cf                	mov    ecx,edi
100a585c:	6a 01                	push   0x1
100a585e:	6a 00                	push   0x0
100a5860:	6a 00                	push   0x0
100a5862:	e8 99 77 03 00       	call   0x100dd000
100a5867:	84 c0                	test   al,al
100a5869:	74 04                	je     0x100a586f
100a586b:	6a 01                	push   0x1
100a586d:	eb 02                	jmp    0x100a5871
100a586f:	6a 00                	push   0x0
100a5871:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a5877:	83 c4 04             	add    esp,0x4
100a587a:	80 bf 78 06 00 00 00 	cmp    BYTE PTR [edi+0x678],0x0
100a5881:	74 24                	je     0x100a58a7
100a5883:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a5888:	68 b0 8b 1c 10       	push   0x101c8bb0
100a588d:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100a5893:	03 48 0c             	add    ecx,DWORD PTR [eax+0xc]
100a5896:	51                   	push   ecx
100a5897:	e8 54 9d 09 00       	call   0x1013f5f0
100a589c:	83 c4 08             	add    esp,0x8
100a589f:	85 c0                	test   eax,eax
100a58a1:	74 04                	je     0x100a58a7
100a58a3:	6a 01                	push   0x1
100a58a5:	eb 02                	jmp    0x100a58a9
100a58a7:	6a 00                	push   0x0
100a58a9:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a58af:	83 c4 04             	add    esp,0x4
100a58b2:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100a58b8:	5f                   	pop    edi
100a58b9:	8b e5                	mov    esp,ebp
100a58bb:	5d                   	pop    ebp
100a58bc:	c2 10 00             	ret    0x10
