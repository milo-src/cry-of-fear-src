
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10101590 <.text+0x100590>:
10101590:	55                   	push   ebp
10101591:	8b ec                	mov    ebp,esp
10101593:	83 ec 58             	sub    esp,0x58
10101596:	53                   	push   ebx
10101597:	57                   	push   edi
10101598:	8b f9                	mov    edi,ecx
1010159a:	8b 07                	mov    eax,DWORD PTR [edi]
1010159c:	ff 50 50             	call   DWORD PTR [eax+0x50]
1010159f:	8d 9f 68 03 00 00    	lea    ebx,[edi+0x368]
101015a5:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
101015a8:	8b cb                	mov    ecx,ebx
101015aa:	89 5d f8             	mov    DWORD PTR [ebp-0x8],ebx
101015ad:	e8 ce 61 f1 ff       	call   0x10017780
101015b2:	85 c0                	test   eax,eax
101015b4:	0f 85 95 02 00 00    	jne    0x1010184f
101015ba:	83 7d 0c 02          	cmp    DWORD PTR [ebp+0xc],0x2
101015be:	0f 8c 8b 02 00 00    	jl     0x1010184f
101015c4:	56                   	push   esi
101015c5:	57                   	push   edi
101015c6:	8b cb                	mov    ecx,ebx
101015c8:	e8 73 61 f1 ff       	call   0x10017740
101015cd:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
101015d0:	be 01 00 00 00       	mov    esi,0x1
101015d5:	89 75 0c             	mov    DWORD PTR [ebp+0xc],esi
101015d8:	8b 88 d4 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d4]
101015de:	85 c9                	test   ecx,ecx
101015e0:	0f 84 97 00 00 00    	je     0x1010167d
101015e6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101015eb:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
101015f1:	03 c1                	add    eax,ecx
101015f3:	50                   	push   eax
101015f4:	68 80 f0 1d 10       	push   0x101df080
101015f9:	6a 00                	push   0x0
101015fb:	e8 80 6e 01 00       	call   0x10118480
10101600:	8b d8                	mov    ebx,eax
10101602:	83 c4 0c             	add    esp,0xc
10101605:	85 db                	test   ebx,ebx
10101607:	0f 84 2d 02 00 00    	je     0x1010183a
1010160d:	0f 1f 00             	nop    DWORD PTR [eax]
10101610:	8b 13                	mov    edx,DWORD PTR [ebx]
10101612:	8b cb                	mov    ecx,ebx
10101614:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
10101617:	8b f0                	mov    esi,eax
10101619:	85 f6                	test   esi,esi
1010161b:	74 32                	je     0x1010164f
1010161d:	8d 8e 68 03 00 00    	lea    ecx,[esi+0x368]
10101623:	e8 58 61 f1 ff       	call   0x10017780
10101628:	85 c0                	test   eax,eax
1010162a:	75 23                	jne    0x1010164f
1010162c:	8b 06                	mov    eax,DWORD PTR [esi]
1010162e:	8b ce                	mov    ecx,esi
10101630:	ff 50 50             	call   DWORD PTR [eax+0x50]
10101633:	3b 45 fc             	cmp    eax,DWORD PTR [ebp-0x4]
10101636:	75 17                	jne    0x1010164f
10101638:	3b f7                	cmp    esi,edi
1010163a:	74 13                	je     0x1010164f
1010163c:	56                   	push   esi
1010163d:	8b cf                	mov    ecx,edi
1010163f:	e8 9c fb ff ff       	call   0x101011e0
10101644:	85 c0                	test   eax,eax
10101646:	0f 84 e6 01 00 00    	je     0x10101832
1010164c:	ff 45 0c             	inc    DWORD PTR [ebp+0xc]
1010164f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10101654:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10101657:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1010165d:	03 81 d4 01 00 00    	add    eax,DWORD PTR [ecx+0x1d4]
10101663:	50                   	push   eax
10101664:	68 80 f0 1d 10       	push   0x101df080
10101669:	53                   	push   ebx
1010166a:	e8 11 6e 01 00       	call   0x10118480
1010166f:	8b d8                	mov    ebx,eax
10101671:	83 c4 0c             	add    esp,0xc
10101674:	85 db                	test   ebx,ebx
10101676:	75 98                	jne    0x10101610
10101678:	e9 b5 01 00 00       	jmp    0x10101832
1010167d:	66 0f 6e 45 08       	movd   xmm0,DWORD PTR [ebp+0x8]
10101682:	83 c0 08             	add    eax,0x8
10101685:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10101688:	51                   	push   ecx
10101689:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1010168e:	50                   	push   eax
1010168f:	6a 00                	push   0x0
10101691:	e8 1a 70 01 00       	call   0x101186b0
10101696:	8b d8                	mov    ebx,eax
10101698:	83 c4 0c             	add    esp,0xc
1010169b:	85 db                	test   ebx,ebx
1010169d:	0f 84 97 01 00 00    	je     0x1010183a
101016a3:	8b 13                	mov    edx,DWORD PTR [ebx]
101016a5:	8b cb                	mov    ecx,ebx
101016a7:	ff 52 7c             	call   DWORD PTR [edx+0x7c]
101016aa:	8b f0                	mov    esi,eax
101016ac:	85 f6                	test   esi,esi
101016ae:	0f 84 56 01 00 00    	je     0x1010180a
101016b4:	3b f7                	cmp    esi,edi
101016b6:	0f 84 4e 01 00 00    	je     0x1010180a
101016bc:	8b 16                	mov    edx,DWORD PTR [esi]
101016be:	8b ce                	mov    ecx,esi
101016c0:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
101016c6:	85 c0                	test   eax,eax
101016c8:	0f 84 3c 01 00 00    	je     0x1010180a
101016ce:	83 be 4c 03 00 00 00 	cmp    DWORD PTR [esi+0x34c],0x0
101016d5:	0f 85 2f 01 00 00    	jne    0x1010180a
101016db:	8d 8e 68 03 00 00    	lea    ecx,[esi+0x368]
101016e1:	e8 9a 60 f1 ff       	call   0x10017780
101016e6:	85 c0                	test   eax,eax
101016e8:	0f 85 1c 01 00 00    	jne    0x1010180a
101016ee:	8b 06                	mov    eax,DWORD PTR [esi]
101016f0:	8b ce                	mov    ecx,esi
101016f2:	ff 50 50             	call   DWORD PTR [eax+0x50]
101016f5:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
101016f8:	3b c1                	cmp    eax,ecx
101016fa:	0f 85 0a 01 00 00    	jne    0x1010180a
10101700:	83 f9 07             	cmp    ecx,0x7
10101703:	75 48                	jne    0x1010174d
10101705:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1010170a:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
10101710:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10101713:	8b 10                	mov    edx,DWORD PTR [eax]
10101715:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10101718:	03 d1                	add    edx,ecx
1010171a:	8b 00                	mov    eax,DWORD PTR [eax]
1010171c:	03 c1                	add    eax,ecx
1010171e:	66 90                	xchg   ax,ax
10101720:	8a 08                	mov    cl,BYTE PTR [eax]
10101722:	3a 0a                	cmp    cl,BYTE PTR [edx]
10101724:	75 1a                	jne    0x10101740
10101726:	84 c9                	test   cl,cl
10101728:	74 12                	je     0x1010173c
1010172a:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1010172d:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
10101730:	75 0e                	jne    0x10101740
10101732:	83 c0 02             	add    eax,0x2
10101735:	83 c2 02             	add    edx,0x2
10101738:	84 c9                	test   cl,cl
1010173a:	75 e4                	jne    0x10101720
1010173c:	33 c0                	xor    eax,eax
1010173e:	eb 05                	jmp    0x10101745
10101740:	1b c0                	sbb    eax,eax
10101742:	83 c8 01             	or     eax,0x1
10101745:	85 c0                	test   eax,eax
10101747:	0f 85 bd 00 00 00    	jne    0x1010180a
1010174d:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10101750:	83 ba d4 01 00 00 00 	cmp    DWORD PTR [edx+0x1d4],0x0
10101757:	0f 85 ad 00 00 00    	jne    0x1010180a
1010175d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10101760:	8b 8a 0c 02 00 00    	mov    ecx,DWORD PTR [edx+0x20c]
10101766:	f3 0f 10 90 7c 01 00 	movss  xmm2,DWORD PTR [eax+0x17c]
1010176d:	00 
1010176e:	f3 0f 10 88 80 01 00 	movss  xmm1,DWORD PTR [eax+0x180]
10101775:	00 
10101776:	f3 0f 10 80 78 01 00 	movss  xmm0,DWORD PTR [eax+0x178]
1010177d:	00 
1010177e:	f3 0f 58 52 0c       	addss  xmm2,DWORD PTR [edx+0xc]
10101783:	f3 0f 58 4a 10       	addss  xmm1,DWORD PTR [edx+0x10]
10101788:	f3 0f 58 42 08       	addss  xmm0,DWORD PTR [edx+0x8]
1010178d:	f3 0f 11 55 f0       	movss  DWORD PTR [ebp-0x10],xmm2
10101792:	f3 0f 11 4d f4       	movss  DWORD PTR [ebp-0xc],xmm1
10101797:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
1010179c:	f3 0f 10 90 7c 01 00 	movss  xmm2,DWORD PTR [eax+0x17c]
101017a3:	00 
101017a4:	f3 0f 10 88 80 01 00 	movss  xmm1,DWORD PTR [eax+0x180]
101017ab:	00 
101017ac:	f3 0f 10 80 78 01 00 	movss  xmm0,DWORD PTR [eax+0x178]
101017b3:	00 
101017b4:	f3 0f 58 50 0c       	addss  xmm2,DWORD PTR [eax+0xc]
101017b9:	f3 0f 58 48 10       	addss  xmm1,DWORD PTR [eax+0x10]
101017be:	f3 0f 58 40 08       	addss  xmm0,DWORD PTR [eax+0x8]
101017c3:	8d 45 a8             	lea    eax,[ebp-0x58]
101017c6:	50                   	push   eax
101017c7:	51                   	push   ecx
101017c8:	6a 01                	push   0x1
101017ca:	8d 45 ec             	lea    eax,[ebp-0x14]
101017cd:	f3 0f 11 45 e0       	movss  DWORD PTR [ebp-0x20],xmm0
101017d2:	50                   	push   eax
101017d3:	8d 45 e0             	lea    eax,[ebp-0x20]
101017d6:	f3 0f 11 55 e4       	movss  DWORD PTR [ebp-0x1c],xmm2
101017db:	50                   	push   eax
101017dc:	f3 0f 11 4d e8       	movss  DWORD PTR [ebp-0x18],xmm1
101017e1:	e8 1a 90 01 00       	call   0x1011a800
101017e6:	f3 0f 10 45 b8       	movss  xmm0,DWORD PTR [ebp-0x48]
101017eb:	83 c4 14             	add    esp,0x14
101017ee:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
101017f5:	9f                   	lahf
101017f6:	f6 c4 44             	test   ah,0x44
101017f9:	7a 0f                	jp     0x1010180a
101017fb:	56                   	push   esi
101017fc:	8b cf                	mov    ecx,edi
101017fe:	e8 dd f9 ff ff       	call   0x101011e0
10101803:	85 c0                	test   eax,eax
10101805:	74 2b                	je     0x10101832
10101807:	ff 45 0c             	inc    DWORD PTR [ebp+0xc]
1010180a:	66 0f 6e 45 08       	movd   xmm0,DWORD PTR [ebp+0x8]
1010180f:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10101812:	0f 5b c0             	cvtdq2ps xmm0,xmm0
10101815:	51                   	push   ecx
10101816:	83 c0 08             	add    eax,0x8
10101819:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1010181e:	50                   	push   eax
1010181f:	53                   	push   ebx
10101820:	e8 8b 6e 01 00       	call   0x101186b0
10101825:	8b d8                	mov    ebx,eax
10101827:	83 c4 0c             	add    esp,0xc
1010182a:	85 db                	test   ebx,ebx
1010182c:	0f 85 71 fe ff ff    	jne    0x101016a3
10101832:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10101835:	83 fe 01             	cmp    esi,0x1
10101838:	75 0a                	jne    0x10101844
1010183a:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
1010183d:	6a 00                	push   0x0
1010183f:	e8 fc 5e f1 ff       	call   0x10017740
10101844:	8b c6                	mov    eax,esi
10101846:	5e                   	pop    esi
10101847:	5f                   	pop    edi
10101848:	5b                   	pop    ebx
10101849:	8b e5                	mov    esp,ebp
1010184b:	5d                   	pop    ebp
1010184c:	c2 08 00             	ret    0x8
1010184f:	5f                   	pop    edi
10101850:	33 c0                	xor    eax,eax
10101852:	5b                   	pop    ebx
10101853:	8b e5                	mov    esp,ebp
10101855:	5d                   	pop    ebp
10101856:	c2 08 00             	ret    0x8
