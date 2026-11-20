
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008e4d0 <.text+0x8d4d0>:
1008e4d0:	56                   	push   esi
1008e4d1:	57                   	push   edi
1008e4d2:	8b f9                	mov    edi,ecx
1008e4d4:	be 68 40 1a 10       	mov    esi,0x101a4068
1008e4d9:	0f b6 87 81 01 00 00 	movzx  eax,BYTE PTR [edi+0x181]
1008e4e0:	83 f8 0a             	cmp    eax,0xa
1008e4e3:	0f 87 d8 00 00 00    	ja     0x1008e5c1
1008e4e9:	ff 24 85 5c e9 08 10 	jmp    DWORD PTR [eax*4+0x1008e95c]
1008e4f0:	68 0c f4 1b 10       	push   0x101bf40c
1008e4f5:	e8 36 85 08 00       	call   0x10116a30
1008e4fa:	83 c4 04             	add    esp,0x4
1008e4fd:	b9 0c f4 1b 10       	mov    ecx,0x101bf40c
1008e502:	e9 bc 00 00 00       	jmp    0x1008e5c3
1008e507:	68 20 f4 1b 10       	push   0x101bf420
1008e50c:	e8 1f 85 08 00       	call   0x10116a30
1008e511:	83 c4 04             	add    esp,0x4
1008e514:	b9 20 f4 1b 10       	mov    ecx,0x101bf420
1008e519:	e9 a5 00 00 00       	jmp    0x1008e5c3
1008e51e:	68 34 f4 1b 10       	push   0x101bf434
1008e523:	e8 08 85 08 00       	call   0x10116a30
1008e528:	83 c4 04             	add    esp,0x4
1008e52b:	b9 34 f4 1b 10       	mov    ecx,0x101bf434
1008e530:	e9 8e 00 00 00       	jmp    0x1008e5c3
1008e535:	68 48 f4 1b 10       	push   0x101bf448
1008e53a:	e8 f1 84 08 00       	call   0x10116a30
1008e53f:	83 c4 04             	add    esp,0x4
1008e542:	b9 48 f4 1b 10       	mov    ecx,0x101bf448
1008e547:	eb 7a                	jmp    0x1008e5c3
1008e549:	68 5c f4 1b 10       	push   0x101bf45c
1008e54e:	e8 dd 84 08 00       	call   0x10116a30
1008e553:	83 c4 04             	add    esp,0x4
1008e556:	b9 5c f4 1b 10       	mov    ecx,0x101bf45c
1008e55b:	eb 66                	jmp    0x1008e5c3
1008e55d:	68 70 f4 1b 10       	push   0x101bf470
1008e562:	e8 c9 84 08 00       	call   0x10116a30
1008e567:	83 c4 04             	add    esp,0x4
1008e56a:	b9 70 f4 1b 10       	mov    ecx,0x101bf470
1008e56f:	eb 52                	jmp    0x1008e5c3
1008e571:	68 84 f4 1b 10       	push   0x101bf484
1008e576:	e8 b5 84 08 00       	call   0x10116a30
1008e57b:	83 c4 04             	add    esp,0x4
1008e57e:	b9 84 f4 1b 10       	mov    ecx,0x101bf484
1008e583:	eb 3e                	jmp    0x1008e5c3
1008e585:	68 98 f4 1b 10       	push   0x101bf498
1008e58a:	e8 a1 84 08 00       	call   0x10116a30
1008e58f:	83 c4 04             	add    esp,0x4
1008e592:	b9 98 f4 1b 10       	mov    ecx,0x101bf498
1008e597:	eb 2a                	jmp    0x1008e5c3
1008e599:	68 ac f4 1b 10       	push   0x101bf4ac
1008e59e:	e8 8d 84 08 00       	call   0x10116a30
1008e5a3:	83 c4 04             	add    esp,0x4
1008e5a6:	b9 ac f4 1b 10       	mov    ecx,0x101bf4ac
1008e5ab:	eb 16                	jmp    0x1008e5c3
1008e5ad:	68 c0 f4 1b 10       	push   0x101bf4c0
1008e5b2:	e8 79 84 08 00       	call   0x10116a30
1008e5b7:	83 c4 04             	add    esp,0x4
1008e5ba:	b9 c0 f4 1b 10       	mov    ecx,0x101bf4c0
1008e5bf:	eb 02                	jmp    0x1008e5c3
1008e5c1:	8b ce                	mov    ecx,esi
1008e5c3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e5c8:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e5ce:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008e5d1:	89 88 f0 01 00 00    	mov    DWORD PTR [eax+0x1f0],ecx
1008e5d7:	0f b6 87 82 01 00 00 	movzx  eax,BYTE PTR [edi+0x182]
1008e5de:	83 f8 08             	cmp    eax,0x8
1008e5e1:	0f 87 56 01 00 00    	ja     0x1008e73d
1008e5e7:	ff 24 85 88 e9 08 10 	jmp    DWORD PTR [eax*4+0x1008e988]
1008e5ee:	68 d8 f4 1b 10       	push   0x101bf4d8
1008e5f3:	e8 38 84 08 00       	call   0x10116a30
1008e5f8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e5fd:	b9 d8 f4 1b 10       	mov    ecx,0x101bf4d8
1008e602:	83 c4 04             	add    esp,0x4
1008e605:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e60b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008e60e:	89 88 f4 01 00 00    	mov    DWORD PTR [eax+0x1f4],ecx
1008e614:	e9 38 01 00 00       	jmp    0x1008e751
1008e619:	68 ec f4 1b 10       	push   0x101bf4ec
1008e61e:	e8 0d 84 08 00       	call   0x10116a30
1008e623:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e628:	b9 ec f4 1b 10       	mov    ecx,0x101bf4ec
1008e62d:	83 c4 04             	add    esp,0x4
1008e630:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e636:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008e639:	89 88 f4 01 00 00    	mov    DWORD PTR [eax+0x1f4],ecx
1008e63f:	e9 0d 01 00 00       	jmp    0x1008e751
1008e644:	68 00 f5 1b 10       	push   0x101bf500
1008e649:	e8 e2 83 08 00       	call   0x10116a30
1008e64e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e653:	b9 00 f5 1b 10       	mov    ecx,0x101bf500
1008e658:	83 c4 04             	add    esp,0x4
1008e65b:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e661:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008e664:	89 88 f4 01 00 00    	mov    DWORD PTR [eax+0x1f4],ecx
1008e66a:	e9 e2 00 00 00       	jmp    0x1008e751
1008e66f:	68 14 f5 1b 10       	push   0x101bf514
1008e674:	e8 b7 83 08 00       	call   0x10116a30
1008e679:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e67e:	b9 14 f5 1b 10       	mov    ecx,0x101bf514
1008e683:	83 c4 04             	add    esp,0x4
1008e686:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e68c:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008e68f:	89 88 f4 01 00 00    	mov    DWORD PTR [eax+0x1f4],ecx
1008e695:	e9 b7 00 00 00       	jmp    0x1008e751
1008e69a:	68 28 f5 1b 10       	push   0x101bf528
1008e69f:	e8 8c 83 08 00       	call   0x10116a30
1008e6a4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e6a9:	b9 28 f5 1b 10       	mov    ecx,0x101bf528
1008e6ae:	83 c4 04             	add    esp,0x4
1008e6b1:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e6b7:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008e6ba:	89 88 f4 01 00 00    	mov    DWORD PTR [eax+0x1f4],ecx
1008e6c0:	e9 8c 00 00 00       	jmp    0x1008e751
1008e6c5:	68 3c f5 1b 10       	push   0x101bf53c
1008e6ca:	e8 61 83 08 00       	call   0x10116a30
1008e6cf:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e6d4:	b9 3c f5 1b 10       	mov    ecx,0x101bf53c
1008e6d9:	83 c4 04             	add    esp,0x4
1008e6dc:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e6e2:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008e6e5:	89 88 f4 01 00 00    	mov    DWORD PTR [eax+0x1f4],ecx
1008e6eb:	eb 64                	jmp    0x1008e751
1008e6ed:	68 50 f5 1b 10       	push   0x101bf550
1008e6f2:	e8 39 83 08 00       	call   0x10116a30
1008e6f7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e6fc:	b9 50 f5 1b 10       	mov    ecx,0x101bf550
1008e701:	83 c4 04             	add    esp,0x4
1008e704:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e70a:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008e70d:	89 88 f4 01 00 00    	mov    DWORD PTR [eax+0x1f4],ecx
1008e713:	eb 3c                	jmp    0x1008e751
1008e715:	68 64 f5 1b 10       	push   0x101bf564
1008e71a:	e8 11 83 08 00       	call   0x10116a30
1008e71f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e724:	b9 64 f5 1b 10       	mov    ecx,0x101bf564
1008e729:	83 c4 04             	add    esp,0x4
1008e72c:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e732:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008e735:	89 88 f4 01 00 00    	mov    DWORD PTR [eax+0x1f4],ecx
1008e73b:	eb 14                	jmp    0x1008e751
1008e73d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e742:	2b b0 98 00 00 00    	sub    esi,DWORD PTR [eax+0x98]
1008e748:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008e74b:	89 b0 f4 01 00 00    	mov    DWORD PTR [eax+0x1f4],esi
1008e751:	8a 87 a8 01 00 00    	mov    al,BYTE PTR [edi+0x1a8]
1008e757:	84 c0                	test   al,al
1008e759:	74 21                	je     0x1008e77c
1008e75b:	0f b6 c0             	movzx  eax,al
1008e75e:	50                   	push   eax
1008e75f:	e8 8c 46 f8 ff       	call   0x10012df0
1008e764:	8b f0                	mov    esi,eax
1008e766:	56                   	push   esi
1008e767:	e8 c4 82 08 00       	call   0x10116a30
1008e76c:	56                   	push   esi
1008e76d:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1008e773:	83 c4 0c             	add    esp,0xc
1008e776:	89 87 84 01 00 00    	mov    DWORD PTR [edi+0x184],eax
1008e77c:	8a 87 aa 01 00 00    	mov    al,BYTE PTR [edi+0x1aa]
1008e782:	84 c0                	test   al,al
1008e784:	74 21                	je     0x1008e7a7
1008e786:	0f b6 c0             	movzx  eax,al
1008e789:	50                   	push   eax
1008e78a:	e8 61 46 f8 ff       	call   0x10012df0
1008e78f:	8b f0                	mov    esi,eax
1008e791:	56                   	push   esi
1008e792:	e8 99 82 08 00       	call   0x10116a30
1008e797:	56                   	push   esi
1008e798:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1008e79e:	83 c4 0c             	add    esp,0xc
1008e7a1:	89 87 8c 01 00 00    	mov    DWORD PTR [edi+0x18c],eax
1008e7a7:	0f b6 87 a9 01 00 00 	movzx  eax,BYTE PTR [edi+0x1a9]
1008e7ae:	48                   	dec    eax
1008e7af:	83 f8 08             	cmp    eax,0x8
1008e7b2:	0f 87 af 00 00 00    	ja     0x1008e867
1008e7b8:	ff 24 85 ac e9 08 10 	jmp    DWORD PTR [eax*4+0x1008e9ac]
1008e7bf:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e7c4:	b9 8c 56 1a 10       	mov    ecx,0x101a568c
1008e7c9:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e7cf:	e9 95 00 00 00       	jmp    0x1008e869
1008e7d4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e7d9:	b9 90 56 1a 10       	mov    ecx,0x101a5690
1008e7de:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e7e4:	e9 80 00 00 00       	jmp    0x1008e869
1008e7e9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e7ee:	b9 94 56 1a 10       	mov    ecx,0x101a5694
1008e7f3:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e7f9:	eb 6e                	jmp    0x1008e869
1008e7fb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e800:	b9 98 56 1a 10       	mov    ecx,0x101a5698
1008e805:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e80b:	eb 5c                	jmp    0x1008e869
1008e80d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e812:	b9 a0 56 1a 10       	mov    ecx,0x101a56a0
1008e817:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e81d:	eb 4a                	jmp    0x1008e869
1008e81f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e824:	b9 a8 56 1a 10       	mov    ecx,0x101a56a8
1008e829:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e82f:	eb 38                	jmp    0x1008e869
1008e831:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e836:	b9 b0 56 1a 10       	mov    ecx,0x101a56b0
1008e83b:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e841:	eb 26                	jmp    0x1008e869
1008e843:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e848:	b9 b8 56 1a 10       	mov    ecx,0x101a56b8
1008e84d:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e853:	eb 14                	jmp    0x1008e869
1008e855:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e85a:	b9 bc 56 1a 10       	mov    ecx,0x101a56bc
1008e85f:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e865:	eb 02                	jmp    0x1008e869
1008e867:	33 c9                	xor    ecx,ecx
1008e869:	89 8f 88 01 00 00    	mov    DWORD PTR [edi+0x188],ecx
1008e86f:	0f b6 87 ab 01 00 00 	movzx  eax,BYTE PTR [edi+0x1ab]
1008e876:	48                   	dec    eax
1008e877:	83 f8 07             	cmp    eax,0x7
1008e87a:	0f 87 cf 00 00 00    	ja     0x1008e94f
1008e880:	ff 24 85 d0 e9 08 10 	jmp    DWORD PTR [eax*4+0x1008e9d0]
1008e887:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e88c:	b9 c0 56 1a 10       	mov    ecx,0x101a56c0
1008e891:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e897:	89 8f 90 01 00 00    	mov    DWORD PTR [edi+0x190],ecx
1008e89d:	5f                   	pop    edi
1008e89e:	5e                   	pop    esi
1008e89f:	c3                   	ret
1008e8a0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e8a5:	b9 c4 56 1a 10       	mov    ecx,0x101a56c4
1008e8aa:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e8b0:	89 8f 90 01 00 00    	mov    DWORD PTR [edi+0x190],ecx
1008e8b6:	5f                   	pop    edi
1008e8b7:	5e                   	pop    esi
1008e8b8:	c3                   	ret
1008e8b9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e8be:	b9 c8 56 1a 10       	mov    ecx,0x101a56c8
1008e8c3:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e8c9:	89 8f 90 01 00 00    	mov    DWORD PTR [edi+0x190],ecx
1008e8cf:	5f                   	pop    edi
1008e8d0:	5e                   	pop    esi
1008e8d1:	c3                   	ret
1008e8d2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e8d7:	b9 cc 56 1a 10       	mov    ecx,0x101a56cc
1008e8dc:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e8e2:	89 8f 90 01 00 00    	mov    DWORD PTR [edi+0x190],ecx
1008e8e8:	5f                   	pop    edi
1008e8e9:	5e                   	pop    esi
1008e8ea:	c3                   	ret
1008e8eb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e8f0:	b9 d4 56 1a 10       	mov    ecx,0x101a56d4
1008e8f5:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e8fb:	89 8f 90 01 00 00    	mov    DWORD PTR [edi+0x190],ecx
1008e901:	5f                   	pop    edi
1008e902:	5e                   	pop    esi
1008e903:	c3                   	ret
1008e904:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e909:	b9 dc 56 1a 10       	mov    ecx,0x101a56dc
1008e90e:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e914:	89 8f 90 01 00 00    	mov    DWORD PTR [edi+0x190],ecx
1008e91a:	5f                   	pop    edi
1008e91b:	5e                   	pop    esi
1008e91c:	c3                   	ret
1008e91d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e922:	b9 e4 56 1a 10       	mov    ecx,0x101a56e4
1008e927:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e92d:	89 8f 90 01 00 00    	mov    DWORD PTR [edi+0x190],ecx
1008e933:	5f                   	pop    edi
1008e934:	5e                   	pop    esi
1008e935:	c3                   	ret
1008e936:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008e93b:	b9 ec 56 1a 10       	mov    ecx,0x101a56ec
1008e940:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
1008e946:	89 8f 90 01 00 00    	mov    DWORD PTR [edi+0x190],ecx
1008e94c:	5f                   	pop    edi
1008e94d:	5e                   	pop    esi
1008e94e:	c3                   	ret
1008e94f:	33 c9                	xor    ecx,ecx
1008e951:	89 8f 90 01 00 00    	mov    DWORD PTR [edi+0x190],ecx
1008e957:	5f                   	pop    edi
1008e958:	5e                   	pop    esi
1008e959:	c3                   	ret
