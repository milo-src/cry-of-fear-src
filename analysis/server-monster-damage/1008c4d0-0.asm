
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008c4d0 <.text+0x8b4d0>:
1008c4d0:	55                   	push   ebp
1008c4d1:	8b ec                	mov    ebp,esp
1008c4d3:	83 ec 44             	sub    esp,0x44
1008c4d6:	0f 57 c9             	xorps  xmm1,xmm1
1008c4d9:	53                   	push   ebx
1008c4da:	56                   	push   esi
1008c4db:	57                   	push   edi
1008c4dc:	8b f9                	mov    edi,ecx
1008c4de:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1008c4e1:	f3 0f 10 81 70 01 00 	movss  xmm0,DWORD PTR [ecx+0x170]
1008c4e8:	00 
1008c4e9:	0f 2e c1             	ucomiss xmm0,xmm1
1008c4ec:	9f                   	lahf
1008c4ed:	f6 c4 44             	test   ah,0x44
1008c4f0:	0f 8b a5 02 00 00    	jnp    0x1008c79b
1008c4f6:	f6 81 a4 01 00 00 40 	test   BYTE PTR [ecx+0x1a4],0x40
1008c4fd:	74 4f                	je     0x1008c54e
1008c4ff:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1008c502:	8b 83 0c 02 00 00    	mov    eax,DWORD PTR [ebx+0x20c]
1008c508:	85 c0                	test   eax,eax
1008c50a:	75 12                	jne    0x1008c51e
1008c50c:	50                   	push   eax
1008c50d:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
1008c513:	83 c4 04             	add    esp,0x4
1008c516:	85 c0                	test   eax,eax
1008c518:	75 04                	jne    0x1008c51e
1008c51a:	33 c9                	xor    ecx,ecx
1008c51c:	eb 03                	jmp    0x1008c521
1008c51e:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
1008c521:	8b 01                	mov    eax,DWORD PTR [ecx]
1008c523:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1008c529:	85 c0                	test   eax,eax
1008c52b:	0f 85 6a 02 00 00    	jne    0x1008c79b
1008c531:	8b 8b 9c 01 00 00    	mov    ecx,DWORD PTR [ebx+0x19c]
1008c537:	85 c9                	test   ecx,ecx
1008c539:	74 13                	je     0x1008c54e
1008c53b:	8b 49 7c             	mov    ecx,DWORD PTR [ecx+0x7c]
1008c53e:	8b 01                	mov    eax,DWORD PTR [ecx]
1008c540:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1008c546:	85 c0                	test   eax,eax
1008c548:	0f 85 4d 02 00 00    	jne    0x1008c79b
1008c54e:	ff 75 20             	push   DWORD PTR [ebp+0x20]
1008c551:	8b 5d 1c             	mov    ebx,DWORD PTR [ebp+0x1c]
1008c554:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
1008c559:	53                   	push   ebx
1008c55a:	83 ec 0c             	sub    esp,0xc
1008c55d:	8b 43 34             	mov    eax,DWORD PTR [ebx+0x34]
1008c560:	89 87 1c 02 00 00    	mov    DWORD PTR [edi+0x21c],eax
1008c566:	8b c4                	mov    eax,esp
1008c568:	51                   	push   ecx
1008c569:	8b cf                	mov    ecx,edi
1008c56b:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1008c56f:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
1008c574:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1008c579:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
1008c57e:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1008c583:	8b 07                	mov    eax,DWORD PTR [edi]
1008c585:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
1008c58a:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008c58f:	ff 50 74             	call   DWORD PTR [eax+0x74]
1008c592:	8b 53 34             	mov    edx,DWORD PTR [ebx+0x34]
1008c595:	8b ca                	mov    ecx,edx
1008c597:	8d 42 ff             	lea    eax,[edx-0x1]
1008c59a:	83 f8 12             	cmp    eax,0x12
1008c59d:	0f 87 7c 01 00 00    	ja     0x1008c71f
1008c5a3:	0f b6 80 c0 c7 08 10 	movzx  eax,BYTE PTR [eax+0x1008c7c0]
1008c5aa:	ff 24 85 a4 c7 08 10 	jmp    DWORD PTR [eax*4+0x1008c7a4]
1008c5b1:	f3 0f 10 05 54 ef 1b 	movss  xmm0,DWORD PTR ds:0x101bef54
1008c5b8:	10 
1008c5b9:	8d 73 14             	lea    esi,[ebx+0x14]
1008c5bc:	f3 0f 10 4d 10       	movss  xmm1,DWORD PTR [ebp+0x10]
1008c5c1:	8d 45 bc             	lea    eax,[ebp-0x44]
1008c5c4:	f3 0f 10 5d 14       	movss  xmm3,DWORD PTR [ebp+0x14]
1008c5c9:	f3 0f 10 65 18       	movss  xmm4,DWORD PTR [ebp+0x18]
1008c5ce:	f3 0f 10 16          	movss  xmm2,DWORD PTR [esi]
1008c5d2:	f3 0f 59 c8          	mulss  xmm1,xmm0
1008c5d6:	50                   	push   eax
1008c5d7:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008c5da:	f3 0f 59 d8          	mulss  xmm3,xmm0
1008c5de:	f3 0f 59 e0          	mulss  xmm4,xmm0
1008c5e2:	f3 0f 58 d1          	addss  xmm2,xmm1
1008c5e6:	f3 0f 10 4e 04       	movss  xmm1,DWORD PTR [esi+0x4]
1008c5eb:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
1008c5f0:	f3 0f 58 cb          	addss  xmm1,xmm3
1008c5f4:	f3 0f 58 c4          	addss  xmm0,xmm4
1008c5f8:	f3 0f 11 55 f4       	movss  DWORD PTR [ebp-0xc],xmm2
1008c5fd:	f3 0f 11 4d f8       	movss  DWORD PTR [ebp-0x8],xmm1
1008c602:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008c607:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1008c60d:	8d 45 f4             	lea    eax,[ebp-0xc]
1008c610:	6a 01                	push   0x1
1008c612:	50                   	push   eax
1008c613:	56                   	push   esi
1008c614:	e8 e7 e1 08 00       	call   0x1011a800
1008c619:	6a 00                	push   0x0
1008c61b:	8d 45 bc             	lea    eax,[ebp-0x44]
1008c61e:	68 0c ef 1b 10       	push   0x101bef0c
1008c623:	50                   	push   eax
1008c624:	e8 b7 b9 08 00       	call   0x10117fe0
1008c629:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1008c62c:	83 c4 14             	add    esp,0x14
1008c62f:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
1008c634:	8b cc                	mov    ecx,esp
1008c636:	f3 0f 59 05 b8 1e 1a 	mulss  xmm0,DWORD PTR ds:0x101a1eb8
1008c63d:	10 
1008c63e:	8b 42 20             	mov    eax,DWORD PTR [edx+0x20]
1008c641:	89 01                	mov    DWORD PTR [ecx],eax
1008c643:	8b 42 24             	mov    eax,DWORD PTR [edx+0x24]
1008c646:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1008c649:	8b 42 28             	mov    eax,DWORD PTR [edx+0x28]
1008c64c:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1008c64f:	8b 07                	mov    eax,DWORD PTR [edi]
1008c651:	51                   	push   ecx
1008c652:	8b cf                	mov    ecx,edi
1008c654:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008c659:	ff 50 70             	call   DWORD PTR [eax+0x70]
1008c65c:	50                   	push   eax
1008c65d:	8b 06                	mov    eax,DWORD PTR [esi]
1008c65f:	83 ec 0c             	sub    esp,0xc
1008c662:	8b cc                	mov    ecx,esp
1008c664:	89 01                	mov    DWORD PTR [ecx],eax
1008c666:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008c669:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1008c66c:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
1008c66f:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1008c672:	e8 89 32 09 00       	call   0x1011f900
1008c677:	8b 75 20             	mov    esi,DWORD PTR [ebp+0x20]
1008c67a:	83 c4 20             	add    esp,0x20
1008c67d:	f3 0f 10 05 84 68 22 	movss  xmm0,DWORD PTR ds:0x10226884
1008c684:	10 
1008c685:	f7 c6 00 00 00 02    	test   esi,0x2000000
1008c68b:	74 08                	je     0x1008c695
1008c68d:	f3 0f 59 05 80 13 1a 	mulss  xmm0,DWORD PTR ds:0x101a1380
1008c694:	10 
1008c695:	f3 0f 59 45 0c       	mulss  xmm0,DWORD PTR [ebp+0xc]
1008c69a:	8b 4b 34             	mov    ecx,DWORD PTR [ebx+0x34]
1008c69d:	f3 0f 11 45 0c       	movss  DWORD PTR [ebp+0xc],xmm0
1008c6a2:	eb 7e                	jmp    0x1008c722
1008c6a4:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
1008c6a9:	f3 0f 59 0d 88 68 22 	mulss  xmm1,DWORD PTR ds:0x10226888
1008c6b0:	10 
1008c6b1:	8b 75 20             	mov    esi,DWORD PTR [ebp+0x20]
1008c6b4:	f3 0f 11 4d 0c       	movss  DWORD PTR [ebp+0xc],xmm1
1008c6b9:	eb 6c                	jmp    0x1008c727
1008c6bb:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
1008c6c0:	f3 0f 59 0d 8c 68 22 	mulss  xmm1,DWORD PTR ds:0x1022688c
1008c6c7:	10 
1008c6c8:	8b 75 20             	mov    esi,DWORD PTR [ebp+0x20]
1008c6cb:	f3 0f 11 4d 0c       	movss  DWORD PTR [ebp+0xc],xmm1
1008c6d0:	eb 55                	jmp    0x1008c727
1008c6d2:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
1008c6d7:	f3 0f 59 0d 94 68 22 	mulss  xmm1,DWORD PTR ds:0x10226894
1008c6de:	10 
1008c6df:	8b 75 20             	mov    esi,DWORD PTR [ebp+0x20]
1008c6e2:	f3 0f 11 4d 0c       	movss  DWORD PTR [ebp+0xc],xmm1
1008c6e7:	eb 3e                	jmp    0x1008c727
1008c6e9:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
1008c6ee:	f3 0f 59 0d 90 68 22 	mulss  xmm1,DWORD PTR ds:0x10226890
1008c6f5:	10 
1008c6f6:	8b 75 20             	mov    esi,DWORD PTR [ebp+0x20]
1008c6f9:	f3 0f 11 4d 0c       	movss  DWORD PTR [ebp+0xc],xmm1
1008c6fe:	eb 27                	jmp    0x1008c727
1008c700:	8b 75 20             	mov    esi,DWORD PTR [ebp+0x20]
1008c703:	0f 57 c9             	xorps  xmm1,xmm1
1008c706:	f3 0f 11 4d 0c       	movss  DWORD PTR [ebp+0xc],xmm1
1008c70b:	eb 1a                	jmp    0x1008c727
1008c70d:	f3 0f 10 0d 84 68 22 	movss  xmm1,DWORD PTR ds:0x10226884
1008c714:	10 
1008c715:	8b 75 20             	mov    esi,DWORD PTR [ebp+0x20]
1008c718:	f3 0f 11 4d 0c       	movss  DWORD PTR [ebp+0xc],xmm1
1008c71d:	eb 08                	jmp    0x1008c727
1008c71f:	8b 75 20             	mov    esi,DWORD PTR [ebp+0x20]
1008c722:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
1008c727:	51                   	push   ecx
1008c728:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
1008c72d:	51                   	push   ecx
1008c72e:	8b cf                	mov    ecx,edi
1008c730:	e8 fb d7 ff ff       	call   0x10089f30
1008c735:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
1008c738:	83 ec 0c             	sub    esp,0xc
1008c73b:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
1008c740:	8b cc                	mov    ecx,esp
1008c742:	f3 0f 58 c0          	addss  xmm0,xmm0
1008c746:	8b 42 20             	mov    eax,DWORD PTR [edx+0x20]
1008c749:	89 01                	mov    DWORD PTR [ecx],eax
1008c74b:	8b 42 24             	mov    eax,DWORD PTR [edx+0x24]
1008c74e:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1008c751:	8b 42 28             	mov    eax,DWORD PTR [edx+0x28]
1008c754:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1008c757:	8b 07                	mov    eax,DWORD PTR [edi]
1008c759:	51                   	push   ecx
1008c75a:	8b cf                	mov    ecx,edi
1008c75c:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008c761:	ff 50 70             	call   DWORD PTR [eax+0x70]
1008c764:	50                   	push   eax
1008c765:	8b 43 14             	mov    eax,DWORD PTR [ebx+0x14]
1008c768:	83 ec 0c             	sub    esp,0xc
1008c76b:	8b cc                	mov    ecx,esp
1008c76d:	89 01                	mov    DWORD PTR [ecx],eax
1008c76f:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
1008c772:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1008c775:	8b 43 1c             	mov    eax,DWORD PTR [ebx+0x1c]
1008c778:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1008c77b:	e8 80 31 09 00       	call   0x1011f900
1008c780:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
1008c785:	83 c4 20             	add    esp,0x20
1008c788:	56                   	push   esi
1008c789:	51                   	push   ecx
1008c78a:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008c78f:	57                   	push   edi
1008c790:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1008c793:	e8 a8 ee 08 00       	call   0x1011b640
1008c798:	83 c4 10             	add    esp,0x10
1008c79b:	5f                   	pop    edi
1008c79c:	5e                   	pop    esi
1008c79d:	5b                   	pop    ebx
1008c79e:	8b e5                	mov    esp,ebp
1008c7a0:	5d                   	pop    ebp
1008c7a1:	c2 1c 00             	ret    0x1c
