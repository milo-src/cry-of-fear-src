
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1013f5f0 <.text+0x13e5f0>:
1013f5f0:	8b 4c 24 08          	mov    ecx,DWORD PTR [esp+0x8]
1013f5f4:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1013f5f8:	57                   	push   edi
1013f5f9:	53                   	push   ebx
1013f5fa:	56                   	push   esi
1013f5fb:	83 3d ec 28 23 10 01 	cmp    DWORD PTR ds:0x102328ec,0x1
1013f602:	0f 82 ce 01 00 00    	jb     0x1013f7d6
1013f608:	0f 87 fd 00 00 00    	ja     0x1013f70b
1013f60e:	0f b6 11             	movzx  edx,BYTE PTR [ecx]
1013f611:	8b da                	mov    ebx,edx
1013f613:	c1 e2 08             	shl    edx,0x8
1013f616:	0b d3                	or     edx,ebx
1013f618:	0f 84 e9 00 00 00    	je     0x1013f707
1013f61e:	66 0f 6e da          	movd   xmm3,edx
1013f622:	f2 0f 70 db 00       	pshuflw xmm3,xmm3,0x0
1013f627:	0f 16 db             	movlhps xmm3,xmm3
1013f62a:	66 0f ef c0          	pxor   xmm0,xmm0
1013f62e:	8b f1                	mov    esi,ecx
1013f630:	83 cf ff             	or     edi,0xffffffff
1013f633:	0f b6 19             	movzx  ebx,BYTE PTR [ecx]
1013f636:	83 c1 01             	add    ecx,0x1
1013f639:	85 db                	test   ebx,ebx
1013f63b:	74 1d                	je     0x1013f65a
1013f63d:	f7 c1 0f 00 00 00    	test   ecx,0xf
1013f643:	75 ee                	jne    0x1013f633
1013f645:	66 0f 6f 11          	movdqa xmm2,XMMWORD PTR [ecx]
1013f649:	66 0f 74 d0          	pcmpeqb xmm2,xmm0
1013f64d:	66 0f d7 da          	pmovmskb ebx,xmm2
1013f651:	85 db                	test   ebx,ebx
1013f653:	75 05                	jne    0x1013f65a
1013f655:	bf 0f 00 00 00       	mov    edi,0xf
1013f65a:	66 0f 7e da          	movd   edx,xmm3
1013f65e:	bb ff 0f 00 00       	mov    ebx,0xfff
1013f663:	23 d8                	and    ebx,eax
1013f665:	81 fb f0 0f 00 00    	cmp    ebx,0xff0
1013f66b:	77 27                	ja     0x1013f694
1013f66d:	f3 0f 6f 08          	movdqu xmm1,XMMWORD PTR [eax]
1013f671:	66 0f ef d2          	pxor   xmm2,xmm2
1013f675:	66 0f 74 d1          	pcmpeqb xmm2,xmm1
1013f679:	66 0f 74 cb          	pcmpeqb xmm1,xmm3
1013f67d:	66 0f eb ca          	por    xmm1,xmm2
1013f681:	66 0f d7 d9          	pmovmskb ebx,xmm1
1013f685:	83 c0 10             	add    eax,0x10
1013f688:	85 db                	test   ebx,ebx
1013f68a:	74 d2                	je     0x1013f65e
1013f68c:	0f bc db             	bsf    ebx,ebx
1013f68f:	83 e8 10             	sub    eax,0x10
1013f692:	03 c3                	add    eax,ebx
1013f694:	0f b6 18             	movzx  ebx,BYTE PTR [eax]
1013f697:	85 db                	test   ebx,ebx
1013f699:	74 6a                	je     0x1013f705
1013f69b:	83 c0 01             	add    eax,0x1
1013f69e:	3a d3                	cmp    dl,bl
1013f6a0:	75 bc                	jne    0x1013f65e
1013f6a2:	8b d0                	mov    edx,eax
1013f6a4:	8d 4e 01             	lea    ecx,[esi+0x1]
1013f6a7:	bb ff 0f 00 00       	mov    ebx,0xfff
1013f6ac:	85 cf                	test   edi,ecx
1013f6ae:	75 39                	jne    0x1013f6e9
1013f6b0:	23 da                	and    ebx,edx
1013f6b2:	81 fb f0 0f 00 00    	cmp    ebx,0xff0
1013f6b8:	77 2f                	ja     0x1013f6e9
1013f6ba:	f3 0f 6f 0a          	movdqu xmm1,XMMWORD PTR [edx]
1013f6be:	66 0f 6f 11          	movdqa xmm2,XMMWORD PTR [ecx]
1013f6c2:	66 0f 74 ca          	pcmpeqb xmm1,xmm2
1013f6c6:	66 0f 74 d0          	pcmpeqb xmm2,xmm0
1013f6ca:	66 0f 74 c8          	pcmpeqb xmm1,xmm0
1013f6ce:	66 0f eb d1          	por    xmm2,xmm1
1013f6d2:	66 0f d7 da          	pmovmskb ebx,xmm2
1013f6d6:	85 db                	test   ebx,ebx
1013f6d8:	75 08                	jne    0x1013f6e2
1013f6da:	83 c2 10             	add    edx,0x10
1013f6dd:	83 c1 10             	add    ecx,0x10
1013f6e0:	eb c5                	jmp    0x1013f6a7
1013f6e2:	0f bc db             	bsf    ebx,ebx
1013f6e5:	03 d3                	add    edx,ebx
1013f6e7:	03 cb                	add    ecx,ebx
1013f6e9:	0f b6 19             	movzx  ebx,BYTE PTR [ecx]
1013f6ec:	85 db                	test   ebx,ebx
1013f6ee:	74 10                	je     0x1013f700
1013f6f0:	3a 1a                	cmp    bl,BYTE PTR [edx]
1013f6f2:	0f 85 62 ff ff ff    	jne    0x1013f65a
1013f6f8:	83 c2 01             	add    edx,0x1
1013f6fb:	83 c1 01             	add    ecx,0x1
1013f6fe:	eb a7                	jmp    0x1013f6a7
1013f700:	48                   	dec    eax
1013f701:	5e                   	pop    esi
1013f702:	5b                   	pop    ebx
1013f703:	5f                   	pop    edi
1013f704:	c3                   	ret
1013f705:	33 c0                	xor    eax,eax
1013f707:	5e                   	pop    esi
1013f708:	5b                   	pop    ebx
1013f709:	5f                   	pop    edi
1013f70a:	c3                   	ret
1013f70b:	80 39 00             	cmp    BYTE PTR [ecx],0x0
1013f70e:	74 f7                	je     0x1013f707
1013f710:	8b f9                	mov    edi,ecx
1013f712:	bb ff 0f 00 00       	mov    ebx,0xfff
1013f717:	23 d9                	and    ebx,ecx
1013f719:	81 fb f0 0f 00 00    	cmp    ebx,0xff0
1013f71f:	77 06                	ja     0x1013f727
1013f721:	f3 0f 6f 01          	movdqu xmm0,XMMWORD PTR [ecx]
1013f725:	eb 22                	jmp    0x1013f749
1013f727:	bb 0f 00 00 00       	mov    ebx,0xf
1013f72c:	0f b6 31             	movzx  esi,BYTE PTR [ecx]
1013f72f:	83 c1 01             	add    ecx,0x1
1013f732:	66 0f 3a 20 c6 0f    	pinsrb xmm0,esi,0xf
1013f738:	66 0f 73 d8 01       	psrldq xmm0,0x1
1013f73d:	4b                   	dec    ebx
1013f73e:	74 09                	je     0x1013f749
1013f740:	85 f6                	test   esi,esi
1013f742:	74 ee                	je     0x1013f732
1013f744:	eb e6                	jmp    0x1013f72c
1013f746:	83 c0 01             	add    eax,0x1
1013f749:	66 0f 7e c2          	movd   edx,xmm0
1013f74d:	bb ff 0f 00 00       	mov    ebx,0xfff
1013f752:	23 d8                	and    ebx,eax
1013f754:	81 fb f0 0f 00 00    	cmp    ebx,0xff0
1013f75a:	76 10                	jbe    0x1013f76c
1013f75c:	0f b6 18             	movzx  ebx,BYTE PTR [eax]
1013f75f:	85 db                	test   ebx,ebx
1013f761:	74 a2                	je     0x1013f705
1013f763:	3a d3                	cmp    dl,bl
1013f765:	74 18                	je     0x1013f77f
1013f767:	83 c0 01             	add    eax,0x1
1013f76a:	eb e1                	jmp    0x1013f74d
1013f76c:	83 c0 10             	add    eax,0x10
1013f76f:	66 0f 3a 63 40 f0 0c 	pcmpistri xmm0,XMMWORD PTR [eax-0x10],0xc
1013f776:	77 d5                	ja     0x1013f74d
1013f778:	73 8b                	jae    0x1013f705
1013f77a:	83 e8 10             	sub    eax,0x10
1013f77d:	03 c1                	add    eax,ecx
1013f77f:	8b d7                	mov    edx,edi
1013f781:	8b f0                	mov    esi,eax
1013f783:	bb ff 0f 00 00       	mov    ebx,0xfff
1013f788:	23 de                	and    ebx,esi
1013f78a:	81 fb f0 0f 00 00    	cmp    ebx,0xff0
1013f790:	77 29                	ja     0x1013f7bb
1013f792:	bb ff 0f 00 00       	mov    ebx,0xfff
1013f797:	23 da                	and    ebx,edx
1013f799:	81 fb f0 0f 00 00    	cmp    ebx,0xff0
1013f79f:	77 1a                	ja     0x1013f7bb
1013f7a1:	f3 0f 6f 0a          	movdqu xmm1,XMMWORD PTR [edx]
1013f7a5:	83 c6 10             	add    esi,0x10
1013f7a8:	83 c2 10             	add    edx,0x10
1013f7ab:	66 0f 3a 63 4e f0 0c 	pcmpistri xmm1,XMMWORD PTR [esi-0x10],0xc
1013f7b2:	71 92                	jno    0x1013f746
1013f7b4:	79 cd                	jns    0x1013f783
1013f7b6:	e9 4c ff ff ff       	jmp    0x1013f707
1013f7bb:	0f b6 1a             	movzx  ebx,BYTE PTR [edx]
1013f7be:	85 db                	test   ebx,ebx
1013f7c0:	0f 84 41 ff ff ff    	je     0x1013f707
1013f7c6:	3a 1e                	cmp    bl,BYTE PTR [esi]
1013f7c8:	0f 85 78 ff ff ff    	jne    0x1013f746
1013f7ce:	83 c6 01             	add    esi,0x1
1013f7d1:	83 c2 01             	add    edx,0x1
1013f7d4:	eb ad                	jmp    0x1013f783
1013f7d6:	8a 11                	mov    dl,BYTE PTR [ecx]
1013f7d8:	8b f8                	mov    edi,eax
1013f7da:	84 d2                	test   dl,dl
1013f7dc:	74 6f                	je     0x1013f84d
1013f7de:	8a 71 01             	mov    dh,BYTE PTR [ecx+0x1]
1013f7e1:	84 f6                	test   dh,dh
1013f7e3:	74 55                	je     0x1013f83a
1013f7e5:	8b f7                	mov    esi,edi
1013f7e7:	8b 4c 24 14          	mov    ecx,DWORD PTR [esp+0x14]
1013f7eb:	8a 07                	mov    al,BYTE PTR [edi]
1013f7ed:	83 c6 01             	add    esi,0x1
1013f7f0:	3a c2                	cmp    al,dl
1013f7f2:	74 17                	je     0x1013f80b
1013f7f4:	84 c0                	test   al,al
1013f7f6:	74 0d                	je     0x1013f805
1013f7f8:	8a 06                	mov    al,BYTE PTR [esi]
1013f7fa:	83 c6 01             	add    esi,0x1
1013f7fd:	3a c2                	cmp    al,dl
1013f7ff:	74 0a                	je     0x1013f80b
1013f801:	84 c0                	test   al,al
1013f803:	75 f3                	jne    0x1013f7f8
1013f805:	5e                   	pop    esi
1013f806:	5b                   	pop    ebx
1013f807:	5f                   	pop    edi
1013f808:	33 c0                	xor    eax,eax
1013f80a:	c3                   	ret
1013f80b:	8a 06                	mov    al,BYTE PTR [esi]
1013f80d:	83 c6 01             	add    esi,0x1
1013f810:	3a c6                	cmp    al,dh
1013f812:	75 e9                	jne    0x1013f7fd
1013f814:	8d 7e ff             	lea    edi,[esi-0x1]
1013f817:	8a 61 02             	mov    ah,BYTE PTR [ecx+0x2]
1013f81a:	84 e4                	test   ah,ah
1013f81c:	74 28                	je     0x1013f846
1013f81e:	8a 06                	mov    al,BYTE PTR [esi]
1013f820:	83 c6 02             	add    esi,0x2
1013f823:	3a c4                	cmp    al,ah
1013f825:	75 be                	jne    0x1013f7e5
1013f827:	8a 41 03             	mov    al,BYTE PTR [ecx+0x3]
1013f82a:	84 c0                	test   al,al
1013f82c:	74 18                	je     0x1013f846
1013f82e:	8a 66 ff             	mov    ah,BYTE PTR [esi-0x1]
1013f831:	83 c1 02             	add    ecx,0x2
1013f834:	3a c4                	cmp    al,ah
1013f836:	74 df                	je     0x1013f817
1013f838:	eb ab                	jmp    0x1013f7e5
1013f83a:	33 c0                	xor    eax,eax
1013f83c:	5e                   	pop    esi
1013f83d:	5b                   	pop    ebx
1013f83e:	5f                   	pop    edi
1013f83f:	8a c2                	mov    al,dl
1013f841:	e9 88 1b 00 00       	jmp    0x101413ce
1013f846:	8d 47 ff             	lea    eax,[edi-0x1]
1013f849:	5e                   	pop    esi
1013f84a:	5b                   	pop    ebx
1013f84b:	5f                   	pop    edi
1013f84c:	c3                   	ret
1013f84d:	8b c7                	mov    eax,edi
1013f84f:	5e                   	pop    esi
1013f850:	5b                   	pop    ebx
1013f851:	5f                   	pop    edi
1013f852:	c3                   	ret
