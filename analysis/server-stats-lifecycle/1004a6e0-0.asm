
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004a6e0 <.text+0x496e0>:
1004a6e0:	55                   	push   ebp
1004a6e1:	8b ec                	mov    ebp,esp
1004a6e3:	6a ff                	push   0xffffffff
1004a6e5:	68 90 da 19 10       	push   0x1019da90
1004a6ea:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1004a6f0:	50                   	push   eax
1004a6f1:	81 ec d0 04 00 00    	sub    esp,0x4d0
1004a6f7:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1004a6fc:	33 c5                	xor    eax,ebp
1004a6fe:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
1004a701:	53                   	push   ebx
1004a702:	56                   	push   esi
1004a703:	57                   	push   edi
1004a704:	50                   	push   eax
1004a705:	8d 45 f4             	lea    eax,[ebp-0xc]
1004a708:	64 a3 00 00 00 00    	mov    fs:0x0,eax
1004a70e:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1004a711:	85 db                	test   ebx,ebx
1004a713:	0f 84 18 05 00 00    	je     0x1004ac31
1004a719:	8d 85 f0 fb ff ff    	lea    eax,[ebp-0x410]
1004a71f:	50                   	push   eax
1004a720:	ff 15 d4 30 22 10    	call   DWORD PTR ds:0x102230d4
1004a726:	8d 8d f0 fb ff ff    	lea    ecx,[ebp-0x410]
1004a72c:	83 c4 04             	add    esp,0x4
1004a72f:	49                   	dec    ecx
1004a730:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1004a733:	8d 49 01             	lea    ecx,[ecx+0x1]
1004a736:	84 c0                	test   al,al
1004a738:	75 f6                	jne    0x1004a730
1004a73a:	a1 40 14 1b 10       	mov    eax,ds:0x101b1440
1004a73f:	89 01                	mov    DWORD PTR [ecx],eax
1004a741:	a1 44 14 1b 10       	mov    eax,ds:0x101b1444
1004a746:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1004a749:	66 a1 48 14 1b 10    	mov    ax,ds:0x101b1448
1004a74f:	66 89 41 08          	mov    WORD PTR [ecx+0x8],ax
1004a753:	a0 4a 14 1b 10       	mov    al,ds:0x101b144a
1004a758:	88 41 0a             	mov    BYTE PTR [ecx+0xa],al
1004a75b:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1004a75e:	8b 90 d4 01 00 00    	mov    edx,DWORD PTR [eax+0x1d4]
1004a764:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004a769:	03 90 98 00 00 00    	add    edx,DWORD PTR [eax+0x98]
1004a76f:	8b f2                	mov    esi,edx
1004a771:	8a 02                	mov    al,BYTE PTR [edx]
1004a773:	42                   	inc    edx
1004a774:	84 c0                	test   al,al
1004a776:	75 f9                	jne    0x1004a771
1004a778:	8d bd f0 fb ff ff    	lea    edi,[ebp-0x410]
1004a77e:	2b d6                	sub    edx,esi
1004a780:	4f                   	dec    edi
1004a781:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
1004a784:	47                   	inc    edi
1004a785:	84 c0                	test   al,al
1004a787:	75 f8                	jne    0x1004a781
1004a789:	8b ca                	mov    ecx,edx
1004a78b:	c1 e9 02             	shr    ecx,0x2
1004a78e:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1004a790:	8b ca                	mov    ecx,edx
1004a792:	83 e1 03             	and    ecx,0x3
1004a795:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
1004a797:	8d 8d f0 fb ff ff    	lea    ecx,[ebp-0x410]
1004a79d:	49                   	dec    ecx
1004a79e:	66 90                	xchg   ax,ax
1004a7a0:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1004a7a3:	8d 49 01             	lea    ecx,[ecx+0x1]
1004a7a6:	84 c0                	test   al,al
1004a7a8:	75 f6                	jne    0x1004a7a0
1004a7aa:	a1 4c 14 1b 10       	mov    eax,ds:0x101b144c
1004a7af:	89 01                	mov    DWORD PTR [ecx],eax
1004a7b1:	a0 50 14 1b 10       	mov    al,ds:0x101b1450
1004a7b6:	6a 01                	push   0x1
1004a7b8:	6a 40                	push   0x40
1004a7ba:	88 41 04             	mov    BYTE PTR [ecx+0x4],al
1004a7bd:	8d 85 f0 fb ff ff    	lea    eax,[ebp-0x410]
1004a7c3:	6a 02                	push   0x2
1004a7c5:	50                   	push   eax
1004a7c6:	8d 8d 38 fb ff ff    	lea    ecx,[ebp-0x4c8]
1004a7cc:	e8 8f f3 ff ff       	call   0x10049b60
1004a7d1:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1004a7d4:	0f 57 c0             	xorps  xmm0,xmm0
1004a7d7:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1004a7de:	f3 0f 10 88 64 01 00 	movss  xmm1,DWORD PTR [eax+0x164]
1004a7e5:	00 
1004a7e6:	8d 85 38 fb ff ff    	lea    eax,[ebp-0x4c8]
1004a7ec:	0f 2f c1             	comiss xmm0,xmm1
1004a7ef:	72 19                	jb     0x1004a80a
1004a7f1:	6a 32                	push   0x32
1004a7f3:	68 54 14 1b 10       	push   0x101b1454
1004a7f8:	50                   	push   eax
1004a7f9:	e8 b2 eb ff ff       	call   0x100493b0
1004a7fe:	83 c4 08             	add    esp,0x8
1004a801:	8b c8                	mov    ecx,eax
1004a803:	e8 98 f9 ff ff       	call   0x1004a1a0
1004a808:	eb 1b                	jmp    0x1004a825
1004a80a:	51                   	push   ecx
1004a80b:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
1004a810:	68 54 14 1b 10       	push   0x101b1454
1004a815:	50                   	push   eax
1004a816:	e8 95 eb ff ff       	call   0x100493b0
1004a81b:	83 c4 08             	add    esp,0x8
1004a81e:	8b c8                	mov    ecx,eax
1004a820:	e8 2b fb ff ff       	call   0x1004a350
1004a825:	68 c8 84 1a 10       	push   0x101a84c8
1004a82a:	50                   	push   eax
1004a82b:	e8 80 eb ff ff       	call   0x100493b0
1004a830:	f3 0f 10 83 f0 21 00 	movss  xmm0,DWORD PTR [ebx+0x21f0]
1004a837:	00 
1004a838:	8d 85 38 fb ff ff    	lea    eax,[ebp-0x4c8]
1004a83e:	83 c4 08             	add    esp,0x8
1004a841:	68 c8 84 1a 10       	push   0x101a84c8
1004a846:	51                   	push   ecx
1004a847:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1004a84c:	68 5c 14 1b 10       	push   0x101b145c
1004a851:	50                   	push   eax
1004a852:	e8 59 eb ff ff       	call   0x100493b0
1004a857:	83 c4 08             	add    esp,0x8
1004a85a:	8b c8                	mov    ecx,eax
1004a85c:	e8 ef fa ff ff       	call   0x1004a350
1004a861:	50                   	push   eax
1004a862:	e8 49 eb ff ff       	call   0x100493b0
1004a867:	8d 93 4c 20 00 00    	lea    edx,[ebx+0x204c]
1004a86d:	83 c4 08             	add    esp,0x8
1004a870:	8b ca                	mov    ecx,edx
1004a872:	8d 71 01             	lea    esi,[ecx+0x1]
1004a875:	8a 01                	mov    al,BYTE PTR [ecx]
1004a877:	41                   	inc    ecx
1004a878:	84 c0                	test   al,al
1004a87a:	75 f9                	jne    0x1004a875
1004a87c:	2b ce                	sub    ecx,esi
1004a87e:	83 f9 01             	cmp    ecx,0x1
1004a881:	76 2c                	jbe    0x1004a8af
1004a883:	68 c8 84 1a 10       	push   0x101a84c8
1004a888:	52                   	push   edx
1004a889:	8d 85 38 fb ff ff    	lea    eax,[ebp-0x4c8]
1004a88f:	68 68 14 1b 10       	push   0x101b1468
1004a894:	50                   	push   eax
1004a895:	e8 16 eb ff ff       	call   0x100493b0
1004a89a:	83 c4 08             	add    esp,0x8
1004a89d:	50                   	push   eax
1004a89e:	e8 0d eb ff ff       	call   0x100493b0
1004a8a3:	83 c4 08             	add    esp,0x8
1004a8a6:	50                   	push   eax
1004a8a7:	e8 04 eb ff ff       	call   0x100493b0
1004a8ac:	83 c4 08             	add    esp,0x8
1004a8af:	8d 93 cc 20 00 00    	lea    edx,[ebx+0x20cc]
1004a8b5:	8b ca                	mov    ecx,edx
1004a8b7:	8d 71 01             	lea    esi,[ecx+0x1]
1004a8ba:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1004a8c0:	8a 01                	mov    al,BYTE PTR [ecx]
1004a8c2:	41                   	inc    ecx
1004a8c3:	84 c0                	test   al,al
1004a8c5:	75 f9                	jne    0x1004a8c0
1004a8c7:	2b ce                	sub    ecx,esi
1004a8c9:	83 f9 01             	cmp    ecx,0x1
1004a8cc:	76 2c                	jbe    0x1004a8fa
1004a8ce:	68 c8 84 1a 10       	push   0x101a84c8
1004a8d3:	52                   	push   edx
1004a8d4:	8d 85 38 fb ff ff    	lea    eax,[ebp-0x4c8]
1004a8da:	68 74 14 1b 10       	push   0x101b1474
1004a8df:	50                   	push   eax
1004a8e0:	e8 cb ea ff ff       	call   0x100493b0
1004a8e5:	83 c4 08             	add    esp,0x8
1004a8e8:	50                   	push   eax
1004a8e9:	e8 c2 ea ff ff       	call   0x100493b0
1004a8ee:	83 c4 08             	add    esp,0x8
1004a8f1:	50                   	push   eax
1004a8f2:	e8 b9 ea ff ff       	call   0x100493b0
1004a8f7:	83 c4 08             	add    esp,0x8
1004a8fa:	8d 93 4c 21 00 00    	lea    edx,[ebx+0x214c]
1004a900:	8b ca                	mov    ecx,edx
1004a902:	8d 71 01             	lea    esi,[ecx+0x1]
1004a905:	8a 01                	mov    al,BYTE PTR [ecx]
1004a907:	41                   	inc    ecx
1004a908:	84 c0                	test   al,al
1004a90a:	75 f9                	jne    0x1004a905
1004a90c:	2b ce                	sub    ecx,esi
1004a90e:	83 f9 01             	cmp    ecx,0x1
1004a911:	76 2c                	jbe    0x1004a93f
1004a913:	68 c8 84 1a 10       	push   0x101a84c8
1004a918:	52                   	push   edx
1004a919:	8d 85 38 fb ff ff    	lea    eax,[ebp-0x4c8]
1004a91f:	68 80 14 1b 10       	push   0x101b1480
1004a924:	50                   	push   eax
1004a925:	e8 86 ea ff ff       	call   0x100493b0
1004a92a:	83 c4 08             	add    esp,0x8
1004a92d:	50                   	push   eax
1004a92e:	e8 7d ea ff ff       	call   0x100493b0
1004a933:	83 c4 08             	add    esp,0x8
1004a936:	50                   	push   eax
1004a937:	e8 74 ea ff ff       	call   0x100493b0
1004a93c:	83 c4 08             	add    esp,0x8
1004a93f:	68 c8 84 1a 10       	push   0x101a84c8
1004a944:	ff b3 3c 06 00 00    	push   DWORD PTR [ebx+0x63c]
1004a94a:	8d 85 38 fb ff ff    	lea    eax,[ebp-0x4c8]
1004a950:	68 8c 14 1b 10       	push   0x101b148c
1004a955:	50                   	push   eax
1004a956:	e8 55 ea ff ff       	call   0x100493b0
1004a95b:	83 c4 08             	add    esp,0x8
1004a95e:	8b c8                	mov    ecx,eax
1004a960:	e8 3b f8 ff ff       	call   0x1004a1a0
1004a965:	50                   	push   eax
1004a966:	e8 45 ea ff ff       	call   0x100493b0
1004a96b:	83 c4 08             	add    esp,0x8
1004a96e:	8d 85 38 fb ff ff    	lea    eax,[ebp-0x4c8]
1004a974:	68 c8 84 1a 10       	push   0x101a84c8
1004a979:	ff b3 40 06 00 00    	push   DWORD PTR [ebx+0x640]
1004a97f:	68 a4 14 1b 10       	push   0x101b14a4
1004a984:	50                   	push   eax
1004a985:	e8 26 ea ff ff       	call   0x100493b0
1004a98a:	83 c4 08             	add    esp,0x8
1004a98d:	8b c8                	mov    ecx,eax
1004a98f:	e8 0c f8 ff ff       	call   0x1004a1a0
1004a994:	50                   	push   eax
1004a995:	e8 16 ea ff ff       	call   0x100493b0
1004a99a:	83 c4 08             	add    esp,0x8
1004a99d:	8d 85 38 fb ff ff    	lea    eax,[ebp-0x4c8]
1004a9a3:	68 c8 84 1a 10       	push   0x101a84c8
1004a9a8:	ff b3 44 06 00 00    	push   DWORD PTR [ebx+0x644]
1004a9ae:	68 bc 14 1b 10       	push   0x101b14bc
1004a9b3:	50                   	push   eax
1004a9b4:	e8 f7 e9 ff ff       	call   0x100493b0
1004a9b9:	83 c4 08             	add    esp,0x8
1004a9bc:	8b c8                	mov    ecx,eax
1004a9be:	e8 dd f7 ff ff       	call   0x1004a1a0
1004a9c3:	50                   	push   eax
1004a9c4:	e8 e7 e9 ff ff       	call   0x100493b0
1004a9c9:	83 c4 08             	add    esp,0x8
1004a9cc:	8d 85 38 fb ff ff    	lea    eax,[ebp-0x4c8]
1004a9d2:	68 c8 84 1a 10       	push   0x101a84c8
1004a9d7:	ff b3 70 06 00 00    	push   DWORD PTR [ebx+0x670]
1004a9dd:	68 d8 14 1b 10       	push   0x101b14d8
1004a9e2:	50                   	push   eax
1004a9e3:	e8 c8 e9 ff ff       	call   0x100493b0
1004a9e8:	83 c4 08             	add    esp,0x8
1004a9eb:	8b c8                	mov    ecx,eax
1004a9ed:	e8 ae f7 ff ff       	call   0x1004a1a0
1004a9f2:	50                   	push   eax
1004a9f3:	e8 b8 e9 ff ff       	call   0x100493b0
1004a9f8:	83 c4 08             	add    esp,0x8
1004a9fb:	8d 85 38 fb ff ff    	lea    eax,[ebp-0x4c8]
1004aa01:	68 c8 84 1a 10       	push   0x101a84c8
1004aa06:	ff b3 74 06 00 00    	push   DWORD PTR [ebx+0x674]
1004aa0c:	68 fc 14 1b 10       	push   0x101b14fc
1004aa11:	50                   	push   eax
1004aa12:	e8 99 e9 ff ff       	call   0x100493b0
1004aa17:	83 c4 08             	add    esp,0x8
1004aa1a:	8b c8                	mov    ecx,eax
1004aa1c:	e8 7f f7 ff ff       	call   0x1004a1a0
1004aa21:	50                   	push   eax
1004aa22:	e8 89 e9 ff ff       	call   0x100493b0
1004aa27:	83 c4 08             	add    esp,0x8
1004aa2a:	8d 85 38 fb ff ff    	lea    eax,[ebp-0x4c8]
1004aa30:	68 c8 84 1a 10       	push   0x101a84c8
1004aa35:	ff b3 64 06 00 00    	push   DWORD PTR [ebx+0x664]
1004aa3b:	68 20 15 1b 10       	push   0x101b1520
1004aa40:	50                   	push   eax
1004aa41:	e8 6a e9 ff ff       	call   0x100493b0
1004aa46:	83 c4 08             	add    esp,0x8
1004aa49:	8b c8                	mov    ecx,eax
1004aa4b:	e8 50 f7 ff ff       	call   0x1004a1a0
1004aa50:	50                   	push   eax
1004aa51:	e8 5a e9 ff ff       	call   0x100493b0
1004aa56:	83 c4 08             	add    esp,0x8
1004aa59:	8d 85 38 fb ff ff    	lea    eax,[ebp-0x4c8]
1004aa5f:	68 c8 84 1a 10       	push   0x101a84c8
1004aa64:	ff b3 68 06 00 00    	push   DWORD PTR [ebx+0x668]
1004aa6a:	68 38 15 1b 10       	push   0x101b1538
1004aa6f:	50                   	push   eax
1004aa70:	e8 3b e9 ff ff       	call   0x100493b0
1004aa75:	83 c4 08             	add    esp,0x8
1004aa78:	8b c8                	mov    ecx,eax
1004aa7a:	e8 21 f7 ff ff       	call   0x1004a1a0
1004aa7f:	50                   	push   eax
1004aa80:	e8 2b e9 ff ff       	call   0x100493b0
1004aa85:	83 c4 08             	add    esp,0x8
1004aa88:	8d 85 38 fb ff ff    	lea    eax,[ebp-0x4c8]
1004aa8e:	68 c8 84 1a 10       	push   0x101a84c8
1004aa93:	ff b3 6c 06 00 00    	push   DWORD PTR [ebx+0x66c]
1004aa99:	68 50 15 1b 10       	push   0x101b1550
1004aa9e:	50                   	push   eax
1004aa9f:	e8 0c e9 ff ff       	call   0x100493b0
1004aaa4:	83 c4 08             	add    esp,0x8
1004aaa7:	8b c8                	mov    ecx,eax
1004aaa9:	e8 f2 f6 ff ff       	call   0x1004a1a0
1004aaae:	50                   	push   eax
1004aaaf:	e8 fc e8 ff ff       	call   0x100493b0
1004aab4:	83 c4 08             	add    esp,0x8
1004aab7:	8d 85 38 fb ff ff    	lea    eax,[ebp-0x4c8]
1004aabd:	68 c8 84 1a 10       	push   0x101a84c8
1004aac2:	ff b3 58 06 00 00    	push   DWORD PTR [ebx+0x658]
1004aac8:	68 64 15 1b 10       	push   0x101b1564
1004aacd:	50                   	push   eax
1004aace:	e8 dd e8 ff ff       	call   0x100493b0
1004aad3:	83 c4 08             	add    esp,0x8
1004aad6:	8b c8                	mov    ecx,eax
1004aad8:	e8 c3 f6 ff ff       	call   0x1004a1a0
1004aadd:	50                   	push   eax
1004aade:	e8 cd e8 ff ff       	call   0x100493b0
1004aae3:	83 c4 08             	add    esp,0x8
1004aae6:	c7 85 ec fb ff ff 06 	mov    DWORD PTR [ebp-0x414],0x6
1004aaed:	00 00 00 
1004aaf0:	8d bb 14 25 00 00    	lea    edi,[ebx+0x2514]
1004aaf6:	8b 37                	mov    esi,DWORD PTR [edi]
1004aaf8:	85 f6                	test   esi,esi
1004aafa:	0f 84 bf 00 00 00    	je     0x1004abbf
1004ab00:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004ab03:	ba e4 9a 1a 10       	mov    edx,0x101a9ae4
1004ab08:	8b 08                	mov    ecx,DWORD PTR [eax]
1004ab0a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004ab0f:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1004ab15:	8a 01                	mov    al,BYTE PTR [ecx]
1004ab17:	3a 02                	cmp    al,BYTE PTR [edx]
1004ab19:	75 1a                	jne    0x1004ab35
1004ab1b:	84 c0                	test   al,al
1004ab1d:	74 12                	je     0x1004ab31
1004ab1f:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1004ab22:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
1004ab25:	75 0e                	jne    0x1004ab35
1004ab27:	83 c1 02             	add    ecx,0x2
1004ab2a:	83 c2 02             	add    edx,0x2
1004ab2d:	84 c0                	test   al,al
1004ab2f:	75 e4                	jne    0x1004ab15
1004ab31:	33 c0                	xor    eax,eax
1004ab33:	eb 05                	jmp    0x1004ab3a
1004ab35:	1b c0                	sbb    eax,eax
1004ab37:	83 c8 01             	or     eax,0x1
1004ab3a:	85 c0                	test   eax,eax
1004ab3c:	0f 84 7d 00 00 00    	je     0x1004abbf
1004ab42:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004ab45:	68 c8 84 1a 10       	push   0x101a84c8
1004ab4a:	8b 08                	mov    ecx,DWORD PTR [eax]
1004ab4c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004ab51:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1004ab57:	8d 85 38 fb ff ff    	lea    eax,[ebp-0x4c8]
1004ab5d:	51                   	push   ecx
1004ab5e:	50                   	push   eax
1004ab5f:	e8 4c e8 ff ff       	call   0x100493b0
1004ab64:	83 c4 08             	add    esp,0x8
1004ab67:	50                   	push   eax
1004ab68:	e8 43 e8 ff ff       	call   0x100493b0
1004ab6d:	83 c4 08             	add    esp,0x8
1004ab70:	8d 8d 38 fb ff ff    	lea    ecx,[ebp-0x4c8]
1004ab76:	68 c8 84 1a 10       	push   0x101a84c8
1004ab7b:	ff b6 e4 01 00 00    	push   DWORD PTR [esi+0x1e4]
1004ab81:	e8 1a f6 ff ff       	call   0x1004a1a0
1004ab86:	50                   	push   eax
1004ab87:	e8 24 e8 ff ff       	call   0x100493b0
1004ab8c:	8b 86 dc 01 00 00    	mov    eax,DWORD PTR [esi+0x1dc]
1004ab92:	8d 8d 38 fb ff ff    	lea    ecx,[ebp-0x4c8]
1004ab98:	83 c4 08             	add    esp,0x8
1004ab9b:	68 c8 84 1a 10       	push   0x101a84c8
1004aba0:	ff b4 83 40 25 00 00 	push   DWORD PTR [ebx+eax*4+0x2540]
1004aba7:	e8 f4 f5 ff ff       	call   0x1004a1a0
1004abac:	50                   	push   eax
1004abad:	e8 fe e7 ff ff       	call   0x100493b0
1004abb2:	8b b6 64 01 00 00    	mov    esi,DWORD PTR [esi+0x164]
1004abb8:	83 c4 08             	add    esp,0x8
1004abbb:	85 f6                	test   esi,esi
1004abbd:	75 83                	jne    0x1004ab42
1004abbf:	83 c7 04             	add    edi,0x4
1004abc2:	83 ad ec fb ff ff 01 	sub    DWORD PTR [ebp-0x414],0x1
1004abc9:	0f 85 27 ff ff ff    	jne    0x1004aaf6
1004abcf:	8d 85 38 fb ff ff    	lea    eax,[ebp-0x4c8]
1004abd5:	50                   	push   eax
1004abd6:	e8 05 ec ff ff       	call   0x100497e0
1004abdb:	83 c4 04             	add    esp,0x4
1004abde:	8d 8d 3c fb ff ff    	lea    ecx,[ebp-0x4c4]
1004abe4:	e8 c7 23 00 00       	call   0x1004cfb0
1004abe9:	85 c0                	test   eax,eax
1004abeb:	75 39                	jne    0x1004ac26
1004abed:	8b 85 38 fb ff ff    	mov    eax,DWORD PTR [ebp-0x4c8]
1004abf3:	33 d2                	xor    edx,edx
1004abf5:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
1004abf8:	b8 04 00 00 00       	mov    eax,0x4
1004abfd:	39 94 0d 70 fb ff ff 	cmp    DWORD PTR [ebp+ecx*1-0x490],edx
1004ac04:	0f 45 c2             	cmovne eax,edx
1004ac07:	0b 84 0d 44 fb ff ff 	or     eax,DWORD PTR [ebp+ecx*1-0x4bc]
1004ac0e:	83 e0 15             	and    eax,0x15
1004ac11:	83 c8 02             	or     eax,0x2
1004ac14:	89 84 0d 44 fb ff ff 	mov    DWORD PTR [ebp+ecx*1-0x4bc],eax
1004ac1b:	8b 8c 0d 48 fb ff ff 	mov    ecx,DWORD PTR [ebp+ecx*1-0x4b8]
1004ac22:	23 c8                	and    ecx,eax
1004ac24:	75 29                	jne    0x1004ac4f
1004ac26:	8d 8d 38 fb ff ff    	lea    ecx,[ebp-0x4c8]
1004ac2c:	e8 df f8 ff ff       	call   0x1004a510
1004ac31:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
1004ac34:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1004ac3b:	59                   	pop    ecx
1004ac3c:	5f                   	pop    edi
1004ac3d:	5e                   	pop    esi
1004ac3e:	5b                   	pop    ebx
1004ac3f:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
1004ac42:	33 cd                	xor    ecx,ebp
1004ac44:	e8 6a 2f 0f 00       	call   0x1013dbb3
1004ac49:	8b e5                	mov    esp,ebp
1004ac4b:	5d                   	pop    ebp
1004ac4c:	c2 04 00             	ret    0x4
1004ac4f:	f6 c1 04             	test   cl,0x4
1004ac52:	74 07                	je     0x1004ac5b
1004ac54:	be 5c da 1a 10       	mov    esi,0x101ada5c
1004ac59:	eb 10                	jmp    0x1004ac6b
1004ac5b:	f6 c1 02             	test   cl,0x2
1004ac5e:	be 74 da 1a 10       	mov    esi,0x101ada74
1004ac63:	b8 8c da 1a 10       	mov    eax,0x101ada8c
1004ac68:	0f 44 f0             	cmove  esi,eax
1004ac6b:	8d 85 e8 fb ff ff    	lea    eax,[ebp-0x418]
1004ac71:	6a 01                	push   0x1
1004ac73:	50                   	push   eax
1004ac74:	e8 d7 d0 fe ff       	call   0x10037d50
1004ac79:	83 c4 08             	add    esp,0x8
1004ac7c:	8d 8d 24 fb ff ff    	lea    ecx,[ebp-0x4dc]
1004ac82:	50                   	push   eax
1004ac83:	56                   	push   esi
1004ac84:	e8 77 54 fe ff       	call   0x10030100
1004ac89:	68 cc 48 20 10       	push   0x102048cc
1004ac8e:	8d 85 24 fb ff ff    	lea    eax,[ebp-0x4dc]
1004ac94:	50                   	push   eax
1004ac95:	e8 22 54 0f 00       	call   0x101400bc
