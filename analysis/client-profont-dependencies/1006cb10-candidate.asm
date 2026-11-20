
D:/Steam/steamapps/common/Cry of Fear/cryoffear/cl_dlls/client.dll:     file format pei-i386


Disassembly of section .text:

1006cb10 <.text+0x6bb10>:
1006cb10:	55                   	push   ebp
1006cb11:	8b ec                	mov    ebp,esp
1006cb13:	6a ff                	push   0xffffffff
1006cb15:	68 36 49 13 10       	push   0x10134936
1006cb1a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
1006cb20:	50                   	push   eax
1006cb21:	81 ec e0 02 00 00    	sub    esp,0x2e0
1006cb27:	a1 00 06 19 10       	mov    eax,ds:0x10190600
1006cb2c:	33 c5                	xor    eax,ebp
1006cb2e:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
1006cb31:	53                   	push   ebx
1006cb32:	56                   	push   esi
1006cb33:	57                   	push   edi
1006cb34:	50                   	push   eax
1006cb35:	8d 45 f4             	lea    eax,[ebp-0xc]
1006cb38:	64 a3 00 00 00 00    	mov    fs:0x0,eax
1006cb3e:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1006cb41:	c6 05 88 2a 54 10 00 	mov    BYTE PTR ds:0x10542a88,0x0
1006cb48:	ff 15 24 27 1b 10    	call   DWORD PTR ds:0x101b2724
1006cb4e:	8d 95 f0 fd ff ff    	lea    edx,[ebp-0x210]
1006cb54:	2b d0                	sub    edx,eax
1006cb56:	8a 08                	mov    cl,BYTE PTR [eax]
1006cb58:	8d 40 01             	lea    eax,[eax+0x1]
1006cb5b:	88 4c 02 ff          	mov    BYTE PTR [edx+eax*1-0x1],cl
1006cb5f:	84 c9                	test   cl,cl
1006cb61:	75 f3                	jne    0x1006cb56
1006cb63:	8d 8d f0 fd ff ff    	lea    ecx,[ebp-0x210]
1006cb69:	49                   	dec    ecx
1006cb6a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
1006cb70:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1006cb73:	8d 49 01             	lea    ecx,[ecx+0x1]
1006cb76:	84 c0                	test   al,al
1006cb78:	75 f6                	jne    0x1006cb70
1006cb7a:	a1 64 ed 14 10       	mov    eax,ds:0x1014ed64
1006cb7f:	89 01                	mov    DWORD PTR [ecx],eax
1006cb81:	a1 68 ed 14 10       	mov    eax,ds:0x1014ed68
1006cb86:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1006cb89:	a1 6c ed 14 10       	mov    eax,ds:0x1014ed6c
1006cb8e:	6a 01                	push   0x1
1006cb90:	6a 40                	push   0x40
1006cb92:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1006cb95:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
1006cb9b:	6a 01                	push   0x1
1006cb9d:	50                   	push   eax
1006cb9e:	8d 8d 14 fd ff ff    	lea    ecx,[ebp-0x2ec]
1006cba4:	e8 e7 94 fb ff       	call   0x10026090
1006cba9:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1006cbb0:	c7 85 e8 fd ff ff 00 	mov    DWORD PTR [ebp-0x218],0x0
1006cbb7:	00 00 00 
1006cbba:	c7 85 ec fd ff ff 0f 	mov    DWORD PTR [ebp-0x214],0xf
1006cbc1:	00 00 00 
1006cbc4:	c6 85 d8 fd ff ff 00 	mov    BYTE PTR [ebp-0x228],0x0
1006cbcb:	c7 85 cc fd ff ff 00 	mov    DWORD PTR [ebp-0x234],0x0
1006cbd2:	00 00 00 
1006cbd5:	c7 85 d0 fd ff ff 00 	mov    DWORD PTR [ebp-0x230],0x0
1006cbdc:	00 00 00 
1006cbdf:	c7 85 d4 fd ff ff 00 	mov    DWORD PTR [ebp-0x22c],0x0
1006cbe6:	00 00 00 
1006cbe9:	8d 85 d8 fd ff ff    	lea    eax,[ebp-0x228]
1006cbef:	c6 45 fc 02          	mov    BYTE PTR [ebp-0x4],0x2
1006cbf3:	50                   	push   eax
1006cbf4:	8d 85 14 fd ff ff    	lea    eax,[ebp-0x2ec]
1006cbfa:	50                   	push   eax
1006cbfb:	e8 90 3d fb ff       	call   0x10020990
1006cc00:	83 c4 08             	add    esp,0x8
1006cc03:	8b 08                	mov    ecx,DWORD PTR [eax]
1006cc05:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
1006cc08:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
1006cc0d:	0f 85 94 00 00 00    	jne    0x1006cca7
1006cc13:	83 bd ec fd ff ff 10 	cmp    DWORD PTR [ebp-0x214],0x10
1006cc1a:	8d 85 d8 fd ff ff    	lea    eax,[ebp-0x228]
1006cc20:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
1006cc26:	0f 43 85 d8 fd ff ff 	cmovae eax,DWORD PTR [ebp-0x228]
1006cc2d:	2b d0                	sub    edx,eax
1006cc2f:	90                   	nop
1006cc30:	8a 08                	mov    cl,BYTE PTR [eax]
1006cc32:	8d 40 01             	lea    eax,[eax+0x1]
1006cc35:	88 4c 02 ff          	mov    BYTE PTR [edx+eax*1-0x1],cl
1006cc39:	84 c9                	test   cl,cl
1006cc3b:	75 f3                	jne    0x1006cc30
1006cc3d:	8b 85 e8 fd ff ff    	mov    eax,DWORD PTR [ebp-0x218]
1006cc43:	3d 00 01 00 00       	cmp    eax,0x100
1006cc48:	0f 83 69 01 00 00    	jae    0x1006cdb7
1006cc4e:	88 8c 05 f0 fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x110],cl
1006cc55:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
1006cc5b:	68 70 ed 14 10       	push   0x1014ed70
1006cc60:	50                   	push   eax
1006cc61:	e8 8a 70 06 00       	call   0x100d3cf0
1006cc66:	83 c4 08             	add    esp,0x8
1006cc69:	85 c0                	test   eax,eax
1006cc6b:	74 14                	je     0x1006cc81
1006cc6d:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
1006cc73:	56                   	push   esi
1006cc74:	50                   	push   eax
1006cc75:	e8 76 70 06 00       	call   0x100d3cf0
1006cc7a:	83 c4 08             	add    esp,0x8
1006cc7d:	85 c0                	test   eax,eax
1006cc7f:	75 7b                	jne    0x1006ccfc
1006cc81:	8d 85 d8 fd ff ff    	lea    eax,[ebp-0x228]
1006cc87:	50                   	push   eax
1006cc88:	8d 85 14 fd ff ff    	lea    eax,[ebp-0x2ec]
1006cc8e:	50                   	push   eax
1006cc8f:	e8 fc 3c fb ff       	call   0x10020990
1006cc94:	83 c4 08             	add    esp,0x8
1006cc97:	8b 08                	mov    ecx,DWORD PTR [eax]
1006cc99:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
1006cc9c:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
1006cca1:	0f 84 6c ff ff ff    	je     0x1006cc13
1006cca7:	56                   	push   esi
1006cca8:	68 78 ed 14 10       	push   0x1014ed78
1006ccad:	ff 15 a8 26 1b 10    	call   DWORD PTR ds:0x101b26a8
1006ccb3:	83 c4 08             	add    esp,0x8
1006ccb6:	8b 85 ec fd ff ff    	mov    eax,DWORD PTR [ebp-0x214]
1006ccbc:	83 f8 10             	cmp    eax,0x10
1006ccbf:	72 10                	jb     0x1006ccd1
1006ccc1:	40                   	inc    eax
1006ccc2:	50                   	push   eax
1006ccc3:	ff b5 d8 fd ff ff    	push   DWORD PTR [ebp-0x228]
1006ccc9:	e8 02 3a fb ff       	call   0x100206d0
1006ccce:	83 c4 08             	add    esp,0x8
1006ccd1:	8d 8d 14 fd ff ff    	lea    ecx,[ebp-0x2ec]
1006ccd7:	e8 f4 53 fb ff       	call   0x100220d0
1006ccdc:	33 c0                	xor    eax,eax
1006ccde:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
1006cce1:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
1006cce8:	59                   	pop    ecx
1006cce9:	5f                   	pop    edi
1006ccea:	5e                   	pop    esi
1006cceb:	5b                   	pop    ebx
1006ccec:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
1006ccef:	33 cd                	xor    ecx,ebp
1006ccf1:	e8 ca 75 04 00       	call   0x100b42c0
1006ccf6:	8b e5                	mov    esp,ebp
1006ccf8:	5d                   	pop    ebp
1006ccf9:	c2 04 00             	ret    0x4
1006ccfc:	32 db                	xor    bl,bl
1006ccfe:	8d 8d f0 fe ff ff    	lea    ecx,[ebp-0x110]
1006cd04:	33 f6                	xor    esi,esi
1006cd06:	8d 51 01             	lea    edx,[ecx+0x1]
1006cd09:	8d 7e 01             	lea    edi,[esi+0x1]
1006cd0c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
1006cd10:	8a 01                	mov    al,BYTE PTR [ecx]
1006cd12:	41                   	inc    ecx
1006cd13:	84 c0                	test   al,al
1006cd15:	75 f9                	jne    0x1006cd10
1006cd17:	2b ca                	sub    ecx,edx
1006cd19:	83 f9 01             	cmp    ecx,0x1
1006cd1c:	7c 98                	jl     0x1006ccb6
1006cd1e:	8b c7                	mov    eax,edi
1006cd20:	84 db                	test   bl,bl
1006cd22:	74 20                	je     0x1006cd44
1006cd24:	8a 84 3d f0 fe ff ff 	mov    al,BYTE PTR [ebp+edi*1-0x110]
1006cd2b:	3c 22                	cmp    al,0x22
1006cd2d:	74 49                	je     0x1006cd78
1006cd2f:	0f be c0             	movsx  eax,al
1006cd32:	50                   	push   eax
1006cd33:	e8 43 e7 08 00       	call   0x100fb47b
1006cd38:	83 c4 04             	add    esp,0x4
1006cd3b:	88 86 88 2a 54 10    	mov    BYTE PTR [esi+0x10542a88],al
1006cd41:	46                   	inc    esi
1006cd42:	eb 0e                	jmp    0x1006cd52
1006cd44:	80 bc 3d f0 fe ff ff 	cmp    BYTE PTR [ebp+edi*1-0x110],0x22
1006cd4b:	22 
1006cd4c:	0f b6 db             	movzx  ebx,bl
1006cd4f:	0f 44 d8             	cmove  ebx,eax
1006cd52:	8d 8d f0 fe ff ff    	lea    ecx,[ebp-0x110]
1006cd58:	47                   	inc    edi
1006cd59:	8d 51 01             	lea    edx,[ecx+0x1]
1006cd5c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
1006cd60:	8a 01                	mov    al,BYTE PTR [ecx]
1006cd62:	41                   	inc    ecx
1006cd63:	84 c0                	test   al,al
1006cd65:	75 f9                	jne    0x1006cd60
1006cd67:	2b ca                	sub    ecx,edx
1006cd69:	3b f9                	cmp    edi,ecx
1006cd6b:	0f 8f 45 ff ff ff    	jg     0x1006ccb6
1006cd71:	b8 01 00 00 00       	mov    eax,0x1
1006cd76:	eb a8                	jmp    0x1006cd20
1006cd78:	81 fe 00 01 00 00    	cmp    esi,0x100
1006cd7e:	73 37                	jae    0x1006cdb7
1006cd80:	8b 85 ec fd ff ff    	mov    eax,DWORD PTR [ebp-0x214]
1006cd86:	c6 86 88 2a 54 10 00 	mov    BYTE PTR [esi+0x10542a88],0x0
1006cd8d:	83 f8 10             	cmp    eax,0x10
1006cd90:	72 10                	jb     0x1006cda2
1006cd92:	40                   	inc    eax
1006cd93:	50                   	push   eax
1006cd94:	ff b5 d8 fd ff ff    	push   DWORD PTR [ebp-0x228]
1006cd9a:	e8 31 39 fb ff       	call   0x100206d0
1006cd9f:	83 c4 08             	add    esp,0x8
1006cda2:	8d 8d 14 fd ff ff    	lea    ecx,[ebp-0x2ec]
1006cda8:	e8 23 53 fb ff       	call   0x100220d0
1006cdad:	b8 88 2a 54 10       	mov    eax,0x10542a88
1006cdb2:	e9 27 ff ff ff       	jmp    0x1006ccde
1006cdb7:	e8 f2 7d 04 00       	call   0x100b4bae
1006cdbc:	cc                   	int3
1006cdbd:	cc                   	int3
1006cdbe:	cc                   	int3
1006cdbf:	cc                   	int3
