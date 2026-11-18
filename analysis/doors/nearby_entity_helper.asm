
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100489f0 <.text+0x479f0>:
100489f0:	55                   	push   ebp
100489f1:	8b ec                	mov    ebp,esp
100489f3:	51                   	push   ecx
100489f4:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100489f7:	8b 88 cc 01 00 00    	mov    ecx,DWORD PTR [eax+0x1cc]
100489fd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10048a02:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10048a08:	51                   	push   ecx
10048a09:	6a 00                	push   0x0
10048a0b:	e8 80 fb 0c 00       	call   0x10118590
10048a10:	83 c4 08             	add    esp,0x8
10048a13:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10048a16:	85 c0                	test   eax,eax
10048a18:	0f 84 7b 01 00 00    	je     0x10048b99
10048a1e:	56                   	push   esi
10048a1f:	51                   	push   ecx
10048a20:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
10048a23:	83 c1 08             	add    ecx,0x8
10048a26:	c7 04 24 00 00 80 44 	mov    DWORD PTR [esp],0x44800000
10048a2d:	51                   	push   ecx
10048a2e:	6a 00                	push   0x0
10048a30:	e8 7b fc 0c 00       	call   0x101186b0
10048a35:	8b f0                	mov    esi,eax
10048a37:	83 c4 0c             	add    esp,0xc
10048a3a:	85 f6                	test   esi,esi
10048a3c:	0f 84 56 01 00 00    	je     0x10048b98
10048a42:	53                   	push   ebx
10048a43:	57                   	push   edi
10048a44:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10048a47:	8b 39                	mov    edi,DWORD PTR [ecx]
10048a49:	85 ff                	test   edi,edi
10048a4b:	0f 84 20 01 00 00    	je     0x10048b71
10048a51:	8b 89 0c 02 00 00    	mov    ecx,DWORD PTR [ecx+0x20c]
10048a57:	ba f0 0d 1b 10       	mov    edx,0x101b0df0
10048a5c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10048a61:	8b 98 98 00 00 00    	mov    ebx,DWORD PTR [eax+0x98]
10048a67:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
10048a6d:	f7 d9                	neg    ecx
10048a6f:	1b c9                	sbb    ecx,ecx
10048a71:	23 c8                	and    ecx,eax
10048a73:	8b 01                	mov    eax,DWORD PTR [ecx]
10048a75:	03 c3                	add    eax,ebx
10048a77:	8a 08                	mov    cl,BYTE PTR [eax]
10048a79:	3a 0a                	cmp    cl,BYTE PTR [edx]
10048a7b:	75 1a                	jne    0x10048a97
10048a7d:	84 c9                	test   cl,cl
10048a7f:	74 12                	je     0x10048a93
10048a81:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
10048a84:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
10048a87:	75 0e                	jne    0x10048a97
10048a89:	83 c0 02             	add    eax,0x2
10048a8c:	83 c2 02             	add    edx,0x2
10048a8f:	84 c9                	test   cl,cl
10048a91:	75 e4                	jne    0x10048a77
10048a93:	33 c0                	xor    eax,eax
10048a95:	eb 05                	jmp    0x10048a9c
10048a97:	1b c0                	sbb    eax,eax
10048a99:	83 c8 01             	or     eax,0x1
10048a9c:	85 c0                	test   eax,eax
10048a9e:	0f 84 cd 00 00 00    	je     0x10048b71
10048aa4:	8d 04 1f             	lea    eax,[edi+ebx*1]
10048aa7:	68 d8 60 1a 10       	push   0x101a60d8
10048aac:	50                   	push   eax
10048aad:	e8 3e 6b 0f 00       	call   0x1013f5f0
10048ab2:	83 c4 08             	add    esp,0x8
10048ab5:	85 c0                	test   eax,eax
10048ab7:	0f 84 b4 00 00 00    	je     0x10048b71
10048abd:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10048ac0:	ba e4 60 1a 10       	mov    edx,0x101a60e4
10048ac5:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
10048acb:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
10048ad1:	f7 d9                	neg    ecx
10048ad3:	1b c9                	sbb    ecx,ecx
10048ad5:	23 c8                	and    ecx,eax
10048ad7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10048adc:	8b 09                	mov    ecx,DWORD PTR [ecx]
10048ade:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10048ae4:	8a 01                	mov    al,BYTE PTR [ecx]
10048ae6:	3a 02                	cmp    al,BYTE PTR [edx]
10048ae8:	75 1a                	jne    0x10048b04
10048aea:	84 c0                	test   al,al
10048aec:	74 12                	je     0x10048b00
10048aee:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
10048af1:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
10048af4:	75 0e                	jne    0x10048b04
10048af6:	83 c1 02             	add    ecx,0x2
10048af9:	83 c2 02             	add    edx,0x2
10048afc:	84 c0                	test   al,al
10048afe:	75 e4                	jne    0x10048ae4
10048b00:	33 c0                	xor    eax,eax
10048b02:	eb 05                	jmp    0x10048b09
10048b04:	1b c0                	sbb    eax,eax
10048b06:	83 c8 01             	or     eax,0x1
10048b09:	85 c0                	test   eax,eax
10048b0b:	74 64                	je     0x10048b71
10048b0d:	8b 06                	mov    eax,DWORD PTR [esi]
10048b0f:	8b ce                	mov    ecx,esi
10048b11:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
10048b17:	85 c0                	test   eax,eax
10048b19:	74 56                	je     0x10048b71
10048b1b:	8b 06                	mov    eax,DWORD PTR [esi]
10048b1d:	8b ce                	mov    ecx,esi
10048b1f:	ff 50 78             	call   DWORD PTR [eax+0x78]
10048b22:	8b d0                	mov    edx,eax
10048b24:	85 d2                	test   edx,edx
10048b26:	74 49                	je     0x10048b71
10048b28:	f3 0f 10 82 e4 01 00 	movss  xmm0,DWORD PTR [edx+0x1e4]
10048b2f:	00 
10048b30:	8d 8a e4 01 00 00    	lea    ecx,[edx+0x1e4]
10048b36:	0f 2e 05 34 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f34
10048b3d:	9f                   	lahf
10048b3e:	f6 c4 44             	test   ah,0x44
10048b41:	7a 24                	jp     0x10048b67
10048b43:	f3 0f 10 41 04       	movss  xmm0,DWORD PTR [ecx+0x4]
10048b48:	0f 2e 05 38 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f38
10048b4f:	9f                   	lahf
10048b50:	f6 c4 44             	test   ah,0x44
10048b53:	7a 12                	jp     0x10048b67
10048b55:	f3 0f 10 41 08       	movss  xmm0,DWORD PTR [ecx+0x8]
10048b5a:	0f 2e 05 3c 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f3c
10048b61:	9f                   	lahf
10048b62:	f6 c4 44             	test   ah,0x44
10048b65:	7b 0a                	jnp    0x10048b71
10048b67:	51                   	push   ecx
10048b68:	52                   	push   edx
10048b69:	e8 72 14 0d 00       	call   0x10119fe0
10048b6e:	83 c4 08             	add    esp,0x8
10048b71:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10048b74:	51                   	push   ecx
10048b75:	c7 04 24 00 00 80 44 	mov    DWORD PTR [esp],0x44800000
10048b7c:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10048b7f:	83 c0 08             	add    eax,0x8
10048b82:	50                   	push   eax
10048b83:	56                   	push   esi
10048b84:	e8 27 fb 0c 00       	call   0x101186b0
10048b89:	8b f0                	mov    esi,eax
10048b8b:	83 c4 0c             	add    esp,0xc
10048b8e:	85 f6                	test   esi,esi
10048b90:	0f 85 ae fe ff ff    	jne    0x10048a44
10048b96:	5f                   	pop    edi
10048b97:	5b                   	pop    ebx
10048b98:	5e                   	pop    esi
10048b99:	8b e5                	mov    esp,ebp
10048b9b:	5d                   	pop    ebp
10048b9c:	c3                   	ret
10048b9d:	cc                   	int3
10048b9e:	cc                   	int3
10048b9f:	cc                   	int3
