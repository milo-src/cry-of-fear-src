
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cc810 <.text+0xcb810>:
100cc810:	55                   	push   ebp
100cc811:	8b ec                	mov    ebp,esp
100cc813:	81 ec 14 02 00 00    	sub    esp,0x214
100cc819:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100cc81e:	33 c5                	xor    eax,ebp
100cc820:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100cc823:	53                   	push   ebx
100cc824:	56                   	push   esi
100cc825:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100cc828:	8d 85 f4 fd ff ff    	lea    eax,[ebp-0x20c]
100cc82e:	57                   	push   edi
100cc82f:	50                   	push   eax
100cc830:	8b d9                	mov    ebx,ecx
100cc832:	ff 15 d4 30 22 10    	call   DWORD PTR ds:0x102230d4
100cc838:	8d 8d f4 fd ff ff    	lea    ecx,[ebp-0x20c]
100cc83e:	83 c4 04             	add    esp,0x4
100cc841:	49                   	dec    ecx
100cc842:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100cc845:	8d 49 01             	lea    ecx,[ecx+0x1]
100cc848:	84 c0                	test   al,al
100cc84a:	75 f6                	jne    0x100cc842
100cc84c:	a1 44 6e 1d 10       	mov    eax,ds:0x101d6e44
100cc851:	8b 3d 0c 10 1a 10    	mov    edi,DWORD PTR ds:0x101a100c
100cc857:	89 01                	mov    DWORD PTR [ecx],eax
100cc859:	66 a1 48 6e 1d 10    	mov    ax,ds:0x101d6e48
100cc85f:	66 89 41 04          	mov    WORD PTR [ecx+0x4],ax
100cc863:	8d 85 f4 fd ff ff    	lea    eax,[ebp-0x20c]
100cc869:	6a 00                	push   0x0
100cc86b:	50                   	push   eax
100cc86c:	ff d7                	call   edi
100cc86e:	8d 8d f4 fd ff ff    	lea    ecx,[ebp-0x20c]
100cc874:	49                   	dec    ecx
100cc875:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100cc878:	8d 49 01             	lea    ecx,[ecx+0x1]
100cc87b:	84 c0                	test   al,al
100cc87d:	75 f6                	jne    0x100cc875
100cc87f:	a1 4c 6e 1d 10       	mov    eax,ds:0x101d6e4c
100cc884:	89 01                	mov    DWORD PTR [ecx],eax
100cc886:	a1 50 6e 1d 10       	mov    eax,ds:0x101d6e50
100cc88b:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100cc88e:	8d 85 f4 fd ff ff    	lea    eax,[ebp-0x20c]
100cc894:	6a 00                	push   0x0
100cc896:	50                   	push   eax
100cc897:	ff d7                	call   edi
100cc899:	a1 28 72 1d 10       	mov    eax,ds:0x101d7228
100cc89e:	8b d6                	mov    edx,esi
100cc8a0:	f3 0f 7e 05 20 72 1d 	movq   xmm0,QWORD PTR ds:0x101d7220
100cc8a7:	10 
100cc8a8:	89 85 00 ff ff ff    	mov    DWORD PTR [ebp-0x100],eax
100cc8ae:	a0 2c 72 1d 10       	mov    al,ds:0x101d722c
100cc8b3:	66 0f d6 85 f8 fe ff 	movq   QWORD PTR [ebp-0x108],xmm0
100cc8ba:	ff 
100cc8bb:	88 85 04 ff ff ff    	mov    BYTE PTR [ebp-0xfc],al
100cc8c1:	8a 06                	mov    al,BYTE PTR [esi]
100cc8c3:	46                   	inc    esi
100cc8c4:	84 c0                	test   al,al
100cc8c6:	75 f9                	jne    0x100cc8c1
100cc8c8:	8d bd f8 fe ff ff    	lea    edi,[ebp-0x108]
100cc8ce:	2b f2                	sub    esi,edx
100cc8d0:	4f                   	dec    edi
100cc8d1:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100cc8d4:	47                   	inc    edi
100cc8d5:	84 c0                	test   al,al
100cc8d7:	75 f8                	jne    0x100cc8d1
100cc8d9:	8b ce                	mov    ecx,esi
100cc8db:	c1 e9 02             	shr    ecx,0x2
100cc8de:	89 b5 ec fd ff ff    	mov    DWORD PTR [ebp-0x214],esi
100cc8e4:	8b f2                	mov    esi,edx
100cc8e6:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100cc8e8:	8b 8d ec fd ff ff    	mov    ecx,DWORD PTR [ebp-0x214]
100cc8ee:	83 e1 03             	and    ecx,0x3
100cc8f1:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100cc8f3:	8d 8d f8 fe ff ff    	lea    ecx,[ebp-0x108]
100cc8f9:	49                   	dec    ecx
100cc8fa:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100cc900:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100cc903:	8d 49 01             	lea    ecx,[ecx+0x1]
100cc906:	84 c0                	test   al,al
100cc908:	75 f6                	jne    0x100cc900
100cc90a:	a1 30 72 1d 10       	mov    eax,ds:0x101d7230
100cc90f:	89 01                	mov    DWORD PTR [ecx],eax
100cc911:	a0 34 72 1d 10       	mov    al,ds:0x101d7234
100cc916:	88 41 04             	mov    BYTE PTR [ecx+0x4],al
100cc919:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
100cc91f:	50                   	push   eax
100cc920:	8d 85 f8 fe ff ff    	lea    eax,[ebp-0x108]
100cc926:	50                   	push   eax
100cc927:	ff 15 c4 30 22 10    	call   DWORD PTR ds:0x102230c4
100cc92d:	8b f0                	mov    esi,eax
100cc92f:	83 c4 08             	add    esp,0x8
100cc932:	85 f6                	test   esi,esi
100cc934:	0f 84 ab 00 00 00    	je     0x100cc9e5
100cc93a:	8b 85 f0 fd ff ff    	mov    eax,DWORD PTR [ebp-0x210]
100cc940:	83 c0 fc             	add    eax,0xfffffffc
100cc943:	89 85 f0 fd ff ff    	mov    DWORD PTR [ebp-0x210],eax
100cc949:	0f 88 8c 00 00 00    	js     0x100cc9db
100cc94f:	8b 0e                	mov    ecx,DWORD PTR [esi]
100cc951:	8d 7e 04             	lea    edi,[esi+0x4]
100cc954:	83 f9 10             	cmp    ecx,0x10
100cc957:	74 15                	je     0x100cc96e
100cc959:	6a 10                	push   0x10
100cc95b:	51                   	push   ecx
100cc95c:	68 38 72 1d 10       	push   0x101d7238
100cc961:	6a 02                	push   0x2
100cc963:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cc969:	83 c4 10             	add    esp,0x10
100cc96c:	eb 6d                	jmp    0x100cc9db
100cc96e:	05 34 df ff ff       	add    eax,0xffffdf34
100cc973:	89 85 f0 fd ff ff    	mov    DWORD PTR [ebp-0x210],eax
100cc979:	78 60                	js     0x100cc9db
100cc97b:	68 cc 20 00 00       	push   0x20cc
100cc980:	57                   	push   edi
100cc981:	53                   	push   ebx
100cc982:	e8 a9 37 07 00       	call   0x10140130
100cc987:	ff 73 18             	push   DWORD PTR [ebx+0x18]
100cc98a:	81 c7 cc 20 00 00    	add    edi,0x20cc
100cc990:	c7 43 0c 00 00 00 00 	mov    DWORD PTR [ebx+0xc],0x0
100cc997:	6a 58                	push   0x58
100cc999:	c7 43 10 00 00 00 00 	mov    DWORD PTR [ebx+0x10],0x0
100cc9a0:	c7 43 24 00 00 00 00 	mov    DWORD PTR [ebx+0x24],0x0
100cc9a7:	c7 43 14 00 00 00 00 	mov    DWORD PTR [ebx+0x14],0x0
100cc9ae:	c7 83 bc 20 00 00 00 	mov    DWORD PTR [ebx+0x20bc],0x0
100cc9b5:	00 00 00 
100cc9b8:	e8 79 4b 0a 00       	call   0x10171536
100cc9bd:	8b 4b 18             	mov    ecx,DWORD PTR [ebx+0x18]
100cc9c0:	83 c4 14             	add    esp,0x14
100cc9c3:	89 43 0c             	mov    DWORD PTR [ebx+0xc],eax
100cc9c6:	85 c0                	test   eax,eax
100cc9c8:	75 30                	jne    0x100cc9fa
100cc9ca:	51                   	push   ecx
100cc9cb:	68 3c 67 1d 10       	push   0x101d673c
100cc9d0:	6a 02                	push   0x2
100cc9d2:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cc9d8:	83 c4 0c             	add    esp,0xc
100cc9db:	56                   	push   esi
100cc9dc:	ff 15 c8 30 22 10    	call   DWORD PTR ds:0x102230c8
100cc9e2:	83 c4 04             	add    esp,0x4
100cc9e5:	5f                   	pop    edi
100cc9e6:	5e                   	pop    esi
100cc9e7:	33 c0                	xor    eax,eax
100cc9e9:	5b                   	pop    ebx
100cc9ea:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100cc9ed:	33 cd                	xor    ecx,ebp
100cc9ef:	e8 bf 11 07 00       	call   0x1013dbb3
100cc9f4:	8b e5                	mov    esp,ebp
100cc9f6:	5d                   	pop    ebp
100cc9f7:	c2 04 00             	ret    0x4
100cc9fa:	6b c9 58             	imul   ecx,ecx,0x58
100cc9fd:	29 8d f0 fd ff ff    	sub    DWORD PTR [ebp-0x210],ecx
100cca03:	78 d6                	js     0x100cc9db
100cca05:	51                   	push   ecx
100cca06:	57                   	push   edi
100cca07:	50                   	push   eax
100cca08:	e8 23 37 07 00       	call   0x10140130
100cca0d:	6b 43 18 58          	imul   eax,DWORD PTR [ebx+0x18],0x58
100cca11:	ff 73 1c             	push   DWORD PTR [ebx+0x1c]
100cca14:	6a 18                	push   0x18
100cca16:	03 f8                	add    edi,eax
100cca18:	e8 19 4b 0a 00       	call   0x10171536
100cca1d:	8b 4b 1c             	mov    ecx,DWORD PTR [ebx+0x1c]
100cca20:	8b d0                	mov    edx,eax
100cca22:	83 c4 14             	add    esp,0x14
100cca25:	89 53 10             	mov    DWORD PTR [ebx+0x10],edx
100cca28:	85 d2                	test   edx,edx
100cca2a:	75 08                	jne    0x100cca34
100cca2c:	51                   	push   ecx
100cca2d:	68 64 72 1d 10       	push   0x101d7264
100cca32:	eb 9c                	jmp    0x100cc9d0
100cca34:	8d 04 49             	lea    eax,[ecx+ecx*2]
100cca37:	c1 e0 03             	shl    eax,0x3
100cca3a:	29 85 f0 fd ff ff    	sub    DWORD PTR [ebp-0x210],eax
100cca40:	78 99                	js     0x100cc9db
100cca42:	50                   	push   eax
100cca43:	57                   	push   edi
100cca44:	52                   	push   edx
100cca45:	e8 e6 36 07 00       	call   0x10140130
100cca4a:	8b 43 1c             	mov    eax,DWORD PTR [ebx+0x1c]
100cca4d:	ff 73 18             	push   DWORD PTR [ebx+0x18]
100cca50:	6a 10                	push   0x10
100cca52:	8d 04 40             	lea    eax,[eax+eax*2]
100cca55:	8d 3c c7             	lea    edi,[edi+eax*8]
100cca58:	e8 d9 4a 0a 00       	call   0x10171536
100cca5d:	8b 4b 18             	mov    ecx,DWORD PTR [ebx+0x18]
100cca60:	83 c4 14             	add    esp,0x14
100cca63:	89 43 24             	mov    DWORD PTR [ebx+0x24],eax
100cca66:	85 c0                	test   eax,eax
100cca68:	75 0b                	jne    0x100cca75
100cca6a:	51                   	push   ecx
100cca6b:	68 88 72 1d 10       	push   0x101d7288
100cca70:	e9 5b ff ff ff       	jmp    0x100cc9d0
100cca75:	c1 e1 04             	shl    ecx,0x4
100cca78:	29 8d f0 fd ff ff    	sub    DWORD PTR [ebp-0x210],ecx
100cca7e:	0f 88 57 ff ff ff    	js     0x100cc9db
100cca84:	51                   	push   ecx
100cca85:	57                   	push   edi
100cca86:	50                   	push   eax
100cca87:	e8 a4 36 07 00       	call   0x10140130
100cca8c:	8b 43 18             	mov    eax,DWORD PTR [ebx+0x18]
100cca8f:	ff 73 20             	push   DWORD PTR [ebx+0x20]
100cca92:	c1 e0 04             	shl    eax,0x4
100cca95:	6a 01                	push   0x1
100cca97:	03 f8                	add    edi,eax
100cca99:	c7 43 08 00 00 00 00 	mov    DWORD PTR [ebx+0x8],0x0
100ccaa0:	e8 91 4a 0a 00       	call   0x10171536
100ccaa5:	83 c4 14             	add    esp,0x14
100ccaa8:	89 43 14             	mov    DWORD PTR [ebx+0x14],eax
100ccaab:	85 c0                	test   eax,eax
100ccaad:	75 0d                	jne    0x100ccabc
100ccaaf:	ff 73 20             	push   DWORD PTR [ebx+0x20]
100ccab2:	68 c0 72 1d 10       	push   0x101d72c0
100ccab7:	e9 14 ff ff ff       	jmp    0x100cc9d0
100ccabc:	33 d2                	xor    edx,edx
100ccabe:	c7 83 60 18 00 00 00 	mov    DWORD PTR [ebx+0x1860],0x0
100ccac5:	00 00 00 
100ccac8:	39 53 18             	cmp    DWORD PTR [ebx+0x18],edx
100ccacb:	7e 17                	jle    0x100ccae4
100ccacd:	33 c9                	xor    ecx,ecx
100ccacf:	90                   	nop
100ccad0:	8b 43 24             	mov    eax,DWORD PTR [ebx+0x24]
100ccad3:	8d 49 10             	lea    ecx,[ecx+0x10]
100ccad6:	42                   	inc    edx
100ccad7:	c7 44 01 fc 00 00 00 	mov    DWORD PTR [ecx+eax*1-0x4],0x0
100ccade:	00 
100ccadf:	3b 53 18             	cmp    edx,DWORD PTR [ebx+0x18]
100ccae2:	7c ec                	jl     0x100ccad0
100ccae4:	8b 43 20             	mov    eax,DWORD PTR [ebx+0x20]
100ccae7:	29 85 f0 fd ff ff    	sub    DWORD PTR [ebp-0x210],eax
100ccaed:	0f 88 e8 fe ff ff    	js     0x100cc9db
100ccaf3:	50                   	push   eax
100ccaf4:	57                   	push   edi
100ccaf5:	ff 73 14             	push   DWORD PTR [ebx+0x14]
100ccaf8:	e8 33 36 07 00       	call   0x10140130
100ccafd:	ff b3 c0 20 00 00    	push   DWORD PTR [ebx+0x20c0]
100ccb03:	03 7b 20             	add    edi,DWORD PTR [ebx+0x20]
100ccb06:	6a 02                	push   0x2
100ccb08:	c7 43 08 01 00 00 00 	mov    DWORD PTR [ebx+0x8],0x1
100ccb0f:	e8 22 4a 0a 00       	call   0x10171536
100ccb14:	8b c8                	mov    ecx,eax
100ccb16:	83 c4 14             	add    esp,0x14
100ccb19:	8b 83 c0 20 00 00    	mov    eax,DWORD PTR [ebx+0x20c0]
100ccb1f:	89 8b bc 20 00 00    	mov    DWORD PTR [ebx+0x20bc],ecx
100ccb25:	85 c9                	test   ecx,ecx
100ccb27:	75 0b                	jne    0x100ccb34
100ccb29:	50                   	push   eax
100ccb2a:	68 f0 72 1d 10       	push   0x101d72f0
100ccb2f:	e9 9c fe ff ff       	jmp    0x100cc9d0
100ccb34:	03 c0                	add    eax,eax
100ccb36:	29 85 f0 fd ff ff    	sub    DWORD PTR [ebp-0x210],eax
100ccb3c:	0f 88 99 fe ff ff    	js     0x100cc9db
100ccb42:	50                   	push   eax
100ccb43:	57                   	push   edi
100ccb44:	51                   	push   ecx
100ccb45:	e8 e6 35 07 00       	call   0x10140130
100ccb4a:	56                   	push   esi
100ccb4b:	c7 03 01 00 00 00    	mov    DWORD PTR [ebx],0x1
100ccb51:	c7 43 04 00 00 00 00 	mov    DWORD PTR [ebx+0x4],0x0
100ccb58:	ff 15 c8 30 22 10    	call   DWORD PTR ds:0x102230c8
100ccb5e:	8b 85 f0 fd ff ff    	mov    eax,DWORD PTR [ebp-0x210]
100ccb64:	83 c4 10             	add    esp,0x10
100ccb67:	85 c0                	test   eax,eax
100ccb69:	74 11                	je     0x100ccb7c
100ccb6b:	50                   	push   eax
100ccb6c:	68 28 73 1d 10       	push   0x101d7328
100ccb71:	6a 02                	push   0x2
100ccb73:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100ccb79:	83 c4 0c             	add    esp,0xc
100ccb7c:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100ccb7f:	b8 01 00 00 00       	mov    eax,0x1
100ccb84:	5f                   	pop    edi
100ccb85:	5e                   	pop    esi
100ccb86:	33 cd                	xor    ecx,ebp
100ccb88:	5b                   	pop    ebx
100ccb89:	e8 25 10 07 00       	call   0x1013dbb3
100ccb8e:	8b e5                	mov    esp,ebp
100ccb90:	5d                   	pop    ebp
100ccb91:	c2 04 00             	ret    0x4
