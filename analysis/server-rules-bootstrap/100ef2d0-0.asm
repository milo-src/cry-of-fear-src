
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ef2d0 <.text+0xee2d0>:
100ef2d0:	55                   	push   ebp
100ef2d1:	8b ec                	mov    ebp,esp
100ef2d3:	83 ec 48             	sub    esp,0x48
100ef2d6:	56                   	push   esi
100ef2d7:	8b f1                	mov    esi,ecx
100ef2d9:	57                   	push   edi
100ef2da:	80 be bc 03 00 00 00 	cmp    BYTE PTR [esi+0x3bc],0x0
100ef2e1:	0f 84 82 02 00 00    	je     0x100ef569
100ef2e7:	8b 86 2c 25 00 00    	mov    eax,DWORD PTR [esi+0x252c]
100ef2ed:	85 c0                	test   eax,eax
100ef2ef:	0f 84 da 00 00 00    	je     0x100ef3cf
100ef2f5:	8b 78 04             	mov    edi,DWORD PTR [eax+0x4]
100ef2f8:	ba 6c 76 1b 10       	mov    edx,0x101b766c
100ef2fd:	8b 8f 0c 02 00 00    	mov    ecx,DWORD PTR [edi+0x20c]
100ef303:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100ef309:	f7 d9                	neg    ecx
100ef30b:	1b c9                	sbb    ecx,ecx
100ef30d:	23 c8                	and    ecx,eax
100ef30f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ef314:	8b 09                	mov    ecx,DWORD PTR [ecx]
100ef316:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100ef31c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100ef320:	8a 01                	mov    al,BYTE PTR [ecx]
100ef322:	3a 02                	cmp    al,BYTE PTR [edx]
100ef324:	75 1a                	jne    0x100ef340
100ef326:	84 c0                	test   al,al
100ef328:	74 12                	je     0x100ef33c
100ef32a:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100ef32d:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100ef330:	75 0e                	jne    0x100ef340
100ef332:	83 c1 02             	add    ecx,0x2
100ef335:	83 c2 02             	add    edx,0x2
100ef338:	84 c0                	test   al,al
100ef33a:	75 e4                	jne    0x100ef320
100ef33c:	33 c0                	xor    eax,eax
100ef33e:	eb 05                	jmp    0x100ef345
100ef340:	1b c0                	sbb    eax,eax
100ef342:	83 c8 01             	or     eax,0x1
100ef345:	85 c0                	test   eax,eax
100ef347:	0f 85 82 00 00 00    	jne    0x100ef3cf
100ef34d:	57                   	push   edi
100ef34e:	e8 5d 6a f7 ff       	call   0x10065db0
100ef353:	83 c4 04             	add    esp,0x4
100ef356:	80 b8 06 01 00 00 00 	cmp    BYTE PTR [eax+0x106],0x0
100ef35d:	74 18                	je     0x100ef377
100ef35f:	8b 86 2c 25 00 00    	mov    eax,DWORD PTR [esi+0x252c]
100ef365:	83 b8 40 01 00 00 00 	cmp    DWORD PTR [eax+0x140],0x0
100ef36c:	75 09                	jne    0x100ef377
100ef36e:	83 b8 28 01 00 00 00 	cmp    DWORD PTR [eax+0x128],0x0
100ef375:	74 58                	je     0x100ef3cf
100ef377:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ef37a:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100ef380:	6a 00                	push   0x0
100ef382:	ff 35 c4 66 22 10    	push   DWORD PTR ds:0x102266c4
100ef388:	6a 08                	push   0x8
100ef38a:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100ef390:	6a 00                	push   0x0
100ef392:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ef398:	83 c4 14             	add    esp,0x14
100ef39b:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100ef3a1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ef3a4:	6a 64                	push   0x64
100ef3a6:	6a 00                	push   0x0
100ef3a8:	83 ec 08             	sub    esp,0x8
100ef3ab:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100ef3b2:	3f 
100ef3b3:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100ef3ba:	68 14 77 1b 10       	push   0x101b7714
100ef3bf:	6a 02                	push   0x2
100ef3c1:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100ef3c7:	e8 24 d6 00 00       	call   0x100fc9f0
100ef3cc:	83 c4 1c             	add    esp,0x1c
100ef3cf:	80 be bc 03 00 00 00 	cmp    BYTE PTR [esi+0x3bc],0x0
100ef3d6:	74 6b                	je     0x100ef443
100ef3d8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ef3db:	f7 80 84 01 00 00 00 	test   DWORD PTR [eax+0x184],0x1000
100ef3e2:	10 00 00 
100ef3e5:	75 5c                	jne    0x100ef443
100ef3e7:	c6 86 bc 03 00 00 00 	mov    BYTE PTR [esi+0x3bc],0x0
100ef3ee:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100ef3f4:	6a 00                	push   0x0
100ef3f6:	ff 35 c4 66 22 10    	push   DWORD PTR ds:0x102266c4
100ef3fc:	6a 08                	push   0x8
100ef3fe:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100ef404:	6a 00                	push   0x0
100ef406:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ef40c:	83 c4 14             	add    esp,0x14
100ef40f:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100ef415:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ef418:	6a 64                	push   0x64
100ef41a:	6a 00                	push   0x0
100ef41c:	83 ec 08             	sub    esp,0x8
100ef41f:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100ef426:	3f 
100ef427:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100ef42e:	68 14 77 1b 10       	push   0x101b7714
100ef433:	6a 02                	push   0x2
100ef435:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100ef43b:	e8 b0 d5 00 00       	call   0x100fc9f0
100ef440:	83 c4 1c             	add    esp,0x1c
100ef443:	8b 86 2c 25 00 00    	mov    eax,DWORD PTR [esi+0x252c]
100ef449:	85 c0                	test   eax,eax
100ef44b:	74 50                	je     0x100ef49d
100ef44d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100ef450:	ba 6c 76 1b 10       	mov    edx,0x101b766c
100ef455:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
100ef45b:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100ef461:	f7 d9                	neg    ecx
100ef463:	1b c9                	sbb    ecx,ecx
100ef465:	23 c8                	and    ecx,eax
100ef467:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ef46c:	8b 09                	mov    ecx,DWORD PTR [ecx]
100ef46e:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100ef474:	8a 01                	mov    al,BYTE PTR [ecx]
100ef476:	3a 02                	cmp    al,BYTE PTR [edx]
100ef478:	75 1a                	jne    0x100ef494
100ef47a:	84 c0                	test   al,al
100ef47c:	74 12                	je     0x100ef490
100ef47e:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100ef481:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100ef484:	75 0e                	jne    0x100ef494
100ef486:	83 c1 02             	add    ecx,0x2
100ef489:	83 c2 02             	add    edx,0x2
100ef48c:	84 c0                	test   al,al
100ef48e:	75 e4                	jne    0x100ef474
100ef490:	33 c0                	xor    eax,eax
100ef492:	eb 05                	jmp    0x100ef499
100ef494:	1b c0                	sbb    eax,eax
100ef496:	83 c8 01             	or     eax,0x1
100ef499:	85 c0                	test   eax,eax
100ef49b:	74 68                	je     0x100ef505
100ef49d:	80 be bc 03 00 00 00 	cmp    BYTE PTR [esi+0x3bc],0x0
100ef4a4:	74 5f                	je     0x100ef505
100ef4a6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ef4a9:	c6 86 bc 03 00 00 00 	mov    BYTE PTR [esi+0x3bc],0x0
100ef4b0:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100ef4b6:	6a 00                	push   0x0
100ef4b8:	ff 35 c4 66 22 10    	push   DWORD PTR ds:0x102266c4
100ef4be:	6a 08                	push   0x8
100ef4c0:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100ef4c6:	6a 00                	push   0x0
100ef4c8:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ef4ce:	83 c4 14             	add    esp,0x14
100ef4d1:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100ef4d7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ef4da:	6a 64                	push   0x64
100ef4dc:	6a 00                	push   0x0
100ef4de:	83 ec 08             	sub    esp,0x8
100ef4e1:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100ef4e8:	3f 
100ef4e9:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100ef4f0:	68 14 77 1b 10       	push   0x101b7714
100ef4f5:	6a 02                	push   0x2
100ef4f7:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100ef4fd:	e8 ee d4 00 00       	call   0x100fc9f0
100ef502:	83 c4 1c             	add    esp,0x1c
100ef505:	0f 57 c0             	xorps  xmm0,xmm0
100ef508:	0f 2f 86 f0 21 00 00 	comiss xmm0,DWORD PTR [esi+0x21f0]
100ef50f:	72 58                	jb     0x100ef569
100ef511:	80 be bc 03 00 00 00 	cmp    BYTE PTR [esi+0x3bc],0x0
100ef518:	74 4f                	je     0x100ef569
100ef51a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ef51d:	c6 86 bc 03 00 00 00 	mov    BYTE PTR [esi+0x3bc],0x0
100ef524:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100ef52a:	6a 00                	push   0x0
100ef52c:	ff 35 c4 66 22 10    	push   DWORD PTR ds:0x102266c4
100ef532:	6a 08                	push   0x8
100ef534:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100ef53a:	6a 00                	push   0x0
100ef53c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ef542:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100ef548:	83 c4 08             	add    esp,0x8
100ef54b:	8b ce                	mov    ecx,esi
100ef54d:	c7 44 24 08 00 00 00 	mov    DWORD PTR [esp+0x8],0x3f000000
100ef554:	3f 
100ef555:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x3f000000
100ef55c:	3f 
100ef55d:	c7 04 24 00 00 70 c1 	mov    DWORD PTR [esp],0xc1700000
100ef564:	e8 47 9c 00 00       	call   0x100f91b0
100ef569:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100ef56f:	85 c9                	test   ecx,ecx
100ef571:	0f 84 3b 02 00 00    	je     0x100ef7b2
100ef577:	8b 01                	mov    eax,DWORD PTR [ecx]
100ef579:	8b 40 20             	mov    eax,DWORD PTR [eax+0x20]
100ef57c:	ff d0                	call   eax
100ef57e:	85 c0                	test   eax,eax
100ef580:	0f 84 2c 02 00 00    	je     0x100ef7b2
100ef586:	8b 06                	mov    eax,DWORD PTR [esi]
100ef588:	8b ce                	mov    ecx,esi
100ef58a:	8b 80 bc 00 00 00    	mov    eax,DWORD PTR [eax+0xbc]
100ef590:	ff d0                	call   eax
100ef592:	85 c0                	test   eax,eax
100ef594:	75 45                	jne    0x100ef5db
100ef596:	38 86 e8 04 00 00    	cmp    BYTE PTR [esi+0x4e8],al
100ef59c:	75 3d                	jne    0x100ef5db
100ef59e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ef5a3:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100ef5a7:	0f 2f 86 d0 03 00 00 	comiss xmm0,DWORD PTR [esi+0x3d0]
100ef5ae:	76 2b                	jbe    0x100ef5db
100ef5b0:	6a 00                	push   0x0
100ef5b2:	6a 02                	push   0x2
100ef5b4:	68 f0 b2 1d 10       	push   0x101db2f0
100ef5b9:	56                   	push   esi
100ef5ba:	e8 51 a2 02 00       	call   0x10119810
100ef5bf:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ef5c4:	83 c4 10             	add    esp,0x10
100ef5c7:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100ef5cb:	f3 0f 58 05 dc da 1d 	addss  xmm0,DWORD PTR ds:0x101ddadc
100ef5d2:	10 
100ef5d3:	f3 0f 11 86 d0 03 00 	movss  DWORD PTR [esi+0x3d0],xmm0
100ef5da:	00 
100ef5db:	8b 06                	mov    eax,DWORD PTR [esi]
100ef5dd:	8b ce                	mov    ecx,esi
100ef5df:	8b 80 bc 00 00 00    	mov    eax,DWORD PTR [eax+0xbc]
100ef5e5:	ff d0                	call   eax
100ef5e7:	85 c0                	test   eax,eax
100ef5e9:	75 1e                	jne    0x100ef609
100ef5eb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ef5f0:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100ef5f4:	0f 2f 86 d4 03 00 00 	comiss xmm0,DWORD PTR [esi+0x3d4]
100ef5fb:	76 0c                	jbe    0x100ef609
100ef5fd:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ef600:	f6 80 84 01 00 00 02 	test   BYTE PTR [eax+0x184],0x2
100ef607:	75 4b                	jne    0x100ef654
100ef609:	8b 06                	mov    eax,DWORD PTR [esi]
100ef60b:	8b ce                	mov    ecx,esi
100ef60d:	8b 80 bc 00 00 00    	mov    eax,DWORD PTR [eax+0xbc]
100ef613:	ff d0                	call   eax
100ef615:	85 c0                	test   eax,eax
100ef617:	0f 85 1b 01 00 00    	jne    0x100ef738
100ef61d:	38 86 e8 04 00 00    	cmp    BYTE PTR [esi+0x4e8],al
100ef623:	0f 85 0f 01 00 00    	jne    0x100ef738
100ef629:	f3 0f 10 8e 2c 1f 00 	movss  xmm1,DWORD PTR [esi+0x1f2c]
100ef630:	00 
100ef631:	0f 2e 0d 70 13 1a 10 	ucomiss xmm1,DWORD PTR ds:0x101a1370
100ef638:	9f                   	lahf
100ef639:	f6 c4 44             	test   ah,0x44
100ef63c:	0f 8b f6 00 00 00    	jnp    0x100ef738
100ef642:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ef647:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100ef64b:	0f 2f c1             	comiss xmm0,xmm1
100ef64e:	0f 86 e4 00 00 00    	jbe    0x100ef738
100ef654:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ef657:	8b ce                	mov    ecx,esi
100ef659:	6a 01                	push   0x1
100ef65b:	6a 01                	push   0x1
100ef65d:	c7 80 84 01 00 00 00 	mov    DWORD PTR [eax+0x184],0x0
100ef664:	00 00 00 
100ef667:	c7 86 54 26 00 00 00 	mov    DWORD PTR [esi+0x2654],0x0
100ef66e:	00 00 00 
100ef671:	e8 1a e3 fe ff       	call   0x100dd990
100ef676:	6a 00                	push   0x0
100ef678:	8b ce                	mov    ecx,esi
100ef67a:	e8 21 15 00 00       	call   0x100f0ba0
100ef67f:	6a 00                	push   0x0
100ef681:	8b ce                	mov    ecx,esi
100ef683:	e8 88 37 00 00       	call   0x100f2e10
100ef688:	8d 86 dc 03 00 00    	lea    eax,[esi+0x3dc]
100ef68e:	c7 86 dc 05 00 00 fe 	mov    DWORD PTR [esi+0x5dc],0xfffffffe
100ef695:	ff ff ff 
100ef698:	c7 86 e0 05 00 00 fe 	mov    DWORD PTR [esi+0x5e0],0xfffffffe
100ef69f:	ff ff ff 
100ef6a2:	bf 01 00 00 00       	mov    edi,0x1
100ef6a7:	c6 86 4c 20 00 00 00 	mov    BYTE PTR [esi+0x204c],0x0
100ef6ae:	c6 86 cc 20 00 00 00 	mov    BYTE PTR [esi+0x20cc],0x0
100ef6b5:	c6 86 4c 21 00 00 00 	mov    BYTE PTR [esi+0x214c],0x0
100ef6bc:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100ef6bf:	90                   	nop
100ef6c0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ef6c3:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100ef6c9:	6a 00                	push   0x0
100ef6cb:	ff 35 34 66 22 10    	push   DWORD PTR ds:0x10226634
100ef6d1:	6a 01                	push   0x1
100ef6d3:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100ef6d9:	57                   	push   edi
100ef6da:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ef6e0:	6a 00                	push   0x0
100ef6e2:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100ef6e8:	83 c4 18             	add    esp,0x18
100ef6eb:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100ef6f1:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100ef6f4:	47                   	inc    edi
100ef6f5:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
100ef6fb:	83 c0 04             	add    eax,0x4
100ef6fe:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100ef701:	83 ff 03             	cmp    edi,0x3
100ef704:	7e ba                	jle    0x100ef6c0
100ef706:	8b ce                	mov    ecx,esi
100ef708:	e8 e3 70 00 00       	call   0x100f67f0
100ef70d:	8b 86 e4 22 00 00    	mov    eax,DWORD PTR [esi+0x22e4]
100ef713:	c1 e8 05             	shr    eax,0x5
100ef716:	f7 d0                	not    eax
100ef718:	83 e0 01             	and    eax,0x1
100ef71b:	50                   	push   eax
100ef71c:	ff 76 04             	push   DWORD PTR [esi+0x4]
100ef71f:	e8 7c f9 f2 ff       	call   0x1001f0a0
100ef724:	83 c4 08             	add    esp,0x8
100ef727:	8b ce                	mov    ecx,esi
100ef729:	e8 a2 83 f2 ff       	call   0x10017ad0
100ef72e:	c7 86 2c 1f 00 00 00 	mov    DWORD PTR [esi+0x1f2c],0x0
100ef735:	00 00 00 
100ef738:	32 c0                	xor    al,al
100ef73a:	68 30 21 1a 10       	push   0x101a2130
100ef73f:	6a 00                	push   0x0
100ef741:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100ef744:	e8 17 8d 02 00       	call   0x10118460
100ef749:	8b f8                	mov    edi,eax
100ef74b:	83 c4 08             	add    esp,0x8
100ef74e:	85 ff                	test   edi,edi
100ef750:	74 43                	je     0x100ef795
100ef752:	57                   	push   edi
100ef753:	8b ce                	mov    ecx,esi
100ef755:	e8 26 86 f2 ff       	call   0x10017d80
100ef75a:	85 c0                	test   eax,eax
100ef75c:	74 13                	je     0x100ef771
100ef75e:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100ef761:	3b fe                	cmp    edi,esi
100ef763:	0f b6 c0             	movzx  eax,al
100ef766:	b9 01 00 00 00       	mov    ecx,0x1
100ef76b:	0f 45 c1             	cmovne eax,ecx
100ef76e:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100ef771:	68 30 21 1a 10       	push   0x101a2130
100ef776:	57                   	push   edi
100ef777:	e8 e4 8c 02 00       	call   0x10118460
100ef77c:	8b f8                	mov    edi,eax
100ef77e:	83 c4 08             	add    esp,0x8
100ef781:	85 ff                	test   edi,edi
100ef783:	75 cd                	jne    0x100ef752
100ef785:	38 45 fc             	cmp    BYTE PTR [ebp-0x4],al
100ef788:	74 0b                	je     0x100ef795
100ef78a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ef78d:	89 b8 0c 01 00 00    	mov    DWORD PTR [eax+0x10c],edi
100ef793:	eb 1d                	jmp    0x100ef7b2
100ef795:	8b 06                	mov    eax,DWORD PTR [esi]
100ef797:	8b ce                	mov    ecx,esi
100ef799:	8b 80 bc 00 00 00    	mov    eax,DWORD PTR [eax+0xbc]
100ef79f:	ff d0                	call   eax
100ef7a1:	85 c0                	test   eax,eax
100ef7a3:	74 0d                	je     0x100ef7b2
100ef7a5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ef7a8:	c7 80 0c 01 00 00 03 	mov    DWORD PTR [eax+0x10c],0x3
100ef7af:	00 00 00 
100ef7b2:	8b 8e 2c 25 00 00    	mov    ecx,DWORD PTR [esi+0x252c]
100ef7b8:	85 c9                	test   ecx,ecx
100ef7ba:	74 05                	je     0x100ef7c1
100ef7bc:	e8 8f c3 02 00       	call   0x1011bb50
100ef7c1:	8a 86 78 22 00 00    	mov    al,BYTE PTR [esi+0x2278]
100ef7c7:	3a 05 89 64 22 10    	cmp    al,BYTE PTR ds:0x10226489
100ef7cd:	74 0b                	je     0x100ef7da
100ef7cf:	a2 89 64 22 10       	mov    ds:0x10226489,al
100ef7d4:	8a 86 78 22 00 00    	mov    al,BYTE PTR [esi+0x2278]
100ef7da:	84 c0                	test   al,al
100ef7dc:	74 22                	je     0x100ef800
100ef7de:	80 be 80 22 00 00 00 	cmp    BYTE PTR [esi+0x2280],0x0
100ef7e5:	75 19                	jne    0x100ef800
100ef7e7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ef7ec:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100ef7f0:	0f 2f 86 70 22 00 00 	comiss xmm0,DWORD PTR [esi+0x2270]
100ef7f7:	76 07                	jbe    0x100ef800
100ef7f9:	8b ce                	mov    ecx,esi
100ef7fb:	e8 a0 9a 00 00       	call   0x100f92a0
100ef800:	80 be e8 04 00 00 00 	cmp    BYTE PTR [esi+0x4e8],0x0
100ef807:	74 67                	je     0x100ef870
100ef809:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ef80e:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100ef812:	0f 2f 86 ec 04 00 00 	comiss xmm0,DWORD PTR [esi+0x4ec]
100ef819:	76 55                	jbe    0x100ef870
100ef81b:	8b 86 f0 04 00 00    	mov    eax,DWORD PTR [esi+0x4f0]
100ef821:	8b c8                	mov    ecx,eax
100ef823:	85 c0                	test   eax,eax
100ef825:	78 27                	js     0x100ef84e
100ef827:	83 f8 05             	cmp    eax,0x5
100ef82a:	7f 22                	jg     0x100ef84e
100ef82c:	6a 00                	push   0x0
100ef82e:	6a 05                	push   0x5
100ef830:	50                   	push   eax
100ef831:	68 04 b3 1d 10       	push   0x101db304
100ef836:	e8 65 b0 02 00       	call   0x1011a8a0
100ef83b:	83 c4 08             	add    esp,0x8
100ef83e:	50                   	push   eax
100ef83f:	56                   	push   esi
100ef840:	e8 cb 9f 02 00       	call   0x10119810
100ef845:	8b 8e f0 04 00 00    	mov    ecx,DWORD PTR [esi+0x4f0]
100ef84b:	83 c4 10             	add    esp,0x10
100ef84e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ef853:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100ef857:	8d 41 ff             	lea    eax,[ecx-0x1]
100ef85a:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
100ef861:	10 
100ef862:	89 86 f0 04 00 00    	mov    DWORD PTR [esi+0x4f0],eax
100ef868:	f3 0f 11 86 ec 04 00 	movss  DWORD PTR [esi+0x4ec],xmm0
100ef86f:	00 
100ef870:	80 be 78 22 00 00 00 	cmp    BYTE PTR [esi+0x2278],0x0
100ef877:	74 31                	je     0x100ef8aa
100ef879:	68 28 b3 1d 10       	push   0x101db328
100ef87e:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100ef884:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
100ef887:	f3 0f 2c 45 fc       	cvttss2si eax,DWORD PTR [ebp-0x4]
100ef88c:	83 c4 04             	add    esp,0x4
100ef88f:	83 f8 10             	cmp    eax,0x10
100ef892:	74 16                	je     0x100ef8aa
100ef894:	51                   	push   ecx
100ef895:	c7 04 24 00 00 80 41 	mov    DWORD PTR [esp],0x41800000
100ef89c:	68 28 b3 1d 10       	push   0x101db328
100ef8a1:	ff 15 34 30 22 10    	call   DWORD PTR ds:0x10223034
100ef8a7:	83 c4 08             	add    esp,0x8
100ef8aa:	8b 8e d0 05 00 00    	mov    ecx,DWORD PTR [esi+0x5d0]
100ef8b0:	8b 86 00 23 00 00    	mov    eax,DWORD PTR [esi+0x2300]
100ef8b6:	f6 c1 40             	test   cl,0x40
100ef8b9:	74 16                	je     0x100ef8d1
100ef8bb:	85 c0                	test   eax,eax
100ef8bd:	75 0b                	jne    0x100ef8ca
100ef8bf:	83 e1 bf             	and    ecx,0xffffffbf
100ef8c2:	89 8e d0 05 00 00    	mov    DWORD PTR [esi+0x5d0],ecx
100ef8c8:	eb 58                	jmp    0x100ef922
100ef8ca:	83 f8 01             	cmp    eax,0x1
100ef8cd:	75 53                	jne    0x100ef922
100ef8cf:	eb 20                	jmp    0x100ef8f1
100ef8d1:	83 f8 01             	cmp    eax,0x1
100ef8d4:	75 4c                	jne    0x100ef922
100ef8d6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ef8db:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100ef8df:	0f 2f 86 ec 03 00 00 	comiss xmm0,DWORD PTR [esi+0x3ec]
100ef8e6:	76 09                	jbe    0x100ef8f1
100ef8e8:	83 c9 40             	or     ecx,0x40
100ef8eb:	89 8e d0 05 00 00    	mov    DWORD PTR [esi+0x5d0],ecx
100ef8f1:	68 28 b3 1d 10       	push   0x101db328
100ef8f6:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100ef8fc:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
100ef8ff:	f3 0f 2c 45 fc       	cvttss2si eax,DWORD PTR [ebp-0x4]
100ef904:	83 c4 04             	add    esp,0x4
100ef907:	83 f8 0e             	cmp    eax,0xe
100ef90a:	74 16                	je     0x100ef922
100ef90c:	51                   	push   ecx
100ef90d:	c7 04 24 00 00 60 41 	mov    DWORD PTR [esp],0x41600000
100ef914:	68 28 b3 1d 10       	push   0x101db328
100ef919:	ff 15 34 30 22 10    	call   DWORD PTR ds:0x10223034
100ef91f:	83 c4 08             	add    esp,0x8
100ef922:	83 be 00 23 00 00 00 	cmp    DWORD PTR [esi+0x2300],0x0
100ef929:	75 3b                	jne    0x100ef966
100ef92b:	68 28 b3 1d 10       	push   0x101db328
100ef930:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100ef936:	8b 8e 84 22 00 00    	mov    ecx,DWORD PTR [esi+0x2284]
100ef93c:	83 c4 04             	add    esp,0x4
100ef93f:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
100ef942:	f3 0f 2c 45 fc       	cvttss2si eax,DWORD PTR [ebp-0x4]
100ef947:	3b c1                	cmp    eax,ecx
100ef949:	74 1b                	je     0x100ef966
100ef94b:	66 0f 6e c1          	movd   xmm0,ecx
100ef94f:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100ef952:	51                   	push   ecx
100ef953:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100ef958:	68 28 b3 1d 10       	push   0x101db328
100ef95d:	ff 15 34 30 22 10    	call   DWORD PTR ds:0x10223034
100ef963:	83 c4 08             	add    esp,0x8
100ef966:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ef969:	f3 0f 10 05 30 b1 1b 	movss  xmm0,DWORD PTR ds:0x101bb130
100ef970:	10 
100ef971:	0f 2f 80 64 01 00 00 	comiss xmm0,DWORD PTR [eax+0x164]
100ef978:	0f 86 82 01 00 00    	jbe    0x100efb00
100ef97e:	80 be 35 04 00 00 00 	cmp    BYTE PTR [esi+0x435],0x0
100ef985:	0f 85 75 01 00 00    	jne    0x100efb00
100ef98b:	8d 8e 90 03 00 00    	lea    ecx,[esi+0x390]
100ef991:	e8 ea 7d f2 ff       	call   0x10017780
100ef996:	85 c0                	test   eax,eax
100ef998:	74 1b                	je     0x100ef9b5
100ef99a:	8d 8e 90 03 00 00    	lea    ecx,[esi+0x390]
100ef9a0:	e8 fb 7d f2 ff       	call   0x100177a0
100ef9a5:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100ef9a8:	83 b8 4c 02 00 00 01 	cmp    DWORD PTR [eax+0x24c],0x1
100ef9af:	0f 84 8c 01 00 00    	je     0x100efb41
100ef9b5:	80 be 3c 04 00 00 00 	cmp    BYTE PTR [esi+0x43c],0x0
100ef9bc:	75 38                	jne    0x100ef9f6
100ef9be:	c6 86 3c 04 00 00 01 	mov    BYTE PTR [esi+0x43c],0x1
100ef9c5:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100ef9cb:	85 c9                	test   ecx,ecx
100ef9cd:	74 27                	je     0x100ef9f6
100ef9cf:	8b 01                	mov    eax,DWORD PTR [ecx]
100ef9d1:	8b 40 20             	mov    eax,DWORD PTR [eax+0x20]
100ef9d4:	ff d0                	call   eax
100ef9d6:	85 c0                	test   eax,eax
100ef9d8:	75 1c                	jne    0x100ef9f6
100ef9da:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100ef9dd:	68 f4 e9 1b 10       	push   0x101be9f4
100ef9e2:	68 70 14 1a 10       	push   0x101a1470
100ef9e7:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100ef9ed:	ff 15 28 31 22 10    	call   DWORD PTR ds:0x10223128
100ef9f3:	83 c4 0c             	add    esp,0xc
100ef9f6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ef9fb:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100ef9ff:	0f 2f 86 d4 04 00 00 	comiss xmm0,DWORD PTR [esi+0x4d4]
100efa06:	76 78                	jbe    0x100efa80
100efa08:	8b 06                	mov    eax,DWORD PTR [esi]
100efa0a:	8b ce                	mov    ecx,esi
100efa0c:	8b 80 bc 00 00 00    	mov    eax,DWORD PTR [eax+0xbc]
100efa12:	ff d0                	call   eax
100efa14:	85 c0                	test   eax,eax
100efa16:	74 68                	je     0x100efa80
100efa18:	80 3d 77 64 22 10 00 	cmp    BYTE PTR ds:0x10226477,0x0
100efa1f:	75 5f                	jne    0x100efa80
100efa21:	8d 8e 88 03 00 00    	lea    ecx,[esi+0x388]
100efa27:	e8 54 7d f2 ff       	call   0x10017780
100efa2c:	85 c0                	test   eax,eax
100efa2e:	75 50                	jne    0x100efa80
100efa30:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100efa33:	83 b8 c4 01 00 00 03 	cmp    DWORD PTR [eax+0x1c4],0x3
100efa3a:	7d 44                	jge    0x100efa80
100efa3c:	6a 64                	push   0x64
100efa3e:	6a 00                	push   0x0
100efa40:	83 ec 08             	sub    esp,0x8
100efa43:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100efa4a:	3f 
100efa4b:	c7 04 24 00 00 80 3e 	mov    DWORD PTR [esp],0x3e800000
100efa52:	68 a8 8e 1a 10       	push   0x101a8ea8
100efa57:	6a 00                	push   0x0
100efa59:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100efa5f:	e8 8c cf 00 00       	call   0x100fc9f0
100efa64:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100efa69:	83 c4 1c             	add    esp,0x1c
100efa6c:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100efa70:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
100efa77:	10 
100efa78:	f3 0f 11 86 d4 04 00 	movss  DWORD PTR [esi+0x4d4],xmm0
100efa7f:	00 
100efa80:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100efa85:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100efa89:	0f 2f 86 cc 21 00 00 	comiss xmm0,DWORD PTR [esi+0x21cc]
100efa90:	0f 86 ab 00 00 00    	jbe    0x100efb41
100efa96:	8b 06                	mov    eax,DWORD PTR [esi]
100efa98:	8b ce                	mov    ecx,esi
100efa9a:	8b 80 bc 00 00 00    	mov    eax,DWORD PTR [eax+0xbc]
100efaa0:	ff d0                	call   eax
100efaa2:	85 c0                	test   eax,eax
100efaa4:	0f 84 97 00 00 00    	je     0x100efb41
100efaaa:	80 3d 77 64 22 10 00 	cmp    BYTE PTR ds:0x10226477,0x0
100efab1:	0f 85 8a 00 00 00    	jne    0x100efb41
100efab7:	8d 8e 88 03 00 00    	lea    ecx,[esi+0x388]
100efabd:	e8 be 7c f2 ff       	call   0x10017780
100efac2:	85 c0                	test   eax,eax
100efac4:	75 7b                	jne    0x100efb41
100efac6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100efac9:	83 b8 c4 01 00 00 03 	cmp    DWORD PTR [eax+0x1c4],0x3
100efad0:	7d 6f                	jge    0x100efb41
100efad2:	8b ce                	mov    ecx,esi
100efad4:	e8 47 70 ff ff       	call   0x100e6b20
100efad9:	6a 1e                	push   0x1e
100efadb:	6a 0a                	push   0xa
100efadd:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100efae3:	83 c4 08             	add    esp,0x8
100efae6:	66 0f 6e c0          	movd   xmm0,eax
100efaea:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100efaef:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100efaf2:	f3 0f 58 00          	addss  xmm0,DWORD PTR [eax]
100efaf6:	f3 0f 11 86 cc 21 00 	movss  DWORD PTR [esi+0x21cc],xmm0
100efafd:	00 
100efafe:	eb 41                	jmp    0x100efb41
100efb00:	80 be 3c 04 00 00 00 	cmp    BYTE PTR [esi+0x43c],0x0
100efb07:	74 38                	je     0x100efb41
100efb09:	c6 86 3c 04 00 00 00 	mov    BYTE PTR [esi+0x43c],0x0
100efb10:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100efb16:	85 c9                	test   ecx,ecx
100efb18:	74 27                	je     0x100efb41
100efb1a:	8b 01                	mov    eax,DWORD PTR [ecx]
100efb1c:	8b 40 20             	mov    eax,DWORD PTR [eax+0x20]
100efb1f:	ff d0                	call   eax
100efb21:	85 c0                	test   eax,eax
100efb23:	75 1c                	jne    0x100efb41
100efb25:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100efb28:	68 34 12 1a 10       	push   0x101a1234
100efb2d:	68 70 14 1a 10       	push   0x101a1470
100efb32:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100efb38:	ff 15 28 31 22 10    	call   DWORD PTR ds:0x10223128
100efb3e:	83 c4 0c             	add    esp,0xc
100efb41:	8b 86 2c 25 00 00    	mov    eax,DWORD PTR [esi+0x252c]
100efb47:	85 c0                	test   eax,eax
100efb49:	0f 84 0e 01 00 00    	je     0x100efc5d
100efb4f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100efb52:	ba 14 72 1b 10       	mov    edx,0x101b7214
100efb57:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
100efb5d:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100efb63:	f7 d9                	neg    ecx
100efb65:	1b c9                	sbb    ecx,ecx
100efb67:	23 c8                	and    ecx,eax
100efb69:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100efb6e:	8b 09                	mov    ecx,DWORD PTR [ecx]
100efb70:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100efb76:	8a 01                	mov    al,BYTE PTR [ecx]
100efb78:	3a 02                	cmp    al,BYTE PTR [edx]
100efb7a:	75 1a                	jne    0x100efb96
100efb7c:	84 c0                	test   al,al
100efb7e:	74 12                	je     0x100efb92
100efb80:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100efb83:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100efb86:	75 0e                	jne    0x100efb96
100efb88:	83 c1 02             	add    ecx,0x2
100efb8b:	83 c2 02             	add    edx,0x2
100efb8e:	84 c0                	test   al,al
100efb90:	75 e4                	jne    0x100efb76
100efb92:	33 c0                	xor    eax,eax
100efb94:	eb 05                	jmp    0x100efb9b
100efb96:	1b c0                	sbb    eax,eax
100efb98:	83 c8 01             	or     eax,0x1
100efb9b:	85 c0                	test   eax,eax
100efb9d:	0f 85 ba 00 00 00    	jne    0x100efc5d
100efba3:	6a 15                	push   0x15
100efba5:	8b ce                	mov    ecx,esi
100efba7:	e8 64 07 ff ff       	call   0x100e0310
100efbac:	85 c0                	test   eax,eax
100efbae:	0f 84 a9 00 00 00    	je     0x100efc5d
100efbb4:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100efbba:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
100efbbe:	0f 2f 86 d0 04 00 00 	comiss xmm0,DWORD PTR [esi+0x4d0]
100efbc5:	0f 86 92 00 00 00    	jbe    0x100efc5d
100efbcb:	66 0f 6e 80 f8 01 00 	movd   xmm0,DWORD PTR [eax+0x1f8]
100efbd2:	00 
100efbd3:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100efbd6:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100efbd9:	f3 0f 10 89 94 02 00 	movss  xmm1,DWORD PTR [ecx+0x294]
100efbe0:	00 
100efbe1:	0f 2e c8             	ucomiss xmm1,xmm0
100efbe4:	9f                   	lahf
100efbe5:	f6 c4 44             	test   ah,0x44
100efbe8:	7b 53                	jnp    0x100efc3d
100efbea:	f3 0f 5c 0d dc da 1d 	subss  xmm1,DWORD PTR ds:0x101ddadc
100efbf1:	10 
100efbf2:	f3 0f 11 89 94 02 00 	movss  DWORD PTR [ecx+0x294],xmm1
100efbf9:	00 
100efbfa:	0f 57 c9             	xorps  xmm1,xmm1
100efbfd:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100efc00:	f3 0f 10 80 94 02 00 	movss  xmm0,DWORD PTR [eax+0x294]
100efc07:	00 
100efc08:	0f 2f c8             	comiss xmm1,xmm0
100efc0b:	f3 0f 10 0d cc 13 1a 	movss  xmm1,DWORD PTR ds:0x101a13cc
100efc12:	10 
100efc13:	76 0f                	jbe    0x100efc24
100efc15:	f3 0f 58 c1          	addss  xmm0,xmm1
100efc19:	f3 0f 11 80 94 02 00 	movss  DWORD PTR [eax+0x294],xmm0
100efc20:	00 
100efc21:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100efc24:	f3 0f 10 80 94 02 00 	movss  xmm0,DWORD PTR [eax+0x294]
100efc2b:	00 
100efc2c:	0f 2f c1             	comiss xmm0,xmm1
100efc2f:	76 0c                	jbe    0x100efc3d
100efc31:	f3 0f 5c c1          	subss  xmm0,xmm1
100efc35:	f3 0f 11 80 94 02 00 	movss  DWORD PTR [eax+0x294],xmm0
100efc3c:	00 
100efc3d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100efc42:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100efc46:	0f 5a c0             	cvtps2pd xmm0,xmm0
100efc49:	f2 0f 58 05 f0 1d 1a 	addsd  xmm0,QWORD PTR ds:0x101a1df0
100efc50:	10 
100efc51:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100efc55:	f3 0f 11 86 d0 04 00 	movss  DWORD PTR [esi+0x4d0],xmm0
100efc5c:	00 
100efc5d:	8d 8e 90 03 00 00    	lea    ecx,[esi+0x390]
100efc63:	e8 18 7b f2 ff       	call   0x10017780
100efc68:	85 c0                	test   eax,eax
100efc6a:	74 18                	je     0x100efc84
100efc6c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100efc6f:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x1000
100efc76:	10 00 00 
100efc79:	75 09                	jne    0x100efc84
100efc7b:	6a 00                	push   0x0
100efc7d:	8b ce                	mov    ecx,esi
100efc7f:	e8 6c f3 fe ff       	call   0x100deff0
100efc84:	8d 8e 90 03 00 00    	lea    ecx,[esi+0x390]
100efc8a:	e8 f1 7a f2 ff       	call   0x10017780
100efc8f:	85 c0                	test   eax,eax
100efc91:	74 1e                	je     0x100efcb1
100efc93:	8d 8e 90 03 00 00    	lea    ecx,[esi+0x390]
100efc99:	e8 02 7b f2 ff       	call   0x100177a0
100efc9e:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100efca1:	50                   	push   eax
100efca2:	e8 59 8b f2 ff       	call   0x10018800
100efca7:	83 c4 04             	add    esp,0x4
100efcaa:	8b c8                	mov    ecx,eax
100efcac:	e8 bf 76 f9 ff       	call   0x10087370
100efcb1:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100efcb4:	8d be 98 26 00 00    	lea    edi,[esi+0x2698]
100efcba:	8b 8e ac 22 00 00    	mov    ecx,DWORD PTR [esi+0x22ac]
100efcc0:	8b 82 84 01 00 00    	mov    eax,DWORD PTR [edx+0x184]
100efcc6:	33 c8                	xor    ecx,eax
100efcc8:	23 c1                	and    eax,ecx
100efcca:	89 86 b0 22 00 00    	mov    DWORD PTR [esi+0x22b0],eax
100efcd0:	8b 82 84 01 00 00    	mov    eax,DWORD PTR [edx+0x184]
100efcd6:	f7 d0                	not    eax
100efcd8:	23 c1                	and    eax,ecx
100efcda:	8b cf                	mov    ecx,edi
100efcdc:	89 86 b4 22 00 00    	mov    DWORD PTR [esi+0x22b4],eax
100efce2:	e8 99 7a f2 ff       	call   0x10017780
100efce7:	85 c0                	test   eax,eax
100efce9:	74 22                	je     0x100efd0d
100efceb:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100efcee:	f3 0f 10 81 60 02 00 	movss  xmm0,DWORD PTR [ecx+0x260]
100efcf5:	00 
100efcf6:	0f 2e 05 80 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1380
100efcfd:	9f                   	lahf
100efcfe:	f6 c4 44             	test   ah,0x44
100efd01:	7b 0a                	jnp    0x100efd0d
100efd03:	c7 81 60 02 00 00 00 	mov    DWORD PTR [ecx+0x260],0x40000000
100efd0a:	00 00 40 
100efd0d:	8b cf                	mov    ecx,edi
100efd0f:	e8 6c 7a f2 ff       	call   0x10017780
100efd14:	85 c0                	test   eax,eax
100efd16:	0f 84 bf 00 00 00    	je     0x100efddb
100efd1c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100efd21:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100efd25:	0f 2f 86 f4 04 00 00 	comiss xmm0,DWORD PTR [esi+0x4f4]
100efd2c:	0f 82 a9 00 00 00    	jb     0x100efddb
100efd32:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100efd35:	b9 34 b3 1d 10       	mov    ecx,0x101db334
100efd3a:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x4000
100efd41:	40 00 00 
100efd44:	b8 44 b3 1d 10       	mov    eax,0x101db344
100efd49:	0f 45 c1             	cmovne eax,ecx
100efd4c:	8b ce                	mov    ecx,esi
100efd4e:	50                   	push   eax
100efd4f:	e8 5c ec f1 ff       	call   0x1000e9b0
100efd54:	33 c9                	xor    ecx,ecx
100efd56:	83 f8 ff             	cmp    eax,0xffffffff
100efd59:	0f 44 c1             	cmove  eax,ecx
100efd5c:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100efd5f:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100efd62:	39 81 2c 01 00 00    	cmp    DWORD PTR [ecx+0x12c],eax
100efd68:	75 09                	jne    0x100efd73
100efd6a:	83 be fc 00 00 00 00 	cmp    DWORD PTR [esi+0xfc],0x0
100efd71:	75 0d                	jne    0x100efd80
100efd73:	c7 81 34 01 00 00 00 	mov    DWORD PTR [ecx+0x134],0x0
100efd7a:	00 00 00 
100efd7d:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100efd80:	c7 81 30 01 00 00 00 	mov    DWORD PTR [ecx+0x130],0x0
100efd87:	00 00 00 
100efd8a:	50                   	push   eax
100efd8b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100efd8e:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100efd94:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
100efd9a:	83 c4 04             	add    esp,0x4
100efd9d:	50                   	push   eax
100efd9e:	e8 ed f5 f1 ff       	call   0x1000f390
100efda3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100efda8:	83 c4 08             	add    esp,0x8
100efdab:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100efdae:	d8 00                	fadd   DWORD PTR [eax]
100efdb0:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100efdb3:	d9 9e f4 04 00 00    	fstp   DWORD PTR [esi+0x4f4]
100efdb9:	39 81 2c 01 00 00    	cmp    DWORD PTR [ecx+0x12c],eax
100efdbf:	74 1a                	je     0x100efddb
100efdc1:	89 81 2c 01 00 00    	mov    DWORD PTR [ecx+0x12c],eax
100efdc7:	8b ce                	mov    ecx,esi
100efdc9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100efdcc:	c7 80 34 01 00 00 00 	mov    DWORD PTR [eax+0x134],0x0
100efdd3:	00 00 00 
100efdd6:	e8 05 ec f1 ff       	call   0x1000e9e0
100efddb:	8b cf                	mov    ecx,edi
100efddd:	e8 9e 79 f2 ff       	call   0x10017780
100efde2:	85 c0                	test   eax,eax
100efde4:	0f 84 3d 01 00 00    	je     0x100eff27
100efdea:	f6 86 b4 22 00 00 20 	test   BYTE PTR [esi+0x22b4],0x20
100efdf1:	0f 84 30 01 00 00    	je     0x100eff27
100efdf7:	8b cf                	mov    ecx,edi
100efdf9:	e8 a2 79 f2 ff       	call   0x100177a0
100efdfe:	8b c8                	mov    ecx,eax
100efe00:	8b 10                	mov    edx,DWORD PTR [eax]
100efe02:	8b 82 d0 00 00 00    	mov    eax,DWORD PTR [edx+0xd0]
100efe08:	ff d0                	call   eax
100efe0a:	85 c0                	test   eax,eax
100efe0c:	74 41                	je     0x100efe4f
100efe0e:	8b cf                	mov    ecx,edi
100efe10:	e8 8b 79 f2 ff       	call   0x100177a0
100efe15:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100efe18:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100efe1e:	85 c0                	test   eax,eax
100efe20:	75 0e                	jne    0x100efe30
100efe22:	50                   	push   eax
100efe23:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100efe29:	83 c4 04             	add    esp,0x4
100efe2c:	85 c0                	test   eax,eax
100efe2e:	74 1f                	je     0x100efe4f
100efe30:	8b 40 7c             	mov    eax,DWORD PTR [eax+0x7c]
100efe33:	85 c0                	test   eax,eax
100efe35:	74 18                	je     0x100efe4f
100efe37:	6a 00                	push   0x0
100efe39:	ff 70 04             	push   DWORD PTR [eax+0x4]
100efe3c:	e8 9f 27 f2 ff       	call   0x100125e0
100efe41:	83 c4 04             	add    esp,0x4
100efe44:	8d 88 a0 26 00 00    	lea    ecx,[eax+0x26a0]
100efe4a:	e8 f1 78 f2 ff       	call   0x10017740
100efe4f:	6a 00                	push   0x0
100efe51:	8b cf                	mov    ecx,edi
100efe53:	e8 e8 78 f2 ff       	call   0x10017740
100efe58:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100efe5d:	b9 50 b3 1d 10       	mov    ecx,0x101db350
100efe62:	8b 00                	mov    eax,DWORD PTR [eax]
100efe64:	89 86 ac 26 00 00    	mov    DWORD PTR [esi+0x26ac],eax
100efe6a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100efe6d:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x4000
100efe74:	40 00 00 
100efe77:	b8 60 b3 1d 10       	mov    eax,0x101db360
100efe7c:	0f 45 c1             	cmovne eax,ecx
100efe7f:	8b ce                	mov    ecx,esi
100efe81:	50                   	push   eax
100efe82:	e8 29 eb f1 ff       	call   0x1000e9b0
100efe87:	33 c9                	xor    ecx,ecx
100efe89:	83 f8 ff             	cmp    eax,0xffffffff
100efe8c:	0f 44 c1             	cmove  eax,ecx
100efe8f:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100efe92:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100efe95:	39 81 2c 01 00 00    	cmp    DWORD PTR [ecx+0x12c],eax
100efe9b:	75 09                	jne    0x100efea6
100efe9d:	83 be fc 00 00 00 00 	cmp    DWORD PTR [esi+0xfc],0x0
100efea4:	75 0d                	jne    0x100efeb3
100efea6:	c7 81 34 01 00 00 00 	mov    DWORD PTR [ecx+0x134],0x0
100efead:	00 00 00 
100efeb0:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100efeb3:	c7 81 30 01 00 00 00 	mov    DWORD PTR [ecx+0x130],0x0
100efeba:	00 00 00 
100efebd:	50                   	push   eax
100efebe:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100efec1:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100efec7:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
100efecd:	83 c4 04             	add    esp,0x4
100efed0:	50                   	push   eax
100efed1:	e8 ba f4 f1 ff       	call   0x1000f390
100efed6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100efedb:	83 c4 08             	add    esp,0x8
100efede:	d8 00                	fadd   DWORD PTR [eax]
100efee0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100efee3:	d9 9e f4 04 00 00    	fstp   DWORD PTR [esi+0x4f4]
100efee9:	c7 80 60 02 00 00 00 	mov    DWORD PTR [eax+0x260],0x40800000
100efef0:	00 80 40 
100efef3:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100efef6:	8b 86 f4 04 00 00    	mov    eax,DWORD PTR [esi+0x4f4]
100efefc:	89 86 fc 04 00 00    	mov    DWORD PTR [esi+0x4fc],eax
100eff02:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100eff05:	39 81 2c 01 00 00    	cmp    DWORD PTR [ecx+0x12c],eax
100eff0b:	74 1a                	je     0x100eff27
100eff0d:	89 81 2c 01 00 00    	mov    DWORD PTR [ecx+0x12c],eax
100eff13:	8b ce                	mov    ecx,esi
100eff15:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100eff18:	c7 80 34 01 00 00 00 	mov    DWORD PTR [eax+0x134],0x0
100eff1f:	00 00 00 
100eff22:	e8 b9 ea f1 ff       	call   0x1000e9e0
100eff27:	8b cf                	mov    ecx,edi
100eff29:	e8 52 78 f2 ff       	call   0x10017780
100eff2e:	85 c0                	test   eax,eax
100eff30:	0f 84 15 01 00 00    	je     0x100f004b
100eff36:	8b cf                	mov    ecx,edi
100eff38:	e8 63 78 f2 ff       	call   0x100177a0
100eff3d:	8b c8                	mov    ecx,eax
100eff3f:	8b 10                	mov    edx,DWORD PTR [eax]
100eff41:	8b 82 bc 00 00 00    	mov    eax,DWORD PTR [edx+0xbc]
100eff47:	ff d0                	call   eax
100eff49:	85 c0                	test   eax,eax
100eff4b:	75 26                	jne    0x100eff73
100eff4d:	8b cf                	mov    ecx,edi
100eff4f:	e8 4c 78 f2 ff       	call   0x100177a0
100eff54:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100eff57:	50                   	push   eax
100eff58:	e8 83 26 f2 ff       	call   0x100125e0
100eff5d:	83 c4 04             	add    esp,0x4
100eff60:	8d 88 a0 26 00 00    	lea    ecx,[eax+0x26a0]
100eff66:	e8 25 78 f2 ff       	call   0x10017790
100eff6b:	3b c6                	cmp    eax,esi
100eff6d:	0f 84 d8 00 00 00    	je     0x100f004b
100eff73:	6a 00                	push   0x0
100eff75:	8b cf                	mov    ecx,edi
100eff77:	e8 c4 77 f2 ff       	call   0x10017740
100eff7c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100eff81:	b9 50 b3 1d 10       	mov    ecx,0x101db350
100eff86:	8b 00                	mov    eax,DWORD PTR [eax]
100eff88:	89 86 ac 26 00 00    	mov    DWORD PTR [esi+0x26ac],eax
100eff8e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100eff91:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x4000
100eff98:	40 00 00 
100eff9b:	b8 60 b3 1d 10       	mov    eax,0x101db360
100effa0:	0f 45 c1             	cmovne eax,ecx
100effa3:	8b ce                	mov    ecx,esi
100effa5:	50                   	push   eax
100effa6:	e8 05 ea f1 ff       	call   0x1000e9b0
100effab:	33 c9                	xor    ecx,ecx
100effad:	83 f8 ff             	cmp    eax,0xffffffff
100effb0:	0f 44 c1             	cmove  eax,ecx
100effb3:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100effb6:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100effb9:	39 81 2c 01 00 00    	cmp    DWORD PTR [ecx+0x12c],eax
100effbf:	75 09                	jne    0x100effca
100effc1:	83 be fc 00 00 00 00 	cmp    DWORD PTR [esi+0xfc],0x0
100effc8:	75 0d                	jne    0x100effd7
100effca:	c7 81 34 01 00 00 00 	mov    DWORD PTR [ecx+0x134],0x0
100effd1:	00 00 00 
100effd4:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100effd7:	c7 81 30 01 00 00 00 	mov    DWORD PTR [ecx+0x130],0x0
100effde:	00 00 00 
100effe1:	50                   	push   eax
100effe2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100effe5:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100effeb:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
100efff1:	83 c4 04             	add    esp,0x4
100efff4:	50                   	push   eax
100efff5:	e8 96 f3 f1 ff       	call   0x1000f390
100efffa:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100effff:	83 c4 08             	add    esp,0x8
100f0002:	d8 00                	fadd   DWORD PTR [eax]
100f0004:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f0007:	d9 9e f4 04 00 00    	fstp   DWORD PTR [esi+0x4f4]
100f000d:	c7 80 60 02 00 00 00 	mov    DWORD PTR [eax+0x260],0x40800000
100f0014:	00 80 40 
100f0017:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100f001a:	8b 86 f4 04 00 00    	mov    eax,DWORD PTR [esi+0x4f4]
100f0020:	89 86 fc 04 00 00    	mov    DWORD PTR [esi+0x4fc],eax
100f0026:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100f0029:	39 81 2c 01 00 00    	cmp    DWORD PTR [ecx+0x12c],eax
100f002f:	74 1a                	je     0x100f004b
100f0031:	89 81 2c 01 00 00    	mov    DWORD PTR [ecx+0x12c],eax
100f0037:	8b ce                	mov    ecx,esi
100f0039:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f003c:	c7 80 34 01 00 00 00 	mov    DWORD PTR [eax+0x134],0x0
100f0043:	00 00 00 
100f0046:	e8 95 e9 f1 ff       	call   0x1000e9e0
100f004b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f004e:	f3 0f 10 80 60 02 00 	movss  xmm0,DWORD PTR [eax+0x260]
100f0055:	00 
100f0056:	0f 2e 05 b8 1e 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1eb8
100f005d:	9f                   	lahf
100f005e:	f6 c4 44             	test   ah,0x44
100f0061:	7a 53                	jp     0x100f00b6
100f0063:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f0068:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100f006c:	0f 2f 86 fc 04 00 00 	comiss xmm0,DWORD PTR [esi+0x4fc]
100f0073:	76 41                	jbe    0x100f00b6
100f0075:	8b cf                	mov    ecx,edi
100f0077:	e8 04 77 f2 ff       	call   0x10017780
100f007c:	85 c0                	test   eax,eax
100f007e:	75 36                	jne    0x100f00b6
100f0080:	8b ce                	mov    ecx,esi
100f0082:	e8 69 67 00 00       	call   0x100f67f0
100f0087:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f008a:	8b ce                	mov    ecx,esi
100f008c:	6a 01                	push   0x1
100f008e:	c7 80 60 02 00 00 00 	mov    DWORD PTR [eax+0x260],0x0
100f0095:	00 00 00 
100f0098:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f009d:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100f00a1:	f3 0f 11 86 f4 04 00 	movss  DWORD PTR [esi+0x4f4],xmm0
100f00a8:	00 
100f00a9:	f3 0f 11 86 04 05 00 	movss  DWORD PTR [esi+0x504],xmm0
100f00b0:	00 
100f00b1:	e8 9a 29 00 00       	call   0x100f2a50
100f00b6:	8b cf                	mov    ecx,edi
100f00b8:	e8 c3 76 f2 ff       	call   0x10017780
100f00bd:	85 c0                	test   eax,eax
100f00bf:	0f 84 26 01 00 00    	je     0x100f01eb
100f00c5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f00c8:	f6 80 84 01 00 00 20 	test   BYTE PTR [eax+0x184],0x20
100f00cf:	0f 84 16 01 00 00    	je     0x100f01eb
100f00d5:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f00da:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100f00de:	0f 2f 86 ac 26 00 00 	comiss xmm0,DWORD PTR [esi+0x26ac]
100f00e5:	0f 86 00 01 00 00    	jbe    0x100f01eb
100f00eb:	8b cf                	mov    ecx,edi
100f00ed:	e8 ae 76 f2 ff       	call   0x100177a0
100f00f2:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100f00f5:	50                   	push   eax
100f00f6:	e8 e5 24 f2 ff       	call   0x100125e0
100f00fb:	83 c4 04             	add    esp,0x4
100f00fe:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100f0101:	85 c0                	test   eax,eax
100f0103:	0f 84 e2 00 00 00    	je     0x100f01eb
100f0109:	8b c8                	mov    ecx,eax
100f010b:	e8 50 17 00 00       	call   0x100f1860
100f0110:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100f0113:	6a 00                	push   0x0
100f0115:	81 c1 a0 26 00 00    	add    ecx,0x26a0
100f011b:	e8 20 76 f2 ff       	call   0x10017740
100f0120:	6a 00                	push   0x0
100f0122:	8b cf                	mov    ecx,edi
100f0124:	e8 17 76 f2 ff       	call   0x10017740
100f0129:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f012e:	b9 50 b3 1d 10       	mov    ecx,0x101db350
100f0133:	8b 00                	mov    eax,DWORD PTR [eax]
100f0135:	89 86 ac 26 00 00    	mov    DWORD PTR [esi+0x26ac],eax
100f013b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f013e:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x4000
100f0145:	40 00 00 
100f0148:	b8 60 b3 1d 10       	mov    eax,0x101db360
100f014d:	0f 45 c1             	cmovne eax,ecx
100f0150:	8b ce                	mov    ecx,esi
100f0152:	50                   	push   eax
100f0153:	e8 58 e8 f1 ff       	call   0x1000e9b0
100f0158:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100f015b:	8b f8                	mov    edi,eax
100f015d:	33 c0                	xor    eax,eax
100f015f:	83 ff ff             	cmp    edi,0xffffffff
100f0162:	0f 44 f8             	cmove  edi,eax
100f0165:	39 b9 2c 01 00 00    	cmp    DWORD PTR [ecx+0x12c],edi
100f016b:	75 08                	jne    0x100f0175
100f016d:	39 86 fc 00 00 00    	cmp    DWORD PTR [esi+0xfc],eax
100f0173:	75 09                	jne    0x100f017e
100f0175:	89 81 34 01 00 00    	mov    DWORD PTR [ecx+0x134],eax
100f017b:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100f017e:	89 81 30 01 00 00    	mov    DWORD PTR [ecx+0x130],eax
100f0184:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f0187:	57                   	push   edi
100f0188:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f018e:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
100f0194:	83 c4 04             	add    esp,0x4
100f0197:	50                   	push   eax
100f0198:	e8 f3 f1 f1 ff       	call   0x1000f390
100f019d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f01a2:	83 c4 08             	add    esp,0x8
100f01a5:	d8 00                	fadd   DWORD PTR [eax]
100f01a7:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f01aa:	d9 9e f4 04 00 00    	fstp   DWORD PTR [esi+0x4f4]
100f01b0:	c7 80 60 02 00 00 00 	mov    DWORD PTR [eax+0x260],0x40800000
100f01b7:	00 80 40 
100f01ba:	8b 86 f4 04 00 00    	mov    eax,DWORD PTR [esi+0x4f4]
100f01c0:	89 86 fc 04 00 00    	mov    DWORD PTR [esi+0x4fc],eax
100f01c6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f01c9:	39 b8 2c 01 00 00    	cmp    DWORD PTR [eax+0x12c],edi
100f01cf:	74 1a                	je     0x100f01eb
100f01d1:	89 b8 2c 01 00 00    	mov    DWORD PTR [eax+0x12c],edi
100f01d7:	8b ce                	mov    ecx,esi
100f01d9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f01dc:	c7 80 34 01 00 00 00 	mov    DWORD PTR [eax+0x134],0x0
100f01e3:	00 00 00 
100f01e6:	e8 f5 e7 f1 ff       	call   0x1000e9e0
100f01eb:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f01f1:	56                   	push   esi
100f01f2:	8b 01                	mov    eax,DWORD PTR [ecx]
100f01f4:	ff 50 54             	call   DWORD PTR [eax+0x54]
100f01f7:	83 3d 04 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f04,0x0
100f01fe:	0f 85 08 03 00 00    	jne    0x100f050c
100f0204:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f0207:	83 c0 74             	add    eax,0x74
100f020a:	50                   	push   eax
100f020b:	e8 10 91 02 00       	call   0x10119320
100f0210:	83 c4 04             	add    esp,0x4
100f0213:	8b ce                	mov    ecx,esi
100f0215:	e8 e6 4d ff ff       	call   0x100e5000
100f021a:	8b ce                	mov    ecx,esi
100f021c:	e8 4f 91 00 00       	call   0x100f9370
100f0221:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f0227:	85 c9                	test   ecx,ecx
100f0229:	74 14                	je     0x100f023f
100f022b:	8b 01                	mov    eax,DWORD PTR [ecx]
100f022d:	8b 40 14             	mov    eax,DWORD PTR [eax+0x14]
100f0230:	ff d0                	call   eax
100f0232:	85 c0                	test   eax,eax
100f0234:	74 09                	je     0x100f023f
100f0236:	83 a6 00 25 00 00 fd 	and    DWORD PTR [esi+0x2500],0xfffffffd
100f023d:	eb 07                	jmp    0x100f0246
100f023f:	83 8e 00 25 00 00 02 	or     DWORD PTR [esi+0x2500],0x2
100f0246:	8b 06                	mov    eax,DWORD PTR [esi]
100f0248:	8b ce                	mov    ecx,esi
100f024a:	ff 90 58 02 00 00    	call   DWORD PTR [eax+0x258]
100f0250:	8b ce                	mov    ecx,esi
100f0252:	e8 29 cc fe ff       	call   0x100dce80
100f0257:	8b ce                	mov    ecx,esi
100f0259:	e8 02 cc fe ff       	call   0x100dce60
100f025e:	8b ce                	mov    ecx,esi
100f0260:	e8 ab c7 fe ff       	call   0x100dca10
100f0265:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f0268:	83 b8 74 01 00 00 01 	cmp    DWORD PTR [eax+0x174],0x1
100f026f:	7c 2f                	jl     0x100f02a0
100f0271:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f0277:	85 c9                	test   ecx,ecx
100f0279:	74 18                	je     0x100f0293
100f027b:	8b 01                	mov    eax,DWORD PTR [ecx]
100f027d:	8b 40 20             	mov    eax,DWORD PTR [eax+0x20]
100f0280:	ff d0                	call   eax
100f0282:	85 c0                	test   eax,eax
100f0284:	74 0d                	je     0x100f0293
100f0286:	8b ce                	mov    ecx,esi
100f0288:	e8 23 98 ff ff       	call   0x100e9ab0
100f028d:	5f                   	pop    edi
100f028e:	5e                   	pop    esi
100f028f:	8b e5                	mov    esp,ebp
100f0291:	5d                   	pop    ebp
100f0292:	c3                   	ret
100f0293:	8b ce                	mov    ecx,esi
100f0295:	e8 76 a0 ff ff       	call   0x100ea310
100f029a:	5f                   	pop    edi
100f029b:	5e                   	pop    esi
100f029c:	8b e5                	mov    esp,ebp
100f029e:	5d                   	pop    ebp
100f029f:	c3                   	ret
100f02a0:	8d 8e 80 03 00 00    	lea    ecx,[esi+0x380]
100f02a6:	e8 d5 74 f2 ff       	call   0x10017780
100f02ab:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
100f02ae:	85 c0                	test   eax,eax
100f02b0:	74 1f                	je     0x100f02d1
100f02b2:	f7 87 a8 01 00 00 00 	test   DWORD PTR [edi+0x1a8],0x1000
100f02b9:	10 00 00 
100f02bc:	0f 85 4a 02 00 00    	jne    0x100f050c
100f02c2:	6a 00                	push   0x0
100f02c4:	8b ce                	mov    ecx,esi
100f02c6:	e8 25 ed fe ff       	call   0x100deff0
100f02cb:	5f                   	pop    edi
100f02cc:	5e                   	pop    esi
100f02cd:	8b e5                	mov    esp,ebp
100f02cf:	5d                   	pop    ebp
100f02d0:	c3                   	ret
100f02d1:	8b 97 a8 01 00 00    	mov    edx,DWORD PTR [edi+0x1a8]
100f02d7:	8b c2                	mov    eax,edx
100f02d9:	8b 8e e4 22 00 00    	mov    ecx,DWORD PTR [esi+0x22e4]
100f02df:	25 ff ff ff fe       	and    eax,0xfeffffff
100f02e4:	81 ca 00 00 00 01    	or     edx,0x1000000
100f02ea:	80 e1 02             	and    cl,0x2
100f02ed:	0f 44 d0             	cmove  edx,eax
100f02f0:	89 97 a8 01 00 00    	mov    DWORD PTR [edi+0x1a8],edx
100f02f6:	f6 86 e4 22 00 00 02 	test   BYTE PTR [esi+0x22e4],0x2
100f02fd:	0f 84 64 01 00 00    	je     0x100f0467
100f0303:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f0306:	8b 80 a0 01 00 00    	mov    eax,DWORD PTR [eax+0x1a0]
100f030c:	85 c0                	test   eax,eax
100f030e:	75 13                	jne    0x100f0323
100f0310:	50                   	push   eax
100f0311:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100f0317:	83 c4 04             	add    esp,0x4
100f031a:	85 c0                	test   eax,eax
100f031c:	75 05                	jne    0x100f0323
100f031e:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100f0321:	eb 0e                	jmp    0x100f0331
100f0323:	8b 78 7c             	mov    edi,DWORD PTR [eax+0x7c]
100f0326:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100f0329:	85 ff                	test   edi,edi
100f032b:	0f 85 a3 00 00 00    	jne    0x100f03d4
100f0331:	f3 0f 10 51 0c       	movss  xmm2,DWORD PTR [ecx+0xc]
100f0336:	8d 41 08             	lea    eax,[ecx+0x8]
100f0339:	f3 0f 10 48 08       	movss  xmm1,DWORD PTR [eax+0x8]
100f033e:	8d 55 b8             	lea    edx,[ebp-0x48]
100f0341:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100f0345:	0f 57 db             	xorps  xmm3,xmm3
100f0348:	f3 0f 5c 0d e4 da 1d 	subss  xmm1,DWORD PTR ds:0x101ddae4
100f034f:	10 
100f0350:	f3 0f 58 d3          	addss  xmm2,xmm3
100f0354:	f3 0f 58 c3          	addss  xmm0,xmm3
100f0358:	52                   	push   edx
100f0359:	f3 0f 11 4d f8       	movss  DWORD PTR [ebp-0x8],xmm1
100f035e:	f3 0f 11 55 f4       	movss  DWORD PTR [ebp-0xc],xmm2
100f0363:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
100f0368:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100f036e:	8d 4d f0             	lea    ecx,[ebp-0x10]
100f0371:	6a 01                	push   0x1
100f0373:	51                   	push   ecx
100f0374:	50                   	push   eax
100f0375:	e8 86 a4 02 00       	call   0x1011a800
100f037a:	f3 0f 10 45 c8       	movss  xmm0,DWORD PTR [ebp-0x38]
100f037f:	83 c4 14             	add    esp,0x14
100f0382:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
100f0389:	9f                   	lahf
100f038a:	f6 c4 44             	test   ah,0x44
100f038d:	7b 2e                	jnp    0x100f03bd
100f038f:	8b 7d e8             	mov    edi,DWORD PTR [ebp-0x18]
100f0392:	85 ff                	test   edi,edi
100f0394:	74 27                	je     0x100f03bd
100f0396:	8b 7f 7c             	mov    edi,DWORD PTR [edi+0x7c]
100f0399:	85 ff                	test   edi,edi
100f039b:	74 20                	je     0x100f03bd
100f039d:	8b 07                	mov    eax,DWORD PTR [edi]
100f039f:	8b cf                	mov    ecx,edi
100f03a1:	8b 40 40             	mov    eax,DWORD PTR [eax+0x40]
100f03a4:	ff d0                	call   eax
100f03a6:	a8 40                	test   al,0x40
100f03a8:	74 13                	je     0x100f03bd
100f03aa:	8b 07                	mov    eax,DWORD PTR [edi]
100f03ac:	8b cf                	mov    ecx,edi
100f03ae:	ff 76 04             	push   DWORD PTR [esi+0x4]
100f03b1:	8b 80 b4 00 00 00    	mov    eax,DWORD PTR [eax+0xb4]
100f03b7:	ff d0                	call   eax
100f03b9:	85 c0                	test   eax,eax
100f03bb:	75 3b                	jne    0x100f03f8
100f03bd:	83 a6 e4 22 00 00 fd 	and    DWORD PTR [esi+0x22e4],0xfffffffd
100f03c4:	5f                   	pop    edi
100f03c5:	c7 86 d4 24 00 00 c0 	mov    DWORD PTR [esi+0x24d4],0xc0
100f03cc:	00 00 00 
100f03cf:	5e                   	pop    esi
100f03d0:	8b e5                	mov    esp,ebp
100f03d2:	5d                   	pop    ebp
100f03d3:	c3                   	ret
100f03d4:	f7 81 a8 01 00 00 00 	test   DWORD PTR [ecx+0x1a8],0x200
100f03db:	02 00 00 
100f03de:	74 dd                	je     0x100f03bd
100f03e0:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f03e3:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
100f03ea:	75 d1                	jne    0x100f03bd
100f03ec:	f7 81 84 01 00 00 00 	test   DWORD PTR [ecx+0x184],0x600
100f03f3:	06 00 00 
100f03f6:	75 c5                	jne    0x100f03bd
100f03f8:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100f03fb:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
100f0402:	10 
100f0403:	83 c1 20             	add    ecx,0x20
100f0406:	66 0f d6 01          	movq   QWORD PTR [ecx],xmm0
100f040a:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
100f040f:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100f0412:	8b 86 b0 22 00 00    	mov    eax,DWORD PTR [esi+0x22b0]
100f0418:	a8 08                	test   al,0x8
100f041a:	74 0a                	je     0x100f0426
100f041c:	51                   	push   ecx
100f041d:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100f0424:	eb 0c                	jmp    0x100f0432
100f0426:	a8 10                	test   al,0x10
100f0428:	74 50                	je     0x100f047a
100f042a:	51                   	push   ecx
100f042b:	c7 04 24 00 00 80 bf 	mov    DWORD PTR [esp],0xbf800000
100f0432:	8b 07                	mov    eax,DWORD PTR [edi]
100f0434:	8b cf                	mov    ecx,edi
100f0436:	6a 02                	push   0x2
100f0438:	56                   	push   esi
100f0439:	56                   	push   esi
100f043a:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
100f0440:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f0443:	ff b0 88 01 00 00    	push   DWORD PTR [eax+0x188]
100f0449:	f3 0f 2c 80 fc 01 00 	cvttss2si eax,DWORD PTR [eax+0x1fc]
100f0450:	00 
100f0451:	50                   	push   eax
100f0452:	e8 e9 65 00 00       	call   0x100f6a40
100f0457:	83 c4 08             	add    esp,0x8
100f045a:	0d c0 00 00 00       	or     eax,0xc0
100f045f:	89 86 d4 24 00 00    	mov    DWORD PTR [esi+0x24d4],eax
100f0465:	eb 13                	jmp    0x100f047a
100f0467:	f6 86 d4 24 00 00 80 	test   BYTE PTR [esi+0x24d4],0x80
100f046e:	74 0a                	je     0x100f047a
100f0470:	c7 86 d4 24 00 00 c0 	mov    DWORD PTR [esi+0x24d4],0xc0
100f0477:	00 00 00 
100f047a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f047d:	f6 80 84 01 00 00 02 	test   BYTE PTR [eax+0x184],0x2
100f0484:	74 0d                	je     0x100f0493
100f0486:	8b 06                	mov    eax,DWORD PTR [esi]
100f0488:	8b ce                	mov    ecx,esi
100f048a:	ff 90 44 02 00 00    	call   DWORD PTR [eax+0x244]
100f0490:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f0493:	f6 80 84 01 00 00 04 	test   BYTE PTR [eax+0x184],0x4
100f049a:	75 15                	jne    0x100f04b1
100f049c:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x4000
100f04a3:	40 00 00 
100f04a6:	75 09                	jne    0x100f04b1
100f04a8:	f6 86 e4 22 00 00 08 	test   BYTE PTR [esi+0x22e4],0x8
100f04af:	74 0d                	je     0x100f04be
100f04b1:	8b 06                	mov    eax,DWORD PTR [esi]
100f04b3:	8b ce                	mov    ecx,esi
100f04b5:	ff 90 48 02 00 00    	call   DWORD PTR [eax+0x248]
100f04bb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f04be:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x200
100f04c5:	02 00 00 
100f04c8:	75 14                	jne    0x100f04de
100f04ca:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [eax+0x28]
100f04cf:	0f 57 05 e0 13 1a 10 	xorps  xmm0,XMMWORD PTR ds:0x101a13e0
100f04d6:	f3 0f 11 86 c4 22 00 	movss  DWORD PTR [esi+0x22c4],xmm0
100f04dd:	00 
100f04de:	6a 00                	push   0x0
100f04e0:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
100f04e6:	e8 55 72 f2 ff       	call   0x10017740
100f04eb:	f6 86 e4 22 00 00 04 	test   BYTE PTR [esi+0x22e4],0x4
100f04f2:	74 18                	je     0x100f050c
100f04f4:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100f04f7:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
100f04fe:	10 
100f04ff:	66 0f d6 41 20       	movq   QWORD PTR [ecx+0x20],xmm0
100f0504:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
100f0509:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
100f050c:	5f                   	pop    edi
100f050d:	5e                   	pop    esi
100f050e:	8b e5                	mov    esp,ebp
100f0510:	5d                   	pop    ebp
100f0511:	c3                   	ret
