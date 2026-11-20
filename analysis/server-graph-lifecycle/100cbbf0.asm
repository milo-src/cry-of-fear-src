
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cbbf0 <.text+0xcabf0>:
100cbbf0:	55                   	push   ebp
100cbbf1:	8b ec                	mov    ebp,esp
100cbbf3:	81 ec 10 02 00 00    	sub    esp,0x210
100cbbf9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100cbbfe:	33 c5                	xor    eax,ebp
100cbc00:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cbc03:	a1 b4 73 1d 10       	mov    eax,ds:0x101d73b4
100cbc08:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100cbc0b:	53                   	push   ebx
100cbc0c:	56                   	push   esi
100cbc0d:	89 85 f4 fd ff ff    	mov    DWORD PTR [ebp-0x20c],eax
100cbc13:	8b da                	mov    ebx,edx
100cbc15:	66 a1 b8 73 1d 10    	mov    ax,ds:0x101d73b8
100cbc1b:	8b f3                	mov    esi,ebx
100cbc1d:	57                   	push   edi
100cbc1e:	66 89 85 f8 fd ff ff 	mov    WORD PTR [ebp-0x208],ax
100cbc25:	8a 03                	mov    al,BYTE PTR [ebx]
100cbc27:	43                   	inc    ebx
100cbc28:	84 c0                	test   al,al
100cbc2a:	75 f9                	jne    0x100cbc25
100cbc2c:	8d bd f4 fd ff ff    	lea    edi,[ebp-0x20c]
100cbc32:	2b de                	sub    ebx,esi
100cbc34:	4f                   	dec    edi
100cbc35:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100cbc38:	47                   	inc    edi
100cbc39:	84 c0                	test   al,al
100cbc3b:	75 f8                	jne    0x100cbc35
100cbc3d:	8b cb                	mov    ecx,ebx
100cbc3f:	c1 e9 02             	shr    ecx,0x2
100cbc42:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100cbc44:	8b cb                	mov    ecx,ebx
100cbc46:	83 e1 03             	and    ecx,0x3
100cbc49:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100cbc4b:	8d 8d f4 fd ff ff    	lea    ecx,[ebp-0x20c]
100cbc51:	49                   	dec    ecx
100cbc52:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100cbc55:	8d 49 01             	lea    ecx,[ecx+0x1]
100cbc58:	84 c0                	test   al,al
100cbc5a:	75 f6                	jne    0x100cbc52
100cbc5c:	a1 bc 73 1d 10       	mov    eax,ds:0x101d73bc
100cbc61:	8b f2                	mov    esi,edx
100cbc63:	f3 0f 7e 05 20 72 1d 	movq   xmm0,QWORD PTR ds:0x101d7220
100cbc6a:	10 
100cbc6b:	89 01                	mov    DWORD PTR [ecx],eax
100cbc6d:	0f b6 05 c0 73 1d 10 	movzx  eax,BYTE PTR ds:0x101d73c0
100cbc74:	88 41 04             	mov    BYTE PTR [ecx+0x4],al
100cbc77:	a1 28 72 1d 10       	mov    eax,ds:0x101d7228
100cbc7c:	89 85 00 ff ff ff    	mov    DWORD PTR [ebp-0x100],eax
100cbc82:	0f b6 05 2c 72 1d 10 	movzx  eax,BYTE PTR ds:0x101d722c
100cbc89:	66 0f d6 85 f8 fe ff 	movq   QWORD PTR [ebp-0x108],xmm0
100cbc90:	ff 
100cbc91:	88 85 04 ff ff ff    	mov    BYTE PTR [ebp-0xfc],al
100cbc97:	8a 02                	mov    al,BYTE PTR [edx]
100cbc99:	42                   	inc    edx
100cbc9a:	84 c0                	test   al,al
100cbc9c:	75 f9                	jne    0x100cbc97
100cbc9e:	8d bd f8 fe ff ff    	lea    edi,[ebp-0x108]
100cbca4:	2b d6                	sub    edx,esi
100cbca6:	4f                   	dec    edi
100cbca7:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100cbcaa:	47                   	inc    edi
100cbcab:	84 c0                	test   al,al
100cbcad:	75 f8                	jne    0x100cbca7
100cbcaf:	8b ca                	mov    ecx,edx
100cbcb1:	c1 e9 02             	shr    ecx,0x2
100cbcb4:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100cbcb6:	8b ca                	mov    ecx,edx
100cbcb8:	83 e1 03             	and    ecx,0x3
100cbcbb:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100cbcbd:	5f                   	pop    edi
100cbcbe:	8d 8d f8 fe ff ff    	lea    ecx,[ebp-0x108]
100cbcc4:	5e                   	pop    esi
100cbcc5:	49                   	dec    ecx
100cbcc6:	5b                   	pop    ebx
100cbcc7:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100cbcca:	8d 49 01             	lea    ecx,[ecx+0x1]
100cbccd:	84 c0                	test   al,al
100cbccf:	75 f6                	jne    0x100cbcc7
100cbcd1:	a1 30 72 1d 10       	mov    eax,ds:0x101d7230
100cbcd6:	89 01                	mov    DWORD PTR [ecx],eax
100cbcd8:	a0 34 72 1d 10       	mov    al,ds:0x101d7234
100cbcdd:	88 41 04             	mov    BYTE PTR [ecx+0x4],al
100cbce0:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
100cbce6:	50                   	push   eax
100cbce7:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
100cbced:	50                   	push   eax
100cbcee:	8d 85 f4 fd ff ff    	lea    eax,[ebp-0x20c]
100cbcf4:	50                   	push   eax
100cbcf5:	ff 15 d0 30 22 10    	call   DWORD PTR ds:0x102230d0
100cbcfb:	83 c4 0c             	add    esp,0xc
100cbcfe:	85 c0                	test   eax,eax
100cbd00:	74 19                	je     0x100cbd1b
100cbd02:	83 bd f0 fd ff ff 00 	cmp    DWORD PTR [ebp-0x210],0x0
100cbd09:	7e 22                	jle    0x100cbd2d
100cbd0b:	68 c4 73 1d 10       	push   0x101d73c4
100cbd10:	6a 02                	push   0x2
100cbd12:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cbd18:	83 c4 08             	add    esp,0x8
100cbd1b:	33 c0                	xor    eax,eax
100cbd1d:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100cbd20:	33 cd                	xor    ecx,ebp
100cbd22:	e8 8c 1e 07 00       	call   0x1013dbb3
100cbd27:	8b e5                	mov    esp,ebp
100cbd29:	5d                   	pop    ebp
100cbd2a:	c2 04 00             	ret    0x4
100cbd2d:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100cbd30:	b8 01 00 00 00       	mov    eax,0x1
100cbd35:	33 cd                	xor    ecx,ebp
100cbd37:	e8 77 1e 07 00       	call   0x1013dbb3
100cbd3c:	8b e5                	mov    esp,ebp
100cbd3e:	5d                   	pop    ebp
100cbd3f:	c2 04 00             	ret    0x4
