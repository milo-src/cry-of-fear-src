
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ca860 <.text+0xc9860>:
100ca860:	55                   	push   ebp
100ca861:	8b ec                	mov    ebp,esp
100ca863:	83 e4 c0             	and    esp,0xffffffc0
100ca866:	81 ec 74 02 00 00    	sub    esp,0x274
100ca86c:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100ca871:	33 c4                	xor    eax,esp
100ca873:	89 84 24 70 02 00 00 	mov    DWORD PTR [esp+0x270],eax
100ca87a:	53                   	push   ebx
100ca87b:	8b d9                	mov    ebx,ecx
100ca87d:	56                   	push   esi
100ca87e:	57                   	push   edi
100ca87f:	51                   	push   ecx
100ca880:	8b 03                	mov    eax,DWORD PTR [ebx]
100ca882:	89 5c 24 44          	mov    DWORD PTR [esp+0x44],ebx
100ca886:	c7 43 78 e0 28 10 10 	mov    DWORD PTR [ebx+0x78],0x101028e0
100ca88d:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100ca894:	ff 50 08             	call   DWORD PTR [eax+0x8]
100ca897:	a1 c8 38 22 10       	mov    eax,ds:0x102238c8
100ca89c:	c1 e0 07             	shl    eax,0x7
100ca89f:	50                   	push   eax
100ca8a0:	6a 18                	push   0x18
100ca8a2:	e8 8f 6c 0a 00       	call   0x10171536
100ca8a7:	83 c4 08             	add    esp,0x8
100ca8aa:	89 44 24 48          	mov    DWORD PTR [esp+0x48],eax
100ca8ae:	85 c0                	test   eax,eax
100ca8b0:	75 0c                	jne    0x100ca8be
100ca8b2:	68 24 6e 1d 10       	push   0x101d6e24
100ca8b7:	6a 02                	push   0x2
100ca8b9:	e9 4d 0e 00 00       	jmp    0x100cb70b
100ca8be:	8d 84 24 70 01 00 00 	lea    eax,[esp+0x170]
100ca8c5:	50                   	push   eax
100ca8c6:	ff 15 d4 30 22 10    	call   DWORD PTR ds:0x102230d4
100ca8cc:	8d 8c 24 74 01 00 00 	lea    ecx,[esp+0x174]
100ca8d3:	83 c4 04             	add    esp,0x4
100ca8d6:	49                   	dec    ecx
100ca8d7:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100ca8da:	8d 49 01             	lea    ecx,[ecx+0x1]
100ca8dd:	84 c0                	test   al,al
100ca8df:	75 f6                	jne    0x100ca8d7
100ca8e1:	a1 44 6e 1d 10       	mov    eax,ds:0x101d6e44
100ca8e6:	8b 35 0c 10 1a 10    	mov    esi,DWORD PTR ds:0x101a100c
100ca8ec:	89 01                	mov    DWORD PTR [ecx],eax
100ca8ee:	66 a1 48 6e 1d 10    	mov    ax,ds:0x101d6e48
100ca8f4:	66 89 41 04          	mov    WORD PTR [ecx+0x4],ax
100ca8f8:	8d 84 24 70 01 00 00 	lea    eax,[esp+0x170]
100ca8ff:	6a 00                	push   0x0
100ca901:	50                   	push   eax
100ca902:	ff d6                	call   esi
100ca904:	8d 8c 24 70 01 00 00 	lea    ecx,[esp+0x170]
100ca90b:	49                   	dec    ecx
100ca90c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100ca910:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100ca913:	8d 49 01             	lea    ecx,[ecx+0x1]
100ca916:	84 c0                	test   al,al
100ca918:	75 f6                	jne    0x100ca910
100ca91a:	a1 4c 6e 1d 10       	mov    eax,ds:0x101d6e4c
100ca91f:	89 01                	mov    DWORD PTR [ecx],eax
100ca921:	a1 50 6e 1d 10       	mov    eax,ds:0x101d6e50
100ca926:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100ca929:	8d 84 24 70 01 00 00 	lea    eax,[esp+0x170]
100ca930:	6a 00                	push   0x0
100ca932:	50                   	push   eax
100ca933:	ff d6                	call   esi
100ca935:	8d bc 24 70 01 00 00 	lea    edi,[esp+0x170]
100ca93c:	4f                   	dec    edi
100ca93d:	0f 1f 00             	nop    DWORD PTR [eax]
100ca940:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100ca943:	8d 7f 01             	lea    edi,[edi+0x1]
100ca946:	84 c0                	test   al,al
100ca948:	75 f6                	jne    0x100ca940
100ca94a:	66 a1 54 6e 1d 10    	mov    ax,ds:0x101d6e54
100ca950:	66 89 07             	mov    WORD PTR [edi],ax
100ca953:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ca958:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100ca95e:	03 50 0c             	add    edx,DWORD PTR [eax+0xc]
100ca961:	8b f2                	mov    esi,edx
100ca963:	8a 02                	mov    al,BYTE PTR [edx]
100ca965:	42                   	inc    edx
100ca966:	84 c0                	test   al,al
100ca968:	75 f9                	jne    0x100ca963
100ca96a:	8d bc 24 70 01 00 00 	lea    edi,[esp+0x170]
100ca971:	2b d6                	sub    edx,esi
100ca973:	4f                   	dec    edi
100ca974:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100ca977:	47                   	inc    edi
100ca978:	84 c0                	test   al,al
100ca97a:	75 f8                	jne    0x100ca974
100ca97c:	8b ca                	mov    ecx,edx
100ca97e:	c1 e9 02             	shr    ecx,0x2
100ca981:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100ca983:	8b ca                	mov    ecx,edx
100ca985:	83 e1 03             	and    ecx,0x3
100ca988:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100ca98a:	8d 8c 24 70 01 00 00 	lea    ecx,[esp+0x170]
100ca991:	49                   	dec    ecx
100ca992:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100ca995:	8d 49 01             	lea    ecx,[ecx+0x1]
100ca998:	84 c0                	test   al,al
100ca99a:	75 f6                	jne    0x100ca992
100ca99c:	a1 58 6e 1d 10       	mov    eax,ds:0x101d6e58
100ca9a1:	89 01                	mov    DWORD PTR [ecx],eax
100ca9a3:	a0 5c 6e 1d 10       	mov    al,ds:0x101d6e5c
100ca9a8:	88 41 04             	mov    BYTE PTR [ecx+0x4],al
100ca9ab:	8d 84 24 70 01 00 00 	lea    eax,[esp+0x170]
100ca9b2:	68 60 6e 1d 10       	push   0x101d6e60
100ca9b7:	50                   	push   eax
100ca9b8:	e8 e4 99 0a 00       	call   0x101743a1
100ca9bd:	8b f0                	mov    esi,eax
100ca9bf:	83 c4 08             	add    esp,0x8
100ca9c2:	89 74 24 3c          	mov    DWORD PTR [esp+0x3c],esi
100ca9c6:	85 f6                	test   esi,esi
100ca9c8:	75 36                	jne    0x100caa00
100ca9ca:	8d 84 24 70 01 00 00 	lea    eax,[esp+0x170]
100ca9d1:	50                   	push   eax
100ca9d2:	68 64 6e 1d 10       	push   0x101d6e64
100ca9d7:	6a 02                	push   0x2
100ca9d9:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100ca9df:	ff 74 24 54          	push   DWORD PTR [esp+0x54]
100ca9e3:	e8 e9 6a 0a 00       	call   0x101714d1
100ca9e8:	83 c4 10             	add    esp,0x10
100ca9eb:	5f                   	pop    edi
100ca9ec:	5e                   	pop    esi
100ca9ed:	5b                   	pop    ebx
100ca9ee:	8b 8c 24 70 02 00 00 	mov    ecx,DWORD PTR [esp+0x270]
100ca9f5:	33 cc                	xor    ecx,esp
100ca9f7:	e8 b7 31 07 00       	call   0x1013dbb3
100ca9fc:	8b e5                	mov    esp,ebp
100ca9fe:	5d                   	pop    ebp
100ca9ff:	c3                   	ret
100caa00:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100caa05:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100caa0b:	03 48 0c             	add    ecx,DWORD PTR [eax+0xc]
100caa0e:	51                   	push   ecx
100caa0f:	68 7c 6e 1d 10       	push   0x101d6e7c
100caa14:	56                   	push   esi
100caa15:	e8 16 54 00 00       	call   0x100cfe30
100caa1a:	ff 35 c8 38 22 10    	push   DWORD PTR ds:0x102238c8
100caa20:	68 a0 6e 1d 10       	push   0x101d6ea0
100caa25:	56                   	push   esi
100caa26:	e8 05 54 00 00       	call   0x100cfe30
100caa2b:	33 ff                	xor    edi,edi
100caa2d:	83 c4 18             	add    esp,0x18
100caa30:	39 3d c8 38 22 10    	cmp    DWORD PTR ds:0x102238c8,edi
100caa36:	0f 8e d6 00 00 00    	jle    0x100cab12
100caa3c:	8b 5c 24 3c          	mov    ebx,DWORD PTR [esp+0x3c]
100caa40:	33 f6                	xor    esi,esi
100caa42:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100caa47:	0f 57 c0             	xorps  xmm0,xmm0
100caa4a:	57                   	push   edi
100caa4b:	68 b4 6e 1d 10       	push   0x101d6eb4
100caa50:	53                   	push   ebx
100caa51:	c7 44 06 20 00 00 00 	mov    DWORD PTR [esi+eax*1+0x20],0x0
100caa58:	00 
100caa59:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100caa5e:	c7 44 06 24 00 00 00 	mov    DWORD PTR [esi+eax*1+0x24],0x0
100caa65:	00 
100caa66:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100caa6b:	0f 11 44 06 28       	movups XMMWORD PTR [esi+eax*1+0x28],xmm0
100caa70:	0f 11 44 06 38       	movups XMMWORD PTR [esi+eax*1+0x38],xmm0
100caa75:	e8 b6 53 00 00       	call   0x100cfe30
100caa7a:	8b 0d bc 38 22 10    	mov    ecx,DWORD PTR ds:0x102238bc
100caa80:	f3 0f 2c 44 0e 08    	cvttss2si eax,DWORD PTR [esi+ecx*1+0x8]
100caa86:	50                   	push   eax
100caa87:	f3 0f 2c 44 0e 04    	cvttss2si eax,DWORD PTR [esi+ecx*1+0x4]
100caa8d:	50                   	push   eax
100caa8e:	f3 0f 2c 04 0e       	cvttss2si eax,DWORD PTR [esi+ecx*1]
100caa93:	50                   	push   eax
100caa94:	68 c8 6e 1d 10       	push   0x101d6ec8
100caa99:	53                   	push   ebx
100caa9a:	e8 91 53 00 00       	call   0x100cfe30
100caa9f:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100caaa4:	0f bf 44 06 50       	movsx  eax,WORD PTR [esi+eax*1+0x50]
100caaa9:	50                   	push   eax
100caaaa:	68 e4 6e 1d 10       	push   0x101d6ee4
100caaaf:	53                   	push   ebx
100caab0:	e8 7b 53 00 00       	call   0x100cfe30
100caab5:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100caaba:	0f bf 44 06 52       	movsx  eax,WORD PTR [esi+eax*1+0x52]
100caabf:	50                   	push   eax
100caac0:	68 f8 6e 1d 10       	push   0x101d6ef8
100caac5:	53                   	push   ebx
100caac6:	e8 65 53 00 00       	call   0x100cfe30
100caacb:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100caad0:	83 c4 30             	add    esp,0x30
100caad3:	f3 0f 10 44 06 54    	movss  xmm0,DWORD PTR [esi+eax*1+0x54]
100caad9:	0f 5a c0             	cvtps2pd xmm0,xmm0
100caadc:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100caae1:	68 0c 6f 1d 10       	push   0x101d6f0c
100caae6:	53                   	push   ebx
100caae7:	e8 44 53 00 00       	call   0x100cfe30
100caaec:	68 20 6f 1d 10       	push   0x101d6f20
100caaf1:	53                   	push   ebx
100caaf2:	e8 39 53 00 00       	call   0x100cfe30
100caaf7:	47                   	inc    edi
100caaf8:	8d 76 58             	lea    esi,[esi+0x58]
100caafb:	83 c4 18             	add    esp,0x18
100caafe:	3b 3d c8 38 22 10    	cmp    edi,DWORD PTR ds:0x102238c8
100cab04:	0f 8c 38 ff ff ff    	jl     0x100caa42
100cab0a:	8b 5c 24 40          	mov    ebx,DWORD PTR [esp+0x40]
100cab0e:	8b 74 24 3c          	mov    esi,DWORD PTR [esp+0x3c]
100cab12:	68 74 6f 1d 10       	push   0x101d6f74
100cab17:	56                   	push   esi
100cab18:	e8 13 53 00 00       	call   0x100cfe30
100cab1d:	33 ff                	xor    edi,edi
100cab1f:	83 c4 08             	add    esp,0x8
100cab22:	39 3d c8 38 22 10    	cmp    DWORD PTR ds:0x102238c8,edi
100cab28:	0f 8e 6f 01 00 00    	jle    0x100cac9d
100cab2e:	33 f6                	xor    esi,esi
100cab30:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cab35:	03 c6                	add    eax,esi
100cab37:	f6 40 1c 02          	test   BYTE PTR [eax+0x1c],0x2
100cab3b:	0f 85 4c 01 00 00    	jne    0x100cac8d
100cab41:	50                   	push   eax
100cab42:	e8 39 ec 04 00       	call   0x10119780
100cab47:	83 c4 04             	add    esp,0x4
100cab4a:	83 f8 fd             	cmp    eax,0xfffffffd
100cab4d:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cab52:	75 0a                	jne    0x100cab5e
100cab54:	83 4c 06 1c 04       	or     DWORD PTR [esi+eax*1+0x1c],0x4
100cab59:	e9 2f 01 00 00       	jmp    0x100cac8d
100cab5e:	83 4c 06 1c 01       	or     DWORD PTR [esi+eax*1+0x1c],0x1
100cab63:	8d 8c 24 00 01 00 00 	lea    ecx,[esp+0x100]
100cab6a:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cab6f:	0f 57 db             	xorps  xmm3,xmm3
100cab72:	03 c6                	add    eax,esi
100cab74:	51                   	push   ecx
100cab75:	ff 35 60 1f 23 10    	push   DWORD PTR ds:0x10231f60
100cab7b:	8d 4c 24 68          	lea    ecx,[esp+0x68]
100cab7f:	f3 0f 10 50 04       	movss  xmm2,DWORD PTR [eax+0x4]
100cab84:	f3 0f 10 48 08       	movss  xmm1,DWORD PTR [eax+0x8]
100cab89:	f3 0f 5c d3          	subss  xmm2,xmm3
100cab8d:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100cab91:	f3 0f 5c 0d 44 76 1d 	subss  xmm1,DWORD PTR ds:0x101d7644
100cab98:	10 
100cab99:	f3 0f 5c c3          	subss  xmm0,xmm3
100cab9d:	6a 01                	push   0x1
100cab9f:	51                   	push   ecx
100caba0:	50                   	push   eax
100caba1:	f3 0f 11 54 24 78    	movss  DWORD PTR [esp+0x78],xmm2
100caba7:	f3 0f 11 44 24 74    	movss  DWORD PTR [esp+0x74],xmm0
100cabad:	f3 0f 11 4c 24 7c    	movss  DWORD PTR [esp+0x7c],xmm1
100cabb3:	e8 48 fc 04 00       	call   0x1011a800
100cabb8:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cabbd:	8d 8c 24 4c 01 00 00 	lea    ecx,[esp+0x14c]
100cabc4:	03 c6                	add    eax,esi
100cabc6:	0f 57 db             	xorps  xmm3,xmm3
100cabc9:	51                   	push   ecx
100cabca:	ff 35 60 1f 23 10    	push   DWORD PTR ds:0x10231f60
100cabd0:	8d 8c 24 8c 00 00 00 	lea    ecx,[esp+0x8c]
100cabd7:	f3 0f 10 50 04       	movss  xmm2,DWORD PTR [eax+0x4]
100cabdc:	f3 0f 10 48 08       	movss  xmm1,DWORD PTR [eax+0x8]
100cabe1:	f3 0f 5c d3          	subss  xmm2,xmm3
100cabe5:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100cabe9:	f3 0f 5c 0d 44 76 1d 	subss  xmm1,DWORD PTR ds:0x101d7644
100cabf0:	10 
100cabf1:	f3 0f 5c c3          	subss  xmm0,xmm3
100cabf5:	6a 00                	push   0x0
100cabf7:	51                   	push   ecx
100cabf8:	50                   	push   eax
100cabf9:	f3 0f 11 94 24 9c 00 	movss  DWORD PTR [esp+0x9c],xmm2
100cac00:	00 00 
100cac02:	f3 0f 11 84 24 98 00 	movss  DWORD PTR [esp+0x98],xmm0
100cac09:	00 00 
100cac0b:	f3 0f 11 8c 24 a0 00 	movss  DWORD PTR [esp+0xa0],xmm1
100cac12:	00 00 
100cac14:	e8 e7 fb 04 00       	call   0x1011a800
100cac19:	f3 0f 10 84 24 38 01 	movss  xmm0,DWORD PTR [esp+0x138]
100cac20:	00 00 
100cac22:	83 c4 28             	add    esp,0x28
100cac25:	0f 2f 84 24 48 01 00 	comiss xmm0,DWORD PTR [esp+0x148]
100cac2c:	00 
100cac2d:	76 37                	jbe    0x100cac66
100cac2f:	8b 84 24 68 01 00 00 	mov    eax,DWORD PTR [esp+0x168]
100cac36:	85 c0                	test   eax,eax
100cac38:	74 2c                	je     0x100cac66
100cac3a:	f7 80 28 02 00 00 00 	test   DWORD PTR [eax+0x228],0x2000000
100cac41:	00 00 02 
100cac44:	74 20                	je     0x100cac66
100cac46:	f3 0f 7e 84 24 4c 01 	movq   xmm0,QWORD PTR [esp+0x14c]
100cac4d:	00 00 
100cac4f:	8b 84 24 54 01 00 00 	mov    eax,DWORD PTR [esp+0x154]
100cac56:	66 0f d6 84 24 14 01 	movq   QWORD PTR [esp+0x114],xmm0
100cac5d:	00 00 
100cac5f:	89 84 24 1c 01 00 00 	mov    DWORD PTR [esp+0x11c],eax
100cac66:	f3 0f 10 84 24 1c 01 	movss  xmm0,DWORD PTR [esp+0x11c]
100cac6d:	00 00 
100cac6f:	f3 0f 58 05 d8 1e 1a 	addss  xmm0,DWORD PTR ds:0x101a1ed8
100cac76:	10 
100cac77:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cac7c:	f3 0f 11 44 06 08    	movss  DWORD PTR [esi+eax*1+0x8],xmm0
100cac82:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cac87:	f3 0f 11 44 06 14    	movss  DWORD PTR [esi+eax*1+0x14],xmm0
100cac8d:	47                   	inc    edi
100cac8e:	83 c6 58             	add    esi,0x58
100cac91:	3b 3d c8 38 22 10    	cmp    edi,DWORD PTR ds:0x102238c8
100cac97:	0f 8c 93 fe ff ff    	jl     0x100cab30
100cac9d:	8b 7c 24 3c          	mov    edi,DWORD PTR [esp+0x3c]
100caca1:	8d 44 24 40          	lea    eax,[esp+0x40]
100caca5:	8b 74 24 48          	mov    esi,DWORD PTR [esp+0x48]
100caca9:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100cacae:	50                   	push   eax
100cacaf:	57                   	push   edi
100cacb0:	56                   	push   esi
100cacb1:	e8 6a 37 00 00       	call   0x100ce420
100cacb6:	89 44 24 58          	mov    DWORD PTR [esp+0x58],eax
100cacba:	85 c0                	test   eax,eax
100cacbc:	75 55                	jne    0x100cad13
100cacbe:	68 78 6f 1d 10       	push   0x101d6f78
100cacc3:	6a 02                	push   0x2
100cacc5:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100caccb:	6b 44 24 48 58       	imul   eax,DWORD PTR [esp+0x48],0x58
100cacd0:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100cacd3:	c7 43 78 90 ef 0c 10 	mov    DWORD PTR [ebx+0x78],0x100cef90
100cacda:	56                   	push   esi
100cacdb:	03 05 bc 38 22 10    	add    eax,DWORD PTR ds:0x102238bc
100cace1:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
100cace5:	66 0f d6 41 08       	movq   QWORD PTR [ecx+0x8],xmm0
100cacea:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
100caced:	89 41 10             	mov    DWORD PTR [ecx+0x10],eax
100cacf0:	e8 dc 67 0a 00       	call   0x101714d1
100cacf5:	57                   	push   edi
100cacf6:	e8 66 50 0a 00       	call   0x1016fd61
100cacfb:	83 c4 10             	add    esp,0x10
100cacfe:	5f                   	pop    edi
100cacff:	5e                   	pop    esi
100cad00:	5b                   	pop    ebx
100cad01:	8b 8c 24 70 02 00 00 	mov    ecx,DWORD PTR [esp+0x270]
100cad08:	33 cc                	xor    ecx,esp
100cad0a:	e8 a4 2e 07 00       	call   0x1013dbb3
100cad0f:	8b e5                	mov    esp,ebp
100cad11:	5d                   	pop    ebp
100cad12:	c3                   	ret
100cad13:	68 98 68 1d 10       	push   0x101d6898
100cad18:	57                   	push   edi
100cad19:	e8 12 51 00 00       	call   0x100cfe30
100cad1e:	68 98 6f 1d 10       	push   0x101d6f98
100cad23:	57                   	push   edi
100cad24:	e8 07 51 00 00       	call   0x100cfe30
100cad29:	83 c4 10             	add    esp,0x10
100cad2c:	c7 44 24 4c 00 00 00 	mov    DWORD PTR [esp+0x4c],0x0
100cad33:	00 
100cad34:	83 3d c8 38 22 10 00 	cmp    DWORD PTR ds:0x102238c8,0x0
100cad3b:	0f 8e 8f 06 00 00    	jle    0x100cb3d0
100cad41:	33 c9                	xor    ecx,ecx
100cad43:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
100cad47:	66 0f 1f 84 00 00 00 	nop    WORD PTR [eax+eax*1+0x0]
100cad4e:	00 00 
100cad50:	8b 3d bc 38 22 10    	mov    edi,DWORD PTR ds:0x102238bc
100cad56:	68 20 6f 1d 10       	push   0x101d6f20
100cad5b:	ff 74 24 40          	push   DWORD PTR [esp+0x40]
100cad5f:	03 f9                	add    edi,ecx
100cad61:	e8 ca 50 00 00       	call   0x100cfe30
100cad66:	ff 74 24 54          	push   DWORD PTR [esp+0x54]
100cad6a:	68 ac 6f 1d 10       	push   0x101d6fac
100cad6f:	ff 74 24 4c          	push   DWORD PTR [esp+0x4c]
100cad73:	e8 b8 50 00 00       	call   0x100cfe30
100cad78:	33 c9                	xor    ecx,ecx
100cad7a:	83 c4 14             	add    esp,0x14
100cad7d:	89 4c 24 44          	mov    DWORD PTR [esp+0x44],ecx
100cad81:	39 4f 20             	cmp    DWORD PTR [edi+0x20],ecx
100cad84:	0f 8e 22 06 00 00    	jle    0x100cb3ac
100cad8a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100cad90:	8b 47 24             	mov    eax,DWORD PTR [edi+0x24]
100cad93:	33 d2                	xor    edx,edx
100cad95:	03 c1                	add    eax,ecx
100cad97:	89 54 24 54          	mov    DWORD PTR [esp+0x54],edx
100cad9b:	8d 04 40             	lea    eax,[eax+eax*2]
100cad9e:	c7 44 c6 10 0f 00 00 	mov    DWORD PTR [esi+eax*8+0x10],0xf
100cada5:	00 
100cada6:	33 c0                	xor    eax,eax
100cada8:	89 44 24 50          	mov    DWORD PTR [esp+0x50],eax
100cadac:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100cadb0:	85 d2                	test   edx,edx
100cadb2:	74 12                	je     0x100cadc6
100cadb4:	83 f8 01             	cmp    eax,0x1
100cadb7:	0f 84 6b 05 00 00    	je     0x100cb328
100cadbd:	83 f8 02             	cmp    eax,0x2
100cadc0:	0f 84 62 05 00 00    	je     0x100cb328
100cadc6:	83 f8 03             	cmp    eax,0x3
100cadc9:	0f 87 57 01 00 00    	ja     0x100caf26
100cadcf:	ff 24 85 2c b7 0c 10 	jmp    DWORD PTR [eax*4+0x100cb72c]
100cadd6:	8d 44 24 70          	lea    eax,[esp+0x70]
100cadda:	c7 44 24 70 00 00 40 	mov    DWORD PTR [esp+0x70],0x41400000
100cade1:	41 
100cade2:	50                   	push   eax
100cade3:	c7 44 24 78 00 00 40 	mov    DWORD PTR [esp+0x78],0x41400000
100cadea:	41 
100cadeb:	8d 84 24 8c 00 00 00 	lea    eax,[esp+0x8c]
100cadf2:	c7 44 24 7c 00 00 c0 	mov    DWORD PTR [esp+0x7c],0x41c00000
100cadf9:	41 
100cadfa:	c7 84 24 8c 00 00 00 	mov    DWORD PTR [esp+0x8c],0xc1400000
100cae01:	00 00 40 c1 
100cae05:	c7 84 24 90 00 00 00 	mov    DWORD PTR [esp+0x90],0xc1400000
100cae0c:	00 00 40 c1 
100cae10:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0x0
100cae17:	00 00 00 00 
100cae1b:	e9 fa 00 00 00       	jmp    0x100caf1a
100cae20:	8d 84 24 94 00 00 00 	lea    eax,[esp+0x94]
100cae27:	c7 84 24 94 00 00 00 	mov    DWORD PTR [esp+0x94],0x41400000
100cae2e:	00 00 40 41 
100cae32:	50                   	push   eax
100cae33:	c7 84 24 9c 00 00 00 	mov    DWORD PTR [esp+0x9c],0x41400000
100cae3a:	00 00 40 41 
100cae3e:	8d 84 24 a4 00 00 00 	lea    eax,[esp+0xa4]
100cae45:	c7 84 24 a0 00 00 00 	mov    DWORD PTR [esp+0xa0],0x42900000
100cae4c:	00 00 90 42 
100cae50:	c7 84 24 a4 00 00 00 	mov    DWORD PTR [esp+0xa4],0xc1400000
100cae57:	00 00 40 c1 
100cae5b:	c7 84 24 a8 00 00 00 	mov    DWORD PTR [esp+0xa8],0xc1400000
100cae62:	00 00 40 c1 
100cae66:	c7 84 24 ac 00 00 00 	mov    DWORD PTR [esp+0xac],0x0
100cae6d:	00 00 00 00 
100cae71:	e9 a4 00 00 00       	jmp    0x100caf1a
100cae76:	8d 84 24 ac 00 00 00 	lea    eax,[esp+0xac]
100cae7d:	c7 84 24 ac 00 00 00 	mov    DWORD PTR [esp+0xac],0x42000000
100cae84:	00 00 00 42 
100cae88:	50                   	push   eax
100cae89:	c7 84 24 b4 00 00 00 	mov    DWORD PTR [esp+0xb4],0x42000000
100cae90:	00 00 00 42 
100cae94:	8d 84 24 bc 00 00 00 	lea    eax,[esp+0xbc]
100cae9b:	c7 84 24 b8 00 00 00 	mov    DWORD PTR [esp+0xb8],0x42800000
100caea2:	00 00 80 42 
100caea6:	c7 84 24 bc 00 00 00 	mov    DWORD PTR [esp+0xbc],0xc2000000
100caead:	00 00 00 c2 
100caeb1:	c7 84 24 c0 00 00 00 	mov    DWORD PTR [esp+0xc0],0xc2000000
100caeb8:	00 00 00 c2 
100caebc:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x0
100caec3:	00 00 00 00 
100caec7:	eb 51                	jmp    0x100caf1a
100caec9:	8d 84 24 c4 00 00 00 	lea    eax,[esp+0xc4]
100caed0:	c7 84 24 c4 00 00 00 	mov    DWORD PTR [esp+0xc4],0x42000000
100caed7:	00 00 00 42 
100caedb:	50                   	push   eax
100caedc:	c7 84 24 cc 00 00 00 	mov    DWORD PTR [esp+0xcc],0x42000000
100caee3:	00 00 00 42 
100caee7:	8d 84 24 d4 00 00 00 	lea    eax,[esp+0xd4]
100caeee:	c7 84 24 d0 00 00 00 	mov    DWORD PTR [esp+0xd0],0x42800000
100caef5:	00 00 80 42 
100caef9:	c7 84 24 d4 00 00 00 	mov    DWORD PTR [esp+0xd4],0xc2000000
100caf00:	00 00 00 c2 
100caf04:	c7 84 24 d8 00 00 00 	mov    DWORD PTR [esp+0xd8],0xc2000000
100caf0b:	00 00 00 c2 
100caf0f:	c7 84 24 dc 00 00 00 	mov    DWORD PTR [esp+0xdc],0x0
100caf16:	00 00 00 00 
100caf1a:	50                   	push   eax
100caf1b:	ff 73 04             	push   DWORD PTR [ebx+0x4]
100caf1e:	e8 0d f1 04 00       	call   0x1011a030
100caf23:	83 c4 0c             	add    esp,0xc
100caf26:	57                   	push   edi
100caf27:	53                   	push   ebx
100caf28:	e8 b3 f0 04 00       	call   0x10119fe0
100caf2d:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100caf30:	83 c4 08             	add    esp,0x8
100caf33:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x200
100caf3a:	02 00 00 
100caf3d:	75 10                	jne    0x100caf4f
100caf3f:	68 b8 6f 1d 10       	push   0x101d6fb8
100caf44:	6a 02                	push   0x2
100caf46:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100caf4c:	83 c4 08             	add    esp,0x8
100caf4f:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
100caf53:	85 c9                	test   ecx,ecx
100caf55:	0f 88 de 04 00 00    	js     0x100cb439
100caf5b:	8b 47 24             	mov    eax,DWORD PTR [edi+0x24]
100caf5e:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
100caf61:	03 c1                	add    eax,ecx
100caf63:	8d 04 40             	lea    eax,[eax+eax*2]
100caf66:	6b 4c c6 04 58       	imul   ecx,DWORD PTR [esi+eax*8+0x4],0x58
100caf6b:	03 0d bc 38 22 10    	add    ecx,DWORD PTR ds:0x102238bc
100caf71:	83 7c 24 50 03       	cmp    DWORD PTR [esp+0x50],0x3
100caf76:	f3 0f 7e 01          	movq   xmm0,QWORD PTR [ecx]
100caf7a:	8b 41 08             	mov    eax,DWORD PTR [ecx+0x8]
100caf7d:	66 0f d6 44 24 60    	movq   QWORD PTR [esp+0x60],xmm0
100caf83:	89 44 24 68          	mov    DWORD PTR [esp+0x68],eax
100caf87:	0f 83 c0 02 00 00    	jae    0x100cb24d
100caf8d:	f6 47 1c 04          	test   BYTE PTR [edi+0x1c],0x4
100caf91:	8b 82 a8 01 00 00    	mov    eax,DWORD PTR [edx+0x1a8]
100caf97:	89 44 24 5c          	mov    DWORD PTR [esp+0x5c],eax
100caf9b:	c7 44 24 6c 01 00 00 	mov    DWORD PTR [esp+0x6c],0x1
100cafa2:	00 
100cafa3:	74 14                	je     0x100cafb9
100cafa5:	83 c8 02             	or     eax,0x2
100cafa8:	c7 44 24 6c 00 00 00 	mov    DWORD PTR [esp+0x6c],0x0
100cafaf:	00 
100cafb0:	89 82 a8 01 00 00    	mov    DWORD PTR [edx+0x1a8],eax
100cafb6:	8b 53 04             	mov    edx,DWORD PTR [ebx+0x4]
100cafb9:	f3 0f 10 51 04       	movss  xmm2,DWORD PTR [ecx+0x4]
100cafbe:	8d 84 24 dc 00 00 00 	lea    eax,[esp+0xdc]
100cafc5:	f3 0f 5c 52 0c       	subss  xmm2,DWORD PTR [edx+0xc]
100cafca:	f3 0f 10 49 08       	movss  xmm1,DWORD PTR [ecx+0x8]
100cafcf:	f3 0f 5c 4a 10       	subss  xmm1,DWORD PTR [edx+0x10]
100cafd4:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
100cafd8:	f3 0f 5c 42 08       	subss  xmm0,DWORD PTR [edx+0x8]
100cafdd:	50                   	push   eax
100cafde:	f3 0f 11 94 24 e4 00 	movss  DWORD PTR [esp+0xe4],xmm2
100cafe5:	00 00 
100cafe7:	f3 0f 11 8c 24 e8 00 	movss  DWORD PTR [esp+0xe8],xmm1
100cafee:	00 00 
100caff0:	f3 0f 11 84 24 e0 00 	movss  DWORD PTR [esp+0xe0],xmm0
100caff7:	00 00 
100caff9:	e8 32 f9 04 00       	call   0x1011a930
100caffe:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100cb001:	83 c4 04             	add    esp,0x4
100cb004:	f3 0f 10 4c 24 60    	movss  xmm1,DWORD PTR [esp+0x60]
100cb00a:	f3 0f 10 44 24 64    	movss  xmm0,DWORD PTR [esp+0x64]
100cb010:	d9 5c 24 7c          	fstp   DWORD PTR [esp+0x7c]
100cb014:	f3 0f 5c 40 0c       	subss  xmm0,DWORD PTR [eax+0xc]
100cb019:	f3 0f 5c 48 08       	subss  xmm1,DWORD PTR [eax+0x8]
100cb01e:	f3 0f 59 c0          	mulss  xmm0,xmm0
100cb022:	f3 0f 59 c9          	mulss  xmm1,xmm1
100cb026:	f3 0f 58 c1          	addss  xmm0,xmm1
100cb02a:	0f 57 c9             	xorps  xmm1,xmm1
100cb02d:	0f 5a c0             	cvtps2pd xmm0,xmm0
100cb030:	66 0f 2e c8          	ucomisd xmm1,xmm0
100cb034:	77 06                	ja     0x100cb03c
100cb036:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100cb03a:	eb 05                	jmp    0x100cb041
100cb03c:	e8 4f 0e 0a 00       	call   0x1016be90
100cb041:	0f 57 db             	xorps  xmm3,xmm3
100cb044:	33 f6                	xor    esi,esi
100cb046:	f2 0f 5a d8          	cvtsd2ss xmm3,xmm0
100cb04a:	0f 57 c0             	xorps  xmm0,xmm0
100cb04d:	0f 2f d8             	comiss xmm3,xmm0
100cb050:	f3 0f 11 9c 24 80 00 	movss  DWORD PTR [esp+0x80],xmm3
100cb057:	00 00 
100cb059:	0f 86 9e 00 00 00    	jbe    0x100cb0fd
100cb05f:	f3 0f 10 35 90 13 1a 	movss  xmm6,DWORD PTR ds:0x101a1390
100cb066:	10 
100cb067:	0f 28 e3             	movaps xmm4,xmm3
100cb06a:	f3 0f 5c e6          	subss  xmm4,xmm6
100cb06e:	0f 57 d2             	xorps  xmm2,xmm2
100cb071:	f3 0f 11 a4 24 84 00 	movss  DWORD PTR [esp+0x84],xmm4
100cb078:	00 00 
100cb07a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100cb080:	f3 0f 10 0d e4 1e 1a 	movss  xmm1,DWORD PTR ds:0x101a1ee4
100cb087:	10 
100cb088:	0f 28 c2             	movaps xmm0,xmm2
100cb08b:	f3 0f 58 c1          	addss  xmm0,xmm1
100cb08f:	0f 2f c4             	comiss xmm0,xmm4
100cb092:	72 0b                	jb     0x100cb09f
100cb094:	0f 28 cb             	movaps xmm1,xmm3
100cb097:	f3 0f 5c ca          	subss  xmm1,xmm2
100cb09b:	f3 0f 5c ce          	subss  xmm1,xmm6
100cb09f:	ff 74 24 6c          	push   DWORD PTR [esp+0x6c]
100cb0a3:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100cb0a6:	f3 0f 10 84 24 80 00 	movss  xmm0,DWORD PTR [esp+0x80]
100cb0ad:	00 00 
100cb0af:	83 ec 08             	sub    esp,0x8
100cb0b2:	f3 0f 11 4c 24 04    	movss  DWORD PTR [esp+0x4],xmm1
100cb0b8:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100cb0bd:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100cb0c3:	ff 15 b4 2f 22 10    	call   DWORD PTR ds:0x10222fb4
100cb0c9:	83 c4 10             	add    esp,0x10
100cb0cc:	85 c0                	test   eax,eax
100cb0ce:	0f 84 89 00 00 00    	je     0x100cb15d
100cb0d4:	f3 0f 10 9c 24 80 00 	movss  xmm3,DWORD PTR [esp+0x80]
100cb0db:	00 00 
100cb0dd:	83 c6 10             	add    esi,0x10
100cb0e0:	f3 0f 10 a4 24 84 00 	movss  xmm4,DWORD PTR [esp+0x84]
100cb0e7:	00 00 
100cb0e9:	f3 0f 10 35 90 13 1a 	movss  xmm6,DWORD PTR ds:0x101a1390
100cb0f0:	10 
100cb0f1:	66 0f 6e d6          	movd   xmm2,esi
100cb0f5:	0f 5b d2             	cvtdq2ps xmm2,xmm2
100cb0f8:	0f 2f da             	comiss xmm3,xmm2
100cb0fb:	77 83                	ja     0x100cb080
100cb0fd:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100cb100:	f3 0f 10 48 08       	movss  xmm1,DWORD PTR [eax+0x8]
100cb105:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
100cb10a:	f3 0f 5c 54 24 64    	subss  xmm2,DWORD PTR [esp+0x64]
100cb110:	f3 0f 5c 4c 24 60    	subss  xmm1,DWORD PTR [esp+0x60]
100cb116:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
100cb11b:	f3 0f 5c 44 24 68    	subss  xmm0,DWORD PTR [esp+0x68]
100cb121:	f3 0f 59 d2          	mulss  xmm2,xmm2
100cb125:	f3 0f 59 c9          	mulss  xmm1,xmm1
100cb129:	f3 0f 59 c0          	mulss  xmm0,xmm0
100cb12d:	f3 0f 58 d1          	addss  xmm2,xmm1
100cb131:	0f 57 c9             	xorps  xmm1,xmm1
100cb134:	f3 0f 58 d0          	addss  xmm2,xmm0
100cb138:	0f 5a c2             	cvtps2pd xmm0,xmm2
100cb13b:	66 0f 2e c8          	ucomisd xmm1,xmm0
100cb13f:	77 06                	ja     0x100cb147
100cb141:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100cb145:	eb 05                	jmp    0x100cb14c
100cb147:	e8 44 0d 0a 00       	call   0x1016be90
100cb14c:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100cb150:	0f 2f 05 04 1f 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1f04
100cb157:	0f 86 d6 00 00 00    	jbe    0x100cb233
100cb15d:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
100cb161:	83 e8 00             	sub    eax,0x0
100cb164:	0f 84 88 00 00 00    	je     0x100cb1f2
100cb16a:	83 e8 01             	sub    eax,0x1
100cb16d:	74 42                	je     0x100cb1b1
100cb16f:	83 e8 01             	sub    eax,0x1
100cb172:	0f 85 bb 00 00 00    	jne    0x100cb233
100cb178:	56                   	push   esi
100cb179:	68 10 70 1d 10       	push   0x101d7010
100cb17e:	ff 74 24 44          	push   DWORD PTR [esp+0x44]
100cb182:	e8 a9 4c 00 00       	call   0x100cfe30
100cb187:	8b 47 24             	mov    eax,DWORD PTR [edi+0x24]
100cb18a:	83 c4 0c             	add    esp,0xc
100cb18d:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
100cb191:	03 c1                	add    eax,ecx
100cb193:	8b 74 24 48          	mov    esi,DWORD PTR [esp+0x48]
100cb197:	8b 54 24 5c          	mov    edx,DWORD PTR [esp+0x5c]
100cb19b:	8d 04 40             	lea    eax,[eax+eax*2]
100cb19e:	83 64 c6 10 fb       	and    DWORD PTR [esi+eax*8+0x10],0xfffffffb
100cb1a3:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100cb1a6:	89 90 a8 01 00 00    	mov    DWORD PTR [eax+0x1a8],edx
100cb1ac:	e9 6f 01 00 00       	jmp    0x100cb320
100cb1b1:	56                   	push   esi
100cb1b2:	68 f4 6f 1d 10       	push   0x101d6ff4
100cb1b7:	ff 74 24 44          	push   DWORD PTR [esp+0x44]
100cb1bb:	e8 70 4c 00 00       	call   0x100cfe30
100cb1c0:	8b 47 24             	mov    eax,DWORD PTR [edi+0x24]
100cb1c3:	83 c4 0c             	add    esp,0xc
100cb1c6:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
100cb1ca:	03 c1                	add    eax,ecx
100cb1cc:	8b 74 24 48          	mov    esi,DWORD PTR [esp+0x48]
100cb1d0:	8b 54 24 5c          	mov    edx,DWORD PTR [esp+0x5c]
100cb1d4:	c7 44 24 54 01 00 00 	mov    DWORD PTR [esp+0x54],0x1
100cb1db:	00 
100cb1dc:	8d 04 40             	lea    eax,[eax+eax*2]
100cb1df:	83 64 c6 10 f9       	and    DWORD PTR [esi+eax*8+0x10],0xfffffff9
100cb1e4:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100cb1e7:	89 90 a8 01 00 00    	mov    DWORD PTR [eax+0x1a8],edx
100cb1ed:	e9 2e 01 00 00       	jmp    0x100cb320
100cb1f2:	56                   	push   esi
100cb1f3:	68 d8 6f 1d 10       	push   0x101d6fd8
100cb1f8:	ff 74 24 44          	push   DWORD PTR [esp+0x44]
100cb1fc:	e8 2f 4c 00 00       	call   0x100cfe30
100cb201:	8b 47 24             	mov    eax,DWORD PTR [edi+0x24]
100cb204:	83 c4 0c             	add    esp,0xc
100cb207:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
100cb20b:	03 c1                	add    eax,ecx
100cb20d:	8b 74 24 48          	mov    esi,DWORD PTR [esp+0x48]
100cb211:	8b 54 24 5c          	mov    edx,DWORD PTR [esp+0x5c]
100cb215:	c7 44 24 54 01 00 00 	mov    DWORD PTR [esp+0x54],0x1
100cb21c:	00 
100cb21d:	8d 04 40             	lea    eax,[eax+eax*2]
100cb220:	83 64 c6 10 f8       	and    DWORD PTR [esi+eax*8+0x10],0xfffffff8
100cb225:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100cb228:	89 90 a8 01 00 00    	mov    DWORD PTR [eax+0x1a8],edx
100cb22e:	e9 ed 00 00 00       	jmp    0x100cb320
100cb233:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100cb236:	8b 54 24 5c          	mov    edx,DWORD PTR [esp+0x5c]
100cb23a:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
100cb23e:	8b 74 24 48          	mov    esi,DWORD PTR [esp+0x48]
100cb242:	89 90 a8 01 00 00    	mov    DWORD PTR [eax+0x1a8],edx
100cb248:	e9 d3 00 00 00       	jmp    0x100cb320
100cb24d:	f3 0f 10 41 0c       	movss  xmm0,DWORD PTR [ecx+0xc]
100cb252:	8d 84 24 00 01 00 00 	lea    eax,[esp+0x100]
100cb259:	0f 57 c9             	xorps  xmm1,xmm1
100cb25c:	f3 0f 58 c1          	addss  xmm0,xmm1
100cb260:	50                   	push   eax
100cb261:	8d 84 24 ec 00 00 00 	lea    eax,[esp+0xec]
100cb268:	f3 0f 11 84 24 ec 00 	movss  DWORD PTR [esp+0xec],xmm0
100cb26f:	00 00 
100cb271:	f3 0f 10 41 10       	movss  xmm0,DWORD PTR [ecx+0x10]
100cb276:	f3 0f 58 c1          	addss  xmm0,xmm1
100cb27a:	f3 0f 11 84 24 f0 00 	movss  DWORD PTR [esp+0xf0],xmm0
100cb281:	00 00 
100cb283:	f3 0f 10 41 14       	movss  xmm0,DWORD PTR [ecx+0x14]
100cb288:	f3 0f 58 05 28 97 1a 	addss  xmm0,DWORD PTR ds:0x101a9728
100cb28f:	10 
100cb290:	f3 0f 11 84 24 f4 00 	movss  DWORD PTR [esp+0xf4],xmm0
100cb297:	00 00 
100cb299:	f3 0f 10 07          	movss  xmm0,DWORD PTR [edi]
100cb29d:	f3 0f 58 c1          	addss  xmm0,xmm1
100cb2a1:	f3 0f 11 84 24 f8 00 	movss  DWORD PTR [esp+0xf8],xmm0
100cb2a8:	00 00 
100cb2aa:	f3 0f 10 47 04       	movss  xmm0,DWORD PTR [edi+0x4]
100cb2af:	f3 0f 58 c1          	addss  xmm0,xmm1
100cb2b3:	f3 0f 11 84 24 fc 00 	movss  DWORD PTR [esp+0xfc],xmm0
100cb2ba:	00 00 
100cb2bc:	f3 0f 10 47 08       	movss  xmm0,DWORD PTR [edi+0x8]
100cb2c1:	f3 0f 58 05 28 97 1a 	addss  xmm0,DWORD PTR ds:0x101a9728
100cb2c8:	10 
100cb2c9:	f3 0f 11 84 24 00 01 	movss  DWORD PTR [esp+0x100],xmm0
100cb2d0:	00 00 
100cb2d2:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
100cb2d8:	6a 02                	push   0x2
100cb2da:	6a 01                	push   0x1
100cb2dc:	50                   	push   eax
100cb2dd:	8d 84 24 08 01 00 00 	lea    eax,[esp+0x108]
100cb2e4:	50                   	push   eax
100cb2e5:	e8 f6 f4 04 00       	call   0x1011a7e0
100cb2ea:	83 c4 18             	add    esp,0x18
100cb2ed:	83 bc 24 04 01 00 00 	cmp    DWORD PTR [esp+0x104],0x0
100cb2f4:	00 
100cb2f5:	75 12                	jne    0x100cb309
100cb2f7:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
100cb2fe:	10 
100cb2ff:	0f 2f 84 24 10 01 00 	comiss xmm0,DWORD PTR [esp+0x110]
100cb306:	00 
100cb307:	76 13                	jbe    0x100cb31c
100cb309:	8b 47 24             	mov    eax,DWORD PTR [edi+0x24]
100cb30c:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
100cb310:	03 c1                	add    eax,ecx
100cb312:	8d 04 40             	lea    eax,[eax+eax*2]
100cb315:	83 64 c6 10 f7       	and    DWORD PTR [esi+eax*8+0x10],0xfffffff7
100cb31a:	eb 04                	jmp    0x100cb320
100cb31c:	8b 4c 24 44          	mov    ecx,DWORD PTR [esp+0x44]
100cb320:	8b 44 24 50          	mov    eax,DWORD PTR [esp+0x50]
100cb324:	8b 54 24 54          	mov    edx,DWORD PTR [esp+0x54]
100cb328:	40                   	inc    eax
100cb329:	89 44 24 50          	mov    DWORD PTR [esp+0x50],eax
100cb32d:	83 f8 04             	cmp    eax,0x4
100cb330:	0f 8c 7a fa ff ff    	jl     0x100cadb0
100cb336:	8b 47 24             	mov    eax,DWORD PTR [edi+0x24]
100cb339:	03 c1                	add    eax,ecx
100cb33b:	8d 04 40             	lea    eax,[eax+eax*2]
100cb33e:	83 7c c6 10 00       	cmp    DWORD PTR [esi+eax*8+0x10],0x0
100cb343:	75 57                	jne    0x100cb39c
100cb345:	ff 74 c6 04          	push   DWORD PTR [esi+eax*8+0x4]
100cb349:	68 2c 70 1d 10       	push   0x101d702c
100cb34e:	ff 74 24 44          	push   DWORD PTR [esp+0x44]
100cb352:	e8 d9 4a 00 00       	call   0x100cfe30
100cb357:	8b 47 20             	mov    eax,DWORD PTR [edi+0x20]
100cb35a:	03 47 24             	add    eax,DWORD PTR [edi+0x24]
100cb35d:	68 50 70 1d 10       	push   0x101d7050
100cb362:	ff 74 24 4c          	push   DWORD PTR [esp+0x4c]
100cb366:	8d 14 40             	lea    edx,[eax+eax*2]
100cb369:	8b 44 24 58          	mov    eax,DWORD PTR [esp+0x58]
100cb36d:	03 47 24             	add    eax,DWORD PTR [edi+0x24]
100cb370:	0f 10 44 d6 e8       	movups xmm0,XMMWORD PTR [esi+edx*8-0x18]
100cb375:	8d 04 40             	lea    eax,[eax+eax*2]
100cb378:	0f 11 04 c6          	movups XMMWORD PTR [esi+eax*8],xmm0
100cb37c:	f3 0f 7e 44 d6 f8    	movq   xmm0,QWORD PTR [esi+edx*8-0x8]
100cb382:	66 0f d6 44 c6 10    	movq   QWORD PTR [esi+eax*8+0x10],xmm0
100cb388:	e8 a3 4a 00 00       	call   0x100cfe30
100cb38d:	8b 4c 24 58          	mov    ecx,DWORD PTR [esp+0x58]
100cb391:	83 c4 14             	add    esp,0x14
100cb394:	ff 4f 20             	dec    DWORD PTR [edi+0x20]
100cb397:	ff 4c 24 58          	dec    DWORD PTR [esp+0x58]
100cb39b:	49                   	dec    ecx
100cb39c:	8b 47 20             	mov    eax,DWORD PTR [edi+0x20]
100cb39f:	41                   	inc    ecx
100cb3a0:	89 4c 24 44          	mov    DWORD PTR [esp+0x44],ecx
100cb3a4:	3b c8                	cmp    ecx,eax
100cb3a6:	0f 8c e4 f9 ff ff    	jl     0x100cad90
100cb3ac:	8b 44 24 4c          	mov    eax,DWORD PTR [esp+0x4c]
100cb3b0:	8b 4c 24 40          	mov    ecx,DWORD PTR [esp+0x40]
100cb3b4:	40                   	inc    eax
100cb3b5:	83 c1 58             	add    ecx,0x58
100cb3b8:	89 44 24 4c          	mov    DWORD PTR [esp+0x4c],eax
100cb3bc:	89 4c 24 40          	mov    DWORD PTR [esp+0x40],ecx
100cb3c0:	3b 05 c8 38 22 10    	cmp    eax,DWORD PTR ds:0x102238c8
100cb3c6:	0f 8c 84 f9 ff ff    	jl     0x100cad50
100cb3cc:	8b 7c 24 3c          	mov    edi,DWORD PTR [esp+0x3c]
100cb3d0:	68 60 70 1d 10       	push   0x101d7060
100cb3d5:	57                   	push   edi
100cb3d6:	e8 55 4a 00 00       	call   0x100cfe30
100cb3db:	83 c4 08             	add    esp,0x8
100cb3de:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100cb3e3:	57                   	push   edi
100cb3e4:	56                   	push   esi
100cb3e5:	e8 d6 37 00 00       	call   0x100cebc0
100cb3ea:	8b 5c 24 58          	mov    ebx,DWORD PTR [esp+0x58]
100cb3ee:	2b d8                	sub    ebx,eax
100cb3f0:	53                   	push   ebx
100cb3f1:	6a 18                	push   0x18
100cb3f3:	89 5c 24 60          	mov    DWORD PTR [esp+0x60],ebx
100cb3f7:	e8 3a 61 0a 00       	call   0x10171536
100cb3fc:	83 c4 08             	add    esp,0x8
100cb3ff:	a3 c0 38 22 10       	mov    ds:0x102238c0,eax
100cb404:	85 c0                	test   eax,eax
100cb406:	75 66                	jne    0x100cb46e
100cb408:	68 b4 70 1d 10       	push   0x101d70b4
100cb40d:	6a 02                	push   0x2
100cb40f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cb415:	56                   	push   esi
100cb416:	e8 b6 60 0a 00       	call   0x101714d1
100cb41b:	57                   	push   edi
100cb41c:	e8 40 49 0a 00       	call   0x1016fd61
100cb421:	83 c4 10             	add    esp,0x10
100cb424:	5f                   	pop    edi
100cb425:	5e                   	pop    esi
100cb426:	5b                   	pop    ebx
100cb427:	8b 8c 24 70 02 00 00 	mov    ecx,DWORD PTR [esp+0x270]
100cb42e:	33 cc                	xor    ecx,esp
100cb430:	e8 7e 27 07 00       	call   0x1013dbb3
100cb435:	8b e5                	mov    esp,ebp
100cb437:	5d                   	pop    ebp
100cb438:	c3                   	ret
100cb439:	51                   	push   ecx
100cb43a:	68 c4 6f 1d 10       	push   0x101d6fc4
100cb43f:	6a 02                	push   0x2
100cb441:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cb447:	56                   	push   esi
100cb448:	e8 84 60 0a 00       	call   0x101714d1
100cb44d:	ff 74 24 4c          	push   DWORD PTR [esp+0x4c]
100cb451:	e8 0b 49 0a 00       	call   0x1016fd61
100cb456:	83 c4 14             	add    esp,0x14
100cb459:	5f                   	pop    edi
100cb45a:	5e                   	pop    esi
100cb45b:	5b                   	pop    ebx
100cb45c:	8b 8c 24 70 02 00 00 	mov    ecx,DWORD PTR [esp+0x270]
100cb463:	33 cc                	xor    ecx,esp
100cb465:	e8 49 27 07 00       	call   0x1013dbb3
100cb46a:	8b e5                	mov    esp,ebp
100cb46c:	5d                   	pop    ebp
100cb46d:	c3                   	ret
100cb46e:	33 d2                	xor    edx,edx
100cb470:	89 1d cc 38 22 10    	mov    DWORD PTR ds:0x102238cc,ebx
100cb476:	33 db                	xor    ebx,ebx
100cb478:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
100cb47c:	39 15 c8 38 22 10    	cmp    DWORD PTR ds:0x102238c8,edx
100cb482:	0f 8e 87 00 00 00    	jle    0x100cb50f
100cb488:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cb48d:	33 c9                	xor    ecx,ecx
100cb48f:	89 4c 24 4c          	mov    DWORD PTR [esp+0x4c],ecx
100cb493:	8b 7c 01 24          	mov    edi,DWORD PTR [ecx+eax*1+0x24]
100cb497:	89 5c 01 24          	mov    DWORD PTR [ecx+eax*1+0x24],ebx
100cb49b:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cb4a0:	89 7c 24 5c          	mov    DWORD PTR [esp+0x5c],edi
100cb4a4:	33 ff                	xor    edi,edi
100cb4a6:	39 7c 01 20          	cmp    DWORD PTR [ecx+eax*1+0x20],edi
100cb4aa:	7e 4b                	jle    0x100cb4f7
100cb4ac:	8b 44 24 5c          	mov    eax,DWORD PTR [esp+0x5c]
100cb4b0:	8d 0c 5b             	lea    ecx,[ebx+ebx*2]
100cb4b3:	c1 e1 03             	shl    ecx,0x3
100cb4b6:	8d 04 40             	lea    eax,[eax+eax*2]
100cb4b9:	8d 14 c6             	lea    edx,[esi+eax*8]
100cb4bc:	8b 74 24 4c          	mov    esi,DWORD PTR [esp+0x4c]
100cb4c0:	a1 c0 38 22 10       	mov    eax,ds:0x102238c0
100cb4c5:	8d 49 18             	lea    ecx,[ecx+0x18]
100cb4c8:	0f 10 02             	movups xmm0,XMMWORD PTR [edx]
100cb4cb:	47                   	inc    edi
100cb4cc:	8d 52 18             	lea    edx,[edx+0x18]
100cb4cf:	43                   	inc    ebx
100cb4d0:	0f 11 44 01 e8       	movups XMMWORD PTR [ecx+eax*1-0x18],xmm0
100cb4d5:	f3 0f 7e 42 f8       	movq   xmm0,QWORD PTR [edx-0x8]
100cb4da:	66 0f d6 44 01 f8    	movq   QWORD PTR [ecx+eax*1-0x8],xmm0
100cb4e0:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cb4e5:	3b 7c 06 20          	cmp    edi,DWORD PTR [esi+eax*1+0x20]
100cb4e9:	7c d5                	jl     0x100cb4c0
100cb4eb:	8b 74 24 48          	mov    esi,DWORD PTR [esp+0x48]
100cb4ef:	8b 4c 24 4c          	mov    ecx,DWORD PTR [esp+0x4c]
100cb4f3:	8b 54 24 40          	mov    edx,DWORD PTR [esp+0x40]
100cb4f7:	42                   	inc    edx
100cb4f8:	83 c1 58             	add    ecx,0x58
100cb4fb:	89 54 24 40          	mov    DWORD PTR [esp+0x40],edx
100cb4ff:	89 4c 24 4c          	mov    DWORD PTR [esp+0x4c],ecx
100cb503:	3b 15 c8 38 22 10    	cmp    edx,DWORD PTR ds:0x102238c8
100cb509:	7c 88                	jl     0x100cb493
100cb50b:	8b 7c 24 3c          	mov    edi,DWORD PTR [esp+0x3c]
100cb50f:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100cb514:	e8 f7 3d 00 00       	call   0x100cf310
100cb519:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100cb51e:	e8 9d f2 ff ff       	call   0x100ca7c0
100cb523:	68 d0 70 1d 10       	push   0x101d70d0
100cb528:	57                   	push   edi
100cb529:	c7 44 24 48 01 00 00 	mov    DWORD PTR [esp+0x48],0x1
100cb530:	00 
100cb531:	e8 fa 48 00 00       	call   0x100cfe30
100cb536:	68 24 71 1d 10       	push   0x101d7124
100cb53b:	57                   	push   edi
100cb53c:	e8 ef 48 00 00       	call   0x100cfe30
100cb541:	8b 0d c8 38 22 10    	mov    ecx,DWORD PTR ds:0x102238c8
100cb547:	83 c4 10             	add    esp,0x10
100cb54a:	85 c9                	test   ecx,ecx
100cb54c:	0f 8e a5 00 00 00    	jle    0x100cb5f7
100cb552:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cb557:	33 db                	xor    ebx,ebx
100cb559:	33 f6                	xor    esi,esi
100cb55b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100cb560:	33 ff                	xor    edi,edi
100cb562:	39 7c 03 20          	cmp    DWORD PTR [ebx+eax*1+0x20],edi
100cb566:	7e 74                	jle    0x100cb5dc
100cb568:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100cb56f:	00 
100cb570:	8b 44 03 24          	mov    eax,DWORD PTR [ebx+eax*1+0x24]
100cb574:	8d 4c 24 5c          	lea    ecx,[esp+0x5c]
100cb578:	03 c7                	add    eax,edi
100cb57a:	51                   	push   ecx
100cb57b:	56                   	push   esi
100cb57c:	8d 0c 40             	lea    ecx,[eax+eax*2]
100cb57f:	a1 c0 38 22 10       	mov    eax,ds:0x102238c0
100cb584:	ff 74 c8 04          	push   DWORD PTR [eax+ecx*8+0x4]
100cb588:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100cb58d:	e8 1e 27 00 00       	call   0x100cdcb0
100cb592:	83 7c 24 5c 00       	cmp    DWORD PTR [esp+0x5c],0x0
100cb597:	7d 31                	jge    0x100cb5ca
100cb599:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cb59e:	56                   	push   esi
100cb59f:	c7 44 24 44 00 00 00 	mov    DWORD PTR [esp+0x44],0x0
100cb5a6:	00 
100cb5a7:	8b 44 03 24          	mov    eax,DWORD PTR [ebx+eax*1+0x24]
100cb5ab:	03 c7                	add    eax,edi
100cb5ad:	8d 0c 40             	lea    ecx,[eax+eax*2]
100cb5b0:	a1 c0 38 22 10       	mov    eax,ds:0x102238c0
100cb5b5:	ff 74 c8 04          	push   DWORD PTR [eax+ecx*8+0x4]
100cb5b9:	68 34 71 1d 10       	push   0x101d7134
100cb5be:	ff 74 24 48          	push   DWORD PTR [esp+0x48]
100cb5c2:	e8 69 48 00 00       	call   0x100cfe30
100cb5c7:	83 c4 10             	add    esp,0x10
100cb5ca:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cb5cf:	47                   	inc    edi
100cb5d0:	3b 7c 03 20          	cmp    edi,DWORD PTR [ebx+eax*1+0x20]
100cb5d4:	7c 9a                	jl     0x100cb570
100cb5d6:	8b 0d c8 38 22 10    	mov    ecx,DWORD PTR ds:0x102238c8
100cb5dc:	46                   	inc    esi
100cb5dd:	83 c3 58             	add    ebx,0x58
100cb5e0:	3b f1                	cmp    esi,ecx
100cb5e2:	0f 8c 78 ff ff ff    	jl     0x100cb560
100cb5e8:	83 7c 24 40 00       	cmp    DWORD PTR [esp+0x40],0x0
100cb5ed:	8b 74 24 48          	mov    esi,DWORD PTR [esp+0x48]
100cb5f1:	8b 7c 24 3c          	mov    edi,DWORD PTR [esp+0x3c]
100cb5f5:	74 0e                	je     0x100cb605
100cb5f7:	68 6c 71 1d 10       	push   0x101d716c
100cb5fc:	57                   	push   edi
100cb5fd:	e8 2e 48 00 00       	call   0x100cfe30
100cb602:	83 c4 08             	add    esp,0x8
100cb605:	68 20 6f 1d 10       	push   0x101d6f20
100cb60a:	57                   	push   edi
100cb60b:	e8 20 48 00 00       	call   0x100cfe30
100cb610:	68 d0 70 1d 10       	push   0x101d70d0
100cb615:	57                   	push   edi
100cb616:	e8 15 48 00 00       	call   0x100cfe30
100cb61b:	8b 5c 24 68          	mov    ebx,DWORD PTR [esp+0x68]
100cb61f:	53                   	push   ebx
100cb620:	68 8c 71 1d 10       	push   0x101d718c
100cb625:	57                   	push   edi
100cb626:	e8 05 48 00 00       	call   0x100cfe30
100cb62b:	68 20 6f 1d 10       	push   0x101d6f20
100cb630:	57                   	push   edi
100cb631:	e8 fa 47 00 00       	call   0x100cfe30
100cb636:	8d 04 5b             	lea    eax,[ebx+ebx*2]
100cb639:	c1 e0 03             	shl    eax,0x3
100cb63c:	50                   	push   eax
100cb63d:	68 b8 71 1d 10       	push   0x101d71b8
100cb642:	57                   	push   edi
100cb643:	e8 e8 47 00 00       	call   0x100cfe30
100cb648:	68 20 6f 1d 10       	push   0x101d6f20
100cb64d:	57                   	push   edi
100cb64e:	e8 dd 47 00 00       	call   0x100cfe30
100cb653:	53                   	push   ebx
100cb654:	ff 35 c8 38 22 10    	push   DWORD PTR ds:0x102238c8
100cb65a:	68 d4 71 1d 10       	push   0x101d71d4
100cb65f:	6a 02                	push   0x2
100cb661:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cb667:	83 c4 48             	add    esp,0x48
100cb66a:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100cb66f:	e8 cc 00 00 00       	call   0x100cb740
100cb674:	8b 3d c8 38 22 10    	mov    edi,DWORD PTR ds:0x102238c8
100cb67a:	33 d2                	xor    edx,edx
100cb67c:	85 ff                	test   edi,edi
100cb67e:	7e 31                	jle    0x100cb6b1
100cb680:	33 c0                	xor    eax,eax
100cb682:	8b 0d bc 38 22 10    	mov    ecx,DWORD PTR ds:0x102238bc
100cb688:	f6 44 08 1c 01       	test   BYTE PTR [eax+ecx*1+0x1c],0x1
100cb68d:	74 1a                	je     0x100cb6a9
100cb68f:	f3 0f 10 44 08 08    	movss  xmm0,DWORD PTR [eax+ecx*1+0x8]
100cb695:	f3 0f 5c 05 d8 1e 1a 	subss  xmm0,DWORD PTR ds:0x101a1ed8
100cb69c:	10 
100cb69d:	f3 0f 11 44 08 08    	movss  DWORD PTR [eax+ecx*1+0x8],xmm0
100cb6a3:	8b 3d c8 38 22 10    	mov    edi,DWORD PTR ds:0x102238c8
100cb6a9:	42                   	inc    edx
100cb6aa:	83 c0 58             	add    eax,0x58
100cb6ad:	3b d7                	cmp    edx,edi
100cb6af:	7c d1                	jl     0x100cb682
100cb6b1:	56                   	push   esi
100cb6b2:	e8 1a 5e 0a 00       	call   0x101714d1
100cb6b7:	ff 74 24 40          	push   DWORD PTR [esp+0x40]
100cb6bb:	e8 a1 46 0a 00       	call   0x1016fd61
100cb6c0:	83 c4 08             	add    esp,0x8
100cb6c3:	c7 05 b0 38 22 10 01 	mov    DWORD PTR ds:0x102238b0,0x1
100cb6ca:	00 00 00 
100cb6cd:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100cb6d2:	c7 05 b4 38 22 10 01 	mov    DWORD PTR ds:0x102238b4,0x1
100cb6d9:	00 00 00 
100cb6dc:	c7 05 b8 38 22 10 00 	mov    DWORD PTR ds:0x102238b8,0x0
100cb6e3:	00 00 00 
100cb6e6:	e8 f5 08 00 00       	call   0x100cbfe0
100cb6eb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100cb6f0:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100cb6f5:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100cb6fb:	03 50 0c             	add    edx,DWORD PTR [eax+0xc]
100cb6fe:	52                   	push   edx
100cb6ff:	e8 9c 14 00 00       	call   0x100ccba0
100cb704:	68 f0 71 1d 10       	push   0x101d71f0
100cb709:	6a 01                	push   0x1
100cb70b:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cb711:	8b 8c 24 84 02 00 00 	mov    ecx,DWORD PTR [esp+0x284]
100cb718:	83 c4 08             	add    esp,0x8
100cb71b:	5f                   	pop    edi
100cb71c:	5e                   	pop    esi
100cb71d:	5b                   	pop    ebx
100cb71e:	33 cc                	xor    ecx,esp
100cb720:	e8 8e 24 07 00       	call   0x1013dbb3
100cb725:	8b e5                	mov    esp,ebp
100cb727:	5d                   	pop    ebp
100cb728:	c3                   	ret
