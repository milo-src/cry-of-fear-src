
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fe5c0 <.text+0xfd5c0>:
100fe5c0:	55                   	push   ebp
100fe5c1:	8b ec                	mov    ebp,esp
100fe5c3:	83 ec 50             	sub    esp,0x50
100fe5c6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100fe5cb:	33 c5                	xor    eax,ebp
100fe5cd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100fe5d0:	83 3d c4 c8 22 10 00 	cmp    DWORD PTR ds:0x1022c8c4,0x0
100fe5d7:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100fe5da:	89 45 b0             	mov    DWORD PTR [ebp-0x50],eax
100fe5dd:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100fe5e0:	0f 84 b9 00 00 00    	je     0x100fe69f
100fe5e6:	85 c0                	test   eax,eax
100fe5e8:	0f 88 b1 00 00 00    	js     0x100fe69f
100fe5ee:	83 7d 10 00          	cmp    DWORD PTR [ebp+0x10],0x0
100fe5f2:	0f 8c a7 00 00 00    	jl     0x100fe69f
100fe5f8:	6b d0 34             	imul   edx,eax,0x34
100fe5fb:	b9 21 00 00 00       	mov    ecx,0x21
100fe600:	56                   	push   esi
100fe601:	57                   	push   edi
100fe602:	66 89 4d b4          	mov    WORD PTR [ebp-0x4c],cx
100fe606:	81 c2 c8 c8 22 10    	add    edx,0x1022c8c8
100fe60c:	8b f2                	mov    esi,edx
100fe60e:	66 90                	xchg   ax,ax
100fe610:	8a 02                	mov    al,BYTE PTR [edx]
100fe612:	42                   	inc    edx
100fe613:	84 c0                	test   al,al
100fe615:	75 f9                	jne    0x100fe610
100fe617:	8d 7d b4             	lea    edi,[ebp-0x4c]
100fe61a:	2b d6                	sub    edx,esi
100fe61c:	4f                   	dec    edi
100fe61d:	0f 1f 00             	nop    DWORD PTR [eax]
100fe620:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100fe623:	47                   	inc    edi
100fe624:	84 c0                	test   al,al
100fe626:	75 f8                	jne    0x100fe620
100fe628:	ff 75 10             	push   DWORD PTR [ebp+0x10]
100fe62b:	8b ca                	mov    ecx,edx
100fe62d:	8d 45 f4             	lea    eax,[ebp-0xc]
100fe630:	c1 e9 02             	shr    ecx,0x2
100fe633:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100fe635:	8b ca                	mov    ecx,edx
100fe637:	83 e1 03             	and    ecx,0x3
100fe63a:	68 cc 20 1c 10       	push   0x101c20cc
100fe63f:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100fe641:	50                   	push   eax
100fe642:	e8 19 0b f2 ff       	call   0x1001f160
100fe647:	8d 55 f4             	lea    edx,[ebp-0xc]
100fe64a:	83 c4 0c             	add    esp,0xc
100fe64d:	8b f2                	mov    esi,edx
100fe64f:	90                   	nop
100fe650:	8a 02                	mov    al,BYTE PTR [edx]
100fe652:	42                   	inc    edx
100fe653:	84 c0                	test   al,al
100fe655:	75 f9                	jne    0x100fe650
100fe657:	8d 7d b4             	lea    edi,[ebp-0x4c]
100fe65a:	2b d6                	sub    edx,esi
100fe65c:	4f                   	dec    edi
100fe65d:	0f 1f 00             	nop    DWORD PTR [eax]
100fe660:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100fe663:	47                   	inc    edi
100fe664:	84 c0                	test   al,al
100fe666:	75 f8                	jne    0x100fe660
100fe668:	8b ca                	mov    ecx,edx
100fe66a:	8d 45 b4             	lea    eax,[ebp-0x4c]
100fe66d:	c1 e9 02             	shr    ecx,0x2
100fe670:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100fe672:	6a 64                	push   0x64
100fe674:	6a 20                	push   0x20
100fe676:	83 ec 08             	sub    esp,0x8
100fe679:	8b ca                	mov    ecx,edx
100fe67b:	83 e1 03             	and    ecx,0x3
100fe67e:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100fe680:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
100fe687:	00 
100fe688:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100fe68f:	50                   	push   eax
100fe690:	6a 02                	push   0x2
100fe692:	ff 75 b0             	push   DWORD PTR [ebp-0x50]
100fe695:	e8 56 e3 ff ff       	call   0x100fc9f0
100fe69a:	83 c4 1c             	add    esp,0x1c
100fe69d:	5f                   	pop    edi
100fe69e:	5e                   	pop    esi
100fe69f:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100fe6a2:	33 cd                	xor    ecx,ebp
100fe6a4:	e8 0a f5 03 00       	call   0x1013dbb3
100fe6a9:	8b e5                	mov    esp,ebp
100fe6ab:	5d                   	pop    ebp
100fe6ac:	c3                   	ret
