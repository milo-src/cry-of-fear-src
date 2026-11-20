
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101218a0 <.text+0x1208a0>:
101218a0:	55                   	push   ebp
101218a1:	8b ec                	mov    ebp,esp
101218a3:	81 ec 10 01 00 00    	sub    esp,0x110
101218a9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
101218ae:	33 c5                	xor    eax,ebp
101218b0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
101218b3:	56                   	push   esi
101218b4:	57                   	push   edi
101218b5:	33 c0                	xor    eax,eax
101218b7:	c7 05 68 1f 23 10 00 	mov    DWORD PTR ds:0x10231f68,0x0
101218be:	00 00 00 
101218c1:	b9 40 00 00 00       	mov    ecx,0x40
101218c6:	bf 70 1f 23 10       	mov    edi,0x10231f70
101218cb:	f3 ab                	rep stos DWORD PTR es:[edi],eax
101218cd:	b9 40 00 00 00       	mov    ecx,0x40
101218d2:	bf 70 20 23 10       	mov    edi,0x10232070
101218d7:	f3 ab                	rep stos DWORD PTR es:[edi],eax
101218d9:	b9 40 00 00 00       	mov    ecx,0x40
101218de:	bf 70 21 23 10       	mov    edi,0x10232170
101218e3:	c7 05 6c 1f 23 10 00 	mov    DWORD PTR ds:0x10231f6c,0x0
101218ea:	00 00 00 
101218ed:	c7 05 70 22 23 10 00 	mov    DWORD PTR ds:0x10232270,0x0
101218f4:	00 00 00 
101218f7:	c7 05 74 22 23 10 00 	mov    DWORD PTR ds:0x10232274,0x0
101218fe:	00 00 00 
10121901:	f3 ab                	rep stos DWORD PTR es:[edi],eax
10121903:	38 45 08             	cmp    BYTE PTR [ebp+0x8],al
10121906:	74 2e                	je     0x10121936
10121908:	0f 10 05 2c 6e 1e 10 	movups xmm0,XMMWORD PTR ds:0x101e6e2c
1012190f:	a0 44 6e 1e 10       	mov    al,ds:0x101e6e44
10121914:	88 85 10 ff ff ff    	mov    BYTE PTR [ebp-0xf0],al
1012191a:	0f 11 85 f8 fe ff ff 	movups XMMWORD PTR [ebp-0x108],xmm0
10121921:	f3 0f 7e 05 3c 6e 1e 	movq   xmm0,QWORD PTR ds:0x101e6e3c
10121928:	10 
10121929:	66 0f d6 85 08 ff ff 	movq   QWORD PTR [ebp-0xf8],xmm0
10121930:	ff 
10121931:	e9 85 00 00 00       	jmp    0x101219bb
10121936:	a1 b4 73 1d 10       	mov    eax,ds:0x101d73b4
1012193b:	89 85 f8 fe ff ff    	mov    DWORD PTR [ebp-0x108],eax
10121941:	66 a1 b8 73 1d 10    	mov    ax,ds:0x101d73b8
10121947:	66 89 85 fc fe ff ff 	mov    WORD PTR [ebp-0x104],ax
1012194e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10121953:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
10121959:	03 50 0c             	add    edx,DWORD PTR [eax+0xc]
1012195c:	8b f2                	mov    esi,edx
1012195e:	66 90                	xchg   ax,ax
10121960:	8a 02                	mov    al,BYTE PTR [edx]
10121962:	42                   	inc    edx
10121963:	84 c0                	test   al,al
10121965:	75 f9                	jne    0x10121960
10121967:	8d bd f8 fe ff ff    	lea    edi,[ebp-0x108]
1012196d:	2b d6                	sub    edx,esi
1012196f:	4f                   	dec    edi
10121970:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
10121973:	47                   	inc    edi
10121974:	84 c0                	test   al,al
10121976:	75 f8                	jne    0x10121970
10121978:	8b ca                	mov    ecx,edx
1012197a:	c1 e9 02             	shr    ecx,0x2
1012197d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1012197f:	8b ca                	mov    ecx,edx
10121981:	83 e1 03             	and    ecx,0x3
10121984:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
10121986:	8d 8d f8 fe ff ff    	lea    ecx,[ebp-0x108]
1012198c:	49                   	dec    ecx
1012198d:	0f 1f 00             	nop    DWORD PTR [eax]
10121990:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
10121993:	8d 49 01             	lea    ecx,[ecx+0x1]
10121996:	84 c0                	test   al,al
10121998:	75 f6                	jne    0x10121990
1012199a:	a1 48 6e 1e 10       	mov    eax,ds:0x101e6e48
1012199f:	89 01                	mov    DWORD PTR [ecx],eax
101219a1:	a1 4c 6e 1e 10       	mov    eax,ds:0x101e6e4c
101219a6:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
101219a9:	a1 50 6e 1e 10       	mov    eax,ds:0x101e6e50
101219ae:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
101219b1:	66 a1 54 6e 1e 10    	mov    ax,ds:0x101e6e54
101219b7:	66 89 41 0c          	mov    WORD PTR [ecx+0xc],ax
101219bb:	8d 85 f4 fe ff ff    	lea    eax,[ebp-0x10c]
101219c1:	50                   	push   eax
101219c2:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
101219c8:	50                   	push   eax
101219c9:	ff 15 c4 30 22 10    	call   DWORD PTR ds:0x102230c4
101219cf:	8b f8                	mov    edi,eax
101219d1:	83 c4 08             	add    esp,0x8
101219d4:	85 ff                	test   edi,edi
101219d6:	0f 84 ff 02 00 00    	je     0x10121cdb
101219dc:	83 bd f4 fe ff ff 00 	cmp    DWORD PTR [ebp-0x10c],0x0
101219e3:	0f 84 f2 02 00 00    	je     0x10121cdb
101219e9:	57                   	push   edi
101219ea:	e8 f1 53 fa ff       	call   0x100c6de0
101219ef:	ba a8 31 22 10       	mov    edx,0x102231a8
101219f4:	8b f0                	mov    esi,eax
101219f6:	83 c4 04             	add    esp,0x4
101219f9:	8d 42 01             	lea    eax,[edx+0x1]
101219fc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10121a00:	8a 0a                	mov    cl,BYTE PTR [edx]
10121a02:	42                   	inc    edx
10121a03:	84 c9                	test   cl,cl
10121a05:	75 f9                	jne    0x10121a00
10121a07:	2b d0                	sub    edx,eax
10121a09:	0f 84 06 02 00 00    	je     0x10121c15
10121a0f:	90                   	nop
10121a10:	b9 58 6e 1e 10       	mov    ecx,0x101e6e58
10121a15:	b8 a8 31 22 10       	mov    eax,0x102231a8
10121a1a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10121a20:	8a 10                	mov    dl,BYTE PTR [eax]
10121a22:	3a 11                	cmp    dl,BYTE PTR [ecx]
10121a24:	75 1a                	jne    0x10121a40
10121a26:	84 d2                	test   dl,dl
10121a28:	74 12                	je     0x10121a3c
10121a2a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10121a2d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10121a30:	75 0e                	jne    0x10121a40
10121a32:	83 c0 02             	add    eax,0x2
10121a35:	83 c1 02             	add    ecx,0x2
10121a38:	84 d2                	test   dl,dl
10121a3a:	75 e4                	jne    0x10121a20
10121a3c:	33 c0                	xor    eax,eax
10121a3e:	eb 05                	jmp    0x10121a45
10121a40:	1b c0                	sbb    eax,eax
10121a42:	83 c8 01             	or     eax,0x1
10121a45:	85 c0                	test   eax,eax
10121a47:	0f 85 cd 02 00 00    	jne    0x10121d1a
10121a4d:	56                   	push   esi
10121a4e:	e8 8d 53 fa ff       	call   0x100c6de0
10121a53:	83 c4 04             	add    esp,0x4
10121a56:	80 3d a8 31 22 10 7b 	cmp    BYTE PTR ds:0x102231a8,0x7b
10121a5d:	0f 85 88 02 00 00    	jne    0x10121ceb
10121a63:	50                   	push   eax
10121a64:	e8 77 53 fa ff       	call   0x100c6de0
10121a69:	83 c4 04             	add    esp,0x4
10121a6c:	8b f0                	mov    esi,eax
10121a6e:	80 3d a8 31 22 10 7d 	cmp    BYTE PTR ds:0x102231a8,0x7d
10121a75:	0f 84 72 01 00 00    	je     0x10121bed
10121a7b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
10121a80:	ba a8 31 22 10       	mov    edx,0x102231a8
10121a85:	b9 cc 84 1a 10       	mov    ecx,0x101a84cc
10121a8a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10121a90:	8a 01                	mov    al,BYTE PTR [ecx]
10121a92:	3a 02                	cmp    al,BYTE PTR [edx]
10121a94:	75 1a                	jne    0x10121ab0
10121a96:	84 c0                	test   al,al
10121a98:	74 12                	je     0x10121aac
10121a9a:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
10121a9d:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
10121aa0:	75 0e                	jne    0x10121ab0
10121aa2:	83 c1 02             	add    ecx,0x2
10121aa5:	83 c2 02             	add    edx,0x2
10121aa8:	84 c0                	test   al,al
10121aaa:	75 e4                	jne    0x10121a90
10121aac:	33 c0                	xor    eax,eax
10121aae:	eb 05                	jmp    0x10121ab5
10121ab0:	1b c0                	sbb    eax,eax
10121ab2:	83 c8 01             	or     eax,0x1
10121ab5:	85 c0                	test   eax,eax
10121ab7:	75 2e                	jne    0x10121ae7
10121ab9:	56                   	push   esi
10121aba:	e8 21 53 fa ff       	call   0x100c6de0
10121abf:	ff 05 6c 1f 23 10    	inc    DWORD PTR ds:0x10231f6c
10121ac5:	8b f0                	mov    esi,eax
10121ac7:	68 a8 31 22 10       	push   0x102231a8
10121acc:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10121ad2:	8b 0d 6c 1f 23 10    	mov    ecx,DWORD PTR ds:0x10231f6c
10121ad8:	83 c4 08             	add    esp,0x8
10121adb:	89 04 8d 70 1f 23 10 	mov    DWORD PTR [ecx*4+0x10231f70],eax
10121ae2:	e9 ee 00 00 00       	jmp    0x10121bd5
10121ae7:	b9 a8 31 22 10       	mov    ecx,0x102231a8
10121aec:	b8 fc 6e 1e 10       	mov    eax,0x101e6efc
10121af1:	8a 10                	mov    dl,BYTE PTR [eax]
10121af3:	3a 11                	cmp    dl,BYTE PTR [ecx]
10121af5:	75 1a                	jne    0x10121b11
10121af7:	84 d2                	test   dl,dl
10121af9:	74 12                	je     0x10121b0d
10121afb:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10121afe:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10121b01:	75 0e                	jne    0x10121b11
10121b03:	83 c0 02             	add    eax,0x2
10121b06:	83 c1 02             	add    ecx,0x2
10121b09:	84 d2                	test   dl,dl
10121b0b:	75 e4                	jne    0x10121af1
10121b0d:	33 c0                	xor    eax,eax
10121b0f:	eb 05                	jmp    0x10121b16
10121b11:	1b c0                	sbb    eax,eax
10121b13:	83 c8 01             	or     eax,0x1
10121b16:	85 c0                	test   eax,eax
10121b18:	75 2e                	jne    0x10121b48
10121b1a:	56                   	push   esi
10121b1b:	e8 c0 52 fa ff       	call   0x100c6de0
10121b20:	ff 05 70 22 23 10    	inc    DWORD PTR ds:0x10232270
10121b26:	8b f0                	mov    esi,eax
10121b28:	68 a8 31 22 10       	push   0x102231a8
10121b2d:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10121b33:	8b 0d 70 22 23 10    	mov    ecx,DWORD PTR ds:0x10232270
10121b39:	83 c4 08             	add    esp,0x8
10121b3c:	89 04 8d 70 20 23 10 	mov    DWORD PTR [ecx*4+0x10232070],eax
10121b43:	e9 8d 00 00 00       	jmp    0x10121bd5
10121b48:	b8 a8 31 22 10       	mov    eax,0x102231a8
10121b4d:	b9 04 6f 1e 10       	mov    ecx,0x101e6f04
10121b52:	8a 11                	mov    dl,BYTE PTR [ecx]
10121b54:	3a 10                	cmp    dl,BYTE PTR [eax]
10121b56:	75 1a                	jne    0x10121b72
10121b58:	84 d2                	test   dl,dl
10121b5a:	74 12                	je     0x10121b6e
10121b5c:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
10121b5f:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
10121b62:	75 0e                	jne    0x10121b72
10121b64:	83 c1 02             	add    ecx,0x2
10121b67:	83 c0 02             	add    eax,0x2
10121b6a:	84 d2                	test   dl,dl
10121b6c:	75 e4                	jne    0x10121b52
10121b6e:	33 c0                	xor    eax,eax
10121b70:	eb 05                	jmp    0x10121b77
10121b72:	1b c0                	sbb    eax,eax
10121b74:	83 c8 01             	or     eax,0x1
10121b77:	85 c0                	test   eax,eax
10121b79:	75 2b                	jne    0x10121ba6
10121b7b:	56                   	push   esi
10121b7c:	e8 5f 52 fa ff       	call   0x100c6de0
10121b81:	ff 05 74 22 23 10    	inc    DWORD PTR ds:0x10232274
10121b87:	8b f0                	mov    esi,eax
10121b89:	68 a8 31 22 10       	push   0x102231a8
10121b8e:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10121b94:	8b 0d 74 22 23 10    	mov    ecx,DWORD PTR ds:0x10232274
10121b9a:	83 c4 08             	add    esp,0x8
10121b9d:	89 04 8d 70 21 23 10 	mov    DWORD PTR [ecx*4+0x10232170],eax
10121ba4:	eb 2f                	jmp    0x10121bd5
10121ba6:	68 74 17 1b 10       	push   0x101b1774
10121bab:	6a 01                	push   0x1
10121bad:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10121bb3:	68 a8 31 22 10       	push   0x102231a8
10121bb8:	68 0c 6f 1e 10       	push   0x101e6f0c
10121bbd:	6a 01                	push   0x1
10121bbf:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10121bc5:	68 74 17 1b 10       	push   0x101b1774
10121bca:	6a 01                	push   0x1
10121bcc:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10121bd2:	83 c4 1c             	add    esp,0x1c
10121bd5:	56                   	push   esi
10121bd6:	e8 05 52 fa ff       	call   0x100c6de0
10121bdb:	83 c4 04             	add    esp,0x4
10121bde:	8b f0                	mov    esi,eax
10121be0:	80 3d a8 31 22 10 7d 	cmp    BYTE PTR ds:0x102231a8,0x7d
10121be7:	0f 85 93 fe ff ff    	jne    0x10121a80
10121bed:	ff 05 68 1f 23 10    	inc    DWORD PTR ds:0x10231f68
10121bf3:	56                   	push   esi
10121bf4:	e8 e7 51 fa ff       	call   0x100c6de0
10121bf9:	b9 a8 31 22 10       	mov    ecx,0x102231a8
10121bfe:	83 c4 04             	add    esp,0x4
10121c01:	8b f0                	mov    esi,eax
10121c03:	8d 51 01             	lea    edx,[ecx+0x1]
10121c06:	8a 01                	mov    al,BYTE PTR [ecx]
10121c08:	41                   	inc    ecx
10121c09:	84 c0                	test   al,al
10121c0b:	75 f9                	jne    0x10121c06
10121c0d:	2b ca                	sub    ecx,edx
10121c0f:	0f 85 fb fd ff ff    	jne    0x10121a10
10121c15:	57                   	push   edi
10121c16:	ff 15 c8 30 22 10    	call   DWORD PTR ds:0x102230c8
10121c1c:	a1 6c 1f 23 10       	mov    eax,ds:0x10231f6c
10121c21:	be 01 00 00 00       	mov    esi,0x1
10121c26:	83 c4 04             	add    esp,0x4
10121c29:	3b c6                	cmp    eax,esi
10121c2b:	7c 2e                	jl     0x10121c5b
10121c2d:	0f 1f 00             	nop    DWORD PTR [eax]
10121c30:	8b 0c b5 70 1f 23 10 	mov    ecx,DWORD PTR [esi*4+0x10231f70]
10121c37:	85 c9                	test   ecx,ecx
10121c39:	74 1b                	je     0x10121c56
10121c3b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10121c40:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10121c46:	03 c1                	add    eax,ecx
10121c48:	50                   	push   eax
10121c49:	e8 42 4d ff ff       	call   0x10116990
10121c4e:	a1 6c 1f 23 10       	mov    eax,ds:0x10231f6c
10121c53:	83 c4 04             	add    esp,0x4
10121c56:	46                   	inc    esi
10121c57:	3b f0                	cmp    esi,eax
10121c59:	7e d5                	jle    0x10121c30
10121c5b:	8b 15 70 22 23 10    	mov    edx,DWORD PTR ds:0x10232270
10121c61:	be 01 00 00 00       	mov    esi,0x1
10121c66:	3b d6                	cmp    edx,esi
10121c68:	7c 37                	jl     0x10121ca1
10121c6a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10121c70:	8b 0c b5 70 20 23 10 	mov    ecx,DWORD PTR [esi*4+0x10232070]
10121c77:	85 c9                	test   ecx,ecx
10121c79:	74 1c                	je     0x10121c97
10121c7b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10121c80:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10121c86:	03 c1                	add    eax,ecx
10121c88:	50                   	push   eax
10121c89:	e8 a2 4d ff ff       	call   0x10116a30
10121c8e:	8b 15 70 22 23 10    	mov    edx,DWORD PTR ds:0x10232270
10121c94:	83 c4 04             	add    esp,0x4
10121c97:	46                   	inc    esi
10121c98:	3b f2                	cmp    esi,edx
10121c9a:	7e d4                	jle    0x10121c70
10121c9c:	a1 6c 1f 23 10       	mov    eax,ds:0x10231f6c
10121ca1:	be 01 00 00 00       	mov    esi,0x1
10121ca6:	3b c6                	cmp    eax,esi
10121ca8:	7c 31                	jl     0x10121cdb
10121caa:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10121cb0:	8b 0c b5 70 21 23 10 	mov    ecx,DWORD PTR [esi*4+0x10232170]
10121cb7:	85 c9                	test   ecx,ecx
10121cb9:	74 1b                	je     0x10121cd6
10121cbb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10121cc0:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10121cc6:	03 c1                	add    eax,ecx
10121cc8:	50                   	push   eax
10121cc9:	e8 c2 4c ff ff       	call   0x10116990
10121cce:	a1 6c 1f 23 10       	mov    eax,ds:0x10231f6c
10121cd3:	83 c4 04             	add    esp,0x4
10121cd6:	46                   	inc    esi
10121cd7:	3b f0                	cmp    esi,eax
10121cd9:	7e d5                	jle    0x10121cb0
10121cdb:	5f                   	pop    edi
10121cdc:	5e                   	pop    esi
10121cdd:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10121ce0:	33 cd                	xor    ecx,ebp
10121ce2:	e8 cc be 01 00       	call   0x1013dbb3
10121ce7:	8b e5                	mov    esp,ebp
10121ce9:	5d                   	pop    ebp
10121cea:	c3                   	ret
10121ceb:	68 74 17 1b 10       	push   0x101b1774
10121cf0:	6a 01                	push   0x1
10121cf2:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10121cf8:	68 bc 6e 1e 10       	push   0x101e6ebc
10121cfd:	6a 01                	push   0x1
10121cff:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10121d05:	68 74 17 1b 10       	push   0x101b1774
10121d0a:	6a 01                	push   0x1
10121d0c:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10121d12:	83 c4 18             	add    esp,0x18
10121d15:	e9 fb fe ff ff       	jmp    0x10121c15
10121d1a:	68 74 17 1b 10       	push   0x101b1774
10121d1f:	6a 01                	push   0x1
10121d21:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10121d27:	68 a8 31 22 10       	push   0x102231a8
10121d2c:	68 64 6e 1e 10       	push   0x101e6e64
10121d31:	6a 01                	push   0x1
10121d33:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10121d39:	68 9c 6e 1e 10       	push   0x101e6e9c
10121d3e:	6a 01                	push   0x1
10121d40:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10121d46:	68 74 17 1b 10       	push   0x101b1774
10121d4b:	6a 01                	push   0x1
10121d4d:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10121d53:	57                   	push   edi
10121d54:	ff 15 c8 30 22 10    	call   DWORD PTR ds:0x102230c8
10121d5a:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10121d5d:	83 c4 28             	add    esp,0x28
10121d60:	33 cd                	xor    ecx,ebp
10121d62:	5f                   	pop    edi
10121d63:	5e                   	pop    esi
10121d64:	e8 4a be 01 00       	call   0x1013dbb3
10121d69:	8b e5                	mov    esp,ebp
10121d6b:	5d                   	pop    ebp
10121d6c:	c3                   	ret
