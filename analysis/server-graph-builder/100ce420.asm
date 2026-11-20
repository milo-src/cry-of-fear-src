
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ce420 <.text+0xcd420>:
100ce420:	55                   	push   ebp
100ce421:	8b ec                	mov    ebp,esp
100ce423:	83 ec 5c             	sub    esp,0x5c
100ce426:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100ce429:	56                   	push   esi
100ce42a:	8b f1                	mov    esi,ecx
100ce42c:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
100ce42f:	c7 00 00 00 00 00    	mov    DWORD PTR [eax],0x0
100ce435:	83 7e 18 00          	cmp    DWORD PTR [esi+0x18],0x0
100ce439:	7f 19                	jg     0x100ce454
100ce43b:	68 60 68 1d 10       	push   0x101d6860
100ce440:	6a 02                	push   0x2
100ce442:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100ce448:	83 c4 08             	add    esp,0x8
100ce44b:	33 c0                	xor    eax,eax
100ce44d:	5e                   	pop    esi
100ce44e:	8b e5                	mov    esp,ebp
100ce450:	5d                   	pop    ebp
100ce451:	c2 0c 00             	ret    0xc
100ce454:	57                   	push   edi
100ce455:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100ce458:	85 ff                	test   edi,edi
100ce45a:	75 12                	jne    0x100ce46e
100ce45c:	68 6c 68 1d 10       	push   0x101d686c
100ce461:	6a 02                	push   0x2
100ce463:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100ce469:	83 c4 08             	add    esp,0x8
100ce46c:	eb 24                	jmp    0x100ce492
100ce46e:	68 98 68 1d 10       	push   0x101d6898
100ce473:	57                   	push   edi
100ce474:	e8 b7 19 00 00       	call   0x100cfe30
100ce479:	68 e8 68 1d 10       	push   0x101d68e8
100ce47e:	57                   	push   edi
100ce47f:	e8 ac 19 00 00       	call   0x100cfe30
100ce484:	68 98 68 1d 10       	push   0x101d6898
100ce489:	57                   	push   edi
100ce48a:	e8 a1 19 00 00       	call   0x100cfe30
100ce48f:	83 c4 18             	add    esp,0x18
100ce492:	33 c9                	xor    ecx,ecx
100ce494:	33 d2                	xor    edx,edx
100ce496:	53                   	push   ebx
100ce497:	33 db                	xor    ebx,ebx
100ce499:	89 55 e0             	mov    DWORD PTR [ebp-0x20],edx
100ce49c:	89 5d e4             	mov    DWORD PTR [ebp-0x1c],ebx
100ce49f:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
100ce4a2:	39 4e 18             	cmp    DWORD PTR [esi+0x18],ecx
100ce4a5:	0f 8e ff 02 00 00    	jle    0x100ce7aa
100ce4ab:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100ce4ae:	66 90                	xchg   ax,ax
100ce4b0:	33 db                	xor    ebx,ebx
100ce4b2:	85 ff                	test   edi,edi
100ce4b4:	74 0f                	je     0x100ce4c5
100ce4b6:	51                   	push   ecx
100ce4b7:	68 10 69 1d 10       	push   0x101d6910
100ce4bc:	57                   	push   edi
100ce4bd:	e8 6e 19 00 00       	call   0x100cfe30
100ce4c2:	83 c4 0c             	add    esp,0xc
100ce4c5:	8b 55 e4             	mov    edx,DWORD PTR [ebp-0x1c]
100ce4c8:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100ce4cb:	8b 7d f4             	mov    edi,DWORD PTR [ebp-0xc]
100ce4ce:	8d 04 55 01 00 00 00 	lea    eax,[edx*2+0x1]
100ce4d5:	03 c2                	add    eax,edx
100ce4d7:	8d 04 c1             	lea    eax,[ecx+eax*8]
100ce4da:	b9 80 00 00 00       	mov    ecx,0x80
100ce4df:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
100ce4e2:	89 78 f8             	mov    DWORD PTR [eax-0x8],edi
100ce4e5:	8d 40 18             	lea    eax,[eax+0x18]
100ce4e8:	89 58 e4             	mov    DWORD PTR [eax-0x1c],ebx
100ce4eb:	89 58 e8             	mov    DWORD PTR [eax-0x18],ebx
100ce4ee:	83 e9 01             	sub    ecx,0x1
100ce4f1:	75 ef                	jne    0x100ce4e2
100ce4f3:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100ce4f6:	33 f6                	xor    esi,esi
100ce4f8:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100ce4fb:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100ce4fe:	89 54 01 24          	mov    DWORD PTR [ecx+eax*1+0x24],edx
100ce502:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100ce505:	8b 41 18             	mov    eax,DWORD PTR [ecx+0x18]
100ce508:	85 c0                	test   eax,eax
100ce50a:	0f 8e 64 02 00 00    	jle    0x100ce774
100ce510:	33 d2                	xor    edx,edx
100ce512:	89 55 e8             	mov    DWORD PTR [ebp-0x18],edx
100ce515:	3b 75 f4             	cmp    esi,DWORD PTR [ebp-0xc]
100ce518:	0f 84 3d 02 00 00    	je     0x100ce75b
100ce51e:	8b 41 0c             	mov    eax,DWORD PTR [ecx+0xc]
100ce521:	8d 0c 02             	lea    ecx,[edx+eax*1]
100ce524:	8b 55 f8             	mov    edx,DWORD PTR [ebp-0x8]
100ce527:	03 d0                	add    edx,eax
100ce529:	8b 42 1c             	mov    eax,DWORD PTR [edx+0x1c]
100ce52c:	33 41 1c             	xor    eax,DWORD PTR [ecx+0x1c]
100ce52f:	a8 07                	test   al,0x7
100ce531:	0f 85 24 02 00 00    	jne    0x100ce75b
100ce537:	8d 45 a4             	lea    eax,[ebp-0x5c]
100ce53a:	c7 45 d4 00 00 00 00 	mov    DWORD PTR [ebp-0x2c],0x0
100ce541:	50                   	push   eax
100ce542:	ff 35 60 1f 23 10    	push   DWORD PTR ds:0x10231f60
100ce548:	c7 45 f0 00 00 00 00 	mov    DWORD PTR [ebp-0x10],0x0
100ce54f:	6a 01                	push   0x1
100ce551:	51                   	push   ecx
100ce552:	52                   	push   edx
100ce553:	e8 a8 c2 04 00       	call   0x1011a800
100ce558:	83 c4 14             	add    esp,0x14
100ce55b:	83 7d a8 00          	cmp    DWORD PTR [ebp-0x58],0x0
100ce55f:	0f 85 f6 01 00 00    	jne    0x100ce75b
100ce565:	f3 0f 10 45 b4       	movss  xmm0,DWORD PTR [ebp-0x4c]
100ce56a:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
100ce571:	9f                   	lahf
100ce572:	f6 c4 44             	test   ah,0x44
100ce575:	0f 8b df 00 00 00    	jnp    0x100ce65a
100ce57b:	8b 45 d4             	mov    eax,DWORD PTR [ebp-0x2c]
100ce57e:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100ce581:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100ce584:	8d 45 a4             	lea    eax,[ebp-0x5c]
100ce587:	50                   	push   eax
100ce588:	ff 35 60 1f 23 10    	push   DWORD PTR ds:0x10231f60
100ce58e:	8b 49 0c             	mov    ecx,DWORD PTR [ecx+0xc]
100ce591:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
100ce594:	03 c1                	add    eax,ecx
100ce596:	6a 01                	push   0x1
100ce598:	50                   	push   eax
100ce599:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
100ce59c:	03 c1                	add    eax,ecx
100ce59e:	50                   	push   eax
100ce59f:	e8 5c c2 04 00       	call   0x1011a800
100ce5a4:	8b 45 d4             	mov    eax,DWORD PTR [ebp-0x2c]
100ce5a7:	83 c4 14             	add    esp,0x14
100ce5aa:	3b 45 f0             	cmp    eax,DWORD PTR [ebp-0x10]
100ce5ad:	0f 85 a8 01 00 00    	jne    0x100ce75b
100ce5b3:	8d b8 80 00 00 00    	lea    edi,[eax+0x80]
100ce5b9:	33 d2                	xor    edx,edx
100ce5bb:	85 c0                	test   eax,eax
100ce5bd:	b9 dc ec 1b 10       	mov    ecx,0x101becdc
100ce5c2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ce5c7:	0f 45 d7             	cmovne edx,edi
100ce5ca:	89 55 dc             	mov    DWORD PTR [ebp-0x24],edx
100ce5cd:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100ce5d3:	03 02                	add    eax,DWORD PTR [edx]
100ce5d5:	8a 10                	mov    dl,BYTE PTR [eax]
100ce5d7:	3a 11                	cmp    dl,BYTE PTR [ecx]
100ce5d9:	75 1a                	jne    0x100ce5f5
100ce5db:	84 d2                	test   dl,dl
100ce5dd:	74 12                	je     0x100ce5f1
100ce5df:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100ce5e2:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100ce5e5:	75 0e                	jne    0x100ce5f5
100ce5e7:	83 c0 02             	add    eax,0x2
100ce5ea:	83 c1 02             	add    ecx,0x2
100ce5ed:	84 d2                	test   dl,dl
100ce5ef:	75 e4                	jne    0x100ce5d5
100ce5f1:	33 c0                	xor    eax,eax
100ce5f3:	eb 05                	jmp    0x100ce5fa
100ce5f5:	1b c0                	sbb    eax,eax
100ce5f7:	83 c8 01             	or     eax,0x1
100ce5fa:	85 c0                	test   eax,eax
100ce5fc:	0f 84 56 01 00 00    	je     0x100ce758
100ce602:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
100ce605:	8b d7                	mov    edx,edi
100ce607:	8b 45 dc             	mov    eax,DWORD PTR [ebp-0x24]
100ce60a:	89 01                	mov    DWORD PTR [ecx],eax
100ce60c:	33 c0                	xor    eax,eax
100ce60e:	39 45 d4             	cmp    DWORD PTR [ebp-0x2c],eax
100ce611:	0f 44 d0             	cmove  edx,eax
100ce614:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ce619:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100ce61f:	8b 82 b8 00 00 00    	mov    eax,DWORD PTR [edx+0xb8]
100ce625:	33 d2                	xor    edx,edx
100ce627:	8b 04 01             	mov    eax,DWORD PTR [ecx+eax*1]
100ce62a:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
100ce62d:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100ce630:	8b c7                	mov    eax,edi
100ce632:	8b 4d d4             	mov    ecx,DWORD PTR [ebp-0x2c]
100ce635:	85 c9                	test   ecx,ecx
100ce637:	0f 44 c2             	cmove  eax,edx
100ce63a:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x10000
100ce641:	00 01 00 
100ce644:	75 11                	jne    0x100ce657
100ce646:	33 c0                	xor    eax,eax
100ce648:	85 c9                	test   ecx,ecx
100ce64a:	0f 44 f8             	cmove  edi,eax
100ce64d:	81 87 a8 01 00 00 00 	add    DWORD PTR [edi+0x1a8],0x10000
100ce654:	00 01 00 
100ce657:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100ce65a:	85 ff                	test   edi,edi
100ce65c:	0f 84 9a 00 00 00    	je     0x100ce6fc
100ce662:	56                   	push   esi
100ce663:	68 20 69 1d 10       	push   0x101d6920
100ce668:	57                   	push   edi
100ce669:	e8 c2 17 00 00       	call   0x100cfe30
100ce66e:	8b 45 ec             	mov    eax,DWORD PTR [ebp-0x14]
100ce671:	83 c4 0c             	add    esp,0xc
100ce674:	8b 00                	mov    eax,DWORD PTR [eax]
100ce676:	85 c0                	test   eax,eax
100ce678:	74 73                	je     0x100ce6ed
100ce67a:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100ce680:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
100ce686:	83 c4 04             	add    esp,0x4
100ce689:	85 c0                	test   eax,eax
100ce68b:	74 60                	je     0x100ce6ed
100ce68d:	8b 45 d4             	mov    eax,DWORD PTR [ebp-0x2c]
100ce690:	85 c0                	test   eax,eax
100ce692:	75 04                	jne    0x100ce698
100ce694:	33 c9                	xor    ecx,ecx
100ce696:	eb 06                	jmp    0x100ce69e
100ce698:	8d 88 80 00 00 00    	lea    ecx,[eax+0x80]
100ce69e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ce6a3:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100ce6a9:	8b 81 b8 00 00 00    	mov    eax,DWORD PTR [ecx+0xb8]
100ce6af:	b9 d0 01 00 00       	mov    ecx,0x1d0
100ce6b4:	03 c2                	add    eax,edx
100ce6b6:	50                   	push   eax
100ce6b7:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
100ce6ba:	05 50 02 00 00       	add    eax,0x250
100ce6bf:	83 7d f0 00          	cmp    DWORD PTR [ebp-0x10],0x0
100ce6c3:	0f 45 c8             	cmovne ecx,eax
100ce6c6:	8b 01                	mov    eax,DWORD PTR [ecx]
100ce6c8:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
100ce6cb:	03 c2                	add    eax,edx
100ce6cd:	50                   	push   eax
100ce6ce:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100ce6d4:	f7 d9                	neg    ecx
100ce6d6:	1b c9                	sbb    ecx,ecx
100ce6d8:	23 c8                	and    ecx,eax
100ce6da:	8b 01                	mov    eax,DWORD PTR [ecx]
100ce6dc:	03 c2                	add    eax,edx
100ce6de:	50                   	push   eax
100ce6df:	68 24 69 1d 10       	push   0x101d6924
100ce6e4:	57                   	push   edi
100ce6e5:	e8 46 17 00 00       	call   0x100cfe30
100ce6ea:	83 c4 14             	add    esp,0x14
100ce6ed:	56                   	push   esi
100ce6ee:	68 c8 84 1a 10       	push   0x101a84c8
100ce6f3:	57                   	push   edi
100ce6f4:	e8 37 17 00 00       	call   0x100cfe30
100ce6f9:	83 c4 0c             	add    esp,0xc
100ce6fc:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
100ce6ff:	43                   	inc    ebx
100ce700:	8b 4d e4             	mov    ecx,DWORD PTR [ebp-0x1c]
100ce703:	41                   	inc    ecx
100ce704:	89 4d e4             	mov    DWORD PTR [ebp-0x1c],ecx
100ce707:	89 72 fc             	mov    DWORD PTR [edx-0x4],esi
100ce70a:	83 c2 18             	add    edx,0x18
100ce70d:	89 55 ec             	mov    DWORD PTR [ebp-0x14],edx
100ce710:	81 fb 80 00 00 00    	cmp    ebx,0x80
100ce716:	0f 84 d7 00 00 00    	je     0x100ce7f3
100ce71c:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100ce71f:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
100ce722:	c1 e0 07             	shl    eax,0x7
100ce725:	3b c8                	cmp    ecx,eax
100ce727:	0f 8f a3 00 00 00    	jg     0x100ce7d0
100ce72d:	85 db                	test   ebx,ebx
100ce72f:	75 0e                	jne    0x100ce73f
100ce731:	68 1c 6a 1d 10       	push   0x101d6a1c
100ce736:	57                   	push   edi
100ce737:	e8 f4 16 00 00       	call   0x100cfe30
100ce73c:	83 c4 08             	add    esp,0x8
100ce73f:	8b 55 e0             	mov    edx,DWORD PTR [ebp-0x20]
100ce742:	3b da                	cmp    ebx,edx
100ce744:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100ce749:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100ce74c:	0f 4f d3             	cmovg  edx,ebx
100ce74f:	89 55 e0             	mov    DWORD PTR [ebp-0x20],edx
100ce752:	89 5c 01 20          	mov    DWORD PTR [ecx+eax*1+0x20],ebx
100ce756:	eb 03                	jmp    0x100ce75b
100ce758:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100ce75b:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100ce75e:	46                   	inc    esi
100ce75f:	83 45 e8 58          	add    DWORD PTR [ebp-0x18],0x58
100ce763:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100ce766:	8b 55 e8             	mov    edx,DWORD PTR [ebp-0x18]
100ce769:	8b 40 18             	mov    eax,DWORD PTR [eax+0x18]
100ce76c:	3b f0                	cmp    esi,eax
100ce76e:	0f 8c a1 fd ff ff    	jl     0x100ce515
100ce774:	85 ff                	test   edi,edi
100ce776:	74 16                	je     0x100ce78e
100ce778:	68 98 68 1d 10       	push   0x101d6898
100ce77d:	57                   	push   edi
100ce77e:	e8 ad 16 00 00       	call   0x100cfe30
100ce783:	8b 75 fc             	mov    esi,DWORD PTR [ebp-0x4]
100ce786:	83 c4 08             	add    esp,0x8
100ce789:	8b 46 18             	mov    eax,DWORD PTR [esi+0x18]
100ce78c:	eb 03                	jmp    0x100ce791
100ce78e:	8b 75 fc             	mov    esi,DWORD PTR [ebp-0x4]
100ce791:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
100ce794:	83 45 f8 58          	add    DWORD PTR [ebp-0x8],0x58
100ce798:	41                   	inc    ecx
100ce799:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
100ce79c:	3b c8                	cmp    ecx,eax
100ce79e:	0f 8c 0c fd ff ff    	jl     0x100ce4b0
100ce7a4:	8b 55 e0             	mov    edx,DWORD PTR [ebp-0x20]
100ce7a7:	8b 5d e4             	mov    ebx,DWORD PTR [ebp-0x1c]
100ce7aa:	52                   	push   edx
100ce7ab:	53                   	push   ebx
100ce7ac:	68 38 6a 1d 10       	push   0x101d6a38
100ce7b1:	57                   	push   edi
100ce7b2:	e8 79 16 00 00       	call   0x100cfe30
100ce7b7:	68 88 6a 1d 10       	push   0x101d6a88
100ce7bc:	57                   	push   edi
100ce7bd:	e8 6e 16 00 00       	call   0x100cfe30
100ce7c2:	83 c4 18             	add    esp,0x18
100ce7c5:	8b c3                	mov    eax,ebx
100ce7c7:	5b                   	pop    ebx
100ce7c8:	5f                   	pop    edi
100ce7c9:	5e                   	pop    esi
100ce7ca:	8b e5                	mov    esp,ebp
100ce7cc:	5d                   	pop    ebp
100ce7cd:	c2 0c 00             	ret    0xc
100ce7d0:	68 d8 69 1d 10       	push   0x101d69d8
100ce7d5:	6a 02                	push   0x2
100ce7d7:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100ce7dd:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
100ce7e0:	83 c4 08             	add    esp,0x8
100ce7e3:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
100ce7e6:	5b                   	pop    ebx
100ce7e7:	5f                   	pop    edi
100ce7e8:	89 01                	mov    DWORD PTR [ecx],eax
100ce7ea:	33 c0                	xor    eax,eax
100ce7ec:	5e                   	pop    esi
100ce7ed:	8b e5                	mov    esp,ebp
100ce7ef:	5d                   	pop    ebp
100ce7f0:	c2 0c 00             	ret    0xc
100ce7f3:	8b 5d f4             	mov    ebx,DWORD PTR [ebp-0xc]
100ce7f6:	53                   	push   ebx
100ce7f7:	68 58 69 1d 10       	push   0x101d6958
100ce7fc:	6a 02                	push   0x2
100ce7fe:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100ce804:	53                   	push   ebx
100ce805:	68 9c 69 1d 10       	push   0x101d699c
100ce80a:	57                   	push   edi
100ce80b:	e8 20 16 00 00       	call   0x100cfe30
100ce810:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100ce813:	83 c4 18             	add    esp,0x18
100ce816:	89 18                	mov    DWORD PTR [eax],ebx
100ce818:	33 c0                	xor    eax,eax
100ce81a:	5b                   	pop    ebx
100ce81b:	5f                   	pop    edi
100ce81c:	5e                   	pop    esi
100ce81d:	8b e5                	mov    esp,ebp
100ce81f:	5d                   	pop    ebp
100ce820:	c2 0c 00             	ret    0xc
