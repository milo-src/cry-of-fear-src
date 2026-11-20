
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ccba0 <.text+0xcbba0>:
100ccba0:	55                   	push   ebp
100ccba1:	8b ec                	mov    ebp,esp
100ccba3:	81 ec 10 01 00 00    	sub    esp,0x110
100ccba9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100ccbae:	33 c5                	xor    eax,ebp
100ccbb0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100ccbb3:	83 39 00             	cmp    DWORD PTR [ecx],0x0
100ccbb6:	53                   	push   ebx
100ccbb7:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100ccbba:	89 8d f0 fe ff ff    	mov    DWORD PTR [ebp-0x110],ecx
100ccbc0:	c7 85 f4 fe ff ff 10 	mov    DWORD PTR [ebp-0x10c],0x10
100ccbc7:	00 00 00 
100ccbca:	0f 84 e7 01 00 00    	je     0x100ccdb7
100ccbd0:	83 79 04 00          	cmp    DWORD PTR [ecx+0x4],0x0
100ccbd4:	0f 84 dd 01 00 00    	je     0x100ccdb7
100ccbda:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
100ccbe0:	50                   	push   eax
100ccbe1:	ff 15 d4 30 22 10    	call   DWORD PTR ds:0x102230d4
100ccbe7:	8d 8d f8 fe ff ff    	lea    ecx,[ebp-0x108]
100ccbed:	83 c4 04             	add    esp,0x4
100ccbf0:	49                   	dec    ecx
100ccbf1:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100ccbf4:	8d 49 01             	lea    ecx,[ecx+0x1]
100ccbf7:	84 c0                	test   al,al
100ccbf9:	75 f6                	jne    0x100ccbf1
100ccbfb:	a1 44 6e 1d 10       	mov    eax,ds:0x101d6e44
100ccc00:	89 01                	mov    DWORD PTR [ecx],eax
100ccc02:	66 a1 48 6e 1d 10    	mov    ax,ds:0x101d6e48
100ccc08:	56                   	push   esi
100ccc09:	8b 35 0c 10 1a 10    	mov    esi,DWORD PTR ds:0x101a100c
100ccc0f:	66 89 41 04          	mov    WORD PTR [ecx+0x4],ax
100ccc13:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
100ccc19:	6a 00                	push   0x0
100ccc1b:	50                   	push   eax
100ccc1c:	ff d6                	call   esi
100ccc1e:	8d 8d f8 fe ff ff    	lea    ecx,[ebp-0x108]
100ccc24:	49                   	dec    ecx
100ccc25:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100ccc28:	8d 49 01             	lea    ecx,[ecx+0x1]
100ccc2b:	84 c0                	test   al,al
100ccc2d:	75 f6                	jne    0x100ccc25
100ccc2f:	a1 4c 6e 1d 10       	mov    eax,ds:0x101d6e4c
100ccc34:	89 01                	mov    DWORD PTR [ecx],eax
100ccc36:	a1 50 6e 1d 10       	mov    eax,ds:0x101d6e50
100ccc3b:	57                   	push   edi
100ccc3c:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100ccc3f:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
100ccc45:	6a 00                	push   0x0
100ccc47:	50                   	push   eax
100ccc48:	ff d6                	call   esi
100ccc4a:	8d bd f8 fe ff ff    	lea    edi,[ebp-0x108]
100ccc50:	4f                   	dec    edi
100ccc51:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100ccc54:	8d 7f 01             	lea    edi,[edi+0x1]
100ccc57:	84 c0                	test   al,al
100ccc59:	75 f6                	jne    0x100ccc51
100ccc5b:	66 a1 54 6e 1d 10    	mov    ax,ds:0x101d6e54
100ccc61:	8b f3                	mov    esi,ebx
100ccc63:	66 89 07             	mov    WORD PTR [edi],ax
100ccc66:	8a 03                	mov    al,BYTE PTR [ebx]
100ccc68:	43                   	inc    ebx
100ccc69:	84 c0                	test   al,al
100ccc6b:	75 f9                	jne    0x100ccc66
100ccc6d:	8d bd f8 fe ff ff    	lea    edi,[ebp-0x108]
100ccc73:	2b de                	sub    ebx,esi
100ccc75:	4f                   	dec    edi
100ccc76:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100ccc79:	47                   	inc    edi
100ccc7a:	84 c0                	test   al,al
100ccc7c:	75 f8                	jne    0x100ccc76
100ccc7e:	8b cb                	mov    ecx,ebx
100ccc80:	c1 e9 02             	shr    ecx,0x2
100ccc83:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100ccc85:	8b cb                	mov    ecx,ebx
100ccc87:	83 e1 03             	and    ecx,0x3
100ccc8a:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100ccc8c:	8d 8d f8 fe ff ff    	lea    ecx,[ebp-0x108]
100ccc92:	49                   	dec    ecx
100ccc93:	5f                   	pop    edi
100ccc94:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100ccc97:	8d 49 01             	lea    ecx,[ecx+0x1]
100ccc9a:	84 c0                	test   al,al
100ccc9c:	75 f6                	jne    0x100ccc94
100ccc9e:	a1 30 72 1d 10       	mov    eax,ds:0x101d7230
100ccca3:	89 01                	mov    DWORD PTR [ecx],eax
100ccca5:	a0 34 72 1d 10       	mov    al,ds:0x101d7234
100cccaa:	88 41 04             	mov    BYTE PTR [ecx+0x4],al
100cccad:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
100cccb3:	68 6c 73 1d 10       	push   0x101d736c
100cccb8:	50                   	push   eax
100cccb9:	e8 e3 76 0a 00       	call   0x101743a1
100cccbe:	8b f0                	mov    esi,eax
100cccc0:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
100cccc6:	50                   	push   eax
100cccc7:	68 70 73 1d 10       	push   0x101d7370
100ccccc:	6a 02                	push   0x2
100cccce:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cccd4:	83 c4 14             	add    esp,0x14
100cccd7:	85 f6                	test   esi,esi
100cccd9:	75 2b                	jne    0x100ccd06
100cccdb:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
100ccce1:	50                   	push   eax
100ccce2:	68 80 73 1d 10       	push   0x101d7380
100ccce7:	6a 02                	push   0x2
100ccce9:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cccef:	83 c4 0c             	add    esp,0xc
100cccf2:	33 c0                	xor    eax,eax
100cccf4:	5e                   	pop    esi
100cccf5:	5b                   	pop    ebx
100cccf6:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100cccf9:	33 cd                	xor    ecx,ebp
100cccfb:	e8 b3 0e 07 00       	call   0x1013dbb3
100ccd00:	8b e5                	mov    esp,ebp
100ccd02:	5d                   	pop    ebp
100ccd03:	c2 04 00             	ret    0x4
100ccd06:	56                   	push   esi
100ccd07:	6a 01                	push   0x1
100ccd09:	8d 85 f4 fe ff ff    	lea    eax,[ebp-0x10c]
100ccd0f:	6a 04                	push   0x4
100ccd11:	50                   	push   eax
100ccd12:	e8 b9 43 0a 00       	call   0x101710d0
100ccd17:	8b 9d f0 fe ff ff    	mov    ebx,DWORD PTR [ebp-0x110]
100ccd1d:	56                   	push   esi
100ccd1e:	6a 01                	push   0x1
100ccd20:	68 cc 20 00 00       	push   0x20cc
100ccd25:	53                   	push   ebx
100ccd26:	e8 a5 43 0a 00       	call   0x101710d0
100ccd2b:	56                   	push   esi
100ccd2c:	ff 73 18             	push   DWORD PTR [ebx+0x18]
100ccd2f:	6a 58                	push   0x58
100ccd31:	ff 73 0c             	push   DWORD PTR [ebx+0xc]
100ccd34:	e8 97 43 0a 00       	call   0x101710d0
100ccd39:	56                   	push   esi
100ccd3a:	ff 73 1c             	push   DWORD PTR [ebx+0x1c]
100ccd3d:	6a 18                	push   0x18
100ccd3f:	ff 73 10             	push   DWORD PTR [ebx+0x10]
100ccd42:	e8 89 43 0a 00       	call   0x101710d0
100ccd47:	83 c4 40             	add    esp,0x40
100ccd4a:	56                   	push   esi
100ccd4b:	ff 73 18             	push   DWORD PTR [ebx+0x18]
100ccd4e:	6a 10                	push   0x10
100ccd50:	ff 73 24             	push   DWORD PTR [ebx+0x24]
100ccd53:	e8 78 43 0a 00       	call   0x101710d0
100ccd58:	8b 4b 14             	mov    ecx,DWORD PTR [ebx+0x14]
100ccd5b:	83 c4 10             	add    esp,0x10
100ccd5e:	85 c9                	test   ecx,ecx
100ccd60:	74 14                	je     0x100ccd76
100ccd62:	8b 43 20             	mov    eax,DWORD PTR [ebx+0x20]
100ccd65:	85 c0                	test   eax,eax
100ccd67:	74 0d                	je     0x100ccd76
100ccd69:	56                   	push   esi
100ccd6a:	50                   	push   eax
100ccd6b:	6a 01                	push   0x1
100ccd6d:	51                   	push   ecx
100ccd6e:	e8 5d 43 0a 00       	call   0x101710d0
100ccd73:	83 c4 10             	add    esp,0x10
100ccd76:	8b 83 bc 20 00 00    	mov    eax,DWORD PTR [ebx+0x20bc]
100ccd7c:	85 c0                	test   eax,eax
100ccd7e:	74 17                	je     0x100ccd97
100ccd80:	8b 8b c0 20 00 00    	mov    ecx,DWORD PTR [ebx+0x20c0]
100ccd86:	85 c9                	test   ecx,ecx
100ccd88:	74 0d                	je     0x100ccd97
100ccd8a:	56                   	push   esi
100ccd8b:	51                   	push   ecx
100ccd8c:	6a 02                	push   0x2
100ccd8e:	50                   	push   eax
100ccd8f:	e8 3c 43 0a 00       	call   0x101710d0
100ccd94:	83 c4 10             	add    esp,0x10
100ccd97:	56                   	push   esi
100ccd98:	e8 c4 2f 0a 00       	call   0x1016fd61
100ccd9d:	83 c4 04             	add    esp,0x4
100ccda0:	b8 01 00 00 00       	mov    eax,0x1
100ccda5:	5e                   	pop    esi
100ccda6:	5b                   	pop    ebx
100ccda7:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100ccdaa:	33 cd                	xor    ecx,ebp
100ccdac:	e8 02 0e 07 00       	call   0x1013dbb3
100ccdb1:	8b e5                	mov    esp,ebp
100ccdb3:	5d                   	pop    ebp
100ccdb4:	c2 04 00             	ret    0x4
100ccdb7:	68 90 67 1d 10       	push   0x101d6790
100ccdbc:	6a 02                	push   0x2
100ccdbe:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100ccdc4:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100ccdc7:	83 c4 08             	add    esp,0x8
100ccdca:	33 cd                	xor    ecx,ebp
100ccdcc:	33 c0                	xor    eax,eax
100ccdce:	5b                   	pop    ebx
100ccdcf:	e8 df 0d 07 00       	call   0x1013dbb3
100ccdd4:	8b e5                	mov    esp,ebp
100ccdd6:	5d                   	pop    ebp
100ccdd7:	c2 04 00             	ret    0x4
