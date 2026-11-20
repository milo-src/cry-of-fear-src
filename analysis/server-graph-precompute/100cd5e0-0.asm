
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cd5e0 <.text+0xcc5e0>:
100cd5e0:	55                   	push   ebp
100cd5e1:	8b ec                	mov    ebp,esp
100cd5e3:	81 ec 4c 03 00 00    	sub    esp,0x34c
100cd5e9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100cd5ee:	33 c5                	xor    eax,ebp
100cd5f0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cd5f3:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100cd5f6:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100cd5f9:	56                   	push   esi
100cd5fa:	8b f1                	mov    esi,ecx
100cd5fc:	89 95 bc fc ff ff    	mov    DWORD PTR [ebp-0x344],edx
100cd602:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
100cd605:	89 8d cc fc ff ff    	mov    DWORD PTR [ebp-0x334],ecx
100cd60b:	89 85 d0 fc ff ff    	mov    DWORD PTR [ebp-0x330],eax
100cd611:	83 3e 00             	cmp    DWORD PTR [esi],0x0
100cd614:	0f 84 42 03 00 00    	je     0x100cd95c
100cd61a:	83 7e 04 00          	cmp    DWORD PTR [esi+0x4],0x0
100cd61e:	0f 84 38 03 00 00    	je     0x100cd95c
100cd624:	57                   	push   edi
100cd625:	85 c9                	test   ecx,ecx
100cd627:	0f 88 0a 03 00 00    	js     0x100cd937
100cd62d:	8b 7e 18             	mov    edi,DWORD PTR [esi+0x18]
100cd630:	3b cf                	cmp    ecx,edi
100cd632:	0f 8f ff 02 00 00    	jg     0x100cd937
100cd638:	3b c8                	cmp    ecx,eax
100cd63a:	75 1c                	jne    0x100cd658
100cd63c:	5f                   	pop    edi
100cd63d:	89 42 04             	mov    DWORD PTR [edx+0x4],eax
100cd640:	b8 02 00 00 00       	mov    eax,0x2
100cd645:	89 0a                	mov    DWORD PTR [edx],ecx
100cd647:	5e                   	pop    esi
100cd648:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100cd64b:	33 cd                	xor    ecx,ebp
100cd64d:	e8 61 05 07 00       	call   0x1013dbb3
100cd652:	8b e5                	mov    esp,ebp
100cd654:	5d                   	pop    ebp
100cd655:	c2 14 00             	ret    0x14
100cd658:	83 7e 08 00          	cmp    DWORD PTR [esi+0x8],0x0
100cd65c:	53                   	push   ebx
100cd65d:	74 6d                	je     0x100cd6cc
100cd65f:	8b 5d 18             	mov    ebx,DWORD PTR [ebp+0x18]
100cd662:	bf 01 00 00 00       	mov    edi,0x1
100cd667:	81 e3 40 03 00 00    	and    ebx,0x340
100cd66d:	89 0a                	mov    DWORD PTR [edx],ecx
100cd66f:	f7 db                	neg    ebx
100cd671:	1b db                	sbb    ebx,ebx
100cd673:	f7 db                	neg    ebx
100cd675:	53                   	push   ebx
100cd676:	ff 75 14             	push   DWORD PTR [ebp+0x14]
100cd679:	50                   	push   eax
100cd67a:	51                   	push   ecx
100cd67b:	8b ce                	mov    ecx,esi
100cd67d:	e8 ae 11 00 00       	call   0x100ce830
100cd682:	39 85 cc fc ff ff    	cmp    DWORD PTR [ebp-0x334],eax
100cd688:	0f 84 37 02 00 00    	je     0x100cd8c5
100cd68e:	83 ff 0a             	cmp    edi,0xa
100cd691:	0f 8d 8b 02 00 00    	jge    0x100cd922
100cd697:	8b 8d bc fc ff ff    	mov    ecx,DWORD PTR [ebp-0x344]
100cd69d:	89 04 b9             	mov    DWORD PTR [ecx+edi*4],eax
100cd6a0:	8b c8                	mov    ecx,eax
100cd6a2:	47                   	inc    edi
100cd6a3:	89 8d cc fc ff ff    	mov    DWORD PTR [ebp-0x334],ecx
100cd6a9:	3b 85 d0 fc ff ff    	cmp    eax,DWORD PTR [ebp-0x330]
100cd6af:	8b 85 d0 fc ff ff    	mov    eax,DWORD PTR [ebp-0x330]
100cd6b5:	75 be                	jne    0x100cd675
100cd6b7:	5b                   	pop    ebx
100cd6b8:	8b c7                	mov    eax,edi
100cd6ba:	5f                   	pop    edi
100cd6bb:	5e                   	pop    esi
100cd6bc:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100cd6bf:	33 cd                	xor    ecx,ebp
100cd6c1:	e8 ed 04 07 00       	call   0x1013dbb3
100cd6c6:	8b e5                	mov    esp,ebp
100cd6c8:	5d                   	pop    ebp
100cd6c9:	c2 14 00             	ret    0x14
100cd6cc:	8d 8d d8 fc ff ff    	lea    ecx,[ebp-0x328]
100cd6d2:	e8 09 d0 ff ff       	call   0x100ca6e0
100cd6d7:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
100cd6da:	83 f8 03             	cmp    eax,0x3
100cd6dd:	77 37                	ja     0x100cd716
100cd6df:	ff 24 85 80 d9 0c 10 	jmp    DWORD PTR [eax*4+0x100cd980]
100cd6e6:	c7 85 d4 fc ff ff 01 	mov    DWORD PTR [ebp-0x32c],0x1
100cd6ed:	00 00 00 
100cd6f0:	eb 30                	jmp    0x100cd722
100cd6f2:	c7 85 d4 fc ff ff 02 	mov    DWORD PTR [ebp-0x32c],0x2
100cd6f9:	00 00 00 
100cd6fc:	eb 24                	jmp    0x100cd722
100cd6fe:	c7 85 d4 fc ff ff 04 	mov    DWORD PTR [ebp-0x32c],0x4
100cd705:	00 00 00 
100cd708:	eb 18                	jmp    0x100cd722
100cd70a:	c7 85 d4 fc ff ff 08 	mov    DWORD PTR [ebp-0x32c],0x8
100cd711:	00 00 00 
100cd714:	eb 0c                	jmp    0x100cd722
100cd716:	8b 85 b8 fc ff ff    	mov    eax,DWORD PTR [ebp-0x348]
100cd71c:	89 85 d4 fc ff ff    	mov    DWORD PTR [ebp-0x32c],eax
100cd722:	33 d2                	xor    edx,edx
100cd724:	85 ff                	test   edi,edi
100cd726:	7e 1c                	jle    0x100cd744
100cd728:	33 c9                	xor    ecx,ecx
100cd72a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100cd730:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100cd733:	8d 49 58             	lea    ecx,[ecx+0x58]
100cd736:	42                   	inc    edx
100cd737:	c7 44 01 f0 00 00 80 	mov    DWORD PTR [ecx+eax*1-0x10],0xbf800000
100cd73e:	bf 
100cd73f:	3b 56 18             	cmp    edx,DWORD PTR [esi+0x18]
100cd742:	7c ec                	jl     0x100cd730
100cd744:	8b 95 cc fc ff ff    	mov    edx,DWORD PTR [ebp-0x334]
100cd74a:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100cd74d:	6b ca 58             	imul   ecx,edx,0x58
100cd750:	51                   	push   ecx
100cd751:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100cd758:	52                   	push   edx
100cd759:	c7 44 01 48 00 00 00 	mov    DWORD PTR [ecx+eax*1+0x48],0x0
100cd760:	00 
100cd761:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100cd764:	89 54 01 4c          	mov    DWORD PTR [ecx+eax*1+0x4c],edx
100cd768:	8d 8d d8 fc ff ff    	lea    ecx,[ebp-0x328]
100cd76e:	e8 cd 08 00 00       	call   0x100ce040
100cd773:	83 bd d8 fc ff ff 00 	cmp    DWORD PTR [ebp-0x328],0x0
100cd77a:	0f 84 2a 01 00 00    	je     0x100cd8aa
100cd780:	8d 85 b4 fc ff ff    	lea    eax,[ebp-0x34c]
100cd786:	50                   	push   eax
100cd787:	8d 8d d8 fc ff ff    	lea    ecx,[ebp-0x328]
100cd78d:	e8 be 17 00 00       	call   0x100cef50
100cd792:	89 85 c8 fc ff ff    	mov    DWORD PTR [ebp-0x338],eax
100cd798:	3b 85 d0 fc ff ff    	cmp    eax,DWORD PTR [ebp-0x330]
100cd79e:	0f 84 06 01 00 00    	je     0x100cd8aa
100cd7a4:	6b d8 58             	imul   ebx,eax,0x58
100cd7a7:	33 ff                	xor    edi,edi
100cd7a9:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100cd7ac:	03 c3                	add    eax,ebx
100cd7ae:	89 9d c0 fc ff ff    	mov    DWORD PTR [ebp-0x340],ebx
100cd7b4:	89 85 b8 fc ff ff    	mov    DWORD PTR [ebp-0x348],eax
100cd7ba:	39 78 20             	cmp    DWORD PTR [eax+0x20],edi
100cd7bd:	0f 8e da 00 00 00    	jle    0x100cd89d
100cd7c3:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
100cd7c6:	8b 4e 10             	mov    ecx,DWORD PTR [esi+0x10]
100cd7c9:	8b 44 13 24          	mov    eax,DWORD PTR [ebx+edx*1+0x24]
100cd7cd:	03 c7                	add    eax,edi
100cd7cf:	8d 1c 40             	lea    ebx,[eax+eax*2]
100cd7d2:	8b 44 d9 04          	mov    eax,DWORD PTR [ecx+ebx*8+0x4]
100cd7d6:	89 85 c4 fc ff ff    	mov    DWORD PTR [ebp-0x33c],eax
100cd7dc:	8b 44 d9 10          	mov    eax,DWORD PTR [ecx+ebx*8+0x10]
100cd7e0:	23 85 d4 fc ff ff    	and    eax,DWORD PTR [ebp-0x32c]
100cd7e6:	3b 85 d4 fc ff ff    	cmp    eax,DWORD PTR [ebp-0x32c]
100cd7ec:	0f 85 95 00 00 00    	jne    0x100cd887
100cd7f2:	8b 44 d9 08          	mov    eax,DWORD PTR [ecx+ebx*8+0x8]
100cd7f6:	8b 9d c8 fc ff ff    	mov    ebx,DWORD PTR [ebp-0x338]
100cd7fc:	85 c0                	test   eax,eax
100cd7fe:	74 18                	je     0x100cd818
100cd800:	6a 01                	push   0x1
100cd802:	ff 75 18             	push   DWORD PTR [ebp+0x18]
100cd805:	8b ce                	mov    ecx,esi
100cd807:	50                   	push   eax
100cd808:	53                   	push   ebx
100cd809:	e8 82 01 00 00       	call   0x100cd990
100cd80e:	85 c0                	test   eax,eax
100cd810:	74 75                	je     0x100cd887
100cd812:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
100cd815:	8b 4e 10             	mov    ecx,DWORD PTR [esi+0x10]
100cd818:	8b 85 c0 fc ff ff    	mov    eax,DWORD PTR [ebp-0x340]
100cd81e:	f3 0f 10 0d 4c 1f 1a 	movss  xmm1,DWORD PTR ds:0x101a1f4c
100cd825:	10 
100cd826:	8b 44 10 24          	mov    eax,DWORD PTR [eax+edx*1+0x24]
100cd82a:	03 c7                	add    eax,edi
100cd82c:	8d 04 40             	lea    eax,[eax+eax*2]
100cd82f:	f3 0f 10 54 c1 14    	movss  xmm2,DWORD PTR [ecx+eax*8+0x14]
100cd835:	6b 8d c4 fc ff ff 58 	imul   ecx,DWORD PTR [ebp-0x33c],0x58
100cd83c:	f3 0f 58 95 b4 fc ff 	addss  xmm2,DWORD PTR [ebp-0x34c]
100cd843:	ff 
100cd844:	f3 0f 10 44 11 48    	movss  xmm0,DWORD PTR [ecx+edx*1+0x48]
100cd84a:	0f 2f c8             	comiss xmm1,xmm0
100cd84d:	77 14                	ja     0x100cd863
100cd84f:	0f 5a c0             	cvtps2pd xmm0,xmm0
100cd852:	0f 5a ca             	cvtps2pd xmm1,xmm2
100cd855:	f2 0f 5c 05 e0 1d 1a 	subsd  xmm0,QWORD PTR ds:0x101a1de0
100cd85c:	10 
100cd85d:	66 0f 2f c1          	comisd xmm0,xmm1
100cd861:	76 24                	jbe    0x100cd887
100cd863:	f3 0f 11 54 11 48    	movss  DWORD PTR [ecx+edx*1+0x48],xmm2
100cd869:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100cd86c:	51                   	push   ecx
100cd86d:	f3 0f 11 14 24       	movss  DWORD PTR [esp],xmm2
100cd872:	ff b5 c4 fc ff ff    	push   DWORD PTR [ebp-0x33c]
100cd878:	89 5c 01 4c          	mov    DWORD PTR [ecx+eax*1+0x4c],ebx
100cd87c:	8d 8d d8 fc ff ff    	lea    ecx,[ebp-0x328]
100cd882:	e8 b9 07 00 00       	call   0x100ce040
100cd887:	8b 85 b8 fc ff ff    	mov    eax,DWORD PTR [ebp-0x348]
100cd88d:	47                   	inc    edi
100cd88e:	8b 9d c0 fc ff ff    	mov    ebx,DWORD PTR [ebp-0x340]
100cd894:	3b 78 20             	cmp    edi,DWORD PTR [eax+0x20]
100cd897:	0f 8c 26 ff ff ff    	jl     0x100cd7c3
100cd89d:	83 bd d8 fc ff ff 00 	cmp    DWORD PTR [ebp-0x328],0x0
100cd8a4:	0f 85 d6 fe ff ff    	jne    0x100cd780
100cd8aa:	8b 8d d0 fc ff ff    	mov    ecx,DWORD PTR [ebp-0x330]
100cd8b0:	8b 56 0c             	mov    edx,DWORD PTR [esi+0xc]
100cd8b3:	f3 0f 10 05 4c 1f 1a 	movss  xmm0,DWORD PTR ds:0x101a1f4c
100cd8ba:	10 
100cd8bb:	6b c1 58             	imul   eax,ecx,0x58
100cd8be:	0f 2f 44 10 48       	comiss xmm0,DWORD PTR [eax+edx*1+0x48]
100cd8c3:	76 15                	jbe    0x100cd8da
100cd8c5:	5b                   	pop    ebx
100cd8c6:	5f                   	pop    edi
100cd8c7:	33 c0                	xor    eax,eax
100cd8c9:	5e                   	pop    esi
100cd8ca:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100cd8cd:	33 cd                	xor    ecx,ebp
100cd8cf:	e8 df 02 07 00       	call   0x1013dbb3
100cd8d4:	8b e5                	mov    esp,ebp
100cd8d6:	5d                   	pop    ebp
100cd8d7:	c2 14 00             	ret    0x14
100cd8da:	8b 95 cc fc ff ff    	mov    edx,DWORD PTR [ebp-0x334]
100cd8e0:	8b c1                	mov    eax,ecx
100cd8e2:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100cd8e5:	bf 01 00 00 00       	mov    edi,0x1
100cd8ea:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100cd8f0:	6b c0 58             	imul   eax,eax,0x58
100cd8f3:	8b df                	mov    ebx,edi
100cd8f5:	47                   	inc    edi
100cd8f6:	8b 44 08 4c          	mov    eax,DWORD PTR [eax+ecx*1+0x4c]
100cd8fa:	3b c2                	cmp    eax,edx
100cd8fc:	75 f2                	jne    0x100cd8f0
100cd8fe:	8b 8d d0 fc ff ff    	mov    ecx,DWORD PTR [ebp-0x330]
100cd904:	85 db                	test   ebx,ebx
100cd906:	78 1a                	js     0x100cd922
100cd908:	8b 85 bc fc ff ff    	mov    eax,DWORD PTR [ebp-0x344]
100cd90e:	66 90                	xchg   ax,ax
100cd910:	6b d1 58             	imul   edx,ecx,0x58
100cd913:	89 0c 98             	mov    DWORD PTR [eax+ebx*4],ecx
100cd916:	83 eb 01             	sub    ebx,0x1
100cd919:	8b 4e 0c             	mov    ecx,DWORD PTR [esi+0xc]
100cd91c:	8b 4c 0a 4c          	mov    ecx,DWORD PTR [edx+ecx*1+0x4c]
100cd920:	79 ee                	jns    0x100cd910
100cd922:	5b                   	pop    ebx
100cd923:	8b c7                	mov    eax,edi
100cd925:	5f                   	pop    edi
100cd926:	5e                   	pop    esi
100cd927:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100cd92a:	33 cd                	xor    ecx,ebp
100cd92c:	e8 82 02 07 00       	call   0x1013dbb3
100cd931:	8b e5                	mov    esp,ebp
100cd933:	5d                   	pop    ebp
100cd934:	c2 14 00             	ret    0x14
100cd937:	51                   	push   ecx
100cd938:	68 04 68 1d 10       	push   0x101d6804
100cd93d:	6a 02                	push   0x2
100cd93f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cd945:	83 c4 0c             	add    esp,0xc
100cd948:	33 c0                	xor    eax,eax
100cd94a:	5f                   	pop    edi
100cd94b:	5e                   	pop    esi
100cd94c:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100cd94f:	33 cd                	xor    ecx,ebp
100cd951:	e8 5d 02 07 00       	call   0x1013dbb3
100cd956:	8b e5                	mov    esp,ebp
100cd958:	5d                   	pop    ebp
100cd959:	c2 14 00             	ret    0x14
100cd95c:	68 90 67 1d 10       	push   0x101d6790
100cd961:	6a 02                	push   0x2
100cd963:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cd969:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100cd96c:	83 c4 08             	add    esp,0x8
100cd96f:	33 cd                	xor    ecx,ebp
100cd971:	33 c0                	xor    eax,eax
100cd973:	5e                   	pop    esi
100cd974:	e8 3a 02 07 00       	call   0x1013dbb3
100cd979:	8b e5                	mov    esp,ebp
100cd97b:	5d                   	pop    ebp
100cd97c:	c2 14 00             	ret    0x14
