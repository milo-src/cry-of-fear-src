
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fb6b0 <.text+0xfa6b0>:
100fb6b0:	55                   	push   ebp
100fb6b1:	8b ec                	mov    ebp,esp
100fb6b3:	51                   	push   ecx
100fb6b4:	57                   	push   edi
100fb6b5:	8b f9                	mov    edi,ecx
100fb6b7:	8d 8f 8c 01 00 00    	lea    ecx,[edi+0x18c]
100fb6bd:	e8 ce c0 f1 ff       	call   0x10017790
100fb6c2:	85 c0                	test   eax,eax
100fb6c4:	0f 84 87 02 00 00    	je     0x100fb951
100fb6ca:	8b 10                	mov    edx,DWORD PTR [eax]
100fb6cc:	8b c8                	mov    ecx,eax
100fb6ce:	53                   	push   ebx
100fb6cf:	ff 52 78             	call   DWORD PTR [edx+0x78]
100fb6d2:	8b d8                	mov    ebx,eax
100fb6d4:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
100fb6d7:	85 db                	test   ebx,ebx
100fb6d9:	0f 84 71 02 00 00    	je     0x100fb950
100fb6df:	8b 8b 4c 03 00 00    	mov    ecx,DWORD PTR [ebx+0x34c]
100fb6e5:	85 c9                	test   ecx,ecx
100fb6e7:	74 05                	je     0x100fb6ee
100fb6e9:	e8 c2 ed ff ff       	call   0x100fa4b0
100fb6ee:	89 bb 4c 03 00 00    	mov    DWORD PTR [ebx+0x34c],edi
100fb6f4:	81 c3 8c 01 00 00    	add    ebx,0x18c
100fb6fa:	83 bf 78 03 00 00 00 	cmp    DWORD PTR [edi+0x378],0x0
100fb701:	56                   	push   esi
100fb702:	0f 84 3e 01 00 00    	je     0x100fb846
100fb708:	8d 8f e4 00 00 00    	lea    ecx,[edi+0xe4]
100fb70e:	e8 7d c0 f1 ff       	call   0x10017790
100fb713:	50                   	push   eax
100fb714:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fb719:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100fb71f:	03 87 78 03 00 00    	add    eax,DWORD PTR [edi+0x378]
100fb725:	50                   	push   eax
100fb726:	6a 00                	push   0x0
100fb728:	e8 d3 cd 01 00       	call   0x10118500
100fb72d:	83 c4 0c             	add    esp,0xc
100fb730:	8b cb                	mov    ecx,ebx
100fb732:	50                   	push   eax
100fb733:	e8 08 c0 f1 ff       	call   0x10017740
100fb738:	8b cb                	mov    ecx,ebx
100fb73a:	e8 41 c0 f1 ff       	call   0x10017780
100fb73f:	85 c0                	test   eax,eax
100fb741:	0f 85 bf 00 00 00    	jne    0x100fb806
100fb747:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100fb74a:	f3 0f 10 87 94 03 00 	movss  xmm0,DWORD PTR [edi+0x394]
100fb751:	00 
100fb752:	83 c0 08             	add    eax,0x8
100fb755:	51                   	push   ecx
100fb756:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100fb75b:	8b cb                	mov    ecx,ebx
100fb75d:	50                   	push   eax
100fb75e:	e8 2d c0 f1 ff       	call   0x10017790
100fb763:	50                   	push   eax
100fb764:	e8 47 cf 01 00       	call   0x101186b0
100fb769:	83 c4 0c             	add    esp,0xc
100fb76c:	8b cb                	mov    ecx,ebx
100fb76e:	50                   	push   eax
100fb76f:	e8 cc bf f1 ff       	call   0x10017740
100fb774:	85 c0                	test   eax,eax
100fb776:	0f 84 8a 00 00 00    	je     0x100fb806
100fb77c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100fb780:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fb785:	8b cb                	mov    ecx,ebx
100fb787:	8b b0 98 00 00 00    	mov    esi,DWORD PTR [eax+0x98]
100fb78d:	03 b7 78 03 00 00    	add    esi,DWORD PTR [edi+0x378]
100fb793:	e8 08 c0 f1 ff       	call   0x100177a0
100fb798:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100fb79b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fb7a0:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100fb7a6:	03 01                	add    eax,DWORD PTR [ecx]
100fb7a8:	8a 08                	mov    cl,BYTE PTR [eax]
100fb7aa:	3a 0e                	cmp    cl,BYTE PTR [esi]
100fb7ac:	75 1a                	jne    0x100fb7c8
100fb7ae:	84 c9                	test   cl,cl
100fb7b0:	74 12                	je     0x100fb7c4
100fb7b2:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100fb7b5:	3a 4e 01             	cmp    cl,BYTE PTR [esi+0x1]
100fb7b8:	75 0e                	jne    0x100fb7c8
100fb7ba:	83 c0 02             	add    eax,0x2
100fb7bd:	83 c6 02             	add    esi,0x2
100fb7c0:	84 c9                	test   cl,cl
100fb7c2:	75 e4                	jne    0x100fb7a8
100fb7c4:	33 c0                	xor    eax,eax
100fb7c6:	eb 05                	jmp    0x100fb7cd
100fb7c8:	1b c0                	sbb    eax,eax
100fb7ca:	83 c8 01             	or     eax,0x1
100fb7cd:	85 c0                	test   eax,eax
100fb7cf:	74 35                	je     0x100fb806
100fb7d1:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100fb7d4:	f3 0f 10 87 94 03 00 	movss  xmm0,DWORD PTR [edi+0x394]
100fb7db:	00 
100fb7dc:	83 c0 08             	add    eax,0x8
100fb7df:	51                   	push   ecx
100fb7e0:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100fb7e5:	8b cb                	mov    ecx,ebx
100fb7e7:	50                   	push   eax
100fb7e8:	e8 a3 bf f1 ff       	call   0x10017790
100fb7ed:	50                   	push   eax
100fb7ee:	e8 bd ce 01 00       	call   0x101186b0
100fb7f3:	83 c4 0c             	add    esp,0xc
100fb7f6:	8b cb                	mov    ecx,ebx
100fb7f8:	50                   	push   eax
100fb7f9:	e8 42 bf f1 ff       	call   0x10017740
100fb7fe:	85 c0                	test   eax,eax
100fb800:	0f 85 7a ff ff ff    	jne    0x100fb780
100fb806:	8b cb                	mov    ecx,ebx
100fb808:	e8 73 bf f1 ff       	call   0x10017780
100fb80d:	85 c0                	test   eax,eax
100fb80f:	75 3d                	jne    0x100fb84e
100fb811:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fb816:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
100fb819:	8b b0 98 00 00 00    	mov    esi,DWORD PTR [eax+0x98]
100fb81f:	8b 87 78 03 00 00    	mov    eax,DWORD PTR [edi+0x378]
100fb825:	03 c6                	add    eax,esi
100fb827:	50                   	push   eax
100fb828:	8b 82 d0 01 00 00    	mov    eax,DWORD PTR [edx+0x1d0]
100fb82e:	03 c6                	add    eax,esi
100fb830:	50                   	push   eax
100fb831:	8b 02                	mov    eax,DWORD PTR [edx]
100fb833:	03 c6                	add    eax,esi
100fb835:	50                   	push   eax
100fb836:	68 90 de 1d 10       	push   0x101dde90
100fb83b:	6a 01                	push   0x1
100fb83d:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100fb843:	83 c4 14             	add    esp,0x14
100fb846:	57                   	push   edi
100fb847:	8b cb                	mov    ecx,ebx
100fb849:	e8 f2 be f1 ff       	call   0x10017740
100fb84e:	83 bf 7c 03 00 00 00 	cmp    DWORD PTR [edi+0x37c],0x0
100fb855:	5e                   	pop    esi
100fb856:	74 69                	je     0x100fb8c1
100fb858:	8d 8f e4 00 00 00    	lea    ecx,[edi+0xe4]
100fb85e:	e8 2d bf f1 ff       	call   0x10017790
100fb863:	50                   	push   eax
100fb864:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fb869:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100fb86f:	03 87 7c 03 00 00    	add    eax,DWORD PTR [edi+0x37c]
100fb875:	50                   	push   eax
100fb876:	6a 00                	push   0x0
100fb878:	e8 83 cc 01 00       	call   0x10118500
100fb87d:	8b 5d fc             	mov    ebx,DWORD PTR [ebp-0x4]
100fb880:	83 c4 0c             	add    esp,0xc
100fb883:	89 43 0c             	mov    DWORD PTR [ebx+0xc],eax
100fb886:	85 c0                	test   eax,eax
100fb888:	75 3d                	jne    0x100fb8c7
100fb88a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fb88f:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100fb892:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100fb898:	8b 87 7c 03 00 00    	mov    eax,DWORD PTR [edi+0x37c]
100fb89e:	03 c2                	add    eax,edx
100fb8a0:	50                   	push   eax
100fb8a1:	8b 81 d0 01 00 00    	mov    eax,DWORD PTR [ecx+0x1d0]
100fb8a7:	03 c2                	add    eax,edx
100fb8a9:	50                   	push   eax
100fb8aa:	8b 01                	mov    eax,DWORD PTR [ecx]
100fb8ac:	03 c2                	add    eax,edx
100fb8ae:	50                   	push   eax
100fb8af:	68 b8 de 1d 10       	push   0x101ddeb8
100fb8b4:	6a 01                	push   0x1
100fb8b6:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100fb8bc:	83 c4 14             	add    esp,0x14
100fb8bf:	eb 03                	jmp    0x100fb8c4
100fb8c1:	8b 5d fc             	mov    ebx,DWORD PTR [ebp-0x4]
100fb8c4:	89 7b 0c             	mov    DWORD PTR [ebx+0xc],edi
100fb8c7:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100fb8ca:	8b 80 08 01 00 00    	mov    eax,DWORD PTR [eax+0x108]
100fb8d0:	89 87 b0 03 00 00    	mov    DWORD PTR [edi+0x3b0],eax
100fb8d6:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100fb8d9:	8b 80 0c 01 00 00    	mov    eax,DWORD PTR [eax+0x10c]
100fb8df:	89 87 b4 03 00 00    	mov    DWORD PTR [edi+0x3b4],eax
100fb8e5:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100fb8e8:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
100fb8ee:	89 87 b8 03 00 00    	mov    DWORD PTR [edi+0x3b8],eax
100fb8f4:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100fb8f7:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100fb8fa:	8b 80 18 01 00 00    	mov    eax,DWORD PTR [eax+0x118]
100fb900:	09 81 18 01 00 00    	or     DWORD PTR [ecx+0x118],eax
100fb906:	8b 87 84 03 00 00    	mov    eax,DWORD PTR [edi+0x384]
100fb90c:	c7 87 68 03 00 00 02 	mov    DWORD PTR [edi+0x368],0x2
100fb913:	00 00 00 
100fb916:	83 f8 06             	cmp    eax,0x6
100fb919:	77 2b                	ja     0x100fb946
100fb91b:	0f b6 80 64 b9 0f 10 	movzx  eax,BYTE PTR [eax+0x100fb964]
100fb922:	ff 24 85 58 b9 0f 10 	jmp    DWORD PTR [eax*4+0x100fb958]
100fb929:	6a 01                	push   0x1
100fb92b:	8b cf                	mov    ecx,edi
100fb92d:	e8 5e f0 ff ff       	call   0x100fa990
100fb932:	c7 87 68 03 00 00 01 	mov    DWORD PTR [edi+0x368],0x1
100fb939:	00 00 00 
100fb93c:	c7 83 48 03 00 00 01 	mov    DWORD PTR [ebx+0x348],0x1
100fb943:	00 00 00 
100fb946:	c7 83 28 02 00 00 06 	mov    DWORD PTR [ebx+0x228],0x6
100fb94d:	00 00 00 
100fb950:	5b                   	pop    ebx
100fb951:	5f                   	pop    edi
100fb952:	8b e5                	mov    esp,ebp
100fb954:	5d                   	pop    ebp
100fb955:	c3                   	ret
