
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cf6c0 <.text+0xce6c0>:
100cf6c0:	55                   	push   ebp
100cf6c1:	8b ec                	mov    ebp,esp
100cf6c3:	83 ec 14             	sub    esp,0x14
100cf6c6:	83 3d b0 38 22 10 00 	cmp    DWORD PTR ds:0x102238b0,0x0
100cf6cd:	56                   	push   esi
100cf6ce:	8b f1                	mov    esi,ecx
100cf6d0:	0f 84 4f 02 00 00    	je     0x100cf925
100cf6d6:	83 3d b4 38 22 10 00 	cmp    DWORD PTR ds:0x102238b4,0x0
100cf6dd:	0f 84 42 02 00 00    	je     0x100cf925
100cf6e3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100cf6e8:	b9 e4 75 1d 10       	mov    ecx,0x101d75e4
100cf6ed:	57                   	push   edi
100cf6ee:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
100cf6f1:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100cf6f7:	03 07                	add    eax,DWORD PTR [edi]
100cf6f9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100cf700:	8a 10                	mov    dl,BYTE PTR [eax]
100cf702:	3a 11                	cmp    dl,BYTE PTR [ecx]
100cf704:	75 1a                	jne    0x100cf720
100cf706:	84 d2                	test   dl,dl
100cf708:	74 12                	je     0x100cf71c
100cf70a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100cf70d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100cf710:	75 0e                	jne    0x100cf720
100cf712:	83 c0 02             	add    eax,0x2
100cf715:	83 c1 02             	add    ecx,0x2
100cf718:	84 d2                	test   dl,dl
100cf71a:	75 e4                	jne    0x100cf700
100cf71c:	33 c0                	xor    eax,eax
100cf71e:	eb 05                	jmp    0x100cf725
100cf720:	1b c0                	sbb    eax,eax
100cf722:	83 c8 01             	or     eax,0x1
100cf725:	85 c0                	test   eax,eax
100cf727:	75 46                	jne    0x100cf76f
100cf729:	f3 0f 10 0d 40 76 1d 	movss  xmm1,DWORD PTR ds:0x101d7640
100cf730:	10 
100cf731:	f3 0f 10 05 1c 1f 1a 	movss  xmm0,DWORD PTR ds:0x101a1f1c
100cf738:	10 
100cf739:	0f 14 c8             	unpcklps xmm1,xmm0
100cf73c:	c7 45 f4 00 00 7f 43 	mov    DWORD PTR [ebp-0xc],0x437f0000
100cf743:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
100cf746:	66 0f d6 8e f0 04 00 	movq   QWORD PTR [esi+0x4f0],xmm1
100cf74d:	00 
100cf74e:	89 86 f8 04 00 00    	mov    DWORD PTR [esi+0x4f8],eax
100cf754:	b8 02 00 00 00       	mov    eax,0x2
100cf759:	c7 86 e8 04 00 00 03 	mov    DWORD PTR [esi+0x4e8],0x3
100cf760:	00 00 00 
100cf763:	c7 86 ec 04 00 00 02 	mov    DWORD PTR [esi+0x4ec],0x2
100cf76a:	00 00 00 
100cf76d:	eb 79                	jmp    0x100cf7e8
100cf76f:	68 f4 75 1d 10       	push   0x101d75f4
100cf774:	57                   	push   edi
100cf775:	e8 76 b3 f3 ff       	call   0x1000aaf0
100cf77a:	83 c4 08             	add    esp,0x8
100cf77d:	c7 86 ec 04 00 00 05 	mov    DWORD PTR [esi+0x4ec],0x5
100cf784:	00 00 00 
100cf787:	85 c0                	test   eax,eax
100cf789:	74 23                	je     0x100cf7ae
100cf78b:	f3 0f 10 0d 1c 1f 1a 	movss  xmm1,DWORD PTR ds:0x101a1f1c
100cf792:	10 
100cf793:	f3 0f 10 05 c0 22 1a 	movss  xmm0,DWORD PTR ds:0x101a22c0
100cf79a:	10 
100cf79b:	c7 86 e8 04 00 00 02 	mov    DWORD PTR [esi+0x4e8],0x2
100cf7a2:	00 00 00 
100cf7a5:	c7 45 f4 00 00 20 43 	mov    DWORD PTR [ebp-0xc],0x43200000
100cf7ac:	eb 21                	jmp    0x100cf7cf
100cf7ae:	f3 0f 10 0d c0 22 1a 	movss  xmm1,DWORD PTR ds:0x101a22c0
100cf7b5:	10 
100cf7b6:	f3 0f 10 05 40 76 1d 	movss  xmm0,DWORD PTR ds:0x101d7640
100cf7bd:	10 
100cf7be:	c7 86 e8 04 00 00 01 	mov    DWORD PTR [esi+0x4e8],0x1
100cf7c5:	00 00 00 
100cf7c8:	c7 45 f4 00 00 c8 42 	mov    DWORD PTR [ebp-0xc],0x42c80000
100cf7cf:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
100cf7d2:	0f 14 c8             	unpcklps xmm1,xmm0
100cf7d5:	66 0f d6 8e f0 04 00 	movq   QWORD PTR [esi+0x4f0],xmm1
100cf7dc:	00 
100cf7dd:	89 86 f8 04 00 00    	mov    DWORD PTR [esi+0x4f8],eax
100cf7e3:	b8 05 00 00 00       	mov    eax,0x5
100cf7e8:	50                   	push   eax
100cf7e9:	8d 47 08             	lea    eax,[edi+0x8]
100cf7ec:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100cf7f1:	50                   	push   eax
100cf7f2:	e8 a9 d6 ff ff       	call   0x100ccea0
100cf7f7:	89 86 dc 00 00 00    	mov    DWORD PTR [esi+0xdc],eax
100cf7fd:	85 c0                	test   eax,eax
100cf7ff:	79 16                	jns    0x100cf817
100cf801:	68 08 76 1d 10       	push   0x101d7608
100cf806:	6a 01                	push   0x1
100cf808:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cf80e:	83 c4 08             	add    esp,0x8
100cf811:	5f                   	pop    edi
100cf812:	5e                   	pop    esi
100cf813:	8b e5                	mov    esp,ebp
100cf815:	5d                   	pop    ebp
100cf816:	c3                   	ret
100cf817:	50                   	push   eax
100cf818:	68 18 76 1d 10       	push   0x101d7618
100cf81d:	6a 02                	push   0x2
100cf81f:	c7 86 e4 00 00 00 00 	mov    DWORD PTR [esi+0xe4],0x0
100cf826:	00 00 00 
100cf829:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cf82f:	a1 c8 38 22 10       	mov    eax,ds:0x102238c8
100cf834:	83 c4 0c             	add    esp,0xc
100cf837:	3d 80 00 00 00       	cmp    eax,0x80
100cf83c:	7d 45                	jge    0x100cf883
100cf83e:	33 ff                	xor    edi,edi
100cf840:	85 c0                	test   eax,eax
100cf842:	7e 37                	jle    0x100cf87b
100cf844:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100cf848:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100cf84f:	00 
100cf850:	6a 00                	push   0x0
100cf852:	ff b6 e8 04 00 00    	push   DWORD PTR [esi+0x4e8]
100cf858:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100cf85d:	ff b6 dc 00 00 00    	push   DWORD PTR [esi+0xdc]
100cf863:	57                   	push   edi
100cf864:	e8 c7 ef ff ff       	call   0x100ce830
100cf869:	50                   	push   eax
100cf86a:	57                   	push   edi
100cf86b:	8b ce                	mov    ecx,esi
100cf86d:	e8 8e ae ff ff       	call   0x100ca700
100cf872:	47                   	inc    edi
100cf873:	3b 3d c8 38 22 10    	cmp    edi,DWORD PTR ds:0x102238c8
100cf879:	7c d5                	jl     0x100cf850
100cf87b:	8b 86 e4 00 00 00    	mov    eax,DWORD PTR [esi+0xe4]
100cf881:	eb 6c                	jmp    0x100cf8ef
100cf883:	ff b6 dc 00 00 00    	push   DWORD PTR [esi+0xdc]
100cf889:	8b ce                	mov    ecx,esi
100cf88b:	e8 c0 dc ff ff       	call   0x100cd550
100cf890:	8b be e4 00 00 00    	mov    edi,DWORD PTR [esi+0xe4]
100cf896:	33 c9                	xor    ecx,ecx
100cf898:	53                   	push   ebx
100cf899:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100cf8a0:	89 7d f8             	mov    DWORD PTR [ebp-0x8],edi
100cf8a3:	8b c7                	mov    eax,edi
100cf8a5:	3b cf                	cmp    ecx,edi
100cf8a7:	7d 3e                	jge    0x100cf8e7
100cf8a9:	8d 9e e8 02 00 00    	lea    ebx,[esi+0x2e8]
100cf8af:	2b f9                	sub    edi,ecx
100cf8b1:	8d 1c 8b             	lea    ebx,[ebx+ecx*4]
100cf8b4:	03 cf                	add    ecx,edi
100cf8b6:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
100cf8b9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100cf8c0:	ff b3 00 fe ff ff    	push   DWORD PTR [ebx-0x200]
100cf8c6:	8b ce                	mov    ecx,esi
100cf8c8:	e8 83 dc ff ff       	call   0x100cd550
100cf8cd:	ff 33                	push   DWORD PTR [ebx]
100cf8cf:	8b ce                	mov    ecx,esi
100cf8d1:	e8 7a dc ff ff       	call   0x100cd550
100cf8d6:	8d 5b 04             	lea    ebx,[ebx+0x4]
100cf8d9:	83 ef 01             	sub    edi,0x1
100cf8dc:	75 e2                	jne    0x100cf8c0
100cf8de:	8b 86 e4 00 00 00    	mov    eax,DWORD PTR [esi+0xe4]
100cf8e4:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100cf8e7:	8b f8                	mov    edi,eax
100cf8e9:	39 45 f8             	cmp    DWORD PTR [ebp-0x8],eax
100cf8ec:	75 b2                	jne    0x100cf8a0
100cf8ee:	5b                   	pop    ebx
100cf8ef:	50                   	push   eax
100cf8f0:	68 28 76 1d 10       	push   0x101d7628
100cf8f5:	6a 02                	push   0x2
100cf8f7:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cf8fd:	8b 06                	mov    eax,DWORD PTR [esi]
100cf8ff:	83 c4 08             	add    esp,0x8
100cf902:	8b ce                	mov    ecx,esi
100cf904:	c7 86 e0 00 00 00 00 	mov    DWORD PTR [esi+0xe0],0x0
100cf90b:	00 00 00 
100cf90e:	c7 46 78 f0 c5 0c 10 	mov    DWORD PTR [esi+0x78],0x100cc5f0
100cf915:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100cf91c:	ff 50 08             	call   DWORD PTR [eax+0x8]
100cf91f:	5f                   	pop    edi
100cf920:	5e                   	pop    esi
100cf921:	8b e5                	mov    esp,ebp
100cf923:	5d                   	pop    ebp
100cf924:	c3                   	ret
100cf925:	68 90 67 1d 10       	push   0x101d6790
100cf92a:	6a 01                	push   0x1
100cf92c:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cf932:	56                   	push   esi
100cf933:	e8 c8 9f 04 00       	call   0x10119900
100cf938:	83 c4 0c             	add    esp,0xc
100cf93b:	5e                   	pop    esi
100cf93c:	8b e5                	mov    esp,ebp
100cf93e:	5d                   	pop    ebp
100cf93f:	c3                   	ret
