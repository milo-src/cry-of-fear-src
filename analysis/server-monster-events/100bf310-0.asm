
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bf310 <.text+0xbe310>:
100bf310:	55                   	push   ebp
100bf311:	8b ec                	mov    ebp,esp
100bf313:	83 ec 30             	sub    esp,0x30
100bf316:	56                   	push   esi
100bf317:	57                   	push   edi
100bf318:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100bf31b:	8b f1                	mov    esi,ecx
100bf31d:	8b 17                	mov    edx,DWORD PTR [edi]
100bf31f:	8b c2                	mov    eax,edx
100bf321:	3d d1 07 00 00       	cmp    eax,0x7d1
100bf326:	0f 8f 59 03 00 00    	jg     0x100bf685
100bf32c:	0f 84 2c 03 00 00    	je     0x100bf65e
100bf332:	2d e8 03 00 00       	sub    eax,0x3e8
100bf337:	83 f8 15             	cmp    eax,0x15
100bf33a:	0f 87 51 03 00 00    	ja     0x100bf691
100bf340:	ff 24 85 94 f7 0b 10 	jmp    DWORD PTR [eax*4+0x100bf794]
100bf347:	83 be 24 02 00 00 06 	cmp    DWORD PTR [esi+0x224],0x6
100bf34e:	0f 85 36 04 00 00    	jne    0x100bf78a
100bf354:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bf357:	c7 80 74 01 00 00 01 	mov    DWORD PTR [eax+0x174],0x1
100bf35e:	00 00 00 
100bf361:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bf364:	c7 80 64 01 00 00 00 	mov    DWORD PTR [eax+0x164],0x0
100bf36b:	00 00 00 
100bf36e:	5f                   	pop    edi
100bf36f:	5e                   	pop    esi
100bf370:	8b e5                	mov    esp,ebp
100bf372:	5d                   	pop    ebp
100bf373:	c2 04 00             	ret    0x4
100bf376:	83 be 24 02 00 00 06 	cmp    DWORD PTR [esi+0x224],0x6
100bf37d:	0f 85 07 04 00 00    	jne    0x100bf78a
100bf383:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bf386:	c7 80 74 01 00 00 00 	mov    DWORD PTR [eax+0x174],0x0
100bf38d:	00 00 00 
100bf390:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100bf393:	8b 81 b4 01 00 00    	mov    eax,DWORD PTR [ecx+0x1b4]
100bf399:	89 81 64 01 00 00    	mov    DWORD PTR [ecx+0x164],eax
100bf39f:	5f                   	pop    edi
100bf3a0:	5e                   	pop    esi
100bf3a1:	8b e5                	mov    esp,ebp
100bf3a3:	5d                   	pop    ebp
100bf3a4:	c2 04 00             	ret    0x4
100bf3a7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bf3aa:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100bf3b1:	74 0d                	je     0x100bf3c0
100bf3b3:	83 be 24 02 00 00 01 	cmp    DWORD PTR [esi+0x224],0x1
100bf3ba:	0f 84 ca 03 00 00    	je     0x100bf78a
100bf3c0:	6a 64                	push   0x64
100bf3c2:	6a 00                	push   0x0
100bf3c4:	83 ec 08             	sub    esp,0x8
100bf3c7:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x40000000
100bf3ce:	40 
100bf3cf:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100bf3d6:	ff 77 04             	push   DWORD PTR [edi+0x4]
100bf3d9:	6a 04                	push   0x4
100bf3db:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100bf3e1:	e8 0a d6 03 00       	call   0x100fc9f0
100bf3e6:	83 c4 1c             	add    esp,0x1c
100bf3e9:	5f                   	pop    edi
100bf3ea:	5e                   	pop    esi
100bf3eb:	8b e5                	mov    esp,ebp
100bf3ed:	5d                   	pop    ebp
100bf3ee:	c2 04 00             	ret    0x4
100bf3f1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bf3f4:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100bf3fb:	74 0d                	je     0x100bf40a
100bf3fd:	83 be 24 02 00 00 01 	cmp    DWORD PTR [esi+0x224],0x1
100bf404:	0f 84 80 03 00 00    	je     0x100bf78a
100bf40a:	6a 64                	push   0x64
100bf40c:	6a 00                	push   0x0
100bf40e:	83 ec 08             	sub    esp,0x8
100bf411:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x40000000
100bf418:	40 
100bf419:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100bf420:	ff 77 04             	push   DWORD PTR [edi+0x4]
100bf423:	6a 02                	push   0x2
100bf425:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100bf42b:	e8 c0 d5 03 00       	call   0x100fc9f0
100bf430:	83 c4 1c             	add    esp,0x1c
100bf433:	5f                   	pop    edi
100bf434:	5e                   	pop    esi
100bf435:	8b e5                	mov    esp,ebp
100bf437:	5d                   	pop    ebp
100bf438:	c2 04 00             	ret    0x4
100bf43b:	6a 02                	push   0x2
100bf43d:	6a 00                	push   0x0
100bf43f:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100bf445:	83 c4 08             	add    esp,0x8
100bf448:	85 c0                	test   eax,eax
100bf44a:	0f 84 3a 03 00 00    	je     0x100bf78a
100bf450:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bf453:	6a ff                	push   0xffffffff
100bf455:	6a 64                	push   0x64
100bf457:	6a 00                	push   0x0
100bf459:	83 ec 08             	sub    esp,0x8
100bf45c:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x40000000
100bf463:	40 
100bf464:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100bf46b:	ff 77 04             	push   DWORD PTR [edi+0x4]
100bf46e:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100bf474:	e8 d7 ef 03 00       	call   0x100fe450
100bf479:	83 c4 1c             	add    esp,0x1c
100bf47c:	5f                   	pop    edi
100bf47d:	5e                   	pop    esi
100bf47e:	8b e5                	mov    esp,ebp
100bf480:	5d                   	pop    ebp
100bf481:	c2 04 00             	ret    0x4
100bf484:	51                   	push   ecx
100bf485:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100bf48c:	6a 03                	push   0x3
100bf48e:	56                   	push   esi
100bf48f:	56                   	push   esi
100bf490:	ff 77 04             	push   DWORD PTR [edi+0x4]
100bf493:	e8 58 2b 04 00       	call   0x10101ff0
100bf498:	83 c4 14             	add    esp,0x14
100bf49b:	5f                   	pop    edi
100bf49c:	5e                   	pop    esi
100bf49d:	8b e5                	mov    esp,ebp
100bf49f:	5d                   	pop    ebp
100bf4a0:	c2 04 00             	ret    0x4
100bf4a3:	8b 8e 4c 03 00 00    	mov    ecx,DWORD PTR [esi+0x34c]
100bf4a9:	85 c9                	test   ecx,ecx
100bf4ab:	0f 84 d9 02 00 00    	je     0x100bf78a
100bf4b1:	6a 00                	push   0x0
100bf4b3:	e8 98 af 03 00       	call   0x100fa450
100bf4b8:	5f                   	pop    edi
100bf4b9:	5e                   	pop    esi
100bf4ba:	8b e5                	mov    esp,ebp
100bf4bc:	5d                   	pop    ebp
100bf4bd:	c2 04 00             	ret    0x4
100bf4c0:	8b 8e 4c 03 00 00    	mov    ecx,DWORD PTR [esi+0x34c]
100bf4c6:	85 c9                	test   ecx,ecx
100bf4c8:	0f 84 bc 02 00 00    	je     0x100bf78a
100bf4ce:	6a 01                	push   0x1
100bf4d0:	e8 7b af 03 00       	call   0x100fa450
100bf4d5:	5f                   	pop    edi
100bf4d6:	5e                   	pop    esi
100bf4d7:	8b e5                	mov    esp,ebp
100bf4d9:	5d                   	pop    ebp
100bf4da:	c2 04 00             	ret    0x4
100bf4dd:	6a 0a                	push   0xa
100bf4df:	6a 00                	push   0x0
100bf4e1:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100bf4e7:	83 c4 08             	add    esp,0x8
100bf4ea:	83 c0 5f             	add    eax,0x5f
100bf4ed:	50                   	push   eax
100bf4ee:	6a 00                	push   0x0
100bf4f0:	83 ec 08             	sub    esp,0x8
100bf4f3:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100bf4fa:	3f 
100bf4fb:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100bf502:	68 7c f0 1a 10       	push   0x101af07c
100bf507:	e9 ca 01 00 00       	jmp    0x100bf6d6
100bf50c:	8d 45 dc             	lea    eax,[ebp-0x24]
100bf50f:	50                   	push   eax
100bf510:	8d 45 f4             	lea    eax,[ebp-0xc]
100bf513:	50                   	push   eax
100bf514:	ff 77 04             	push   DWORD PTR [edi+0x4]
100bf517:	e8 42 c0 0a 00       	call   0x1016b55e
100bf51c:	83 c4 04             	add    esp,0x4
100bf51f:	8b ce                	mov    ecx,esi
100bf521:	50                   	push   eax
100bf522:	e8 99 f2 f4 ff       	call   0x1000e7c0
100bf527:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100bf52a:	83 ec 0c             	sub    esp,0xc
100bf52d:	8b cc                	mov    ecx,esp
100bf52f:	8b 42 20             	mov    eax,DWORD PTR [edx+0x20]
100bf532:	89 01                	mov    DWORD PTR [ecx],eax
100bf534:	8b 42 24             	mov    eax,DWORD PTR [edx+0x24]
100bf537:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100bf53a:	8b 42 28             	mov    eax,DWORD PTR [edx+0x28]
100bf53d:	51                   	push   ecx
100bf53e:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100bf541:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
100bf546:	c7 04 24 00 00 70 42 	mov    DWORD PTR [esp],0x42700000
100bf54d:	68 f7 00 00 00       	push   0xf7
100bf552:	83 ec 0c             	sub    esp,0xc
100bf555:	8b c4                	mov    eax,esp
100bf557:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100bf55b:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
100bf560:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100bf565:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100bf56a:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100bf56f:	e8 8c 03 06 00       	call   0x1011f900
100bf574:	ff 77 04             	push   DWORD PTR [edi+0x4]
100bf577:	e8 e2 bf 0a 00       	call   0x1016b55e
100bf57c:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100bf57f:	83 c4 24             	add    esp,0x24
100bf582:	89 81 14 01 00 00    	mov    DWORD PTR [ecx+0x114],eax
100bf588:	5f                   	pop    edi
100bf589:	5e                   	pop    esi
100bf58a:	8b e5                	mov    esp,ebp
100bf58c:	5d                   	pop    ebp
100bf58d:	c2 04 00             	ret    0x4
100bf590:	8b 7f 04             	mov    edi,DWORD PTR [edi+0x4]
100bf593:	68 6c 50 1d 10       	push   0x101d506c
100bf598:	ff 76 04             	push   DWORD PTR [esi+0x4]
100bf59b:	e8 50 b5 f4 ff       	call   0x1000aaf0
100bf5a0:	83 c4 08             	add    esp,0x8
100bf5a3:	57                   	push   edi
100bf5a4:	85 c0                	test   eax,eax
100bf5a6:	74 19                	je     0x100bf5c1
100bf5a8:	e8 b1 bf 0a 00       	call   0x1016b55e
100bf5ad:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100bf5b0:	83 c4 04             	add    esp,0x4
100bf5b3:	89 81 14 01 00 00    	mov    DWORD PTR [ecx+0x114],eax
100bf5b9:	5f                   	pop    edi
100bf5ba:	5e                   	pop    esi
100bf5bb:	8b e5                	mov    esp,ebp
100bf5bd:	5d                   	pop    ebp
100bf5be:	c2 04 00             	ret    0x4
100bf5c1:	e8 98 bf 0a 00       	call   0x1016b55e
100bf5c6:	83 c4 04             	add    esp,0x4
100bf5c9:	8b ce                	mov    ecx,esi
100bf5cb:	50                   	push   eax
100bf5cc:	6a 01                	push   0x1
100bf5ce:	e8 6d f5 f4 ff       	call   0x1000eb40
100bf5d3:	5f                   	pop    edi
100bf5d4:	5e                   	pop    esi
100bf5d5:	8b e5                	mov    esp,ebp
100bf5d7:	5d                   	pop    ebp
100bf5d8:	c2 04 00             	ret    0x4
100bf5db:	ff 77 04             	push   DWORD PTR [edi+0x4]
100bf5de:	e8 7b bf 0a 00       	call   0x1016b55e
100bf5e3:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100bf5e6:	83 c4 04             	add    esp,0x4
100bf5e9:	89 81 10 01 00 00    	mov    DWORD PTR [ecx+0x110],eax
100bf5ef:	5f                   	pop    edi
100bf5f0:	5e                   	pop    esi
100bf5f1:	8b e5                	mov    esp,ebp
100bf5f3:	5d                   	pop    ebp
100bf5f4:	c2 04 00             	ret    0x4
100bf5f7:	8d 45 d0             	lea    eax,[ebp-0x30]
100bf5fa:	50                   	push   eax
100bf5fb:	8d 45 e8             	lea    eax,[ebp-0x18]
100bf5fe:	50                   	push   eax
100bf5ff:	6a 00                	push   0x0
100bf601:	e8 ba f1 f4 ff       	call   0x1000e7c0
100bf606:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100bf609:	83 ec 0c             	sub    esp,0xc
100bf60c:	8b cc                	mov    ecx,esp
100bf60e:	8b 42 20             	mov    eax,DWORD PTR [edx+0x20]
100bf611:	89 01                	mov    DWORD PTR [ecx],eax
100bf613:	8b 42 24             	mov    eax,DWORD PTR [edx+0x24]
100bf616:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100bf619:	8b 42 28             	mov    eax,DWORD PTR [edx+0x28]
100bf61c:	51                   	push   ecx
100bf61d:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100bf620:	f3 0f 10 45 e8       	movss  xmm0,DWORD PTR [ebp-0x18]
100bf625:	c7 04 24 00 00 34 42 	mov    DWORD PTR [esp],0x42340000
100bf62c:	68 f7 00 00 00       	push   0xf7
100bf631:	83 ec 0c             	sub    esp,0xc
100bf634:	8b c4                	mov    eax,esp
100bf636:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100bf63a:	f3 0f 10 45 ec       	movss  xmm0,DWORD PTR [ebp-0x14]
100bf63f:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100bf644:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
100bf649:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100bf64e:	e8 ad 02 06 00       	call   0x1011f900
100bf653:	83 c4 20             	add    esp,0x20
100bf656:	5f                   	pop    edi
100bf657:	5e                   	pop    esi
100bf658:	8b e5                	mov    esp,ebp
100bf65a:	5d                   	pop    ebp
100bf65b:	c2 04 00             	ret    0x4
100bf65e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bf661:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x200
100bf668:	02 00 00 
100bf66b:	0f 84 19 01 00 00    	je     0x100bf78a
100bf671:	6a 01                	push   0x1
100bf673:	6a 00                	push   0x0
100bf675:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100bf67b:	83 c4 08             	add    esp,0x8
100bf67e:	6a 64                	push   0x64
100bf680:	e9 8e 00 00 00       	jmp    0x100bf713
100bf685:	2d d2 07 00 00       	sub    eax,0x7d2
100bf68a:	74 65                	je     0x100bf6f1
100bf68c:	83 e8 08             	sub    eax,0x8
100bf68f:	74 2a                	je     0x100bf6bb
100bf691:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bf694:	8b 08                	mov    ecx,DWORD PTR [eax]
100bf696:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100bf69b:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100bf6a1:	51                   	push   ecx
100bf6a2:	52                   	push   edx
100bf6a3:	68 7c 50 1d 10       	push   0x101d507c
100bf6a8:	6a 02                	push   0x2
100bf6aa:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100bf6b0:	83 c4 10             	add    esp,0x10
100bf6b3:	5f                   	pop    edi
100bf6b4:	5e                   	pop    esi
100bf6b5:	8b e5                	mov    esp,ebp
100bf6b7:	5d                   	pop    ebp
100bf6b8:	c2 04 00             	ret    0x4
100bf6bb:	6a 64                	push   0x64
100bf6bd:	6a 00                	push   0x0
100bf6bf:	83 ec 08             	sub    esp,0x8
100bf6c2:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100bf6c9:	3f 
100bf6ca:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100bf6d1:	68 28 d0 1b 10       	push   0x101bd028
100bf6d6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bf6d9:	6a 04                	push   0x4
100bf6db:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100bf6e1:	e8 0a d3 03 00       	call   0x100fc9f0
100bf6e6:	83 c4 1c             	add    esp,0x1c
100bf6e9:	5f                   	pop    edi
100bf6ea:	5e                   	pop    esi
100bf6eb:	8b e5                	mov    esp,ebp
100bf6ed:	5d                   	pop    ebp
100bf6ee:	c2 04 00             	ret    0x4
100bf6f1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bf6f4:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x200
100bf6fb:	02 00 00 
100bf6fe:	0f 84 86 00 00 00    	je     0x100bf78a
100bf704:	6a 01                	push   0x1
100bf706:	6a 00                	push   0x0
100bf708:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100bf70e:	83 c4 08             	add    esp,0x8
100bf711:	6a 5a                	push   0x5a
100bf713:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100bf716:	85 c0                	test   eax,eax
100bf718:	6a 00                	push   0x0
100bf71a:	b9 3c 50 1d 10       	mov    ecx,0x101d503c
100bf71f:	bf 54 50 1d 10       	mov    edi,0x101d5054
100bf724:	0f 45 cf             	cmovne ecx,edi
100bf727:	83 ec 08             	sub    esp,0x8
100bf72a:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100bf731:	3f 
100bf732:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100bf739:	8b 82 0c 02 00 00    	mov    eax,DWORD PTR [edx+0x20c]
100bf73f:	51                   	push   ecx
100bf740:	6a 04                	push   0x4
100bf742:	50                   	push   eax
100bf743:	e8 a8 d2 03 00       	call   0x100fc9f0
100bf748:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bf74b:	83 c4 1c             	add    esp,0x1c
100bf74e:	83 b8 c4 01 00 00 00 	cmp    DWORD PTR [eax+0x1c4],0x0
100bf755:	74 33                	je     0x100bf78a
100bf757:	6a 64                	push   0x64
100bf759:	6a 00                	push   0x0
100bf75b:	83 ec 08             	sub    esp,0x8
100bf75e:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100bf765:	3f 
100bf766:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100bf76d:	68 0c 92 1a 10       	push   0x101a920c
100bf772:	6a 00                	push   0x0
100bf774:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100bf77a:	e8 71 d2 03 00       	call   0x100fc9f0
100bf77f:	6a 00                	push   0x0
100bf781:	56                   	push   esi
100bf782:	e8 69 ab 05 00       	call   0x1011a2f0
100bf787:	83 c4 24             	add    esp,0x24
100bf78a:	5f                   	pop    edi
100bf78b:	5e                   	pop    esi
100bf78c:	8b e5                	mov    esp,ebp
100bf78e:	5d                   	pop    ebp
100bf78f:	c2 04 00             	ret    0x4
