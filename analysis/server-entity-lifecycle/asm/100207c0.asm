
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100207c0 <.text+0x1f7c0>:
100207c0:	55                   	push   ebp
100207c1:	8b ec                	mov    ebp,esp
100207c3:	53                   	push   ebx
100207c4:	56                   	push   esi
100207c5:	57                   	push   edi
100207c6:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100207c9:	8b f1                	mov    esi,ecx
100207cb:	b9 48 a0 1a 10       	mov    ecx,0x101aa048
100207d0:	8b 5f 04             	mov    ebx,DWORD PTR [edi+0x4]
100207d3:	8b c3                	mov    eax,ebx
100207d5:	8a 10                	mov    dl,BYTE PTR [eax]
100207d7:	3a 11                	cmp    dl,BYTE PTR [ecx]
100207d9:	75 1a                	jne    0x100207f5
100207db:	84 d2                	test   dl,dl
100207dd:	74 12                	je     0x100207f1
100207df:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100207e2:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100207e5:	75 0e                	jne    0x100207f5
100207e7:	83 c0 02             	add    eax,0x2
100207ea:	83 c1 02             	add    ecx,0x2
100207ed:	84 d2                	test   dl,dl
100207ef:	75 e4                	jne    0x100207d5
100207f1:	33 c0                	xor    eax,eax
100207f3:	eb 05                	jmp    0x100207fa
100207f5:	1b c0                	sbb    eax,eax
100207f7:	83 c8 01             	or     eax,0x1
100207fa:	85 c0                	test   eax,eax
100207fc:	75 26                	jne    0x10020824
100207fe:	ff 77 08             	push   DWORD PTR [edi+0x8]
10020801:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10020807:	83 c4 04             	add    esp,0x4
1002080a:	89 86 6c 03 00 00    	mov    DWORD PTR [esi+0x36c],eax
10020810:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10020817:	ff 86 ec 03 00 00    	inc    DWORD PTR [esi+0x3ec]
1002081d:	5f                   	pop    edi
1002081e:	5e                   	pop    esi
1002081f:	5b                   	pop    ebx
10020820:	5d                   	pop    ebp
10020821:	c2 04 00             	ret    0x4
10020824:	b9 54 a0 1a 10       	mov    ecx,0x101aa054
10020829:	8b c3                	mov    eax,ebx
1002082b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
10020830:	8a 10                	mov    dl,BYTE PTR [eax]
10020832:	3a 11                	cmp    dl,BYTE PTR [ecx]
10020834:	75 1a                	jne    0x10020850
10020836:	84 d2                	test   dl,dl
10020838:	74 12                	je     0x1002084c
1002083a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1002083d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10020840:	75 0e                	jne    0x10020850
10020842:	83 c0 02             	add    eax,0x2
10020845:	83 c1 02             	add    ecx,0x2
10020848:	84 d2                	test   dl,dl
1002084a:	75 e4                	jne    0x10020830
1002084c:	33 c0                	xor    eax,eax
1002084e:	eb 05                	jmp    0x10020855
10020850:	1b c0                	sbb    eax,eax
10020852:	83 c8 01             	or     eax,0x1
10020855:	85 c0                	test   eax,eax
10020857:	75 26                	jne    0x1002087f
10020859:	ff 77 08             	push   DWORD PTR [edi+0x8]
1002085c:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10020862:	83 c4 04             	add    esp,0x4
10020865:	89 86 70 03 00 00    	mov    DWORD PTR [esi+0x370],eax
1002086b:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10020872:	ff 86 ec 03 00 00    	inc    DWORD PTR [esi+0x3ec]
10020878:	5f                   	pop    edi
10020879:	5e                   	pop    esi
1002087a:	5b                   	pop    ebx
1002087b:	5d                   	pop    ebp
1002087c:	c2 04 00             	ret    0x4
1002087f:	b9 60 a0 1a 10       	mov    ecx,0x101aa060
10020884:	8b c3                	mov    eax,ebx
10020886:	8a 10                	mov    dl,BYTE PTR [eax]
10020888:	3a 11                	cmp    dl,BYTE PTR [ecx]
1002088a:	75 1a                	jne    0x100208a6
1002088c:	84 d2                	test   dl,dl
1002088e:	74 12                	je     0x100208a2
10020890:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10020893:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10020896:	75 0e                	jne    0x100208a6
10020898:	83 c0 02             	add    eax,0x2
1002089b:	83 c1 02             	add    ecx,0x2
1002089e:	84 d2                	test   dl,dl
100208a0:	75 e4                	jne    0x10020886
100208a2:	33 c0                	xor    eax,eax
100208a4:	eb 05                	jmp    0x100208ab
100208a6:	1b c0                	sbb    eax,eax
100208a8:	83 c8 01             	or     eax,0x1
100208ab:	85 c0                	test   eax,eax
100208ad:	75 26                	jne    0x100208d5
100208af:	ff 77 08             	push   DWORD PTR [edi+0x8]
100208b2:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100208b8:	83 c4 04             	add    esp,0x4
100208bb:	89 86 74 03 00 00    	mov    DWORD PTR [esi+0x374],eax
100208c1:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100208c8:	ff 86 ec 03 00 00    	inc    DWORD PTR [esi+0x3ec]
100208ce:	5f                   	pop    edi
100208cf:	5e                   	pop    esi
100208d0:	5b                   	pop    ebx
100208d1:	5d                   	pop    ebp
100208d2:	c2 04 00             	ret    0x4
100208d5:	68 6c a0 1a 10       	push   0x101aa06c
100208da:	53                   	push   ebx
100208db:	e8 c0 a2 fe ff       	call   0x1000aba0
100208e0:	83 c4 08             	add    esp,0x8
100208e3:	85 c0                	test   eax,eax
100208e5:	74 26                	je     0x1002090d
100208e7:	ff 77 08             	push   DWORD PTR [edi+0x8]
100208ea:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100208f0:	83 c4 04             	add    esp,0x4
100208f3:	89 86 78 03 00 00    	mov    DWORD PTR [esi+0x378],eax
100208f9:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10020900:	ff 86 ec 03 00 00    	inc    DWORD PTR [esi+0x3ec]
10020906:	5f                   	pop    edi
10020907:	5e                   	pop    esi
10020908:	5b                   	pop    ebx
10020909:	5d                   	pop    ebp
1002090a:	c2 04 00             	ret    0x4
1002090d:	68 78 a0 1a 10       	push   0x101aa078
10020912:	53                   	push   ebx
10020913:	e8 88 a2 fe ff       	call   0x1000aba0
10020918:	83 c4 08             	add    esp,0x8
1002091b:	85 c0                	test   eax,eax
1002091d:	74 26                	je     0x10020945
1002091f:	ff 77 08             	push   DWORD PTR [edi+0x8]
10020922:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10020928:	83 c4 04             	add    esp,0x4
1002092b:	89 86 7c 03 00 00    	mov    DWORD PTR [esi+0x37c],eax
10020931:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10020938:	ff 86 ec 03 00 00    	inc    DWORD PTR [esi+0x3ec]
1002093e:	5f                   	pop    edi
1002093f:	5e                   	pop    esi
10020940:	5b                   	pop    ebx
10020941:	5d                   	pop    ebp
10020942:	c2 04 00             	ret    0x4
10020945:	68 84 a0 1a 10       	push   0x101aa084
1002094a:	53                   	push   ebx
1002094b:	e8 50 a2 fe ff       	call   0x1000aba0
10020950:	83 c4 08             	add    esp,0x8
10020953:	85 c0                	test   eax,eax
10020955:	74 26                	je     0x1002097d
10020957:	ff 77 08             	push   DWORD PTR [edi+0x8]
1002095a:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10020960:	83 c4 04             	add    esp,0x4
10020963:	89 86 80 03 00 00    	mov    DWORD PTR [esi+0x380],eax
10020969:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10020970:	ff 86 ec 03 00 00    	inc    DWORD PTR [esi+0x3ec]
10020976:	5f                   	pop    edi
10020977:	5e                   	pop    esi
10020978:	5b                   	pop    ebx
10020979:	5d                   	pop    ebp
1002097a:	c2 04 00             	ret    0x4
1002097d:	68 90 a0 1a 10       	push   0x101aa090
10020982:	53                   	push   ebx
10020983:	e8 18 a2 fe ff       	call   0x1000aba0
10020988:	83 c4 08             	add    esp,0x8
1002098b:	85 c0                	test   eax,eax
1002098d:	74 26                	je     0x100209b5
1002098f:	ff 77 08             	push   DWORD PTR [edi+0x8]
10020992:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10020998:	83 c4 04             	add    esp,0x4
1002099b:	89 86 84 03 00 00    	mov    DWORD PTR [esi+0x384],eax
100209a1:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100209a8:	ff 86 ec 03 00 00    	inc    DWORD PTR [esi+0x3ec]
100209ae:	5f                   	pop    edi
100209af:	5e                   	pop    esi
100209b0:	5b                   	pop    ebx
100209b1:	5d                   	pop    ebp
100209b2:	c2 04 00             	ret    0x4
100209b5:	68 9c a0 1a 10       	push   0x101aa09c
100209ba:	53                   	push   ebx
100209bb:	e8 e0 a1 fe ff       	call   0x1000aba0
100209c0:	83 c4 08             	add    esp,0x8
100209c3:	85 c0                	test   eax,eax
100209c5:	74 26                	je     0x100209ed
100209c7:	ff 77 08             	push   DWORD PTR [edi+0x8]
100209ca:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100209d0:	83 c4 04             	add    esp,0x4
100209d3:	89 86 88 03 00 00    	mov    DWORD PTR [esi+0x388],eax
100209d9:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100209e0:	ff 86 ec 03 00 00    	inc    DWORD PTR [esi+0x3ec]
100209e6:	5f                   	pop    edi
100209e7:	5e                   	pop    esi
100209e8:	5b                   	pop    ebx
100209e9:	5d                   	pop    ebp
100209ea:	c2 04 00             	ret    0x4
100209ed:	68 a8 a0 1a 10       	push   0x101aa0a8
100209f2:	53                   	push   ebx
100209f3:	e8 a8 a1 fe ff       	call   0x1000aba0
100209f8:	83 c4 08             	add    esp,0x8
100209fb:	85 c0                	test   eax,eax
100209fd:	74 26                	je     0x10020a25
100209ff:	ff 77 08             	push   DWORD PTR [edi+0x8]
10020a02:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10020a08:	83 c4 04             	add    esp,0x4
10020a0b:	89 86 8c 03 00 00    	mov    DWORD PTR [esi+0x38c],eax
10020a11:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10020a18:	ff 86 ec 03 00 00    	inc    DWORD PTR [esi+0x3ec]
10020a1e:	5f                   	pop    edi
10020a1f:	5e                   	pop    esi
10020a20:	5b                   	pop    ebx
10020a21:	5d                   	pop    ebp
10020a22:	c2 04 00             	ret    0x4
10020a25:	68 b4 a0 1a 10       	push   0x101aa0b4
10020a2a:	53                   	push   ebx
10020a2b:	e8 70 a1 fe ff       	call   0x1000aba0
10020a30:	83 c4 08             	add    esp,0x8
10020a33:	85 c0                	test   eax,eax
10020a35:	74 26                	je     0x10020a5d
10020a37:	ff 77 08             	push   DWORD PTR [edi+0x8]
10020a3a:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10020a40:	83 c4 04             	add    esp,0x4
10020a43:	89 86 90 03 00 00    	mov    DWORD PTR [esi+0x390],eax
10020a49:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10020a50:	ff 86 ec 03 00 00    	inc    DWORD PTR [esi+0x3ec]
10020a56:	5f                   	pop    edi
10020a57:	5e                   	pop    esi
10020a58:	5b                   	pop    ebx
10020a59:	5d                   	pop    ebp
10020a5a:	c2 04 00             	ret    0x4
10020a5d:	68 c0 a0 1a 10       	push   0x101aa0c0
10020a62:	53                   	push   ebx
10020a63:	e8 38 a1 fe ff       	call   0x1000aba0
10020a68:	83 c4 08             	add    esp,0x8
10020a6b:	85 c0                	test   eax,eax
10020a6d:	74 26                	je     0x10020a95
10020a6f:	ff 77 08             	push   DWORD PTR [edi+0x8]
10020a72:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10020a78:	83 c4 04             	add    esp,0x4
10020a7b:	89 86 94 03 00 00    	mov    DWORD PTR [esi+0x394],eax
10020a81:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10020a88:	ff 86 ec 03 00 00    	inc    DWORD PTR [esi+0x3ec]
10020a8e:	5f                   	pop    edi
10020a8f:	5e                   	pop    esi
10020a90:	5b                   	pop    ebx
10020a91:	5d                   	pop    ebp
10020a92:	c2 04 00             	ret    0x4
10020a95:	68 cc a0 1a 10       	push   0x101aa0cc
10020a9a:	53                   	push   ebx
10020a9b:	e8 00 a1 fe ff       	call   0x1000aba0
10020aa0:	83 c4 08             	add    esp,0x8
10020aa3:	85 c0                	test   eax,eax
10020aa5:	74 26                	je     0x10020acd
10020aa7:	ff 77 08             	push   DWORD PTR [edi+0x8]
10020aaa:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10020ab0:	83 c4 04             	add    esp,0x4
10020ab3:	89 86 98 03 00 00    	mov    DWORD PTR [esi+0x398],eax
10020ab9:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10020ac0:	ff 86 ec 03 00 00    	inc    DWORD PTR [esi+0x3ec]
10020ac6:	5f                   	pop    edi
10020ac7:	5e                   	pop    esi
10020ac8:	5b                   	pop    ebx
10020ac9:	5d                   	pop    ebp
10020aca:	c2 04 00             	ret    0x4
10020acd:	68 d8 a0 1a 10       	push   0x101aa0d8
10020ad2:	53                   	push   ebx
10020ad3:	e8 c8 a0 fe ff       	call   0x1000aba0
10020ad8:	83 c4 08             	add    esp,0x8
10020adb:	85 c0                	test   eax,eax
10020add:	74 20                	je     0x10020aff
10020adf:	ff 77 08             	push   DWORD PTR [edi+0x8]
10020ae2:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10020ae8:	83 c4 04             	add    esp,0x4
10020aeb:	89 86 9c 03 00 00    	mov    DWORD PTR [esi+0x39c],eax
10020af1:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10020af8:	5f                   	pop    edi
10020af9:	5e                   	pop    esi
10020afa:	5b                   	pop    ebx
10020afb:	5d                   	pop    ebp
10020afc:	c2 04 00             	ret    0x4
10020aff:	68 e4 a0 1a 10       	push   0x101aa0e4
10020b04:	53                   	push   ebx
10020b05:	e8 96 a0 fe ff       	call   0x1000aba0
10020b0a:	83 c4 08             	add    esp,0x8
10020b0d:	85 c0                	test   eax,eax
10020b0f:	74 26                	je     0x10020b37
10020b11:	ff 77 08             	push   DWORD PTR [edi+0x8]
10020b14:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10020b1a:	83 c4 04             	add    esp,0x4
10020b1d:	89 86 a0 03 00 00    	mov    DWORD PTR [esi+0x3a0],eax
10020b23:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10020b2a:	ff 86 ec 03 00 00    	inc    DWORD PTR [esi+0x3ec]
10020b30:	5f                   	pop    edi
10020b31:	5e                   	pop    esi
10020b32:	5b                   	pop    ebx
10020b33:	5d                   	pop    ebp
10020b34:	c2 04 00             	ret    0x4
10020b37:	68 f0 a0 1a 10       	push   0x101aa0f0
10020b3c:	53                   	push   ebx
10020b3d:	e8 5e a0 fe ff       	call   0x1000aba0
10020b42:	83 c4 08             	add    esp,0x8
10020b45:	85 c0                	test   eax,eax
10020b47:	74 26                	je     0x10020b6f
10020b49:	ff 77 08             	push   DWORD PTR [edi+0x8]
10020b4c:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10020b52:	83 c4 04             	add    esp,0x4
10020b55:	89 86 a4 03 00 00    	mov    DWORD PTR [esi+0x3a4],eax
10020b5b:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10020b62:	ff 86 ec 03 00 00    	inc    DWORD PTR [esi+0x3ec]
10020b68:	5f                   	pop    edi
10020b69:	5e                   	pop    esi
10020b6a:	5b                   	pop    ebx
10020b6b:	5d                   	pop    ebp
10020b6c:	c2 04 00             	ret    0x4
10020b6f:	68 fc a0 1a 10       	push   0x101aa0fc
10020b74:	53                   	push   ebx
10020b75:	e8 26 a0 fe ff       	call   0x1000aba0
10020b7a:	83 c4 08             	add    esp,0x8
10020b7d:	85 c0                	test   eax,eax
10020b7f:	74 26                	je     0x10020ba7
10020b81:	ff 77 08             	push   DWORD PTR [edi+0x8]
10020b84:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10020b8a:	83 c4 04             	add    esp,0x4
10020b8d:	89 86 a8 03 00 00    	mov    DWORD PTR [esi+0x3a8],eax
10020b93:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10020b9a:	ff 86 ec 03 00 00    	inc    DWORD PTR [esi+0x3ec]
10020ba0:	5f                   	pop    edi
10020ba1:	5e                   	pop    esi
10020ba2:	5b                   	pop    ebx
10020ba3:	5d                   	pop    ebp
10020ba4:	c2 04 00             	ret    0x4
10020ba7:	b9 7c 24 1a 10       	mov    ecx,0x101a247c
10020bac:	8b c3                	mov    eax,ebx
10020bae:	66 90                	xchg   ax,ax
10020bb0:	8a 10                	mov    dl,BYTE PTR [eax]
10020bb2:	3a 11                	cmp    dl,BYTE PTR [ecx]
10020bb4:	75 1a                	jne    0x10020bd0
10020bb6:	84 d2                	test   dl,dl
10020bb8:	74 12                	je     0x10020bcc
10020bba:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10020bbd:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10020bc0:	75 0e                	jne    0x10020bd0
10020bc2:	83 c0 02             	add    eax,0x2
10020bc5:	83 c1 02             	add    ecx,0x2
10020bc8:	84 d2                	test   dl,dl
10020bca:	75 e4                	jne    0x10020bb0
10020bcc:	33 c0                	xor    eax,eax
10020bce:	eb 05                	jmp    0x10020bd5
10020bd0:	1b c0                	sbb    eax,eax
10020bd2:	83 c8 01             	or     eax,0x1
10020bd5:	85 c0                	test   eax,eax
10020bd7:	75 1d                	jne    0x10020bf6
10020bd9:	ff 77 08             	push   DWORD PTR [edi+0x8]
10020bdc:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10020be2:	83 c4 04             	add    esp,0x4
10020be5:	89 46 18             	mov    DWORD PTR [esi+0x18],eax
10020be8:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10020bef:	5f                   	pop    edi
10020bf0:	5e                   	pop    esi
10020bf1:	5b                   	pop    ebx
10020bf2:	5d                   	pop    ebp
10020bf3:	c2 04 00             	ret    0x4
10020bf6:	b9 88 24 1a 10       	mov    ecx,0x101a2488
10020bfb:	8b c3                	mov    eax,ebx
10020bfd:	0f 1f 00             	nop    DWORD PTR [eax]
10020c00:	8a 10                	mov    dl,BYTE PTR [eax]
10020c02:	3a 11                	cmp    dl,BYTE PTR [ecx]
10020c04:	75 1a                	jne    0x10020c20
10020c06:	84 d2                	test   dl,dl
10020c08:	74 12                	je     0x10020c1c
10020c0a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10020c0d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10020c10:	75 0e                	jne    0x10020c20
10020c12:	83 c0 02             	add    eax,0x2
10020c15:	83 c1 02             	add    ecx,0x2
10020c18:	84 d2                	test   dl,dl
10020c1a:	75 e4                	jne    0x10020c00
10020c1c:	33 c0                	xor    eax,eax
10020c1e:	eb 05                	jmp    0x10020c25
10020c20:	1b c0                	sbb    eax,eax
10020c22:	83 c8 01             	or     eax,0x1
10020c25:	85 c0                	test   eax,eax
10020c27:	75 1c                	jne    0x10020c45
10020c29:	ff 77 08             	push   DWORD PTR [edi+0x8]
10020c2c:	e8 2d a9 14 00       	call   0x1016b55e
10020c31:	83 c4 04             	add    esp,0x4
10020c34:	89 46 60             	mov    DWORD PTR [esi+0x60],eax
10020c37:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10020c3e:	5f                   	pop    edi
10020c3f:	5e                   	pop    esi
10020c40:	5b                   	pop    ebx
10020c41:	5d                   	pop    ebp
10020c42:	c2 04 00             	ret    0x4
10020c45:	b8 90 24 1a 10       	mov    eax,0x101a2490
10020c4a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10020c50:	8a 0b                	mov    cl,BYTE PTR [ebx]
10020c52:	3a 08                	cmp    cl,BYTE PTR [eax]
10020c54:	75 1a                	jne    0x10020c70
10020c56:	84 c9                	test   cl,cl
10020c58:	74 12                	je     0x10020c6c
10020c5a:	8a 4b 01             	mov    cl,BYTE PTR [ebx+0x1]
10020c5d:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
10020c60:	75 0e                	jne    0x10020c70
10020c62:	83 c3 02             	add    ebx,0x2
10020c65:	83 c0 02             	add    eax,0x2
10020c68:	84 c9                	test   cl,cl
10020c6a:	75 e4                	jne    0x10020c50
10020c6c:	33 c0                	xor    eax,eax
10020c6e:	eb 05                	jmp    0x10020c75
10020c70:	1b c0                	sbb    eax,eax
10020c72:	83 c8 01             	or     eax,0x1
10020c75:	85 c0                	test   eax,eax
10020c77:	75 1c                	jne    0x10020c95
10020c79:	ff 77 08             	push   DWORD PTR [edi+0x8]
10020c7c:	e8 dd a8 14 00       	call   0x1016b55e
10020c81:	83 c4 04             	add    esp,0x4
10020c84:	89 46 64             	mov    DWORD PTR [esi+0x64],eax
10020c87:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10020c8e:	5f                   	pop    edi
10020c8f:	5e                   	pop    esi
10020c90:	5b                   	pop    ebx
10020c91:	5d                   	pop    ebp
10020c92:	c2 04 00             	ret    0x4
10020c95:	c7 47 0c 00 00 00 00 	mov    DWORD PTR [edi+0xc],0x0
10020c9c:	5f                   	pop    edi
10020c9d:	5e                   	pop    esi
10020c9e:	5b                   	pop    ebx
10020c9f:	5d                   	pop    ebp
10020ca0:	c2 04 00             	ret    0x4
