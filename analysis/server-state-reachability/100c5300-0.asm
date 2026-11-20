
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c5300 <.text+0xc4300>:
100c5300:	55                   	push   ebp
100c5301:	8b ec                	mov    ebp,esp
100c5303:	6a ff                	push   0xffffffff
100c5305:	68 57 dd 19 10       	push   0x1019dd57
100c530a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100c5310:	50                   	push   eax
100c5311:	81 ec ac 0f 00 00    	sub    esp,0xfac
100c5317:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100c531c:	33 c5                	xor    eax,ebp
100c531e:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100c5321:	53                   	push   ebx
100c5322:	56                   	push   esi
100c5323:	57                   	push   edi
100c5324:	50                   	push   eax
100c5325:	8d 45 f4             	lea    eax,[ebp-0xc]
100c5328:	64 a3 00 00 00 00    	mov    fs:0x0,eax
100c532e:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100c5331:	89 9d 04 f1 ff ff    	mov    DWORD PTR [ebp-0xefc],ebx
100c5337:	85 db                	test   ebx,ebx
100c5339:	0f 84 02 12 00 00    	je     0x100c6541
100c533f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c5344:	8b 00                	mov    eax,DWORD PTR [eax]
100c5346:	89 83 38 04 00 00    	mov    DWORD PTR [ebx+0x438],eax
100c534c:	8d 85 f0 f6 ff ff    	lea    eax,[ebp-0x910]
100c5352:	50                   	push   eax
100c5353:	ff 15 d4 30 22 10    	call   DWORD PTR ds:0x102230d4
100c5359:	8d 8d f0 f6 ff ff    	lea    ecx,[ebp-0x910]
100c535f:	83 c4 04             	add    esp,0x4
100c5362:	49                   	dec    ecx
100c5363:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100c5366:	8d 49 01             	lea    ecx,[ecx+0x1]
100c5369:	84 c0                	test   al,al
100c536b:	75 f6                	jne    0x100c5363
100c536d:	a1 8c 61 1d 10       	mov    eax,ds:0x101d618c
100c5372:	89 01                	mov    DWORD PTR [ecx],eax
100c5374:	a1 90 61 1d 10       	mov    eax,ds:0x101d6190
100c5379:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100c537c:	66 a1 94 61 1d 10    	mov    ax,ds:0x101d6194
100c5382:	66 89 41 08          	mov    WORD PTR [ecx+0x8],ax
100c5386:	a0 96 61 1d 10       	mov    al,ds:0x101d6196
100c538b:	88 41 0a             	mov    BYTE PTR [ecx+0xa],al
100c538e:	8d 8d f0 f6 ff ff    	lea    ecx,[ebp-0x910]
100c5394:	c7 85 a0 f2 ff ff 00 00 00 00 	mov    DWORD PTR [ebp-0xd60],0x0
100c539e:	8d 51 01             	lea    edx,[ecx+0x1]
100c53a1:	c7 85 a4 f2 ff ff 0f 00 00 00 	mov    DWORD PTR [ebp-0xd5c],0xf
100c53ab:	c6 85 90 f2 ff ff 00 	mov    BYTE PTR [ebp-0xd70],0x0
100c53b2:	8a 01                	mov    al,BYTE PTR [ecx]
100c53b4:	41                   	inc    ecx
100c53b5:	84 c0                	test   al,al
100c53b7:	75 f9                	jne    0x100c53b2
100c53b9:	2b ca                	sub    ecx,edx
100c53bb:	8d 85 f0 f6 ff ff    	lea    eax,[ebp-0x910]
100c53c1:	51                   	push   ecx
100c53c2:	50                   	push   eax
100c53c3:	8d 8d 90 f2 ff ff    	lea    ecx,[ebp-0xd70]
100c53c9:	e8 42 24 f7 ff       	call   0x10037810
100c53ce:	a1 98 61 1d 10       	mov    eax,ds:0x101d6198
100c53d3:	89 85 a8 f2 ff ff    	mov    DWORD PTR [ebp-0xd58],eax
100c53d9:	a0 9c 61 1d 10       	mov    al,ds:0x101d619c
100c53de:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100c53e5:	c7 85 bc f2 ff ff 0f 00 00 00 	mov    DWORD PTR [ebp-0xd44],0xf
100c53ef:	c7 85 b8 f2 ff ff 05 00 00 00 	mov    DWORD PTR [ebp-0xd48],0x5
100c53f9:	88 85 ac f2 ff ff    	mov    BYTE PTR [ebp-0xd54],al
100c53ff:	c6 85 ad f2 ff ff 00 	mov    BYTE PTR [ebp-0xd53],0x0
100c5406:	8d 85 a8 f2 ff ff    	lea    eax,[ebp-0xd58]
100c540c:	c6 45 fc 01          	mov    BYTE PTR [ebp-0x4],0x1
100c5410:	50                   	push   eax
100c5411:	8d 85 90 f2 ff ff    	lea    eax,[ebp-0xd70]
100c5417:	50                   	push   eax
100c5418:	8d 85 c0 f2 ff ff    	lea    eax,[ebp-0xd40]
100c541e:	50                   	push   eax
100c541f:	e8 1c fc ff ff       	call   0x100c5040
100c5424:	83 c4 0c             	add    esp,0xc
100c5427:	83 bd d4 f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd2c],0x10
100c542e:	8d 8d 08 f1 ff ff    	lea    ecx,[ebp-0xef8]
100c5434:	8d 85 c0 f2 ff ff    	lea    eax,[ebp-0xd40]
100c543a:	c6 45 fc 02          	mov    BYTE PTR [ebp-0x4],0x2
100c543e:	0f 43 85 c0 f2 ff ff 	cmovae eax,DWORD PTR [ebp-0xd40]
100c5445:	51                   	push   ecx
100c5446:	50                   	push   eax
100c5447:	ff 15 04 10 1a 10    	call   DWORD PTR ds:0x101a1004
100c544d:	8b f0                	mov    esi,eax
100c544f:	89 b5 00 f1 ff ff    	mov    DWORD PTR [ebp-0xf00],esi
100c5455:	83 fe ff             	cmp    esi,0xffffffff
100c5458:	0f 84 77 10 00 00    	je     0x100c64d5
100c545e:	66 90                	xchg   ax,ax
100c5460:	8d 85 34 f1 ff ff    	lea    eax,[ebp-0xecc]
100c5466:	50                   	push   eax
100c5467:	8d 85 90 f2 ff ff    	lea    eax,[ebp-0xd70]
100c546d:	50                   	push   eax
100c546e:	8d 85 78 f2 ff ff    	lea    eax,[ebp-0xd88]
100c5474:	50                   	push   eax
100c5475:	e8 16 fc ff ff       	call   0x100c5090
100c547a:	83 bd 8c f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd74],0x10
100c5481:	8d 8d 48 f2 ff ff    	lea    ecx,[ebp-0xdb8]
100c5487:	8d 85 78 f2 ff ff    	lea    eax,[ebp-0xd88]
100c548d:	c6 45 fc 03          	mov    BYTE PTR [ebp-0x4],0x3
100c5491:	0f 43 85 78 f2 ff ff 	cmovae eax,DWORD PTR [ebp-0xd88]
100c5498:	51                   	push   ecx
100c5499:	50                   	push   eax
100c549a:	e8 0d ec 0a 00       	call   0x101740ac
100c549f:	83 c4 14             	add    esp,0x14
100c54a2:	85 c0                	test   eax,eax
100c54a4:	0f 85 d2 0f 00 00    	jne    0x100c647c
100c54aa:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c54af:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
100c54b2:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100c54b8:	03 8a d4 01 00 00    	add    ecx,DWORD PTR [edx+0x1d4]
100c54be:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c54c4:	2b d1                	sub    edx,ecx
100c54c6:	8a 01                	mov    al,BYTE PTR [ecx]
100c54c8:	8d 49 01             	lea    ecx,[ecx+0x1]
100c54cb:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c54cf:	84 c0                	test   al,al
100c54d1:	75 f3                	jne    0x100c54c6
100c54d3:	8d 8d f0 fe ff ff    	lea    ecx,[ebp-0x110]
100c54d9:	49                   	dec    ecx
100c54da:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100c54e0:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100c54e3:	8d 49 01             	lea    ecx,[ecx+0x1]
100c54e6:	84 c0                	test   al,al
100c54e8:	75 f6                	jne    0x100c54e0
100c54ea:	a1 4c 14 1b 10       	mov    eax,ds:0x101b144c
100c54ef:	89 01                	mov    DWORD PTR [ecx],eax
100c54f1:	a0 50 14 1b 10       	mov    al,ds:0x101b1450
100c54f6:	88 41 04             	mov    BYTE PTR [ecx+0x4],al
100c54f9:	8d 8d 34 f1 ff ff    	lea    ecx,[ebp-0xecc]
100c54ff:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c5505:	8a 10                	mov    dl,BYTE PTR [eax]
100c5507:	3a 11                	cmp    dl,BYTE PTR [ecx]
100c5509:	75 1a                	jne    0x100c5525
100c550b:	84 d2                	test   dl,dl
100c550d:	74 12                	je     0x100c5521
100c550f:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100c5512:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100c5515:	75 0e                	jne    0x100c5525
100c5517:	83 c0 02             	add    eax,0x2
100c551a:	83 c1 02             	add    ecx,0x2
100c551d:	84 d2                	test   dl,dl
100c551f:	75 e4                	jne    0x100c5505
100c5521:	33 c0                	xor    eax,eax
100c5523:	eb 05                	jmp    0x100c552a
100c5525:	1b c0                	sbb    eax,eax
100c5527:	83 c8 01             	or     eax,0x1
100c552a:	85 c0                	test   eax,eax
100c552c:	0f 85 4a 0f 00 00    	jne    0x100c647c
100c5532:	8d 85 34 f1 ff ff    	lea    eax,[ebp-0xecc]
100c5538:	50                   	push   eax
100c5539:	8d 85 f0 f2 ff ff    	lea    eax,[ebp-0xd10]
100c553f:	68 4c 12 1a 10       	push   0x101a124c
100c5544:	50                   	push   eax
100c5545:	e8 16 9c f5 ff       	call   0x1001f160
100c554a:	8d 85 f0 fa ff ff    	lea    eax,[ebp-0x510]
100c5550:	50                   	push   eax
100c5551:	ff 15 d4 30 22 10    	call   DWORD PTR ds:0x102230d4
100c5557:	8d 8d f0 fa ff ff    	lea    ecx,[ebp-0x510]
100c555d:	83 c4 10             	add    esp,0x10
100c5560:	49                   	dec    ecx
100c5561:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100c5564:	8d 49 01             	lea    ecx,[ecx+0x1]
100c5567:	84 c0                	test   al,al
100c5569:	75 f6                	jne    0x100c5561
100c556b:	a1 40 14 1b 10       	mov    eax,ds:0x101b1440
100c5570:	89 01                	mov    DWORD PTR [ecx],eax
100c5572:	a1 44 14 1b 10       	mov    eax,ds:0x101b1444
100c5577:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100c557a:	66 a1 48 14 1b 10    	mov    ax,ds:0x101b1448
100c5580:	66 89 41 08          	mov    WORD PTR [ecx+0x8],ax
100c5584:	a0 4a 14 1b 10       	mov    al,ds:0x101b144a
100c5589:	88 41 0a             	mov    BYTE PTR [ecx+0xa],al
100c558c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c5591:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100c5594:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100c559a:	03 91 d4 01 00 00    	add    edx,DWORD PTR [ecx+0x1d4]
100c55a0:	8b f2                	mov    esi,edx
100c55a2:	8a 02                	mov    al,BYTE PTR [edx]
100c55a4:	42                   	inc    edx
100c55a5:	84 c0                	test   al,al
100c55a7:	75 f9                	jne    0x100c55a2
100c55a9:	8d bd f0 fa ff ff    	lea    edi,[ebp-0x510]
100c55af:	2b d6                	sub    edx,esi
100c55b1:	4f                   	dec    edi
100c55b2:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100c55b5:	47                   	inc    edi
100c55b6:	84 c0                	test   al,al
100c55b8:	75 f8                	jne    0x100c55b2
100c55ba:	8b ca                	mov    ecx,edx
100c55bc:	c1 e9 02             	shr    ecx,0x2
100c55bf:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100c55c1:	8b ca                	mov    ecx,edx
100c55c3:	83 e1 03             	and    ecx,0x3
100c55c6:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100c55c8:	8d 8d f0 fa ff ff    	lea    ecx,[ebp-0x510]
100c55ce:	49                   	dec    ecx
100c55cf:	90                   	nop
100c55d0:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100c55d3:	8d 49 01             	lea    ecx,[ecx+0x1]
100c55d6:	84 c0                	test   al,al
100c55d8:	75 f6                	jne    0x100c55d0
100c55da:	a1 4c 14 1b 10       	mov    eax,ds:0x101b144c
100c55df:	89 01                	mov    DWORD PTR [ecx],eax
100c55e1:	a0 50 14 1b 10       	mov    al,ds:0x101b1450
100c55e6:	6a 01                	push   0x1
100c55e8:	6a 40                	push   0x40
100c55ea:	88 41 04             	mov    BYTE PTR [ecx+0x4],al
100c55ed:	8d 85 f0 fa ff ff    	lea    eax,[ebp-0x510]
100c55f3:	6a 01                	push   0x1
100c55f5:	50                   	push   eax
100c55f6:	8d 8d 48 f0 ff ff    	lea    ecx,[ebp-0xfb8]
100c55fc:	e8 cf a2 f6 ff       	call   0x1002f8d0
100c5601:	c7 85 e8 f2 ff ff 00 00 00 00 	mov    DWORD PTR [ebp-0xd18],0x0
100c560b:	c7 85 ec f2 ff ff 0f 00 00 00 	mov    DWORD PTR [ebp-0xd14],0xf
100c5615:	c6 85 d8 f2 ff ff 00 	mov    BYTE PTR [ebp-0xd28],0x0
100c561c:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c5622:	c6 45 fc 05          	mov    BYTE PTR [ebp-0x4],0x5
100c5626:	50                   	push   eax
100c5627:	8d 85 48 f0 ff ff    	lea    eax,[ebp-0xfb8]
100c562d:	50                   	push   eax
100c562e:	e8 1d 9f f6 ff       	call   0x1002f550
100c5633:	83 c4 08             	add    esp,0x8
100c5636:	8b 08                	mov    ecx,DWORD PTR [eax]
100c5638:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100c563b:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
100c5640:	0f 85 69 0d 00 00    	jne    0x100c63af
100c5646:	66 66 0f 1f 84 00 00 00 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
100c5650:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5657:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c565d:	68 54 14 1b 10       	push   0x101b1454
100c5662:	0f 43 85 d8 f2 ff ff 	cmovae eax,DWORD PTR [ebp-0xd28]
100c5669:	50                   	push   eax
100c566a:	e8 81 9f 07 00       	call   0x1013f5f0
100c566f:	83 c4 08             	add    esp,0x8
100c5672:	85 c0                	test   eax,eax
100c5674:	0f 84 9e 00 00 00    	je     0x100c5718
100c567a:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5680:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5686:	ba 07 00 00 00       	mov    edx,0x7
100c568b:	3b c2                	cmp    eax,edx
100c568d:	0f 42 d0             	cmovb  edx,eax
100c5690:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5697:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c569e:	2b c2                	sub    eax,edx
100c56a0:	89 85 e8 f2 ff ff    	mov    DWORD PTR [ebp-0xd18],eax
100c56a6:	40                   	inc    eax
100c56a7:	50                   	push   eax
100c56a8:	8d 04 11             	lea    eax,[ecx+edx*1]
100c56ab:	50                   	push   eax
100c56ac:	51                   	push   ecx
100c56ad:	e8 fe af 07 00       	call   0x101406b0
100c56b2:	83 c4 0c             	add    esp,0xc
100c56b5:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c56bb:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c56c2:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c56c8:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c56cf:	2b d1                	sub    edx,ecx
100c56d1:	8a 01                	mov    al,BYTE PTR [ecx]
100c56d3:	8d 49 01             	lea    ecx,[ecx+0x1]
100c56d6:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c56da:	84 c0                	test   al,al
100c56dc:	75 f3                	jne    0x100c56d1
100c56de:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c56e4:	3d 00 01 00 00       	cmp    eax,0x100
100c56e9:	0f 83 6e 0e 00 00    	jae    0x100c655d
100c56ef:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c56f7:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c56fd:	50                   	push   eax
100c56fe:	e8 5b 5e 0a 00       	call   0x1016b55e
100c5703:	83 c4 04             	add    esp,0x4
100c5706:	66 0f 6e c0          	movd   xmm0,eax
100c570a:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100c570d:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100c5710:	f3 0f 11 80 64 01 00 00 	movss  DWORD PTR [eax+0x164],xmm0
100c5718:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c571f:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c5725:	68 5c 14 1b 10       	push   0x101b145c
100c572a:	0f 43 85 d8 f2 ff ff 	cmovae eax,DWORD PTR [ebp-0xd28]
100c5731:	50                   	push   eax
100c5732:	e8 b9 9e 07 00       	call   0x1013f5f0
100c5737:	83 c4 08             	add    esp,0x8
100c573a:	85 c0                	test   eax,eax
100c573c:	0f 84 a2 00 00 00    	je     0x100c57e4
100c5742:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5748:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c574e:	ba 08 00 00 00       	mov    edx,0x8
100c5753:	3b c2                	cmp    eax,edx
100c5755:	0f 42 d0             	cmovb  edx,eax
100c5758:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c575f:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5766:	2b c2                	sub    eax,edx
100c5768:	89 85 e8 f2 ff ff    	mov    DWORD PTR [ebp-0xd18],eax
100c576e:	40                   	inc    eax
100c576f:	50                   	push   eax
100c5770:	8d 04 11             	lea    eax,[ecx+edx*1]
100c5773:	50                   	push   eax
100c5774:	51                   	push   ecx
100c5775:	e8 36 af 07 00       	call   0x101406b0
100c577a:	83 c4 0c             	add    esp,0xc
100c577d:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5783:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c578a:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c5790:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5797:	2b d1                	sub    edx,ecx
100c5799:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100c57a0:	8a 01                	mov    al,BYTE PTR [ecx]
100c57a2:	8d 49 01             	lea    ecx,[ecx+0x1]
100c57a5:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c57a9:	84 c0                	test   al,al
100c57ab:	75 f3                	jne    0x100c57a0
100c57ad:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c57b3:	3d 00 01 00 00       	cmp    eax,0x100
100c57b8:	0f 83 9f 0d 00 00    	jae    0x100c655d
100c57be:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c57c6:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c57cc:	50                   	push   eax
100c57cd:	e8 8c 5d 0a 00       	call   0x1016b55e
100c57d2:	83 c4 04             	add    esp,0x4
100c57d5:	66 0f 6e c0          	movd   xmm0,eax
100c57d9:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100c57dc:	f3 0f 11 83 f0 21 00 00 	movss  DWORD PTR [ebx+0x21f0],xmm0
100c57e4:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c57eb:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c57f1:	68 68 14 1b 10       	push   0x101b1468
100c57f6:	0f 43 85 d8 f2 ff ff 	cmovae eax,DWORD PTR [ebp-0xd28]
100c57fd:	50                   	push   eax
100c57fe:	e8 ed 9d 07 00       	call   0x1013f5f0
100c5803:	83 c4 08             	add    esp,0x8
100c5806:	85 c0                	test   eax,eax
100c5808:	0f 84 a5 00 00 00    	je     0x100c58b3
100c580e:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5814:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c581a:	ba 0a 00 00 00       	mov    edx,0xa
100c581f:	3b c2                	cmp    eax,edx
100c5821:	0f 42 d0             	cmovb  edx,eax
100c5824:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c582b:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5832:	2b c2                	sub    eax,edx
100c5834:	89 85 e8 f2 ff ff    	mov    DWORD PTR [ebp-0xd18],eax
100c583a:	40                   	inc    eax
100c583b:	50                   	push   eax
100c583c:	8d 04 11             	lea    eax,[ecx+edx*1]
100c583f:	50                   	push   eax
100c5840:	51                   	push   ecx
100c5841:	e8 6a ae 07 00       	call   0x101406b0
100c5846:	8b b5 ec f2 ff ff    	mov    esi,DWORD PTR [ebp-0xd14]
100c584c:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5852:	8b bd d8 f2 ff ff    	mov    edi,DWORD PTR [ebp-0xd28]
100c5858:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c585e:	83 c4 0c             	add    esp,0xc
100c5861:	83 fe 10             	cmp    esi,0x10
100c5864:	0f 43 cf             	cmovae ecx,edi
100c5867:	2b d1                	sub    edx,ecx
100c5869:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100c5870:	8a 01                	mov    al,BYTE PTR [ecx]
100c5872:	8d 49 01             	lea    ecx,[ecx+0x1]
100c5875:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c5879:	84 c0                	test   al,al
100c587b:	75 f3                	jne    0x100c5870
100c587d:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5883:	3d 00 01 00 00       	cmp    eax,0x100
100c5888:	0f 83 cf 0c 00 00    	jae    0x100c655d
100c588e:	8d 8b 4c 20 00 00    	lea    ecx,[ebx+0x204c]
100c5894:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c589c:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c58a2:	2b d1                	sub    edx,ecx
100c58a4:	8a 01                	mov    al,BYTE PTR [ecx]
100c58a6:	8d 49 01             	lea    ecx,[ecx+0x1]
100c58a9:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c58ad:	84 c0                	test   al,al
100c58af:	75 f3                	jne    0x100c58a4
100c58b1:	eb 0c                	jmp    0x100c58bf
100c58b3:	8b b5 ec f2 ff ff    	mov    esi,DWORD PTR [ebp-0xd14]
100c58b9:	8b bd d8 f2 ff ff    	mov    edi,DWORD PTR [ebp-0xd28]
100c58bf:	83 fe 10             	cmp    esi,0x10
100c58c2:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c58c8:	68 74 14 1b 10       	push   0x101b1474
100c58cd:	0f 43 c7             	cmovae eax,edi
100c58d0:	50                   	push   eax
100c58d1:	e8 1a 9d 07 00       	call   0x1013f5f0
100c58d6:	83 c4 08             	add    esp,0x8
100c58d9:	85 c0                	test   eax,eax
100c58db:	0f 84 a2 00 00 00    	je     0x100c5983
100c58e1:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c58e7:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c58ed:	ba 0a 00 00 00       	mov    edx,0xa
100c58f2:	3b c2                	cmp    eax,edx
100c58f4:	0f 42 d0             	cmovb  edx,eax
100c58f7:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c58fe:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5905:	2b c2                	sub    eax,edx
100c5907:	89 85 e8 f2 ff ff    	mov    DWORD PTR [ebp-0xd18],eax
100c590d:	40                   	inc    eax
100c590e:	50                   	push   eax
100c590f:	8d 04 11             	lea    eax,[ecx+edx*1]
100c5912:	50                   	push   eax
100c5913:	51                   	push   ecx
100c5914:	e8 97 ad 07 00       	call   0x101406b0
100c5919:	8b b5 ec f2 ff ff    	mov    esi,DWORD PTR [ebp-0xd14]
100c591f:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5925:	8b bd d8 f2 ff ff    	mov    edi,DWORD PTR [ebp-0xd28]
100c592b:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c5931:	83 c4 0c             	add    esp,0xc
100c5934:	83 fe 10             	cmp    esi,0x10
100c5937:	0f 43 cf             	cmovae ecx,edi
100c593a:	2b d1                	sub    edx,ecx
100c593c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c5940:	8a 01                	mov    al,BYTE PTR [ecx]
100c5942:	8d 49 01             	lea    ecx,[ecx+0x1]
100c5945:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c5949:	84 c0                	test   al,al
100c594b:	75 f3                	jne    0x100c5940
100c594d:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5953:	3d 00 01 00 00       	cmp    eax,0x100
100c5958:	0f 83 ff 0b 00 00    	jae    0x100c655d
100c595e:	8d 8b cc 20 00 00    	lea    ecx,[ebx+0x20cc]
100c5964:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c596c:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c5972:	2b d1                	sub    edx,ecx
100c5974:	8a 01                	mov    al,BYTE PTR [ecx]
100c5976:	8d 49 01             	lea    ecx,[ecx+0x1]
100c5979:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c597d:	84 c0                	test   al,al
100c597f:	75 f3                	jne    0x100c5974
100c5981:	eb 0c                	jmp    0x100c598f
100c5983:	8b b5 ec f2 ff ff    	mov    esi,DWORD PTR [ebp-0xd14]
100c5989:	8b bd d8 f2 ff ff    	mov    edi,DWORD PTR [ebp-0xd28]
100c598f:	83 fe 10             	cmp    esi,0x10
100c5992:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c5998:	68 80 14 1b 10       	push   0x101b1480
100c599d:	0f 43 c7             	cmovae eax,edi
100c59a0:	50                   	push   eax
100c59a1:	e8 4a 9c 07 00       	call   0x1013f5f0
100c59a6:	83 c4 08             	add    esp,0x8
100c59a9:	85 c0                	test   eax,eax
100c59ab:	0f 84 a2 00 00 00    	je     0x100c5a53
100c59b1:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c59b7:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c59bd:	ba 0a 00 00 00       	mov    edx,0xa
100c59c2:	3b c2                	cmp    eax,edx
100c59c4:	0f 42 d0             	cmovb  edx,eax
100c59c7:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c59ce:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c59d5:	2b c2                	sub    eax,edx
100c59d7:	89 85 e8 f2 ff ff    	mov    DWORD PTR [ebp-0xd18],eax
100c59dd:	40                   	inc    eax
100c59de:	50                   	push   eax
100c59df:	8d 04 11             	lea    eax,[ecx+edx*1]
100c59e2:	50                   	push   eax
100c59e3:	51                   	push   ecx
100c59e4:	e8 c7 ac 07 00       	call   0x101406b0
100c59e9:	8b b5 ec f2 ff ff    	mov    esi,DWORD PTR [ebp-0xd14]
100c59ef:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c59f5:	8b bd d8 f2 ff ff    	mov    edi,DWORD PTR [ebp-0xd28]
100c59fb:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c5a01:	83 c4 0c             	add    esp,0xc
100c5a04:	83 fe 10             	cmp    esi,0x10
100c5a07:	0f 43 cf             	cmovae ecx,edi
100c5a0a:	2b d1                	sub    edx,ecx
100c5a0c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c5a10:	8a 01                	mov    al,BYTE PTR [ecx]
100c5a12:	8d 49 01             	lea    ecx,[ecx+0x1]
100c5a15:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c5a19:	84 c0                	test   al,al
100c5a1b:	75 f3                	jne    0x100c5a10
100c5a1d:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5a23:	3d 00 01 00 00       	cmp    eax,0x100
100c5a28:	0f 83 2f 0b 00 00    	jae    0x100c655d
100c5a2e:	8d 8b 4c 21 00 00    	lea    ecx,[ebx+0x214c]
100c5a34:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c5a3c:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c5a42:	2b d1                	sub    edx,ecx
100c5a44:	8a 01                	mov    al,BYTE PTR [ecx]
100c5a46:	8d 49 01             	lea    ecx,[ecx+0x1]
100c5a49:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c5a4d:	84 c0                	test   al,al
100c5a4f:	75 f3                	jne    0x100c5a44
100c5a51:	eb 0c                	jmp    0x100c5a5f
100c5a53:	8b b5 ec f2 ff ff    	mov    esi,DWORD PTR [ebp-0xd14]
100c5a59:	8b bd d8 f2 ff ff    	mov    edi,DWORD PTR [ebp-0xd28]
100c5a5f:	83 fe 10             	cmp    esi,0x10
100c5a62:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c5a68:	68 8c 14 1b 10       	push   0x101b148c
100c5a6d:	0f 43 c7             	cmovae eax,edi
100c5a70:	50                   	push   eax
100c5a71:	e8 7a 9b 07 00       	call   0x1013f5f0
100c5a76:	83 c4 08             	add    esp,0x8
100c5a79:	85 c0                	test   eax,eax
100c5a7b:	0f 84 9a 00 00 00    	je     0x100c5b1b
100c5a81:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5a87:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5a8d:	ba 17 00 00 00       	mov    edx,0x17
100c5a92:	3b c2                	cmp    eax,edx
100c5a94:	0f 42 d0             	cmovb  edx,eax
100c5a97:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5a9e:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5aa5:	2b c2                	sub    eax,edx
100c5aa7:	89 85 e8 f2 ff ff    	mov    DWORD PTR [ebp-0xd18],eax
100c5aad:	40                   	inc    eax
100c5aae:	50                   	push   eax
100c5aaf:	8d 04 11             	lea    eax,[ecx+edx*1]
100c5ab2:	50                   	push   eax
100c5ab3:	51                   	push   ecx
100c5ab4:	e8 f7 ab 07 00       	call   0x101406b0
100c5ab9:	83 c4 0c             	add    esp,0xc
100c5abc:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5ac2:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5ac9:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c5acf:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5ad6:	2b d1                	sub    edx,ecx
100c5ad8:	0f 1f 84 00 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100c5ae0:	8a 01                	mov    al,BYTE PTR [ecx]
100c5ae2:	8d 49 01             	lea    ecx,[ecx+0x1]
100c5ae5:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c5ae9:	84 c0                	test   al,al
100c5aeb:	75 f3                	jne    0x100c5ae0
100c5aed:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5af3:	3d 00 01 00 00       	cmp    eax,0x100
100c5af8:	0f 83 5f 0a 00 00    	jae    0x100c655d
100c5afe:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c5b06:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c5b0c:	50                   	push   eax
100c5b0d:	e8 4c 5a 0a 00       	call   0x1016b55e
100c5b12:	83 c4 04             	add    esp,0x4
100c5b15:	89 83 3c 06 00 00    	mov    DWORD PTR [ebx+0x63c],eax
100c5b1b:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5b22:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c5b28:	68 a4 14 1b 10       	push   0x101b14a4
100c5b2d:	0f 43 85 d8 f2 ff ff 	cmovae eax,DWORD PTR [ebp-0xd28]
100c5b34:	50                   	push   eax
100c5b35:	e8 b6 9a 07 00       	call   0x1013f5f0
100c5b3a:	83 c4 08             	add    esp,0x8
100c5b3d:	85 c0                	test   eax,eax
100c5b3f:	0f 84 96 00 00 00    	je     0x100c5bdb
100c5b45:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5b4b:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5b51:	ba 15 00 00 00       	mov    edx,0x15
100c5b56:	3b c2                	cmp    eax,edx
100c5b58:	0f 42 d0             	cmovb  edx,eax
100c5b5b:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5b62:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5b69:	2b c2                	sub    eax,edx
100c5b6b:	89 85 e8 f2 ff ff    	mov    DWORD PTR [ebp-0xd18],eax
100c5b71:	40                   	inc    eax
100c5b72:	50                   	push   eax
100c5b73:	8d 04 11             	lea    eax,[ecx+edx*1]
100c5b76:	50                   	push   eax
100c5b77:	51                   	push   ecx
100c5b78:	e8 33 ab 07 00       	call   0x101406b0
100c5b7d:	83 c4 0c             	add    esp,0xc
100c5b80:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5b86:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5b8d:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c5b93:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5b9a:	2b d1                	sub    edx,ecx
100c5b9c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c5ba0:	8a 01                	mov    al,BYTE PTR [ecx]
100c5ba2:	8d 49 01             	lea    ecx,[ecx+0x1]
100c5ba5:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c5ba9:	84 c0                	test   al,al
100c5bab:	75 f3                	jne    0x100c5ba0
100c5bad:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5bb3:	3d 00 01 00 00       	cmp    eax,0x100
100c5bb8:	0f 83 9f 09 00 00    	jae    0x100c655d
100c5bbe:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c5bc6:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c5bcc:	50                   	push   eax
100c5bcd:	e8 8c 59 0a 00       	call   0x1016b55e
100c5bd2:	83 c4 04             	add    esp,0x4
100c5bd5:	89 83 40 06 00 00    	mov    DWORD PTR [ebx+0x640],eax
100c5bdb:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5be2:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c5be8:	68 bc 14 1b 10       	push   0x101b14bc
100c5bed:	0f 43 85 d8 f2 ff ff 	cmovae eax,DWORD PTR [ebp-0xd28]
100c5bf4:	50                   	push   eax
100c5bf5:	e8 f6 99 07 00       	call   0x1013f5f0
100c5bfa:	83 c4 08             	add    esp,0x8
100c5bfd:	85 c0                	test   eax,eax
100c5bff:	0f 84 96 00 00 00    	je     0x100c5c9b
100c5c05:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5c0b:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5c11:	ba 19 00 00 00       	mov    edx,0x19
100c5c16:	3b c2                	cmp    eax,edx
100c5c18:	0f 42 d0             	cmovb  edx,eax
100c5c1b:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5c22:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5c29:	2b c2                	sub    eax,edx
100c5c2b:	89 85 e8 f2 ff ff    	mov    DWORD PTR [ebp-0xd18],eax
100c5c31:	40                   	inc    eax
100c5c32:	50                   	push   eax
100c5c33:	8d 04 11             	lea    eax,[ecx+edx*1]
100c5c36:	50                   	push   eax
100c5c37:	51                   	push   ecx
100c5c38:	e8 73 aa 07 00       	call   0x101406b0
100c5c3d:	83 c4 0c             	add    esp,0xc
100c5c40:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5c46:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5c4d:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c5c53:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5c5a:	2b d1                	sub    edx,ecx
100c5c5c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c5c60:	8a 01                	mov    al,BYTE PTR [ecx]
100c5c62:	8d 49 01             	lea    ecx,[ecx+0x1]
100c5c65:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c5c69:	84 c0                	test   al,al
100c5c6b:	75 f3                	jne    0x100c5c60
100c5c6d:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5c73:	3d 00 01 00 00       	cmp    eax,0x100
100c5c78:	0f 83 df 08 00 00    	jae    0x100c655d
100c5c7e:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c5c86:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c5c8c:	50                   	push   eax
100c5c8d:	e8 cc 58 0a 00       	call   0x1016b55e
100c5c92:	83 c4 04             	add    esp,0x4
100c5c95:	89 83 44 06 00 00    	mov    DWORD PTR [ebx+0x644],eax
100c5c9b:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5ca2:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c5ca8:	68 d8 14 1b 10       	push   0x101b14d8
100c5cad:	0f 43 85 d8 f2 ff ff 	cmovae eax,DWORD PTR [ebp-0xd28]
100c5cb4:	50                   	push   eax
100c5cb5:	e8 36 99 07 00       	call   0x1013f5f0
100c5cba:	83 c4 08             	add    esp,0x8
100c5cbd:	85 c0                	test   eax,eax
100c5cbf:	0f 84 96 00 00 00    	je     0x100c5d5b
100c5cc5:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5ccb:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5cd1:	ba 20 00 00 00       	mov    edx,0x20
100c5cd6:	3b c2                	cmp    eax,edx
100c5cd8:	0f 42 d0             	cmovb  edx,eax
100c5cdb:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5ce2:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5ce9:	2b c2                	sub    eax,edx
100c5ceb:	89 85 e8 f2 ff ff    	mov    DWORD PTR [ebp-0xd18],eax
100c5cf1:	40                   	inc    eax
100c5cf2:	50                   	push   eax
100c5cf3:	8d 04 11             	lea    eax,[ecx+edx*1]
100c5cf6:	50                   	push   eax
100c5cf7:	51                   	push   ecx
100c5cf8:	e8 b3 a9 07 00       	call   0x101406b0
100c5cfd:	83 c4 0c             	add    esp,0xc
100c5d00:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5d06:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5d0d:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c5d13:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5d1a:	2b d1                	sub    edx,ecx
100c5d1c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c5d20:	8a 01                	mov    al,BYTE PTR [ecx]
100c5d22:	8d 49 01             	lea    ecx,[ecx+0x1]
100c5d25:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c5d29:	84 c0                	test   al,al
100c5d2b:	75 f3                	jne    0x100c5d20
100c5d2d:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5d33:	3d 00 01 00 00       	cmp    eax,0x100
100c5d38:	0f 83 1f 08 00 00    	jae    0x100c655d
100c5d3e:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c5d46:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c5d4c:	50                   	push   eax
100c5d4d:	e8 0c 58 0a 00       	call   0x1016b55e
100c5d52:	83 c4 04             	add    esp,0x4
100c5d55:	89 83 70 06 00 00    	mov    DWORD PTR [ebx+0x670],eax
100c5d5b:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5d62:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c5d68:	68 fc 14 1b 10       	push   0x101b14fc
100c5d6d:	0f 43 85 d8 f2 ff ff 	cmovae eax,DWORD PTR [ebp-0xd28]
100c5d74:	50                   	push   eax
100c5d75:	e8 76 98 07 00       	call   0x1013f5f0
100c5d7a:	83 c4 08             	add    esp,0x8
100c5d7d:	85 c0                	test   eax,eax
100c5d7f:	0f 84 96 00 00 00    	je     0x100c5e1b
100c5d85:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5d8b:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5d91:	ba 23 00 00 00       	mov    edx,0x23
100c5d96:	3b c2                	cmp    eax,edx
100c5d98:	0f 42 d0             	cmovb  edx,eax
100c5d9b:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5da2:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5da9:	2b c2                	sub    eax,edx
100c5dab:	89 85 e8 f2 ff ff    	mov    DWORD PTR [ebp-0xd18],eax
100c5db1:	40                   	inc    eax
100c5db2:	50                   	push   eax
100c5db3:	8d 04 11             	lea    eax,[ecx+edx*1]
100c5db6:	50                   	push   eax
100c5db7:	51                   	push   ecx
100c5db8:	e8 f3 a8 07 00       	call   0x101406b0
100c5dbd:	83 c4 0c             	add    esp,0xc
100c5dc0:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5dc6:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5dcd:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c5dd3:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5dda:	2b d1                	sub    edx,ecx
100c5ddc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c5de0:	8a 01                	mov    al,BYTE PTR [ecx]
100c5de2:	8d 49 01             	lea    ecx,[ecx+0x1]
100c5de5:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c5de9:	84 c0                	test   al,al
100c5deb:	75 f3                	jne    0x100c5de0
100c5ded:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5df3:	3d 00 01 00 00       	cmp    eax,0x100
100c5df8:	0f 83 5f 07 00 00    	jae    0x100c655d
100c5dfe:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c5e06:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c5e0c:	50                   	push   eax
100c5e0d:	e8 4c 57 0a 00       	call   0x1016b55e
100c5e12:	83 c4 04             	add    esp,0x4
100c5e15:	89 83 74 06 00 00    	mov    DWORD PTR [ebx+0x674],eax
100c5e1b:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5e22:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c5e28:	68 20 15 1b 10       	push   0x101b1520
100c5e2d:	0f 43 85 d8 f2 ff ff 	cmovae eax,DWORD PTR [ebp-0xd28]
100c5e34:	50                   	push   eax
100c5e35:	e8 b6 97 07 00       	call   0x1013f5f0
100c5e3a:	83 c4 08             	add    esp,0x8
100c5e3d:	85 c0                	test   eax,eax
100c5e3f:	0f 84 96 00 00 00    	je     0x100c5edb
100c5e45:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5e4b:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5e51:	ba 14 00 00 00       	mov    edx,0x14
100c5e56:	3b c2                	cmp    eax,edx
100c5e58:	0f 42 d0             	cmovb  edx,eax
100c5e5b:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5e62:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5e69:	2b c2                	sub    eax,edx
100c5e6b:	89 85 e8 f2 ff ff    	mov    DWORD PTR [ebp-0xd18],eax
100c5e71:	40                   	inc    eax
100c5e72:	50                   	push   eax
100c5e73:	8d 04 11             	lea    eax,[ecx+edx*1]
100c5e76:	50                   	push   eax
100c5e77:	51                   	push   ecx
100c5e78:	e8 33 a8 07 00       	call   0x101406b0
100c5e7d:	83 c4 0c             	add    esp,0xc
100c5e80:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5e86:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5e8d:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c5e93:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5e9a:	2b d1                	sub    edx,ecx
100c5e9c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c5ea0:	8a 01                	mov    al,BYTE PTR [ecx]
100c5ea2:	8d 49 01             	lea    ecx,[ecx+0x1]
100c5ea5:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c5ea9:	84 c0                	test   al,al
100c5eab:	75 f3                	jne    0x100c5ea0
100c5ead:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5eb3:	3d 00 01 00 00       	cmp    eax,0x100
100c5eb8:	0f 83 9f 06 00 00    	jae    0x100c655d
100c5ebe:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c5ec6:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c5ecc:	50                   	push   eax
100c5ecd:	e8 8c 56 0a 00       	call   0x1016b55e
100c5ed2:	83 c4 04             	add    esp,0x4
100c5ed5:	89 83 64 06 00 00    	mov    DWORD PTR [ebx+0x664],eax
100c5edb:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5ee2:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c5ee8:	68 38 15 1b 10       	push   0x101b1538
100c5eed:	0f 43 85 d8 f2 ff ff 	cmovae eax,DWORD PTR [ebp-0xd28]
100c5ef4:	50                   	push   eax
100c5ef5:	e8 f6 96 07 00       	call   0x1013f5f0
100c5efa:	83 c4 08             	add    esp,0x8
100c5efd:	85 c0                	test   eax,eax
100c5eff:	0f 84 96 00 00 00    	je     0x100c5f9b
100c5f05:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5f0b:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5f11:	ba 14 00 00 00       	mov    edx,0x14
100c5f16:	3b c2                	cmp    eax,edx
100c5f18:	0f 42 d0             	cmovb  edx,eax
100c5f1b:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5f22:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5f29:	2b c2                	sub    eax,edx
100c5f2b:	89 85 e8 f2 ff ff    	mov    DWORD PTR [ebp-0xd18],eax
100c5f31:	40                   	inc    eax
100c5f32:	50                   	push   eax
100c5f33:	8d 04 11             	lea    eax,[ecx+edx*1]
100c5f36:	50                   	push   eax
100c5f37:	51                   	push   ecx
100c5f38:	e8 73 a7 07 00       	call   0x101406b0
100c5f3d:	83 c4 0c             	add    esp,0xc
100c5f40:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5f46:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5f4d:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c5f53:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5f5a:	2b d1                	sub    edx,ecx
100c5f5c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c5f60:	8a 01                	mov    al,BYTE PTR [ecx]
100c5f62:	8d 49 01             	lea    ecx,[ecx+0x1]
100c5f65:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c5f69:	84 c0                	test   al,al
100c5f6b:	75 f3                	jne    0x100c5f60
100c5f6d:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5f73:	3d 00 01 00 00       	cmp    eax,0x100
100c5f78:	0f 83 df 05 00 00    	jae    0x100c655d
100c5f7e:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c5f86:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c5f8c:	50                   	push   eax
100c5f8d:	e8 cc 55 0a 00       	call   0x1016b55e
100c5f92:	83 c4 04             	add    esp,0x4
100c5f95:	89 83 68 06 00 00    	mov    DWORD PTR [ebx+0x668],eax
100c5f9b:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5fa2:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c5fa8:	68 50 15 1b 10       	push   0x101b1550
100c5fad:	0f 43 85 d8 f2 ff ff 	cmovae eax,DWORD PTR [ebp-0xd28]
100c5fb4:	50                   	push   eax
100c5fb5:	e8 36 96 07 00       	call   0x1013f5f0
100c5fba:	83 c4 08             	add    esp,0x8
100c5fbd:	85 c0                	test   eax,eax
100c5fbf:	0f 84 96 00 00 00    	je     0x100c605b
100c5fc5:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c5fcb:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c5fd1:	ba 12 00 00 00       	mov    edx,0x12
100c5fd6:	3b c2                	cmp    eax,edx
100c5fd8:	0f 42 d0             	cmovb  edx,eax
100c5fdb:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c5fe2:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c5fe9:	2b c2                	sub    eax,edx
100c5feb:	89 85 e8 f2 ff ff    	mov    DWORD PTR [ebp-0xd18],eax
100c5ff1:	40                   	inc    eax
100c5ff2:	50                   	push   eax
100c5ff3:	8d 04 11             	lea    eax,[ecx+edx*1]
100c5ff6:	50                   	push   eax
100c5ff7:	51                   	push   ecx
100c5ff8:	e8 b3 a6 07 00       	call   0x101406b0
100c5ffd:	83 c4 0c             	add    esp,0xc
100c6000:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c6006:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c600d:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c6013:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c601a:	2b d1                	sub    edx,ecx
100c601c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c6020:	8a 01                	mov    al,BYTE PTR [ecx]
100c6022:	8d 49 01             	lea    ecx,[ecx+0x1]
100c6025:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c6029:	84 c0                	test   al,al
100c602b:	75 f3                	jne    0x100c6020
100c602d:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c6033:	3d 00 01 00 00       	cmp    eax,0x100
100c6038:	0f 83 1f 05 00 00    	jae    0x100c655d
100c603e:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c6046:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c604c:	50                   	push   eax
100c604d:	e8 0c 55 0a 00       	call   0x1016b55e
100c6052:	83 c4 04             	add    esp,0x4
100c6055:	89 83 6c 06 00 00    	mov    DWORD PTR [ebx+0x66c],eax
100c605b:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c6062:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c6068:	68 64 15 1b 10       	push   0x101b1564
100c606d:	0f 43 85 d8 f2 ff ff 	cmovae eax,DWORD PTR [ebp-0xd28]
100c6074:	50                   	push   eax
100c6075:	e8 76 95 07 00       	call   0x1013f5f0
100c607a:	83 c4 08             	add    esp,0x8
100c607d:	85 c0                	test   eax,eax
100c607f:	0f 84 96 00 00 00    	je     0x100c611b
100c6085:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c608b:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c6091:	ba 18 00 00 00       	mov    edx,0x18
100c6096:	3b c2                	cmp    eax,edx
100c6098:	0f 42 d0             	cmovb  edx,eax
100c609b:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c60a2:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c60a9:	2b c2                	sub    eax,edx
100c60ab:	89 85 e8 f2 ff ff    	mov    DWORD PTR [ebp-0xd18],eax
100c60b1:	40                   	inc    eax
100c60b2:	50                   	push   eax
100c60b3:	8d 04 11             	lea    eax,[ecx+edx*1]
100c60b6:	50                   	push   eax
100c60b7:	51                   	push   ecx
100c60b8:	e8 f3 a5 07 00       	call   0x101406b0
100c60bd:	83 c4 0c             	add    esp,0xc
100c60c0:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c60c6:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c60cd:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c60d3:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c60da:	2b d1                	sub    edx,ecx
100c60dc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c60e0:	8a 01                	mov    al,BYTE PTR [ecx]
100c60e2:	8d 49 01             	lea    ecx,[ecx+0x1]
100c60e5:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c60e9:	84 c0                	test   al,al
100c60eb:	75 f3                	jne    0x100c60e0
100c60ed:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c60f3:	3d 00 01 00 00       	cmp    eax,0x100
100c60f8:	0f 83 5f 04 00 00    	jae    0x100c655d
100c60fe:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c6106:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c610c:	50                   	push   eax
100c610d:	e8 4c 54 0a 00       	call   0x1016b55e
100c6112:	83 c4 04             	add    esp,0x4
100c6115:	89 83 58 06 00 00    	mov    DWORD PTR [ebx+0x658],eax
100c611b:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c6122:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c6128:	68 90 87 1a 10       	push   0x101a8790
100c612d:	0f 43 85 d8 f2 ff ff 	cmovae eax,DWORD PTR [ebp-0xd28]
100c6134:	50                   	push   eax
100c6135:	e8 b6 94 07 00       	call   0x1013f5f0
100c613a:	83 c4 08             	add    esp,0x8
100c613d:	85 c0                	test   eax,eax
100c613f:	0f 84 44 02 00 00    	je     0x100c6389
100c6145:	8b b5 ec f2 ff ff    	mov    esi,DWORD PTR [ebp-0xd14]
100c614b:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c6151:	8b bd d8 f2 ff ff    	mov    edi,DWORD PTR [ebp-0xd28]
100c6157:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c615d:	83 fe 10             	cmp    esi,0x10
100c6160:	0f 43 cf             	cmovae ecx,edi
100c6163:	2b d1                	sub    edx,ecx
100c6165:	8a 01                	mov    al,BYTE PTR [ecx]
100c6167:	8d 49 01             	lea    ecx,[ecx+0x1]
100c616a:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c616e:	84 c0                	test   al,al
100c6170:	75 f3                	jne    0x100c6165
100c6172:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c6178:	3d 00 01 00 00       	cmp    eax,0x100
100c617d:	0f 83 da 03 00 00    	jae    0x100c655d
100c6183:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c618b:	83 fe 10             	cmp    esi,0x10
100c618e:	6a 00                	push   0x0
100c6190:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c6196:	8b cb                	mov    ecx,ebx
100c6198:	0f 43 c7             	cmovae eax,edi
100c619b:	6a 00                	push   0x0
100c619d:	50                   	push   eax
100c619e:	e8 dd a8 01 00       	call   0x100e0a80
100c61a3:	8b bd 04 f1 ff ff    	mov    edi,DWORD PTR [ebp-0xefc]
100c61a9:	33 db                	xor    ebx,ebx
100c61ab:	81 c7 14 25 00 00    	add    edi,0x2514
100c61b1:	8b 37                	mov    esi,DWORD PTR [edi]
100c61b3:	85 f6                	test   esi,esi
100c61b5:	0f 84 bb 01 00 00    	je     0x100c6376
100c61bb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c61c0:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c61c3:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100c61c9:	03 01                	add    eax,DWORD PTR [ecx]
100c61cb:	b9 e4 9a 1a 10       	mov    ecx,0x101a9ae4
100c61d0:	8a 10                	mov    dl,BYTE PTR [eax]
100c61d2:	3a 11                	cmp    dl,BYTE PTR [ecx]
100c61d4:	75 1a                	jne    0x100c61f0
100c61d6:	84 d2                	test   dl,dl
100c61d8:	74 12                	je     0x100c61ec
100c61da:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100c61dd:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100c61e0:	75 0e                	jne    0x100c61f0
100c61e2:	83 c0 02             	add    eax,0x2
100c61e5:	83 c1 02             	add    ecx,0x2
100c61e8:	84 d2                	test   dl,dl
100c61ea:	75 e4                	jne    0x100c61d0
100c61ec:	33 c0                	xor    eax,eax
100c61ee:	eb 05                	jmp    0x100c61f5
100c61f0:	1b c0                	sbb    eax,eax
100c61f2:	83 c8 01             	or     eax,0x1
100c61f5:	85 c0                	test   eax,eax
100c61f7:	0f 84 79 01 00 00    	je     0x100c6376
100c61fd:	0f 1f 00             	nop    DWORD PTR [eax]
100c6200:	6b 86 68 01 00 00 2c 	imul   eax,DWORD PTR [esi+0x168],0x2c
100c6207:	83 b8 90 18 23 10 00 	cmp    DWORD PTR [eax+0x10231890],0x0
100c620e:	0f 84 54 01 00 00    	je     0x100c6368
100c6214:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c6219:	8d 95 d8 f2 ff ff    	lea    edx,[ebp-0xd28]
100c621f:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c6226:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c6229:	0f 43 95 d8 f2 ff ff 	cmovae edx,DWORD PTR [ebp-0xd28]
100c6230:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100c6236:	03 01                	add    eax,DWORD PTR [ecx]
100c6238:	8a 08                	mov    cl,BYTE PTR [eax]
100c623a:	3a 0a                	cmp    cl,BYTE PTR [edx]
100c623c:	75 1a                	jne    0x100c6258
100c623e:	84 c9                	test   cl,cl
100c6240:	74 12                	je     0x100c6254
100c6242:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100c6245:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
100c6248:	75 0e                	jne    0x100c6258
100c624a:	83 c0 02             	add    eax,0x2
100c624d:	83 c2 02             	add    edx,0x2
100c6250:	84 c9                	test   cl,cl
100c6252:	75 e4                	jne    0x100c6238
100c6254:	33 c0                	xor    eax,eax
100c6256:	eb 05                	jmp    0x100c625d
100c6258:	1b c0                	sbb    eax,eax
100c625a:	83 c8 01             	or     eax,0x1
100c625d:	85 c0                	test   eax,eax
100c625f:	0f 85 03 01 00 00    	jne    0x100c6368
100c6265:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c626b:	50                   	push   eax
100c626c:	8d 85 48 f0 ff ff    	lea    eax,[ebp-0xfb8]
100c6272:	50                   	push   eax
100c6273:	e8 d8 92 f6 ff       	call   0x1002f550
100c6278:	83 c4 08             	add    esp,0x8
100c627b:	8b 08                	mov    ecx,DWORD PTR [eax]
100c627d:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100c6280:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
100c6285:	75 57                	jne    0x100c62de
100c6287:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c628e:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c6294:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c629a:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c62a1:	2b d1                	sub    edx,ecx
100c62a3:	8a 01                	mov    al,BYTE PTR [ecx]
100c62a5:	8d 49 01             	lea    ecx,[ecx+0x1]
100c62a8:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100c62ac:	84 c0                	test   al,al
100c62ae:	75 f3                	jne    0x100c62a3
100c62b0:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c62b6:	3d 00 01 00 00       	cmp    eax,0x100
100c62bb:	0f 83 9c 02 00 00    	jae    0x100c655d
100c62c1:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c62c9:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c62cf:	50                   	push   eax
100c62d0:	e8 89 52 0a 00       	call   0x1016b55e
100c62d5:	83 c4 04             	add    esp,0x4
100c62d8:	89 86 e4 01 00 00    	mov    DWORD PTR [esi+0x1e4],eax
100c62de:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c62e4:	50                   	push   eax
100c62e5:	8d 85 48 f0 ff ff    	lea    eax,[ebp-0xfb8]
100c62eb:	50                   	push   eax
100c62ec:	e8 5f 92 f6 ff       	call   0x1002f550
100c62f1:	83 c4 08             	add    esp,0x8
100c62f4:	8b 08                	mov    ecx,DWORD PTR [eax]
100c62f6:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100c62f9:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
100c62fe:	0f 85 64 00 00 00    	jne    0x100c6368
100c6304:	83 bd ec f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd14],0x10
100c630b:	8d 8d d8 f2 ff ff    	lea    ecx,[ebp-0xd28]
100c6311:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100c6317:	0f 43 8d d8 f2 ff ff 	cmovae ecx,DWORD PTR [ebp-0xd28]
100c631e:	2b d1                	sub    edx,ecx
100c6320:	8a 01                	mov    al,BYTE PTR [ecx]
100c6322:	8d 49 01             	lea    ecx,[ecx+0x1]
100c6325:	88 44 11 ff          	mov    BYTE PTR [ecx+edx*1-0x1],al
100c6329:	84 c0                	test   al,al
100c632b:	75 f3                	jne    0x100c6320
100c632d:	8b 85 e8 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd18]
100c6333:	3d 00 01 00 00       	cmp    eax,0x100
100c6338:	0f 83 1f 02 00 00    	jae    0x100c655d
100c633e:	c6 84 05 f0 fe ff ff 00 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100c6346:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100c634c:	50                   	push   eax
100c634d:	e8 0c 52 0a 00       	call   0x1016b55e
100c6352:	8b 8e dc 01 00 00    	mov    ecx,DWORD PTR [esi+0x1dc]
100c6358:	83 c4 04             	add    esp,0x4
100c635b:	8b 95 04 f1 ff ff    	mov    edx,DWORD PTR [ebp-0xefc]
100c6361:	89 84 8a 40 25 00 00 	mov    DWORD PTR [edx+ecx*4+0x2540],eax
100c6368:	8b b6 64 01 00 00    	mov    esi,DWORD PTR [esi+0x164]
100c636e:	85 f6                	test   esi,esi
100c6370:	0f 85 8a fe ff ff    	jne    0x100c6200
100c6376:	43                   	inc    ebx
100c6377:	83 c7 04             	add    edi,0x4
100c637a:	83 fb 06             	cmp    ebx,0x6
100c637d:	0f 8c 2e fe ff ff    	jl     0x100c61b1
100c6383:	8b 9d 04 f1 ff ff    	mov    ebx,DWORD PTR [ebp-0xefc]
100c6389:	8d 85 d8 f2 ff ff    	lea    eax,[ebp-0xd28]
100c638f:	50                   	push   eax
100c6390:	8d 85 48 f0 ff ff    	lea    eax,[ebp-0xfb8]
100c6396:	50                   	push   eax
100c6397:	e8 b4 91 f6 ff       	call   0x1002f550
100c639c:	83 c4 08             	add    esp,0x8
100c639f:	8b 08                	mov    ecx,DWORD PTR [eax]
100c63a1:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100c63a4:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
100c63a9:	0f 84 a1 f2 ff ff    	je     0x100c5650
100c63af:	83 bd 8c f2 ff ff 10 	cmp    DWORD PTR [ebp-0xd74],0x10
100c63b6:	8d 85 78 f2 ff ff    	lea    eax,[ebp-0xd88]
100c63bc:	0f 43 85 78 f2 ff ff 	cmovae eax,DWORD PTR [ebp-0xd88]
100c63c3:	50                   	push   eax
100c63c4:	ff 15 00 10 1a 10    	call   DWORD PTR ds:0x101a1000
100c63ca:	8b 85 ec f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd14]
100c63d0:	83 f8 10             	cmp    eax,0x10
100c63d3:	72 10                	jb     0x100c63e5
100c63d5:	40                   	inc    eax
100c63d6:	50                   	push   eax
100c63d7:	ff b5 d8 f2 ff ff    	push   DWORD PTR [ebp-0xd28]
100c63dd:	e8 ae 8e f6 ff       	call   0x1002f290
100c63e2:	83 c4 08             	add    esp,0x8
100c63e5:	8b 85 48 f0 ff ff    	mov    eax,DWORD PTR [ebp-0xfb8]
100c63eb:	c7 85 e8 f2 ff ff 00 00 00 00 	mov    DWORD PTR [ebp-0xd18],0x0
100c63f5:	c7 85 ec f2 ff ff 0f 00 00 00 	mov    DWORD PTR [ebp-0xd14],0xf
100c63ff:	c6 85 d8 f2 ff ff 00 	mov    BYTE PTR [ebp-0xd28],0x0
100c6406:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100c6409:	c7 84 05 48 f0 ff ff 40 db 1a 10 	mov    DWORD PTR [ebp+eax*1-0xfb8],0x101adb40
100c6414:	8b 85 48 f0 ff ff    	mov    eax,DWORD PTR [ebp-0xfb8]
100c641a:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100c641d:	8d 41 90             	lea    eax,[ecx-0x70]
100c6420:	89 84 0d 44 f0 ff ff 	mov    DWORD PTR [ebp+ecx*1-0xfbc],eax
100c6427:	8d 8d 58 f0 ff ff    	lea    ecx,[ebp-0xfa8]
100c642d:	e8 5e 9e f6 ff       	call   0x10030290
100c6432:	8b 85 48 f0 ff ff    	mov    eax,DWORD PTR [ebp-0xfb8]
100c6438:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100c643b:	c7 84 05 48 f0 ff ff b0 da 1a 10 	mov    DWORD PTR [ebp+eax*1-0xfb8],0x101adab0
100c6446:	8b 85 48 f0 ff ff    	mov    eax,DWORD PTR [ebp-0xfb8]
100c644c:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100c644f:	8d 41 e8             	lea    eax,[ecx-0x18]
100c6452:	89 84 0d 44 f0 ff ff 	mov    DWORD PTR [ebp+ecx*1-0xfbc],eax
100c6459:	8d 85 b8 f0 ff ff    	lea    eax,[ebp-0xf48]
100c645f:	c6 45 fc 06          	mov    BYTE PTR [ebp-0x4],0x6
100c6463:	50                   	push   eax
100c6464:	c7 85 b8 f0 ff ff 58 da 1a 10 	mov    DWORD PTR [ebp-0xf48],0x101ada58
100c646e:	e8 82 cb 05 00       	call   0x10122ff5
100c6473:	8b b5 00 f1 ff ff    	mov    esi,DWORD PTR [ebp-0xf00]
100c6479:	83 c4 04             	add    esp,0x4
100c647c:	8b 85 8c f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd74]
100c6482:	c6 45 fc 02          	mov    BYTE PTR [ebp-0x4],0x2
100c6486:	83 f8 10             	cmp    eax,0x10
100c6489:	72 10                	jb     0x100c649b
100c648b:	40                   	inc    eax
100c648c:	50                   	push   eax
100c648d:	ff b5 78 f2 ff ff    	push   DWORD PTR [ebp-0xd88]
100c6493:	e8 f8 8d f6 ff       	call   0x1002f290
100c6498:	83 c4 08             	add    esp,0x8
100c649b:	8d 85 08 f1 ff ff    	lea    eax,[ebp-0xef8]
100c64a1:	50                   	push   eax
100c64a2:	56                   	push   esi
100c64a3:	ff 15 08 10 1a 10    	call   DWORD PTR ds:0x101a1008
100c64a9:	85 c0                	test   eax,eax
100c64ab:	0f 8f af ef ff ff    	jg     0x100c5460
100c64b1:	be 01 00 00 00       	mov    esi,0x1
100c64b6:	8d bb 00 22 00 00    	lea    edi,[ebx+0x2200]
100c64bc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c64c0:	6a 00                	push   0x0
100c64c2:	ff 37                	push   DWORD PTR [edi]
100c64c4:	8b cb                	mov    ecx,ebx
100c64c6:	56                   	push   esi
100c64c7:	e8 94 de 01 00       	call   0x100e4360
100c64cc:	46                   	inc    esi
100c64cd:	8d 7f 04             	lea    edi,[edi+0x4]
100c64d0:	83 fe 06             	cmp    esi,0x6
100c64d3:	7e eb                	jle    0x100c64c0
100c64d5:	8b 85 d4 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd2c]
100c64db:	83 f8 10             	cmp    eax,0x10
100c64de:	72 10                	jb     0x100c64f0
100c64e0:	40                   	inc    eax
100c64e1:	50                   	push   eax
100c64e2:	ff b5 c0 f2 ff ff    	push   DWORD PTR [ebp-0xd40]
100c64e8:	e8 a3 8d f6 ff       	call   0x1002f290
100c64ed:	83 c4 08             	add    esp,0x8
100c64f0:	8b 85 bc f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd44]
100c64f6:	c6 85 c0 f2 ff ff 00 	mov    BYTE PTR [ebp-0xd40],0x0
100c64fd:	c7 85 d4 f2 ff ff 0f 00 00 00 	mov    DWORD PTR [ebp-0xd2c],0xf
100c6507:	c7 85 d0 f2 ff ff 00 00 00 00 	mov    DWORD PTR [ebp-0xd30],0x0
100c6511:	83 f8 10             	cmp    eax,0x10
100c6514:	72 10                	jb     0x100c6526
100c6516:	40                   	inc    eax
100c6517:	50                   	push   eax
100c6518:	ff b5 a8 f2 ff ff    	push   DWORD PTR [ebp-0xd58]
100c651e:	e8 6d 8d f6 ff       	call   0x1002f290
100c6523:	83 c4 08             	add    esp,0x8
100c6526:	8b 85 a4 f2 ff ff    	mov    eax,DWORD PTR [ebp-0xd5c]
100c652c:	83 f8 10             	cmp    eax,0x10
100c652f:	72 10                	jb     0x100c6541
100c6531:	40                   	inc    eax
100c6532:	50                   	push   eax
100c6533:	ff b5 90 f2 ff ff    	push   DWORD PTR [ebp-0xd70]
100c6539:	e8 52 8d f6 ff       	call   0x1002f290
100c653e:	83 c4 08             	add    esp,0x8
100c6541:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
100c6544:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100c654b:	59                   	pop    ecx
100c654c:	5f                   	pop    edi
100c654d:	5e                   	pop    esi
100c654e:	5b                   	pop    ebx
100c654f:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
100c6552:	33 cd                	xor    ecx,ebp
100c6554:	e8 5a 76 07 00       	call   0x1013dbb3
100c6559:	8b e5                	mov    esp,ebp
100c655b:	5d                   	pop    ebp
100c655c:	c3                   	ret
100c655d:	e8 e6 77 07 00       	call   0x1013dd48
