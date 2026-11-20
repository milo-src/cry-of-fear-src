
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10077530 <.text+0x76530>:
10077530:	55                   	push   ebp
10077531:	8b ec                	mov    ebp,esp
10077533:	6a ff                	push   0xffffffff
10077535:	68 96 dc 19 10       	push   0x1019dc96
1007753a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
10077540:	50                   	push   eax
10077541:	81 ec f4 02 00 00    	sub    esp,0x2f4
10077547:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1007754c:	33 c5                	xor    eax,ebp
1007754e:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
10077551:	53                   	push   ebx
10077552:	56                   	push   esi
10077553:	57                   	push   edi
10077554:	50                   	push   eax
10077555:	8d 45 f4             	lea    eax,[ebp-0xc]
10077558:	64 a3 00 00 00 00    	mov    fs:0x0,eax
1007755e:	8b d9                	mov    ebx,ecx
10077560:	89 9d bc fd ff ff    	mov    DWORD PTR [ebp-0x244],ebx
10077566:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
1007756c:	50                   	push   eax
1007756d:	ff 15 d4 30 22 10    	call   DWORD PTR ds:0x102230d4
10077573:	68 bc 8b 1a 10       	push   0x101a8bbc
10077578:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
1007757e:	d9 9d b8 fd ff ff    	fstp   DWORD PTR [ebp-0x248]
10077584:	f3 0f 2c 85 b8 fd ff 	cvttss2si eax,DWORD PTR [ebp-0x248]
1007758b:	ff 
1007758c:	83 c4 08             	add    esp,0x8
1007758f:	83 f8 07             	cmp    eax,0x7
10077592:	0f 87 c7 00 00 00    	ja     0x1007765f
10077598:	ff 24 85 e8 78 07 10 	jmp    DWORD PTR [eax*4+0x100778e8]
1007759f:	8d bd f0 fe ff ff    	lea    edi,[ebp-0x110]
100775a5:	4f                   	dec    edi
100775a6:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100775a9:	47                   	inc    edi
100775aa:	84 c0                	test   al,al
100775ac:	75 f8                	jne    0x100775a6
100775ae:	b9 0a 00 00 00       	mov    ecx,0xa
100775b3:	be c0 b2 1b 10       	mov    esi,0x101bb2c0
100775b8:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100775ba:	e9 e0 00 00 00       	jmp    0x1007769f
100775bf:	8d bd f0 fe ff ff    	lea    edi,[ebp-0x110]
100775c5:	4f                   	dec    edi
100775c6:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100775c9:	47                   	inc    edi
100775ca:	84 c0                	test   al,al
100775cc:	75 f8                	jne    0x100775c6
100775ce:	b9 0a 00 00 00       	mov    ecx,0xa
100775d3:	be e8 b2 1b 10       	mov    esi,0x101bb2e8
100775d8:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100775da:	a4                   	movs   BYTE PTR es:[edi],BYTE PTR ds:[esi]
100775db:	e9 bf 00 00 00       	jmp    0x1007769f
100775e0:	8d bd f0 fe ff ff    	lea    edi,[ebp-0x110]
100775e6:	4f                   	dec    edi
100775e7:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100775ea:	47                   	inc    edi
100775eb:	84 c0                	test   al,al
100775ed:	75 f8                	jne    0x100775e7
100775ef:	b9 0a 00 00 00       	mov    ecx,0xa
100775f4:	be 14 b3 1b 10       	mov    esi,0x101bb314
100775f9:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100775fb:	a4                   	movs   BYTE PTR es:[edi],BYTE PTR ds:[esi]
100775fc:	e9 9e 00 00 00       	jmp    0x1007769f
10077601:	8d bd f0 fe ff ff    	lea    edi,[ebp-0x110]
10077607:	4f                   	dec    edi
10077608:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
1007760b:	47                   	inc    edi
1007760c:	84 c0                	test   al,al
1007760e:	75 f8                	jne    0x10077608
10077610:	b9 0b 00 00 00       	mov    ecx,0xb
10077615:	be 40 b3 1b 10       	mov    esi,0x101bb340
1007761a:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1007761c:	e9 7e 00 00 00       	jmp    0x1007769f
10077621:	8d bd f0 fe ff ff    	lea    edi,[ebp-0x110]
10077627:	4f                   	dec    edi
10077628:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
1007762b:	47                   	inc    edi
1007762c:	84 c0                	test   al,al
1007762e:	75 f8                	jne    0x10077628
10077630:	b9 0a 00 00 00       	mov    ecx,0xa
10077635:	be 6c b3 1b 10       	mov    esi,0x101bb36c
1007763a:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1007763c:	66 a5                	movs   WORD PTR es:[edi],WORD PTR ds:[esi]
1007763e:	eb 5f                	jmp    0x1007769f
10077640:	8d bd f0 fe ff ff    	lea    edi,[ebp-0x110]
10077646:	4f                   	dec    edi
10077647:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
1007764a:	47                   	inc    edi
1007764b:	84 c0                	test   al,al
1007764d:	75 f8                	jne    0x10077647
1007764f:	b9 0a 00 00 00       	mov    ecx,0xa
10077654:	be 98 b3 1b 10       	mov    esi,0x101bb398
10077659:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1007765b:	66 a5                	movs   WORD PTR es:[edi],WORD PTR ds:[esi]
1007765d:	eb 40                	jmp    0x1007769f
1007765f:	8d 8d f0 fe ff ff    	lea    ecx,[ebp-0x110]
10077665:	49                   	dec    ecx
10077666:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
10077669:	8d 49 01             	lea    ecx,[ecx+0x1]
1007766c:	84 c0                	test   al,al
1007766e:	75 f6                	jne    0x10077666
10077670:	a1 a8 b2 1b 10       	mov    eax,ds:0x101bb2a8
10077675:	89 01                	mov    DWORD PTR [ecx],eax
10077677:	a1 ac b2 1b 10       	mov    eax,ds:0x101bb2ac
1007767c:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1007767f:	a1 b0 b2 1b 10       	mov    eax,ds:0x101bb2b0
10077684:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10077687:	a1 b4 b2 1b 10       	mov    eax,ds:0x101bb2b4
1007768c:	89 41 0c             	mov    DWORD PTR [ecx+0xc],eax
1007768f:	a1 b8 b2 1b 10       	mov    eax,ds:0x101bb2b8
10077694:	89 41 10             	mov    DWORD PTR [ecx+0x10],eax
10077697:	a1 bc b2 1b 10       	mov    eax,ds:0x101bb2bc
1007769c:	89 41 14             	mov    DWORD PTR [ecx+0x14],eax
1007769f:	6a 01                	push   0x1
100776a1:	6a 40                	push   0x40
100776a3:	6a 01                	push   0x1
100776a5:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100776ab:	50                   	push   eax
100776ac:	8d 8d 00 fd ff ff    	lea    ecx,[ebp-0x300]
100776b2:	e8 19 82 fb ff       	call   0x1002f8d0
100776b7:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100776be:	c7 85 ec fd ff ff 0f 	mov    DWORD PTR [ebp-0x214],0xf
100776c5:	00 00 00 
100776c8:	c7 85 d0 fd ff ff 00 	mov    DWORD PTR [ebp-0x230],0x0
100776cf:	00 00 00 
100776d2:	c7 85 d4 fd ff ff 0f 	mov    DWORD PTR [ebp-0x22c],0xf
100776d9:	00 00 00 
100776dc:	c6 85 c0 fd ff ff 00 	mov    BYTE PTR [ebp-0x240],0x0
100776e3:	f3 0f 2c 83 dc 00 00 	cvttss2si eax,DWORD PTR [ebx+0xdc]
100776ea:	00 
100776eb:	bb 05 00 00 00       	mov    ebx,0x5
100776f0:	c6 45 fc 02          	mov    BYTE PTR [ebp-0x4],0x2
100776f4:	c7 85 e8 fd ff ff 01 	mov    DWORD PTR [ebp-0x218],0x1
100776fb:	00 00 00 
100776fe:	c6 85 d9 fd ff ff 00 	mov    BYTE PTR [ebp-0x227],0x0
10077705:	8d 7b fc             	lea    edi,[ebx-0x4]
10077708:	88 85 d8 fd ff ff    	mov    BYTE PTR [ebp-0x228],al
1007770e:	8d 85 d8 fd ff ff    	lea    eax,[ebp-0x228]
10077714:	50                   	push   eax
10077715:	8d 85 00 fd ff ff    	lea    eax,[ebp-0x300]
1007771b:	50                   	push   eax
1007771c:	e8 2f 7e fb ff       	call   0x1002f550
10077721:	83 c4 08             	add    esp,0x8
10077724:	8b 08                	mov    ecx,DWORD PTR [eax]
10077726:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
10077729:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
1007772e:	0f 85 b3 00 00 00    	jne    0x100777e7
10077734:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10077738:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
1007773f:	00 
10077740:	8b 85 bc fd ff ff    	mov    eax,DWORD PTR [ebp-0x244]
10077746:	66 0f 6e c7          	movd   xmm0,edi
1007774a:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1007774d:	0f 2e 80 dc 00 00 00 	ucomiss xmm0,DWORD PTR [eax+0xdc]
10077754:	9f                   	lahf
10077755:	f6 c4 44             	test   ah,0x44
10077758:	7a 66                	jp     0x100777c0
1007775a:	8b b5 e8 fd ff ff    	mov    esi,DWORD PTR [ebp-0x218]
10077760:	81 fe fe 00 00 00    	cmp    esi,0xfe
10077766:	76 19                	jbe    0x10077781
10077768:	6a 00                	push   0x0
1007776a:	6a 00                	push   0x0
1007776c:	6a 00                	push   0x0
1007776e:	6a 00                	push   0x0
10077770:	68 90 dc 1a 10       	push   0x101adc90
10077775:	6a 04                	push   0x4
10077777:	e8 e4 07 0a 00       	call   0x10117f60
1007777c:	83 c4 18             	add    esp,0x18
1007777f:	eb 40                	jmp    0x100777c1
10077781:	83 bd ec fd ff ff 10 	cmp    DWORD PTR [ebp-0x214],0x10
10077788:	8d 8d d8 fd ff ff    	lea    ecx,[ebp-0x228]
1007778e:	8d 95 f0 fd ff ff    	lea    edx,[ebp-0x210]
10077794:	0f 43 8d d8 fd ff ff 	cmovae ecx,DWORD PTR [ebp-0x228]
1007779b:	2b d1                	sub    edx,ecx
1007779d:	0f 1f 00             	nop    DWORD PTR [eax]
100777a0:	8a 01                	mov    al,BYTE PTR [ecx]
100777a2:	8d 49 01             	lea    ecx,[ecx+0x1]
100777a5:	88 44 0a ff          	mov    BYTE PTR [edx+ecx*1-0x1],al
100777a9:	84 c0                	test   al,al
100777ab:	75 f3                	jne    0x100777a0
100777ad:	81 fe 00 01 00 00    	cmp    esi,0x100
100777b3:	0f 83 29 01 00 00    	jae    0x100778e2
100777b9:	88 84 35 f0 fd ff ff 	mov    BYTE PTR [ebp+esi*1-0x210],al
100777c0:	47                   	inc    edi
100777c1:	8d 85 d8 fd ff ff    	lea    eax,[ebp-0x228]
100777c7:	50                   	push   eax
100777c8:	8d 85 00 fd ff ff    	lea    eax,[ebp-0x300]
100777ce:	50                   	push   eax
100777cf:	e8 7c 7d fb ff       	call   0x1002f550
100777d4:	83 c4 08             	add    esp,0x8
100777d7:	8b 08                	mov    ecx,DWORD PTR [eax]
100777d9:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100777dc:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
100777e1:	0f 84 59 ff ff ff    	je     0x10077740
100777e7:	8d 8d f0 fd ff ff    	lea    ecx,[ebp-0x210]
100777ed:	33 f6                	xor    esi,esi
100777ef:	8d 51 01             	lea    edx,[ecx+0x1]
100777f2:	8a 01                	mov    al,BYTE PTR [ecx]
100777f4:	41                   	inc    ecx
100777f5:	84 c0                	test   al,al
100777f7:	75 f9                	jne    0x100777f2
100777f9:	2b ca                	sub    ecx,edx
100777fb:	74 47                	je     0x10077844
100777fd:	0f 1f 00             	nop    DWORD PTR [eax]
10077800:	6a 01                	push   0x1
10077802:	46                   	inc    esi
10077803:	8d bd f0 fd ff ff    	lea    edi,[ebp-0x210]
10077809:	03 fe                	add    edi,esi
1007780b:	68 8c b2 1b 10       	push   0x101bb28c
10077810:	57                   	push   edi
10077811:	e8 6a 7e 0f 00       	call   0x1016f680
10077816:	83 c4 0c             	add    esp,0xc
10077819:	85 c0                	test   eax,eax
1007781b:	75 11                	jne    0x1007782e
1007781d:	8d 58 03             	lea    ebx,[eax+0x3]
10077820:	81 fe 00 01 00 00    	cmp    esi,0x100
10077826:	0f 83 b6 00 00 00    	jae    0x100778e2
1007782c:	88 07                	mov    BYTE PTR [edi],al
1007782e:	8d 8d f0 fd ff ff    	lea    ecx,[ebp-0x210]
10077834:	8d 51 01             	lea    edx,[ecx+0x1]
10077837:	8a 01                	mov    al,BYTE PTR [ecx]
10077839:	41                   	inc    ecx
1007783a:	84 c0                	test   al,al
1007783c:	75 f9                	jne    0x10077837
1007783e:	2b ca                	sub    ecx,edx
10077840:	3b f1                	cmp    esi,ecx
10077842:	72 bc                	jb     0x10077800
10077844:	8d 8d f0 fd ff ff    	lea    ecx,[ebp-0x210]
1007784a:	8d 51 01             	lea    edx,[ecx+0x1]
1007784d:	0f 1f 00             	nop    DWORD PTR [eax]
10077850:	8a 01                	mov    al,BYTE PTR [ecx]
10077852:	41                   	inc    ecx
10077853:	84 c0                	test   al,al
10077855:	75 f9                	jne    0x10077850
10077857:	2b ca                	sub    ecx,edx
10077859:	83 f9 01             	cmp    ecx,0x1
1007785c:	76 40                	jbe    0x1007789e
1007785e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10077863:	be 01 00 00 00       	mov    esi,0x1
10077868:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
1007786e:	7c 2e                	jl     0x1007789e
10077870:	56                   	push   esi
10077871:	e8 0a 1e 0a 00       	call   0x10119680
10077876:	83 c4 04             	add    esp,0x4
10077879:	85 c0                	test   eax,eax
1007787b:	74 13                	je     0x10077890
1007787d:	6a 00                	push   0x0
1007787f:	53                   	push   ebx
10077880:	8d 8d f0 fd ff ff    	lea    ecx,[ebp-0x210]
10077886:	51                   	push   ecx
10077887:	50                   	push   eax
10077888:	e8 83 1f 0a 00       	call   0x10119810
1007788d:	83 c4 10             	add    esp,0x10
10077890:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10077895:	46                   	inc    esi
10077896:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
1007789c:	7e d2                	jle    0x10077870
1007789e:	8b 85 ec fd ff ff    	mov    eax,DWORD PTR [ebp-0x214]
100778a4:	83 f8 10             	cmp    eax,0x10
100778a7:	72 10                	jb     0x100778b9
100778a9:	40                   	inc    eax
100778aa:	50                   	push   eax
100778ab:	ff b5 d8 fd ff ff    	push   DWORD PTR [ebp-0x228]
100778b1:	e8 da 79 fb ff       	call   0x1002f290
100778b6:	83 c4 08             	add    esp,0x8
100778b9:	8d 8d 00 fd ff ff    	lea    ecx,[ebp-0x300]
100778bf:	e8 2c 90 fb ff       	call   0x100308f0
100778c4:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
100778c7:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100778ce:	59                   	pop    ecx
100778cf:	5f                   	pop    edi
100778d0:	5e                   	pop    esi
100778d1:	5b                   	pop    ebx
100778d2:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
100778d5:	33 cd                	xor    ecx,ebp
100778d7:	e8 d7 62 0c 00       	call   0x1013dbb3
100778dc:	8b e5                	mov    esp,ebp
100778de:	5d                   	pop    ebp
100778df:	c2 10 00             	ret    0x10
100778e2:	e8 61 64 0c 00       	call   0x1013dd48
