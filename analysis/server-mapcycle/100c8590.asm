
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c8590 <.text+0xc7590>:
100c8590:	55                   	push   ebp
100c8591:	8b ec                	mov    ebp,esp
100c8593:	81 ec 08 04 00 00    	sub    esp,0x408
100c8599:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100c859e:	33 c5                	xor    eax,ebp
100c85a0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100c85a3:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100c85a6:	53                   	push   ebx
100c85a7:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
100c85aa:	56                   	push   esi
100c85ab:	80 39 5c             	cmp    BYTE PTR [ecx],0x5c
100c85ae:	8d 41 01             	lea    eax,[ecx+0x1]
100c85b1:	57                   	push   edi
100c85b2:	0f 45 c1             	cmovne eax,ecx
100c85b5:	8a 08                	mov    cl,BYTE PTR [eax]
100c85b7:	8d 95 fc fb ff ff    	lea    edx,[ebp-0x404]
100c85bd:	80 f9 5c             	cmp    cl,0x5c
100c85c0:	74 13                	je     0x100c85d5
100c85c2:	84 c9                	test   cl,cl
100c85c4:	0f 84 e5 00 00 00    	je     0x100c86af
100c85ca:	40                   	inc    eax
100c85cb:	88 0a                	mov    BYTE PTR [edx],cl
100c85cd:	42                   	inc    edx
100c85ce:	8a 08                	mov    cl,BYTE PTR [eax]
100c85d0:	80 f9 5c             	cmp    cl,0x5c
100c85d3:	75 ed                	jne    0x100c85c2
100c85d5:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100c85d8:	40                   	inc    eax
100c85d9:	c6 02 00             	mov    BYTE PTR [edx],0x0
100c85dc:	8d 95 fc fd ff ff    	lea    edx,[ebp-0x204]
100c85e2:	80 f9 5c             	cmp    cl,0x5c
100c85e5:	74 0f                	je     0x100c85f6
100c85e7:	84 c9                	test   cl,cl
100c85e9:	74 0b                	je     0x100c85f6
100c85eb:	40                   	inc    eax
100c85ec:	88 0a                	mov    BYTE PTR [edx],cl
100c85ee:	42                   	inc    edx
100c85ef:	8a 08                	mov    cl,BYTE PTR [eax]
100c85f1:	80 f9 5c             	cmp    cl,0x5c
100c85f4:	75 f1                	jne    0x100c85e7
100c85f6:	c6 02 00             	mov    BYTE PTR [edx],0x0
100c85f9:	8d 95 fc fb ff ff    	lea    edx,[ebp-0x404]
100c85ff:	8b f2                	mov    esi,edx
100c8601:	8a 0a                	mov    cl,BYTE PTR [edx]
100c8603:	42                   	inc    edx
100c8604:	84 c9                	test   cl,cl
100c8606:	75 f9                	jne    0x100c8601
100c8608:	2b d6                	sub    edx,esi
100c860a:	8d 7b ff             	lea    edi,[ebx-0x1]
100c860d:	0f 1f 00             	nop    DWORD PTR [eax]
100c8610:	8a 4f 01             	mov    cl,BYTE PTR [edi+0x1]
100c8613:	47                   	inc    edi
100c8614:	84 c9                	test   cl,cl
100c8616:	75 f8                	jne    0x100c8610
100c8618:	8b ca                	mov    ecx,edx
100c861a:	c1 e9 02             	shr    ecx,0x2
100c861d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100c861f:	8b ca                	mov    ecx,edx
100c8621:	8d 95 fc fd ff ff    	lea    edx,[ebp-0x204]
100c8627:	83 e1 03             	and    ecx,0x3
100c862a:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100c862c:	8d 72 01             	lea    esi,[edx+0x1]
100c862f:	90                   	nop
100c8630:	8a 0a                	mov    cl,BYTE PTR [edx]
100c8632:	42                   	inc    edx
100c8633:	84 c9                	test   cl,cl
100c8635:	75 f9                	jne    0x100c8630
100c8637:	2b d6                	sub    edx,esi
100c8639:	74 4b                	je     0x100c8686
100c863b:	8d 7b ff             	lea    edi,[ebx-0x1]
100c863e:	66 90                	xchg   ax,ax
100c8640:	8a 4f 01             	mov    cl,BYTE PTR [edi+0x1]
100c8643:	8d 7f 01             	lea    edi,[edi+0x1]
100c8646:	84 c9                	test   cl,cl
100c8648:	75 f6                	jne    0x100c8640
100c864a:	66 8b 0d b0 5f 1b 10 	mov    cx,WORD PTR ds:0x101b5fb0
100c8651:	8d 95 fc fd ff ff    	lea    edx,[ebp-0x204]
100c8657:	66 89 0f             	mov    WORD PTR [edi],cx
100c865a:	8b f2                	mov    esi,edx
100c865c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c8660:	8a 0a                	mov    cl,BYTE PTR [edx]
100c8662:	42                   	inc    edx
100c8663:	84 c9                	test   cl,cl
100c8665:	75 f9                	jne    0x100c8660
100c8667:	2b d6                	sub    edx,esi
100c8669:	8d 7b ff             	lea    edi,[ebx-0x1]
100c866c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c8670:	8a 4f 01             	mov    cl,BYTE PTR [edi+0x1]
100c8673:	47                   	inc    edi
100c8674:	84 c9                	test   cl,cl
100c8676:	75 f8                	jne    0x100c8670
100c8678:	8b ca                	mov    ecx,edx
100c867a:	c1 e9 02             	shr    ecx,0x2
100c867d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100c867f:	8b ca                	mov    ecx,edx
100c8681:	83 e1 03             	and    ecx,0x3
100c8684:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100c8686:	8d 7b ff             	lea    edi,[ebx-0x1]
100c8689:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100c8690:	8a 4f 01             	mov    cl,BYTE PTR [edi+0x1]
100c8693:	8d 7f 01             	lea    edi,[edi+0x1]
100c8696:	84 c9                	test   cl,cl
100c8698:	75 f6                	jne    0x100c8690
100c869a:	66 8b 0d c8 84 1a 10 	mov    cx,WORD PTR ds:0x101a84c8
100c86a1:	66 89 0f             	mov    WORD PTR [edi],cx
100c86a4:	80 38 00             	cmp    BYTE PTR [eax],0x0
100c86a7:	74 06                	je     0x100c86af
100c86a9:	40                   	inc    eax
100c86aa:	e9 06 ff ff ff       	jmp    0x100c85b5
100c86af:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100c86b2:	5f                   	pop    edi
100c86b3:	5e                   	pop    esi
100c86b4:	33 cd                	xor    ecx,ebp
100c86b6:	5b                   	pop    ebx
100c86b7:	e8 f7 54 07 00       	call   0x1013dbb3
100c86bc:	8b e5                	mov    esp,ebp
100c86be:	5d                   	pop    ebp
100c86bf:	c3                   	ret
