
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101208e0 <.text+0x11f8e0>:
101208e0:	55                   	push   ebp
101208e1:	8b ec                	mov    ebp,esp
101208e3:	53                   	push   ebx
101208e4:	56                   	push   esi
101208e5:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
101208e8:	8b d9                	mov    ebx,ecx
101208ea:	57                   	push   edi
101208eb:	c6 05 24 2f 22 10 00 	mov    BYTE PTR ds:0x10222f24,0x0
101208f2:	b9 9c 70 1e 10       	mov    ecx,0x101e709c
101208f7:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
101208fa:	8b c7                	mov    eax,edi
101208fc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10120900:	8a 10                	mov    dl,BYTE PTR [eax]
10120902:	3a 11                	cmp    dl,BYTE PTR [ecx]
10120904:	75 1a                	jne    0x10120920
10120906:	84 d2                	test   dl,dl
10120908:	74 12                	je     0x1012091c
1012090a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1012090d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10120910:	75 0e                	jne    0x10120920
10120912:	83 c0 02             	add    eax,0x2
10120915:	83 c1 02             	add    ecx,0x2
10120918:	84 d2                	test   dl,dl
1012091a:	75 e4                	jne    0x10120900
1012091c:	33 c0                	xor    eax,eax
1012091e:	eb 05                	jmp    0x10120925
10120920:	1b c0                	sbb    eax,eax
10120922:	83 c8 01             	or     eax,0x1
10120925:	85 c0                	test   eax,eax
10120927:	75 0a                	jne    0x10120933
10120929:	ff 76 08             	push   DWORD PTR [esi+0x8]
1012092c:	68 a4 70 1e 10       	push   0x101e70a4
10120931:	eb 3e                	jmp    0x10120971
10120933:	b9 b0 70 1e 10       	mov    ecx,0x101e70b0
10120938:	8b c7                	mov    eax,edi
1012093a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10120940:	8a 10                	mov    dl,BYTE PTR [eax]
10120942:	3a 11                	cmp    dl,BYTE PTR [ecx]
10120944:	75 1a                	jne    0x10120960
10120946:	84 d2                	test   dl,dl
10120948:	74 12                	je     0x1012095c
1012094a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1012094d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10120950:	75 0e                	jne    0x10120960
10120952:	83 c0 02             	add    eax,0x2
10120955:	83 c1 02             	add    ecx,0x2
10120958:	84 d2                	test   dl,dl
1012095a:	75 e4                	jne    0x10120940
1012095c:	33 c0                	xor    eax,eax
1012095e:	eb 05                	jmp    0x10120965
10120960:	1b c0                	sbb    eax,eax
10120962:	83 c8 01             	or     eax,0x1
10120965:	85 c0                	test   eax,eax
10120967:	75 1f                	jne    0x10120988
10120969:	ff 76 08             	push   DWORD PTR [esi+0x8]
1012096c:	68 b4 b6 1c 10       	push   0x101cb6b4
10120971:	ff 15 38 30 22 10    	call   DWORD PTR ds:0x10223038
10120977:	83 c4 08             	add    esp,0x8
1012097a:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120981:	5f                   	pop    edi
10120982:	5e                   	pop    esi
10120983:	5b                   	pop    ebx
10120984:	5d                   	pop    ebp
10120985:	c2 04 00             	ret    0x4
10120988:	b9 08 40 1a 10       	mov    ecx,0x101a4008
1012098d:	8b c7                	mov    eax,edi
1012098f:	90                   	nop
10120990:	8a 10                	mov    dl,BYTE PTR [eax]
10120992:	3a 11                	cmp    dl,BYTE PTR [ecx]
10120994:	75 1a                	jne    0x101209b0
10120996:	84 d2                	test   dl,dl
10120998:	74 12                	je     0x101209ac
1012099a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1012099d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
101209a0:	75 0e                	jne    0x101209b0
101209a2:	83 c0 02             	add    eax,0x2
101209a5:	83 c1 02             	add    ecx,0x2
101209a8:	84 d2                	test   dl,dl
101209aa:	75 e4                	jne    0x10120990
101209ac:	33 c0                	xor    eax,eax
101209ae:	eb 05                	jmp    0x101209b5
101209b0:	1b c0                	sbb    eax,eax
101209b2:	83 c8 01             	or     eax,0x1
101209b5:	85 c0                	test   eax,eax
101209b7:	75 25                	jne    0x101209de
101209b9:	ff 76 08             	push   DWORD PTR [esi+0x8]
101209bc:	e8 9d ab 04 00       	call   0x1016b55e
101209c1:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
101209c7:	83 c4 04             	add    esp,0x4
101209ca:	5f                   	pop    edi
101209cb:	89 81 8c 00 00 00    	mov    DWORD PTR [ecx+0x8c],eax
101209d1:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
101209d8:	5e                   	pop    esi
101209d9:	5b                   	pop    ebx
101209da:	5d                   	pop    ebp
101209db:	c2 04 00             	ret    0x4
101209de:	68 c0 70 1e 10       	push   0x101e70c0
101209e3:	57                   	push   edi
101209e4:	e8 b7 a1 ee ff       	call   0x1000aba0
101209e9:	83 c4 08             	add    esp,0x8
101209ec:	85 c0                	test   eax,eax
101209ee:	74 28                	je     0x10120a18
101209f0:	ff 76 08             	push   DWORD PTR [esi+0x8]
101209f3:	e8 66 ab 04 00       	call   0x1016b55e
101209f8:	83 c4 04             	add    esp,0x4
101209fb:	85 c0                	test   eax,eax
101209fd:	0f 84 16 04 00 00    	je     0x10120e19
10120a03:	5f                   	pop    edi
10120a04:	c6 05 24 2f 22 10 01 	mov    BYTE PTR ds:0x10222f24,0x1
10120a0b:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120a12:	5e                   	pop    esi
10120a13:	5b                   	pop    ebx
10120a14:	5d                   	pop    ebp
10120a15:	c2 04 00             	ret    0x4
10120a18:	68 00 f4 1b 10       	push   0x101bf400
10120a1d:	57                   	push   edi
10120a1e:	e8 7d a1 ee ff       	call   0x1000aba0
10120a23:	83 c4 08             	add    esp,0x8
10120a26:	85 c0                	test   eax,eax
10120a28:	74 4d                	je     0x10120a77
10120a2a:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120a2d:	e8 ba eb 04 00       	call   0x1016f5ec
10120a32:	dc 0d 08 1e 1a 10    	fmul   QWORD PTR ds:0x101a1e08
10120a38:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10120a3b:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
10120a3e:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
10120a43:	f3 0f 11 80 48 01 00 	movss  DWORD PTR [eax+0x148],xmm0
10120a4a:	00 
10120a4b:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120a52:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10120a55:	f3 0f 10 80 48 01 00 	movss  xmm0,DWORD PTR [eax+0x148]
10120a5c:	00 
10120a5d:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10120a62:	68 c8 70 1e 10       	push   0x101e70c8
10120a67:	ff 15 34 30 22 10    	call   DWORD PTR ds:0x10223034
10120a6d:	83 c4 08             	add    esp,0x8
10120a70:	5f                   	pop    edi
10120a71:	5e                   	pop    esi
10120a72:	5b                   	pop    ebx
10120a73:	5d                   	pop    ebp
10120a74:	c2 04 00             	ret    0x4
10120a77:	68 d4 70 1e 10       	push   0x101e70d4
10120a7c:	57                   	push   edi
10120a7d:	e8 1e a1 ee ff       	call   0x1000aba0
10120a82:	83 c4 08             	add    esp,0x8
10120a85:	85 c0                	test   eax,eax
10120a87:	74 2c                	je     0x10120ab5
10120a89:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120a8c:	e8 5b eb 04 00       	call   0x1016f5ec
10120a91:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10120a94:	83 c4 04             	add    esp,0x4
10120a97:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
10120a9a:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
10120a9f:	5f                   	pop    edi
10120aa0:	f3 0f 11 80 fc 01 00 	movss  DWORD PTR [eax+0x1fc],xmm0
10120aa7:	00 
10120aa8:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120aaf:	5e                   	pop    esi
10120ab0:	5b                   	pop    ebx
10120ab1:	5d                   	pop    ebp
10120ab2:	c2 04 00             	ret    0x4
10120ab5:	68 e0 70 1e 10       	push   0x101e70e0
10120aba:	57                   	push   edi
10120abb:	e8 e0 a0 ee ff       	call   0x1000aba0
10120ac0:	83 c4 08             	add    esp,0x8
10120ac3:	85 c0                	test   eax,eax
10120ac5:	74 23                	je     0x10120aea
10120ac7:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120aca:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10120ad0:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
10120ad3:	83 c4 04             	add    esp,0x4
10120ad6:	5f                   	pop    edi
10120ad7:	89 81 d4 01 00 00    	mov    DWORD PTR [ecx+0x1d4],eax
10120add:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120ae4:	5e                   	pop    esi
10120ae5:	5b                   	pop    ebx
10120ae6:	5d                   	pop    ebp
10120ae7:	c2 04 00             	ret    0x4
10120aea:	68 84 a6 1c 10       	push   0x101ca684
10120aef:	57                   	push   edi
10120af0:	e8 ab a0 ee ff       	call   0x1000aba0
10120af5:	83 c4 08             	add    esp,0x8
10120af8:	85 c0                	test   eax,eax
10120afa:	74 20                	je     0x10120b1c
10120afc:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120aff:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10120b05:	83 c4 04             	add    esp,0x4
10120b08:	89 83 e0 00 00 00    	mov    DWORD PTR [ebx+0xe0],eax
10120b0e:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120b15:	5f                   	pop    edi
10120b16:	5e                   	pop    esi
10120b17:	5b                   	pop    ebx
10120b18:	5d                   	pop    ebp
10120b19:	c2 04 00             	ret    0x4
10120b1c:	68 8c a6 1c 10       	push   0x101ca68c
10120b21:	57                   	push   edi
10120b22:	e8 79 a0 ee ff       	call   0x1000aba0
10120b27:	83 c4 08             	add    esp,0x8
10120b2a:	85 c0                	test   eax,eax
10120b2c:	74 20                	je     0x10120b4e
10120b2e:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120b31:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10120b37:	83 c4 04             	add    esp,0x4
10120b3a:	89 83 e4 00 00 00    	mov    DWORD PTR [ebx+0xe4],eax
10120b40:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120b47:	5f                   	pop    edi
10120b48:	5e                   	pop    esi
10120b49:	5b                   	pop    ebx
10120b4a:	5d                   	pop    ebp
10120b4b:	c2 04 00             	ret    0x4
10120b4e:	68 94 a6 1c 10       	push   0x101ca694
10120b53:	57                   	push   edi
10120b54:	e8 47 a0 ee ff       	call   0x1000aba0
10120b59:	83 c4 08             	add    esp,0x8
10120b5c:	85 c0                	test   eax,eax
10120b5e:	74 20                	je     0x10120b80
10120b60:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120b63:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10120b69:	83 c4 04             	add    esp,0x4
10120b6c:	89 83 e8 00 00 00    	mov    DWORD PTR [ebx+0xe8],eax
10120b72:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120b79:	5f                   	pop    edi
10120b7a:	5e                   	pop    esi
10120b7b:	5b                   	pop    ebx
10120b7c:	5d                   	pop    ebp
10120b7d:	c2 04 00             	ret    0x4
10120b80:	68 9c a6 1c 10       	push   0x101ca69c
10120b85:	57                   	push   edi
10120b86:	e8 15 a0 ee ff       	call   0x1000aba0
10120b8b:	83 c4 08             	add    esp,0x8
10120b8e:	85 c0                	test   eax,eax
10120b90:	74 20                	je     0x10120bb2
10120b92:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120b95:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10120b9b:	83 c4 04             	add    esp,0x4
10120b9e:	89 83 ec 00 00 00    	mov    DWORD PTR [ebx+0xec],eax
10120ba4:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120bab:	5f                   	pop    edi
10120bac:	5e                   	pop    esi
10120bad:	5b                   	pop    ebx
10120bae:	5d                   	pop    ebp
10120baf:	c2 04 00             	ret    0x4
10120bb2:	68 f0 70 1e 10       	push   0x101e70f0
10120bb7:	57                   	push   edi
10120bb8:	e8 e3 9f ee ff       	call   0x1000aba0
10120bbd:	83 c4 08             	add    esp,0x8
10120bc0:	85 c0                	test   eax,eax
10120bc2:	74 20                	je     0x10120be4
10120bc4:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120bc7:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10120bcd:	83 c4 04             	add    esp,0x4
10120bd0:	89 83 f0 00 00 00    	mov    DWORD PTR [ebx+0xf0],eax
10120bd6:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120bdd:	5f                   	pop    edi
10120bde:	5e                   	pop    esi
10120bdf:	5b                   	pop    ebx
10120be0:	5d                   	pop    ebp
10120be1:	c2 04 00             	ret    0x4
10120be4:	68 00 71 1e 10       	push   0x101e7100
10120be9:	57                   	push   edi
10120bea:	e8 b1 9f ee ff       	call   0x1000aba0
10120bef:	83 c4 08             	add    esp,0x8
10120bf2:	85 c0                	test   eax,eax
10120bf4:	74 20                	je     0x10120c16
10120bf6:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120bf9:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10120bff:	83 c4 04             	add    esp,0x4
10120c02:	89 83 f4 00 00 00    	mov    DWORD PTR [ebx+0xf4],eax
10120c08:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120c0f:	5f                   	pop    edi
10120c10:	5e                   	pop    esi
10120c11:	5b                   	pop    ebx
10120c12:	5d                   	pop    ebp
10120c13:	c2 04 00             	ret    0x4
10120c16:	68 10 71 1e 10       	push   0x101e7110
10120c1b:	57                   	push   edi
10120c1c:	e8 7f 9f ee ff       	call   0x1000aba0
10120c21:	83 c4 08             	add    esp,0x8
10120c24:	85 c0                	test   eax,eax
10120c26:	74 20                	je     0x10120c48
10120c28:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120c2b:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10120c31:	83 c4 04             	add    esp,0x4
10120c34:	89 83 f8 00 00 00    	mov    DWORD PTR [ebx+0xf8],eax
10120c3a:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120c41:	5f                   	pop    edi
10120c42:	5e                   	pop    esi
10120c43:	5b                   	pop    ebx
10120c44:	5d                   	pop    ebp
10120c45:	c2 04 00             	ret    0x4
10120c48:	68 20 71 1e 10       	push   0x101e7120
10120c4d:	57                   	push   edi
10120c4e:	e8 4d 9f ee ff       	call   0x1000aba0
10120c53:	83 c4 08             	add    esp,0x8
10120c56:	85 c0                	test   eax,eax
10120c58:	74 20                	je     0x10120c7a
10120c5a:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120c5d:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10120c63:	83 c4 04             	add    esp,0x4
10120c66:	89 83 dc 00 00 00    	mov    DWORD PTR [ebx+0xdc],eax
10120c6c:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120c73:	5f                   	pop    edi
10120c74:	5e                   	pop    esi
10120c75:	5b                   	pop    ebx
10120c76:	5d                   	pop    ebp
10120c77:	c2 04 00             	ret    0x4
10120c7a:	68 2c 71 1e 10       	push   0x101e712c
10120c7f:	57                   	push   edi
10120c80:	e8 1b 9f ee ff       	call   0x1000aba0
10120c85:	83 c4 08             	add    esp,0x8
10120c88:	85 c0                	test   eax,eax
10120c8a:	74 2b                	je     0x10120cb7
10120c8c:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120c8f:	e8 ca a8 04 00       	call   0x1016b55e
10120c94:	83 c4 04             	add    esp,0x4
10120c97:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120c9e:	85 c0                	test   eax,eax
10120ca0:	0f 84 f1 01 00 00    	je     0x10120e97
10120ca6:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10120ca9:	5f                   	pop    edi
10120caa:	5e                   	pop    esi
10120cab:	5b                   	pop    ebx
10120cac:	83 88 a4 01 00 00 01 	or     DWORD PTR [eax+0x1a4],0x1
10120cb3:	5d                   	pop    ebp
10120cb4:	c2 04 00             	ret    0x4
10120cb7:	68 38 71 1e 10       	push   0x101e7138
10120cbc:	57                   	push   edi
10120cbd:	e8 de 9e ee ff       	call   0x1000aba0
10120cc2:	83 c4 08             	add    esp,0x8
10120cc5:	85 c0                	test   eax,eax
10120cc7:	74 37                	je     0x10120d00
10120cc9:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120ccc:	e8 8d a8 04 00       	call   0x1016b55e
10120cd1:	83 c4 04             	add    esp,0x4
10120cd4:	85 c0                	test   eax,eax
10120cd6:	0f 84 3d 01 00 00    	je     0x10120e19
10120cdc:	51                   	push   ecx
10120cdd:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10120ce4:	68 40 71 1e 10       	push   0x101e7140
10120ce9:	ff 15 34 30 22 10    	call   DWORD PTR ds:0x10223034
10120cef:	83 c4 08             	add    esp,0x8
10120cf2:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120cf9:	5f                   	pop    edi
10120cfa:	5e                   	pop    esi
10120cfb:	5b                   	pop    ebx
10120cfc:	5d                   	pop    ebp
10120cfd:	c2 04 00             	ret    0x4
10120d00:	68 4c 71 1e 10       	push   0x101e714c
10120d05:	57                   	push   edi
10120d06:	e8 95 9e ee ff       	call   0x1000aba0
10120d0b:	83 c4 08             	add    esp,0x8
10120d0e:	85 c0                	test   eax,eax
10120d10:	74 2b                	je     0x10120d3d
10120d12:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120d15:	e8 44 a8 04 00       	call   0x1016b55e
10120d1a:	83 c4 04             	add    esp,0x4
10120d1d:	85 c0                	test   eax,eax
10120d1f:	0f 84 f4 00 00 00    	je     0x10120e19
10120d25:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10120d28:	5f                   	pop    edi
10120d29:	83 88 a4 01 00 00 02 	or     DWORD PTR [eax+0x1a4],0x2
10120d30:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120d37:	5e                   	pop    esi
10120d38:	5b                   	pop    ebx
10120d39:	5d                   	pop    ebp
10120d3a:	c2 04 00             	ret    0x4
10120d3d:	68 58 71 1e 10       	push   0x101e7158
10120d42:	57                   	push   edi
10120d43:	e8 58 9e ee ff       	call   0x1000aba0
10120d48:	83 c4 08             	add    esp,0x8
10120d4b:	85 c0                	test   eax,eax
10120d4d:	74 23                	je     0x10120d72
10120d4f:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120d52:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10120d58:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
10120d5b:	83 c4 04             	add    esp,0x4
10120d5e:	5f                   	pop    edi
10120d5f:	89 81 b0 01 00 00    	mov    DWORD PTR [ecx+0x1b0],eax
10120d65:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120d6c:	5e                   	pop    esi
10120d6d:	5b                   	pop    ebx
10120d6e:	5d                   	pop    ebp
10120d6f:	c2 04 00             	ret    0x4
10120d72:	68 64 71 1e 10       	push   0x101e7164
10120d77:	57                   	push   edi
10120d78:	e8 23 9e ee ff       	call   0x1000aba0
10120d7d:	83 c4 08             	add    esp,0x8
10120d80:	85 c0                	test   eax,eax
10120d82:	74 2b                	je     0x10120daf
10120d84:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120d87:	e8 d2 a7 04 00       	call   0x1016b55e
10120d8c:	83 c4 04             	add    esp,0x4
10120d8f:	85 c0                	test   eax,eax
10120d91:	0f 84 82 00 00 00    	je     0x10120e19
10120d97:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10120d9a:	5f                   	pop    edi
10120d9b:	83 88 a4 01 00 00 04 	or     DWORD PTR [eax+0x1a4],0x4
10120da2:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120da9:	5e                   	pop    esi
10120daa:	5b                   	pop    ebx
10120dab:	5d                   	pop    ebp
10120dac:	c2 04 00             	ret    0x4
10120daf:	68 70 71 1e 10       	push   0x101e7170
10120db4:	57                   	push   edi
10120db5:	e8 e6 9d ee ff       	call   0x1000aba0
10120dba:	83 c4 08             	add    esp,0x8
10120dbd:	85 c0                	test   eax,eax
10120dbf:	74 2d                	je     0x10120dee
10120dc1:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120dc4:	e8 23 e8 04 00       	call   0x1016f5ec
10120dc9:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
10120dcc:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
10120dcf:	d9 1c 24             	fstp   DWORD PTR [esp]
10120dd2:	68 48 b6 1c 10       	push   0x101cb648
10120dd7:	ff 15 34 30 22 10    	call   DWORD PTR ds:0x10223034
10120ddd:	83 c4 08             	add    esp,0x8
10120de0:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120de7:	5f                   	pop    edi
10120de8:	5e                   	pop    esi
10120de9:	5b                   	pop    ebx
10120dea:	5d                   	pop    ebp
10120deb:	c2 04 00             	ret    0x4
10120dee:	68 80 71 1e 10       	push   0x101e7180
10120df3:	57                   	push   edi
10120df4:	e8 a7 9d ee ff       	call   0x1000aba0
10120df9:	83 c4 08             	add    esp,0x8
10120dfc:	85 c0                	test   eax,eax
10120dfe:	74 27                	je     0x10120e27
10120e00:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120e03:	e8 56 a7 04 00       	call   0x1016b55e
10120e08:	83 c4 04             	add    esp,0x4
10120e0b:	85 c0                	test   eax,eax
10120e0d:	74 0a                	je     0x10120e19
10120e0f:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10120e12:	83 88 a4 01 00 00 08 	or     DWORD PTR [eax+0x1a4],0x8
10120e19:	5f                   	pop    edi
10120e1a:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120e21:	5e                   	pop    esi
10120e22:	5b                   	pop    ebx
10120e23:	5d                   	pop    ebp
10120e24:	c2 04 00             	ret    0x4
10120e27:	68 90 71 1e 10       	push   0x101e7190
10120e2c:	57                   	push   edi
10120e2d:	e8 6e 9d ee ff       	call   0x1000aba0
10120e32:	83 c4 08             	add    esp,0x8
10120e35:	85 c0                	test   eax,eax
10120e37:	74 22                	je     0x10120e5b
10120e39:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120e3c:	e8 1d a7 04 00       	call   0x1016b55e
10120e41:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
10120e44:	83 c4 04             	add    esp,0x4
10120e47:	5f                   	pop    edi
10120e48:	89 81 48 02 00 00    	mov    DWORD PTR [ecx+0x248],eax
10120e4e:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120e55:	5e                   	pop    esi
10120e56:	5b                   	pop    ebx
10120e57:	5d                   	pop    ebp
10120e58:	c2 04 00             	ret    0x4
10120e5b:	68 9c 71 1e 10       	push   0x101e719c
10120e60:	57                   	push   edi
10120e61:	e8 3a 9d ee ff       	call   0x1000aba0
10120e66:	83 c4 08             	add    esp,0x8
10120e69:	85 c0                	test   eax,eax
10120e6b:	74 22                	je     0x10120e8f
10120e6d:	ff 76 08             	push   DWORD PTR [esi+0x8]
10120e70:	e8 e9 a6 04 00       	call   0x1016b55e
10120e75:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
10120e78:	83 c4 04             	add    esp,0x4
10120e7b:	5f                   	pop    edi
10120e7c:	89 81 50 02 00 00    	mov    DWORD PTR [ecx+0x250],eax
10120e82:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10120e89:	5e                   	pop    esi
10120e8a:	5b                   	pop    ebx
10120e8b:	5d                   	pop    ebp
10120e8c:	c2 04 00             	ret    0x4
10120e8f:	56                   	push   esi
10120e90:	8b cb                	mov    ecx,ebx
10120e92:	e8 09 cd ee ff       	call   0x1000dba0
10120e97:	5f                   	pop    edi
10120e98:	5e                   	pop    esi
10120e99:	5b                   	pop    ebx
10120e9a:	5d                   	pop    ebp
10120e9b:	c2 04 00             	ret    0x4
