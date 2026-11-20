
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fa530 <.text+0xf9530>:
100fa530:	55                   	push   ebp
100fa531:	8b ec                	mov    ebp,esp
100fa533:	83 e4 f8             	and    esp,0xfffffff8
100fa536:	83 ec 28             	sub    esp,0x28
100fa539:	56                   	push   esi
100fa53a:	8b f1                	mov    esi,ecx
100fa53c:	57                   	push   edi
100fa53d:	8b be 4c 03 00 00    	mov    edi,DWORD PTR [esi+0x34c]
100fa543:	85 ff                	test   edi,edi
100fa545:	74 46                	je     0x100fa58d
100fa547:	6a 00                	push   0x0
100fa549:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
100fa54f:	e8 ec d1 f1 ff       	call   0x10017740
100fa554:	8b 86 4c 03 00 00    	mov    eax,DWORD PTR [esi+0x34c]
100fa55a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100fa55d:	8b 80 b0 03 00 00    	mov    eax,DWORD PTR [eax+0x3b0]
100fa563:	89 81 08 01 00 00    	mov    DWORD PTR [ecx+0x108],eax
100fa569:	8b 86 4c 03 00 00    	mov    eax,DWORD PTR [esi+0x34c]
100fa56f:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100fa572:	f7 80 a4 01 00 00 00 	test   DWORD PTR [eax+0x1a4],0x100
100fa579:	01 00 00 
100fa57c:	74 29                	je     0x100fa5a7
100fa57e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa581:	c7 80 74 01 00 00 01 	mov    DWORD PTR [eax+0x174],0x1
100fa588:	00 00 00 
100fa58b:	eb 1a                	jmp    0x100fa5a7
100fa58d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa590:	c7 80 08 01 00 00 04 	mov    DWORD PTR [eax+0x108],0x4
100fa597:	00 00 00 
100fa59a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa59d:	c7 80 0c 01 00 00 03 	mov    DWORD PTR [eax+0x10c],0x3
100fa5a4:	00 00 00 
100fa5a7:	6a 00                	push   0x0
100fa5a9:	8d 8e 8c 01 00 00    	lea    ecx,[esi+0x18c]
100fa5af:	c7 86 4c 03 00 00 00 	mov    DWORD PTR [esi+0x34c],0x0
100fa5b6:	00 00 00 
100fa5b9:	e8 82 d1 f1 ff       	call   0x10017740
100fa5be:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa5c1:	c7 46 0c 00 00 00 00 	mov    DWORD PTR [esi+0xc],0x0
100fa5c8:	83 b8 74 01 00 00 01 	cmp    DWORD PTR [eax+0x174],0x1
100fa5cf:	0f 85 e1 00 00 00    	jne    0x100fa6b6
100fa5d5:	c7 80 64 01 00 00 00 	mov    DWORD PTR [eax+0x164],0x0
100fa5dc:	00 00 00 
100fa5df:	8b ce                	mov    ecx,esi
100fa5e1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa5e4:	6a 08                	push   0x8
100fa5e6:	c7 80 3c 01 00 00 00 	mov    DWORD PTR [eax+0x13c],0x0
100fa5ed:	00 00 00 
100fa5f0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa5f3:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
100fa5fa:	00 00 00 
100fa5fd:	e8 6e 84 fc ff       	call   0x100c2a70
100fa602:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa605:	c7 80 74 01 00 00 02 	mov    DWORD PTR [eax+0x174],0x2
100fa60c:	00 00 00 
100fa60f:	8d 44 24 18          	lea    eax,[esp+0x18]
100fa613:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100fa616:	50                   	push   eax
100fa617:	f3 0f 10 91 e4 00 00 	movss  xmm2,DWORD PTR [ecx+0xe4]
100fa61e:	00 
100fa61f:	8d 81 dc 00 00 00    	lea    eax,[ecx+0xdc]
100fa625:	f3 0f 58 15 80 13 1a 	addss  xmm2,DWORD PTR ds:0x101a1380
100fa62c:	10 
100fa62d:	f3 0f 10 89 ec 00 00 	movss  xmm1,DWORD PTR [ecx+0xec]
100fa634:	00 
100fa635:	f3 0f 10 81 e8 00 00 	movss  xmm0,DWORD PTR [ecx+0xe8]
100fa63c:	00 
100fa63d:	50                   	push   eax
100fa63e:	51                   	push   ecx
100fa63f:	f3 0f 11 44 24 24    	movss  DWORD PTR [esp+0x24],xmm0
100fa645:	f3 0f 11 4c 24 28    	movss  DWORD PTR [esp+0x28],xmm1
100fa64b:	f3 0f 11 54 24 2c    	movss  DWORD PTR [esp+0x2c],xmm2
100fa651:	e8 da f9 01 00       	call   0x1011a030
100fa656:	83 c4 0c             	add    esp,0xc
100fa659:	85 ff                	test   edi,edi
100fa65b:	74 26                	je     0x100fa683
100fa65d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100fa660:	f6 80 a4 01 00 00 08 	test   BYTE PTR [eax+0x1a4],0x8
100fa667:	74 1a                	je     0x100fa683
100fa669:	c7 86 80 00 00 00 00 	mov    DWORD PTR [esi+0x80],0x0
100fa670:	00 00 00 
100fa673:	c7 46 78 00 00 00 00 	mov    DWORD PTR [esi+0x78],0x0
100fa67a:	c7 46 7c 00 00 00 00 	mov    DWORD PTR [esi+0x7c],0x0
100fa681:	eb 07                	jmp    0x100fa68a
100fa683:	8b ce                	mov    ecx,esi
100fa685:	e8 c6 05 f9 ff       	call   0x1008ac50
100fa68a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa68d:	c7 80 3c 01 00 00 00 	mov    DWORD PTR [eax+0x13c],0x0
100fa694:	00 00 00 
100fa697:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa69a:	c7 80 08 01 00 00 00 	mov    DWORD PTR [eax+0x108],0x0
100fa6a1:	00 00 00 
100fa6a4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa6a7:	83 88 18 01 00 00 20 	or     DWORD PTR [eax+0x118],0x20
100fa6ae:	33 c0                	xor    eax,eax
100fa6b0:	5f                   	pop    edi
100fa6b1:	5e                   	pop    esi
100fa6b2:	8b e5                	mov    esp,ebp
100fa6b4:	5d                   	pop    ebp
100fa6b5:	c3                   	ret
100fa6b6:	8b c8                	mov    ecx,eax
100fa6b8:	85 ff                	test   edi,edi
100fa6ba:	0f 84 88 01 00 00    	je     0x100fa848
100fa6c0:	83 bf 70 03 00 00 00 	cmp    DWORD PTR [edi+0x370],0x0
100fa6c7:	0f 84 7b 01 00 00    	je     0x100fa848
100fa6cd:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100fa6d0:	f6 80 a4 01 00 00 80 	test   BYTE PTR [eax+0x1a4],0x80
100fa6d7:	0f 85 61 01 00 00    	jne    0x100fa83e
100fa6dd:	8d 44 24 24          	lea    eax,[esp+0x24]
100fa6e1:	8b ce                	mov    ecx,esi
100fa6e3:	50                   	push   eax
100fa6e4:	8d 44 24 1c          	lea    eax,[esp+0x1c]
100fa6e8:	50                   	push   eax
100fa6e9:	6a 00                	push   0x0
100fa6eb:	e8 60 41 f1 ff       	call   0x1000e850
100fa6f0:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
100fa6f3:	f3 0f 10 47 08       	movss  xmm0,DWORD PTR [edi+0x8]
100fa6f8:	f3 0f 10 4f 10       	movss  xmm1,DWORD PTR [edi+0x10]
100fa6fd:	f3 0f 10 57 0c       	movss  xmm2,DWORD PTR [edi+0xc]
100fa702:	f3 0f 11 44 24 08    	movss  DWORD PTR [esp+0x8],xmm0
100fa708:	f3 0f 11 4c 24 10    	movss  DWORD PTR [esp+0x10],xmm1
100fa70e:	0f 28 c8             	movaps xmm1,xmm0
100fa711:	f3 0f 10 44 24 18    	movss  xmm0,DWORD PTR [esp+0x18]
100fa717:	f3 0f 5c c8          	subss  xmm1,xmm0
100fa71b:	f3 0f 11 44 24 14    	movss  DWORD PTR [esp+0x14],xmm0
100fa721:	0f 28 c2             	movaps xmm0,xmm2
100fa724:	f3 0f 11 54 24 0c    	movss  DWORD PTR [esp+0xc],xmm2
100fa72a:	f3 0f 5c 44 24 1c    	subss  xmm0,DWORD PTR [esp+0x1c]
100fa730:	f3 0f 59 c9          	mulss  xmm1,xmm1
100fa734:	f3 0f 59 c0          	mulss  xmm0,xmm0
100fa738:	f3 0f 58 c1          	addss  xmm0,xmm1
100fa73c:	0f 57 c9             	xorps  xmm1,xmm1
100fa73f:	0f 5a c0             	cvtps2pd xmm0,xmm0
100fa742:	66 0f 2e c8          	ucomisd xmm1,xmm0
100fa746:	77 06                	ja     0x100fa74e
100fa748:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100fa74c:	eb 05                	jmp    0x100fa753
100fa74e:	e8 3d 17 07 00       	call   0x1016be90
100fa753:	0f 57 c9             	xorps  xmm1,xmm1
100fa756:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
100fa75a:	f3 0f 10 05 d8 1e 1a 	movss  xmm0,DWORD PTR ds:0x101a1ed8
100fa761:	10 
100fa762:	0f 2f c1             	comiss xmm0,xmm1
100fa765:	76 26                	jbe    0x100fa78d
100fa767:	f3 0f 10 4c 24 0c    	movss  xmm1,DWORD PTR [esp+0xc]
100fa76d:	f3 0f 10 44 24 08    	movss  xmm0,DWORD PTR [esp+0x8]
100fa773:	f3 0f 11 4c 24 1c    	movss  DWORD PTR [esp+0x1c],xmm1
100fa779:	f3 0f 10 4c 24 10    	movss  xmm1,DWORD PTR [esp+0x10]
100fa77f:	f3 0f 11 44 24 18    	movss  DWORD PTR [esp+0x18],xmm0
100fa785:	f3 0f 11 4c 24 20    	movss  DWORD PTR [esp+0x20],xmm1
100fa78b:	eb 06                	jmp    0x100fa793
100fa78d:	f3 0f 10 44 24 14    	movss  xmm0,DWORD PTR [esp+0x14]
100fa793:	f3 0f 11 47 08       	movss  DWORD PTR [edi+0x8],xmm0
100fa798:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa79b:	f3 0f 10 44 24 1c    	movss  xmm0,DWORD PTR [esp+0x1c]
100fa7a1:	f3 0f 11 40 0c       	movss  DWORD PTR [eax+0xc],xmm0
100fa7a6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa7a9:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
100fa7ae:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
100fa7b5:	10 
100fa7b6:	f3 0f 11 40 10       	movss  DWORD PTR [eax+0x10],xmm0
100fa7bb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa7be:	81 88 a8 01 00 00 00 	or     DWORD PTR [eax+0x1a8],0x200
100fa7c5:	02 00 00 
100fa7c8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa7cb:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100fa7d1:	ff 15 b0 2f 22 10    	call   DWORD PTR ds:0x10222fb0
100fa7d7:	83 c4 04             	add    esp,0x4
100fa7da:	85 c0                	test   eax,eax
100fa7dc:	79 26                	jns    0x100fa804
100fa7de:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa7e1:	f3 0f 10 44 24 08    	movss  xmm0,DWORD PTR [esp+0x8]
100fa7e7:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100fa7ec:	f3 0f 10 44 24 0c    	movss  xmm0,DWORD PTR [esp+0xc]
100fa7f2:	f3 0f 11 40 0c       	movss  DWORD PTR [eax+0xc],xmm0
100fa7f7:	f3 0f 10 44 24 10    	movss  xmm0,DWORD PTR [esp+0x10]
100fa7fd:	f3 0f 11 40 10       	movss  DWORD PTR [eax+0x10],xmm0
100fa802:	eb 1d                	jmp    0x100fa821
100fa804:	75 1b                	jne    0x100fa821
100fa806:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa809:	f3 0f 10 44 24 20    	movss  xmm0,DWORD PTR [esp+0x20]
100fa80f:	f3 0f 11 40 10       	movss  DWORD PTR [eax+0x10],xmm0
100fa814:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa817:	81 a0 a8 01 00 00 ff 	and    DWORD PTR [eax+0x1a8],0xfffffdff
100fa81e:	fd ff ff 
100fa821:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa824:	83 c0 08             	add    eax,0x8
100fa827:	50                   	push   eax
100fa828:	56                   	push   esi
100fa829:	e8 b2 f7 01 00       	call   0x10119fe0
100fa82e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa831:	83 c4 08             	add    esp,0x8
100fa834:	83 88 18 01 00 00 20 	or     DWORD PTR [eax+0x118],0x20
100fa83b:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100fa83e:	c7 86 14 02 00 00 00 	mov    DWORD PTR [esi+0x214],0x0
100fa845:	00 00 00 
100fa848:	c7 81 94 01 00 00 00 	mov    DWORD PTR [ecx+0x194],0x0
100fa84f:	00 00 00 
100fa852:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa855:	f3 0f 10 80 64 01 00 	movss  xmm0,DWORD PTR [eax+0x164]
100fa85c:	00 
100fa85d:	0f 2f 05 70 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1370
100fa864:	76 15                	jbe    0x100fa87b
100fa866:	c7 86 28 02 00 00 01 	mov    DWORD PTR [esi+0x228],0x1
100fa86d:	00 00 00 
100fa870:	b8 01 00 00 00       	mov    eax,0x1
100fa875:	5f                   	pop    edi
100fa876:	5e                   	pop    esi
100fa877:	8b e5                	mov    esp,ebp
100fa879:	5d                   	pop    ebp
100fa87a:	c3                   	ret
100fa87b:	81 8e 80 01 00 00 00 	or     DWORD PTR [esi+0x180],0x100
100fa882:	01 00 00 
100fa885:	8b ce                	mov    ecx,esi
100fa887:	c7 86 28 02 00 00 08 	mov    DWORD PTR [esi+0x228],0x8
100fa88e:	00 00 00 
100fa891:	c7 80 74 01 00 00 01 	mov    DWORD PTR [eax+0x174],0x1
100fa898:	00 00 00 
100fa89b:	e8 d0 31 fc ff       	call   0x100bda70
100fa8a0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fa8a3:	5f                   	pop    edi
100fa8a4:	5e                   	pop    esi
100fa8a5:	c7 80 74 01 00 00 00 	mov    DWORD PTR [eax+0x174],0x0
100fa8ac:	00 00 00 
100fa8af:	b8 01 00 00 00       	mov    eax,0x1
100fa8b4:	8b e5                	mov    esp,ebp
100fa8b6:	5d                   	pop    ebp
100fa8b7:	c3                   	ret
