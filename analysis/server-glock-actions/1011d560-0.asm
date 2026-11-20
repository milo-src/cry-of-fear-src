
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011d560 <.text+0x11c560>:
1011d560:	55                   	push   ebp
1011d561:	8b ec                	mov    ebp,esp
1011d563:	83 ec 08             	sub    esp,0x8
1011d566:	53                   	push   ebx
1011d567:	56                   	push   esi
1011d568:	57                   	push   edi
1011d569:	8b f9                	mov    edi,ecx
1011d56b:	83 bf b4 01 00 00 00 	cmp    DWORD PTR [edi+0x1b4],0x0
1011d572:	75 13                	jne    0x1011d587
1011d574:	83 bf e4 01 00 00 00 	cmp    DWORD PTR [edi+0x1e4],0x0
1011d57b:	7e 0a                	jle    0x1011d587
1011d57d:	c7 87 b4 01 00 00 01 	mov    DWORD PTR [edi+0x1b4],0x1
1011d584:	00 00 00 
1011d587:	8b 07                	mov    eax,DWORD PTR [edi]
1011d589:	ff 90 d4 01 00 00    	call   DWORD PTR [eax+0x1d4]
1011d58f:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
1011d592:	ba b8 dc 1a 10       	mov    edx,0x101adcb8
1011d597:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1011d59d:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
1011d5a3:	f7 d9                	neg    ecx
1011d5a5:	1b c9                	sbb    ecx,ecx
1011d5a7:	23 c8                	and    ecx,eax
1011d5a9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d5ae:	8b 09                	mov    ecx,DWORD PTR [ecx]
1011d5b0:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1011d5b6:	8a 01                	mov    al,BYTE PTR [ecx]
1011d5b8:	3a 02                	cmp    al,BYTE PTR [edx]
1011d5ba:	75 1a                	jne    0x1011d5d6
1011d5bc:	84 c0                	test   al,al
1011d5be:	74 12                	je     0x1011d5d2
1011d5c0:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1011d5c3:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
1011d5c6:	75 0e                	jne    0x1011d5d6
1011d5c8:	83 c1 02             	add    ecx,0x2
1011d5cb:	83 c2 02             	add    edx,0x2
1011d5ce:	84 c0                	test   al,al
1011d5d0:	75 e4                	jne    0x1011d5b6
1011d5d2:	33 c0                	xor    eax,eax
1011d5d4:	eb 05                	jmp    0x1011d5db
1011d5d6:	1b c0                	sbb    eax,eax
1011d5d8:	83 c8 01             	or     eax,0x1
1011d5db:	85 c0                	test   eax,eax
1011d5dd:	0f 85 d7 00 00 00    	jne    0x1011d6ba
1011d5e3:	56                   	push   esi
1011d5e4:	e8 97 1b f1 ff       	call   0x1002f180
1011d5e9:	83 c4 04             	add    esp,0x4
1011d5ec:	80 bf a5 01 00 00 00 	cmp    BYTE PTR [edi+0x1a5],0x0
1011d5f3:	0f 84 22 02 00 00    	je     0x1011d81b
1011d5f9:	85 c0                	test   eax,eax
1011d5fb:	0f 84 1a 02 00 00    	je     0x1011d81b
1011d601:	8b 80 00 02 00 00    	mov    eax,DWORD PTR [eax+0x200]
1011d607:	83 f8 0e             	cmp    eax,0xe
1011d60a:	74 0e                	je     0x1011d61a
1011d60c:	83 f8 17             	cmp    eax,0x17
1011d60f:	74 09                	je     0x1011d61a
1011d611:	83 f8 1b             	cmp    eax,0x1b
1011d614:	0f 85 01 02 00 00    	jne    0x1011d81b
1011d61a:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011d620:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011d623:	f7 80 84 01 00 00 00 	test   DWORD PTR [eax+0x184],0x800
1011d62a:	08 00 00 
1011d62d:	74 0d                	je     0x1011d63c
1011d62f:	83 bf 28 01 00 00 00 	cmp    DWORD PTR [edi+0x128],0x0
1011d636:	0f 84 df 01 00 00    	je     0x1011d81b
1011d63c:	83 bf a8 01 00 00 00 	cmp    DWORD PTR [edi+0x1a8],0x0
1011d643:	c6 87 a5 01 00 00 00 	mov    BYTE PTR [edi+0x1a5],0x0
1011d64a:	0f 84 39 01 00 00    	je     0x1011d789
1011d650:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1011d656:	8b 01                	mov    eax,DWORD PTR [ecx]
1011d658:	ff 50 20             	call   DWORD PTR [eax+0x20]
1011d65b:	85 c0                	test   eax,eax
1011d65d:	74 30                	je     0x1011d68f
1011d65f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d664:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011d66a:	03 87 a8 01 00 00    	add    eax,DWORD PTR [edi+0x1a8]
1011d670:	50                   	push   eax
1011d671:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011d677:	6a 01                	push   0x1
1011d679:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011d67c:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011d682:	e8 09 13 f0 ff       	call   0x1001e990
1011d687:	83 c4 0c             	add    esp,0xc
1011d68a:	e9 fa 00 00 00       	jmp    0x1011d789
1011d68f:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011d695:	6a 01                	push   0x1
1011d697:	51                   	push   ecx
1011d698:	83 ec 0c             	sub    esp,0xc
1011d69b:	8b 01                	mov    eax,DWORD PTR [ecx]
1011d69d:	54                   	push   esp
1011d69e:	ff 90 04 01 00 00    	call   DWORD PTR [eax+0x104]
1011d6a4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d6a9:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011d6af:	03 87 a8 01 00 00    	add    eax,DWORD PTR [edi+0x1a8]
1011d6b5:	e9 c2 00 00 00       	jmp    0x1011d77c
1011d6ba:	80 bf a5 01 00 00 00 	cmp    BYTE PTR [edi+0x1a5],0x0
1011d6c1:	0f 84 54 01 00 00    	je     0x1011d81b
1011d6c7:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011d6cd:	8b 01                	mov    eax,DWORD PTR [ecx]
1011d6cf:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
1011d6d5:	85 c0                	test   eax,eax
1011d6d7:	74 31                	je     0x1011d70a
1011d6d9:	83 bf e4 01 00 00 00 	cmp    DWORD PTR [edi+0x1e4],0x0
1011d6e0:	7e 28                	jle    0x1011d70a
1011d6e2:	83 bf f0 01 00 00 00 	cmp    DWORD PTR [edi+0x1f0],0x0
1011d6e9:	75 1f                	jne    0x1011d70a
1011d6eb:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011d6f1:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011d6f4:	f6 80 84 01 00 00 01 	test   BYTE PTR [eax+0x184],0x1
1011d6fb:	74 0d                	je     0x1011d70a
1011d6fd:	83 bf 28 01 00 00 00 	cmp    DWORD PTR [edi+0x128],0x0
1011d704:	0f 84 11 01 00 00    	je     0x1011d81b
1011d70a:	83 bf a8 01 00 00 00 	cmp    DWORD PTR [edi+0x1a8],0x0
1011d711:	c6 87 a5 01 00 00 00 	mov    BYTE PTR [edi+0x1a5],0x0
1011d718:	74 6f                	je     0x1011d789
1011d71a:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1011d720:	8b 01                	mov    eax,DWORD PTR [ecx]
1011d722:	ff 50 20             	call   DWORD PTR [eax+0x20]
1011d725:	85 c0                	test   eax,eax
1011d727:	74 2d                	je     0x1011d756
1011d729:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d72e:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011d734:	03 87 a8 01 00 00    	add    eax,DWORD PTR [edi+0x1a8]
1011d73a:	50                   	push   eax
1011d73b:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011d741:	6a 01                	push   0x1
1011d743:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011d746:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011d74c:	e8 3f 12 f0 ff       	call   0x1001e990
1011d751:	83 c4 0c             	add    esp,0xc
1011d754:	eb 33                	jmp    0x1011d789
1011d756:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011d75c:	6a 01                	push   0x1
1011d75e:	51                   	push   ecx
1011d75f:	83 ec 0c             	sub    esp,0xc
1011d762:	8b 01                	mov    eax,DWORD PTR [ecx]
1011d764:	54                   	push   esp
1011d765:	ff 90 04 01 00 00    	call   DWORD PTR [eax+0x104]
1011d76b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d770:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011d776:	03 87 ac 01 00 00    	add    eax,DWORD PTR [edi+0x1ac]
1011d77c:	6a 01                	push   0x1
1011d77e:	6a 02                	push   0x2
1011d780:	50                   	push   eax
1011d781:	e8 ba 92 ff ff       	call   0x10116a40
1011d786:	83 c4 20             	add    esp,0x20
1011d789:	83 bf ac 01 00 00 00 	cmp    DWORD PTR [edi+0x1ac],0x0
1011d790:	0f 84 85 00 00 00    	je     0x1011d81b
1011d796:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1011d79c:	8b 01                	mov    eax,DWORD PTR [ecx]
1011d79e:	ff 50 20             	call   DWORD PTR [eax+0x20]
1011d7a1:	85 c0                	test   eax,eax
1011d7a3:	74 43                	je     0x1011d7e8
1011d7a5:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d7aa:	6a 64                	push   0x64
1011d7ac:	6a 00                	push   0x0
1011d7ae:	83 ec 08             	sub    esp,0x8
1011d7b1:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011d7b7:	03 87 ac 01 00 00    	add    eax,DWORD PTR [edi+0x1ac]
1011d7bd:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1011d7c4:	3f 
1011d7c5:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1011d7cc:	50                   	push   eax
1011d7cd:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011d7d3:	6a 01                	push   0x1
1011d7d5:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011d7d8:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011d7de:	e8 0d f2 fd ff       	call   0x100fc9f0
1011d7e3:	83 c4 1c             	add    esp,0x1c
1011d7e6:	eb 33                	jmp    0x1011d81b
1011d7e8:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011d7ee:	6a 01                	push   0x1
1011d7f0:	51                   	push   ecx
1011d7f1:	83 ec 0c             	sub    esp,0xc
1011d7f4:	8b 01                	mov    eax,DWORD PTR [ecx]
1011d7f6:	54                   	push   esp
1011d7f7:	ff 90 04 01 00 00    	call   DWORD PTR [eax+0x104]
1011d7fd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d802:	6a 01                	push   0x1
1011d804:	6a 00                	push   0x0
1011d806:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011d80c:	03 87 ac 01 00 00    	add    eax,DWORD PTR [edi+0x1ac]
1011d812:	50                   	push   eax
1011d813:	e8 28 92 ff ff       	call   0x10116a40
1011d818:	83 c4 20             	add    esp,0x20
1011d81b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d820:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1011d824:	0f 2f 87 54 01 00 00 	comiss xmm0,DWORD PTR [edi+0x154]
1011d82b:	76 2a                	jbe    0x1011d857
1011d82d:	8b 07                	mov    eax,DWORD PTR [edi]
1011d82f:	8b cf                	mov    ecx,edi
1011d831:	8b 80 bc 01 00 00    	mov    eax,DWORD PTR [eax+0x1bc]
1011d837:	ff d0                	call   eax
1011d839:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d83e:	d8 00                	fadd   DWORD PTR [eax]
1011d840:	8b 87 50 01 00 00    	mov    eax,DWORD PTR [edi+0x150]
1011d846:	d9 9f 54 01 00 00    	fstp   DWORD PTR [edi+0x154]
1011d84c:	85 c0                	test   eax,eax
1011d84e:	7e 07                	jle    0x1011d857
1011d850:	48                   	dec    eax
1011d851:	89 87 50 01 00 00    	mov    DWORD PTR [edi+0x150],eax
1011d857:	8b 87 4c 01 00 00    	mov    eax,DWORD PTR [edi+0x14c]
1011d85d:	85 c0                	test   eax,eax
1011d85f:	7f 10                	jg     0x1011d871
1011d861:	8b 07                	mov    eax,DWORD PTR [edi]
1011d863:	8b cf                	mov    ecx,edi
1011d865:	ff 90 b8 01 00 00    	call   DWORD PTR [eax+0x1b8]
1011d86b:	8b 87 4c 01 00 00    	mov    eax,DWORD PTR [edi+0x14c]
1011d871:	8b 8f 50 01 00 00    	mov    ecx,DWORD PTR [edi+0x150]
1011d877:	85 c9                	test   ecx,ecx
1011d879:	79 0c                	jns    0x1011d887
1011d87b:	c7 87 50 01 00 00 00 	mov    DWORD PTR [edi+0x150],0x0
1011d882:	00 00 00 
1011d885:	33 c9                	xor    ecx,ecx
1011d887:	3b c8                	cmp    ecx,eax
1011d889:	7e 06                	jle    0x1011d891
1011d88b:	89 87 50 01 00 00    	mov    DWORD PTR [edi+0x150],eax
1011d891:	8b 97 60 01 00 00    	mov    edx,DWORD PTR [edi+0x160]
1011d897:	8b 8f dc 01 00 00    	mov    ecx,DWORD PTR [edi+0x1dc]
1011d89d:	8b 87 20 01 00 00    	mov    eax,DWORD PTR [edi+0x120]
1011d8a3:	3b 84 8a 40 25 00 00 	cmp    eax,DWORD PTR [edx+ecx*4+0x2540]
1011d8aa:	74 73                	je     0x1011d91f
1011d8ac:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
1011d8af:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011d8b5:	6a 00                	push   0x0
1011d8b7:	ff 35 b8 65 22 10    	push   DWORD PTR ds:0x102265b8
1011d8bd:	6a 01                	push   0x1
1011d8bf:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1011d8c5:	ff b7 68 01 00 00    	push   DWORD PTR [edi+0x168]
1011d8cb:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1011d8d1:	6b 87 68 01 00 00 2c 	imul   eax,DWORD PTR [edi+0x168],0x2c
1011d8d8:	ff b0 a4 18 23 10    	push   DWORD PTR [eax+0x102318a4]
1011d8de:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1011d8e4:	8b 8f dc 01 00 00    	mov    ecx,DWORD PTR [edi+0x1dc]
1011d8ea:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011d8f0:	ff b4 88 40 25 00 00 	push   DWORD PTR [eax+ecx*4+0x2540]
1011d8f7:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
1011d8fd:	83 c4 1c             	add    esp,0x1c
1011d900:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1011d906:	8b 97 60 01 00 00    	mov    edx,DWORD PTR [edi+0x160]
1011d90c:	8b 87 dc 01 00 00    	mov    eax,DWORD PTR [edi+0x1dc]
1011d912:	8b 84 82 40 25 00 00 	mov    eax,DWORD PTR [edx+eax*4+0x2540]
1011d919:	89 87 20 01 00 00    	mov    DWORD PTR [edi+0x120],eax
1011d91f:	83 bf f0 01 00 00 00 	cmp    DWORD PTR [edi+0x1f0],0x0
1011d926:	0f 84 8a 00 00 00    	je     0x1011d9b6
1011d92c:	f3 0f 10 82 08 03 00 	movss  xmm0,DWORD PTR [edx+0x308]
1011d933:	00 
1011d934:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1011d939:	e8 e2 d1 ff ff       	call   0x1011ab20
1011d93e:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1011d941:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1011d946:	0f 2f 45 f8          	comiss xmm0,DWORD PTR [ebp-0x8]
1011d94a:	72 6a                	jb     0x1011d9b6
1011d94c:	8b 87 68 01 00 00    	mov    eax,DWORD PTR [edi+0x168]
1011d952:	6b d8 2c             	imul   ebx,eax,0x2c
1011d955:	f6 83 ac 18 23 10 20 	test   BYTE PTR [ebx+0x102318ac],0x20
1011d95c:	75 58                	jne    0x1011d9b6
1011d95e:	8b 9b a4 18 23 10    	mov    ebx,DWORD PTR [ebx+0x102318a4]
1011d964:	83 f8 17             	cmp    eax,0x17
1011d967:	75 08                	jne    0x1011d971
1011d969:	89 9f e4 01 00 00    	mov    DWORD PTR [edi+0x1e4],ebx
1011d96f:	eb 3b                	jmp    0x1011d9ac
1011d971:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011d977:	8b 97 dc 01 00 00    	mov    edx,DWORD PTR [edi+0x1dc]
1011d97d:	8b b7 e4 01 00 00    	mov    esi,DWORD PTR [edi+0x1e4]
1011d983:	2b de                	sub    ebx,esi
1011d985:	8b 84 91 40 25 00 00 	mov    eax,DWORD PTR [ecx+edx*4+0x2540]
1011d98c:	3b d8                	cmp    ebx,eax
1011d98e:	0f 4d d8             	cmovge ebx,eax
1011d991:	8d 04 33             	lea    eax,[ebx+esi*1]
1011d994:	89 87 e4 01 00 00    	mov    DWORD PTR [edi+0x1e4],eax
1011d99a:	29 9c 91 40 25 00 00 	sub    DWORD PTR [ecx+edx*4+0x2540],ebx
1011d9a1:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011d9a7:	e8 04 85 fd ff       	call   0x100f5eb0
1011d9ac:	c7 87 f0 01 00 00 00 	mov    DWORD PTR [edi+0x1f0],0x0
1011d9b3:	00 00 00 
1011d9b6:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011d9bc:	0f 57 c0             	xorps  xmm0,xmm0
1011d9bf:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011d9c2:	f7 80 84 01 00 00 00 	test   DWORD PTR [eax+0x184],0x800
1011d9c9:	08 00 00 
1011d9cc:	0f 84 cd 00 00 00    	je     0x1011da9f
1011d9d2:	0f 2f 80 60 02 00 00 	comiss xmm0,DWORD PTR [eax+0x260]
1011d9d9:	0f 82 c0 00 00 00    	jb     0x1011da9f
1011d9df:	8b 07                	mov    eax,DWORD PTR [edi]
1011d9e1:	8b cf                	mov    ecx,edi
1011d9e3:	ff 90 d0 01 00 00    	call   DWORD PTR [eax+0x1d0]
1011d9e9:	50                   	push   eax
1011d9ea:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d9ef:	83 ec 08             	sub    esp,0x8
1011d9f2:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1011d9f6:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1011d9fc:	f3 0f 10 87 d0 01 00 	movss  xmm0,DWORD PTR [edi+0x1d0]
1011da03:	00 
1011da04:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011da09:	e8 b2 e5 ff ff       	call   0x1011bfc0
1011da0e:	83 c4 0c             	add    esp,0xc
1011da11:	85 c0                	test   eax,eax
1011da13:	0f 84 83 00 00 00    	je     0x1011da9c
1011da19:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011da1f:	e8 ac 74 fc ff       	call   0x100e4ed0
1011da24:	85 c0                	test   eax,eax
1011da26:	75 4c                	jne    0x1011da74
1011da28:	6b 87 68 01 00 00 2c 	imul   eax,DWORD PTR [edi+0x168],0x2c
1011da2f:	83 b8 98 18 23 10 00 	cmp    DWORD PTR [eax+0x10231898],0x0
1011da36:	74 27                	je     0x1011da5f
1011da38:	8b 07                	mov    eax,DWORD PTR [edi]
1011da3a:	8b cf                	mov    ecx,edi
1011da3c:	ff 90 6c 01 00 00    	call   DWORD PTR [eax+0x16c]
1011da42:	8d 0c 85 40 25 00 00 	lea    ecx,[eax*4+0x2540]
1011da49:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011da4f:	83 3c 01 00          	cmp    DWORD PTR [ecx+eax*1],0x0
1011da53:	75 0a                	jne    0x1011da5f
1011da55:	c7 87 b8 01 00 00 01 	mov    DWORD PTR [edi+0x1b8],0x1
1011da5c:	00 00 00 
1011da5f:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011da65:	e8 46 84 fd ff       	call   0x100f5eb0
1011da6a:	8b 07                	mov    eax,DWORD PTR [edi]
1011da6c:	8b cf                	mov    ecx,edi
1011da6e:	ff 90 a8 01 00 00    	call   DWORD PTR [eax+0x1a8]
1011da74:	8b 07                	mov    eax,DWORD PTR [edi]
1011da76:	8b cf                	mov    ecx,edi
1011da78:	ff 90 cc 01 00 00    	call   DWORD PTR [eax+0x1cc]
1011da7e:	85 c0                	test   eax,eax
1011da80:	74 13                	je     0x1011da95
1011da82:	83 bf 68 01 00 00 11 	cmp    DWORD PTR [edi+0x168],0x11
1011da89:	75 0a                	jne    0x1011da95
1011da8b:	8b 07                	mov    eax,DWORD PTR [edi]
1011da8d:	8b cf                	mov    ecx,edi
1011da8f:	ff 90 c4 01 00 00    	call   DWORD PTR [eax+0x1c4]
1011da95:	5f                   	pop    edi
1011da96:	5e                   	pop    esi
1011da97:	5b                   	pop    ebx
1011da98:	8b e5                	mov    esp,ebp
1011da9a:	5d                   	pop    ebp
1011da9b:	c3                   	ret
1011da9c:	0f 57 c0             	xorps  xmm0,xmm0
1011da9f:	8b b7 60 01 00 00    	mov    esi,DWORD PTR [edi+0x160]
1011daa5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011daa8:	f6 80 84 01 00 00 40 	test   BYTE PTR [eax+0x184],0x40
1011daaf:	74 68                	je     0x1011db19
1011dab1:	0f 2f 80 60 02 00 00 	comiss xmm0,DWORD PTR [eax+0x260]
1011dab8:	72 5f                	jb     0x1011db19
1011daba:	8b 07                	mov    eax,DWORD PTR [edi]
1011dabc:	8b cf                	mov    ecx,edi
1011dabe:	ff 90 d0 01 00 00    	call   DWORD PTR [eax+0x1d0]
1011dac4:	50                   	push   eax
1011dac5:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011daca:	83 ec 08             	sub    esp,0x8
1011dacd:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1011dad1:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1011dad7:	f3 0f 10 86 08 03 00 	movss  xmm0,DWORD PTR [esi+0x308]
1011dade:	00 
1011dadf:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011dae4:	e8 d7 e4 ff ff       	call   0x1011bfc0
1011dae9:	83 c4 0c             	add    esp,0xc
1011daec:	85 c0                	test   eax,eax
1011daee:	74 29                	je     0x1011db19
1011daf0:	8b ce                	mov    ecx,esi
1011daf2:	e8 d9 73 fc ff       	call   0x100e4ed0
1011daf7:	85 c0                	test   eax,eax
1011daf9:	0f 85 75 ff ff ff    	jne    0x1011da74
1011daff:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011db05:	e8 a6 83 fd ff       	call   0x100f5eb0
1011db0a:	8b 07                	mov    eax,DWORD PTR [edi]
1011db0c:	8b cf                	mov    ecx,edi
1011db0e:	ff 90 ac 01 00 00    	call   DWORD PTR [eax+0x1ac]
1011db14:	e9 5b ff ff ff       	jmp    0x1011da74
1011db19:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011db1c:	f6 80 84 01 00 00 01 	test   BYTE PTR [eax+0x184],0x1
1011db23:	0f 84 c2 00 00 00    	je     0x1011dbeb
1011db29:	0f 57 c0             	xorps  xmm0,xmm0
1011db2c:	0f 2f 80 60 02 00 00 	comiss xmm0,DWORD PTR [eax+0x260]
1011db33:	0f 82 b2 00 00 00    	jb     0x1011dbeb
1011db39:	8b 07                	mov    eax,DWORD PTR [edi]
1011db3b:	8b cf                	mov    ecx,edi
1011db3d:	ff 90 d0 01 00 00    	call   DWORD PTR [eax+0x1d0]
1011db43:	50                   	push   eax
1011db44:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011db49:	83 ec 08             	sub    esp,0x8
1011db4c:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1011db50:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1011db56:	f3 0f 10 87 cc 01 00 	movss  xmm0,DWORD PTR [edi+0x1cc]
1011db5d:	00 
1011db5e:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1011db63:	e8 58 e4 ff ff       	call   0x1011bfc0
1011db68:	83 c4 0c             	add    esp,0xc
1011db6b:	85 c0                	test   eax,eax
1011db6d:	74 7c                	je     0x1011dbeb
1011db6f:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011db75:	e8 56 73 fc ff       	call   0x100e4ed0
1011db7a:	85 c0                	test   eax,eax
1011db7c:	0f 85 f2 fe ff ff    	jne    0x1011da74
1011db82:	39 87 e4 01 00 00    	cmp    DWORD PTR [edi+0x1e4],eax
1011db88:	75 10                	jne    0x1011db9a
1011db8a:	6b 87 68 01 00 00 2c 	imul   eax,DWORD PTR [edi+0x168],0x2c
1011db91:	83 b8 90 18 23 10 00 	cmp    DWORD PTR [eax+0x10231890],0x0
1011db98:	75 2d                	jne    0x1011dbc7
1011db9a:	6b 87 68 01 00 00 2c 	imul   eax,DWORD PTR [edi+0x168],0x2c
1011dba1:	83 b8 a4 18 23 10 ff 	cmp    DWORD PTR [eax+0x102318a4],0xffffffff
1011dba8:	75 27                	jne    0x1011dbd1
1011dbaa:	8b 07                	mov    eax,DWORD PTR [edi]
1011dbac:	8b cf                	mov    ecx,edi
1011dbae:	ff 90 68 01 00 00    	call   DWORD PTR [eax+0x168]
1011dbb4:	8d 0c 85 40 25 00 00 	lea    ecx,[eax*4+0x2540]
1011dbbb:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011dbc1:	83 3c 01 00          	cmp    DWORD PTR [ecx+eax*1],0x0
1011dbc5:	75 0a                	jne    0x1011dbd1
1011dbc7:	c7 87 b8 01 00 00 01 	mov    DWORD PTR [edi+0x1b8],0x1
1011dbce:	00 00 00 
1011dbd1:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011dbd7:	e8 d4 82 fd ff       	call   0x100f5eb0
1011dbdc:	8b 07                	mov    eax,DWORD PTR [edi]
1011dbde:	8b cf                	mov    ecx,edi
1011dbe0:	ff 90 a4 01 00 00    	call   DWORD PTR [eax+0x1a4]
1011dbe6:	e9 89 fe ff ff       	jmp    0x1011da74
1011dbeb:	8b b7 60 01 00 00    	mov    esi,DWORD PTR [edi+0x160]
1011dbf1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011dbf4:	8b 98 84 01 00 00    	mov    ebx,DWORD PTR [eax+0x184]
1011dbfa:	f7 c3 00 20 00 00    	test   ebx,0x2000
1011dc00:	0f 84 f1 00 00 00    	je     0x1011dcf7
1011dc06:	6b 87 68 01 00 00 2c 	imul   eax,DWORD PTR [edi+0x168],0x2c
1011dc0d:	83 b8 a4 18 23 10 ff 	cmp    DWORD PTR [eax+0x102318a4],0xffffffff
1011dc14:	74 63                	je     0x1011dc79
1011dc16:	83 bf f0 01 00 00 00 	cmp    DWORD PTR [edi+0x1f0],0x0
1011dc1d:	0f 85 d4 00 00 00    	jne    0x1011dcf7
1011dc23:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011dc26:	ba b8 dc 1a 10       	mov    edx,0x101adcb8
1011dc2b:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
1011dc31:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
1011dc37:	f7 d9                	neg    ecx
1011dc39:	1b c9                	sbb    ecx,ecx
1011dc3b:	23 c8                	and    ecx,eax
1011dc3d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011dc42:	8b 09                	mov    ecx,DWORD PTR [ecx]
1011dc44:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1011dc4a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1011dc50:	8a 01                	mov    al,BYTE PTR [ecx]
1011dc52:	3a 02                	cmp    al,BYTE PTR [edx]
1011dc54:	75 1a                	jne    0x1011dc70
1011dc56:	84 c0                	test   al,al
1011dc58:	74 12                	je     0x1011dc6c
1011dc5a:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1011dc5d:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
1011dc60:	75 0e                	jne    0x1011dc70
1011dc62:	83 c1 02             	add    ecx,0x2
1011dc65:	83 c2 02             	add    edx,0x2
1011dc68:	84 c0                	test   al,al
1011dc6a:	75 e4                	jne    0x1011dc50
1011dc6c:	33 c0                	xor    eax,eax
1011dc6e:	eb 05                	jmp    0x1011dc75
1011dc70:	1b c0                	sbb    eax,eax
1011dc72:	83 c8 01             	or     eax,0x1
1011dc75:	85 c0                	test   eax,eax
1011dc77:	75 60                	jne    0x1011dcd9
1011dc79:	83 bf f0 01 00 00 00 	cmp    DWORD PTR [edi+0x1f0],0x0
1011dc80:	75 75                	jne    0x1011dcf7
1011dc82:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011dc85:	ba b8 dc 1a 10       	mov    edx,0x101adcb8
1011dc8a:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
1011dc90:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
1011dc96:	f7 d9                	neg    ecx
1011dc98:	1b c9                	sbb    ecx,ecx
1011dc9a:	23 c8                	and    ecx,eax
1011dc9c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011dca1:	8b 09                	mov    ecx,DWORD PTR [ecx]
1011dca3:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1011dca9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
1011dcb0:	8a 01                	mov    al,BYTE PTR [ecx]
1011dcb2:	3a 02                	cmp    al,BYTE PTR [edx]
1011dcb4:	75 1a                	jne    0x1011dcd0
1011dcb6:	84 c0                	test   al,al
1011dcb8:	74 12                	je     0x1011dccc
1011dcba:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1011dcbd:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
1011dcc0:	75 0e                	jne    0x1011dcd0
1011dcc2:	83 c1 02             	add    ecx,0x2
1011dcc5:	83 c2 02             	add    edx,0x2
1011dcc8:	84 c0                	test   al,al
1011dcca:	75 e4                	jne    0x1011dcb0
1011dccc:	33 c0                	xor    eax,eax
1011dcce:	eb 05                	jmp    0x1011dcd5
1011dcd0:	1b c0                	sbb    eax,eax
1011dcd2:	83 c8 01             	or     eax,0x1
1011dcd5:	85 c0                	test   eax,eax
1011dcd7:	75 1e                	jne    0x1011dcf7
1011dcd9:	8b ce                	mov    ecx,esi
1011dcdb:	e8 f0 71 fc ff       	call   0x100e4ed0
1011dce0:	85 c0                	test   eax,eax
1011dce2:	0f 85 8c fd ff ff    	jne    0x1011da74
1011dce8:	8b 07                	mov    eax,DWORD PTR [edi]
1011dcea:	8b cf                	mov    ecx,edi
1011dcec:	ff 90 c0 01 00 00    	call   DWORD PTR [eax+0x1c0]
1011dcf2:	e9 7d fd ff ff       	jmp    0x1011da74
1011dcf7:	f7 c3 41 08 00 00    	test   ebx,0x841
1011dcfd:	0f 85 71 fd ff ff    	jne    0x1011da74
1011dd03:	83 bf e4 01 00 00 00 	cmp    DWORD PTR [edi+0x1e4],0x0
1011dd0a:	c7 87 b8 01 00 00 00 	mov    DWORD PTR [edi+0x1b8],0x0
1011dd11:	00 00 00 
1011dd14:	0f 85 68 fd ff ff    	jne    0x1011da82
1011dd1a:	6b 87 68 01 00 00 2c 	imul   eax,DWORD PTR [edi+0x168],0x2c
1011dd21:	f6 80 ac 18 23 10 02 	test   BYTE PTR [eax+0x102318ac],0x2
1011dd28:	0f 85 54 fd ff ff    	jne    0x1011da82
1011dd2e:	8b 07                	mov    eax,DWORD PTR [edi]
1011dd30:	8b cf                	mov    ecx,edi
1011dd32:	ff 90 d0 01 00 00    	call   DWORD PTR [eax+0x1d0]
1011dd38:	85 c0                	test   eax,eax
1011dd3a:	74 05                	je     0x1011dd41
1011dd3c:	0f 57 c9             	xorps  xmm1,xmm1
1011dd3f:	eb 0c                	jmp    0x1011dd4d
1011dd41:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011dd46:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
1011dd4a:	0f 5a c9             	cvtps2pd xmm1,xmm1
1011dd4d:	f3 0f 10 87 cc 01 00 	movss  xmm0,DWORD PTR [edi+0x1cc]
1011dd54:	00 
1011dd55:	0f 5a c0             	cvtps2pd xmm0,xmm0
1011dd58:	66 0f 2f c8          	comisd xmm1,xmm0
1011dd5c:	0f 87 33 fd ff ff    	ja     0x1011da95
1011dd62:	e9 1b fd ff ff       	jmp    0x1011da82
