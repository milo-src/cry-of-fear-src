
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cfa30 <.text+0xcea30>:
100cfa30:	55                   	push   ebp
100cfa31:	8b ec                	mov    ebp,esp
100cfa33:	83 ec 3c             	sub    esp,0x3c
100cfa36:	56                   	push   esi
100cfa37:	57                   	push   edi
100cfa38:	8b f9                	mov    edi,ecx
100cfa3a:	ba 04 00 00 00       	mov    edx,0x4
100cfa3f:	33 c9                	xor    ecx,ecx
100cfa41:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
100cfa44:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
100cfa47:	f7 e2                	mul    edx
100cfa49:	0f 90 c1             	seto   cl
100cfa4c:	f7 d9                	neg    ecx
100cfa4e:	0b c8                	or     ecx,eax
100cfa50:	51                   	push   ecx
100cfa51:	e8 52 eb 06 00       	call   0x1013e5a8
100cfa56:	8b f0                	mov    esi,eax
100cfa58:	33 c9                	xor    ecx,ecx
100cfa5a:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
100cfa5d:	ba 04 00 00 00       	mov    edx,0x4
100cfa62:	f7 e2                	mul    edx
100cfa64:	89 75 e8             	mov    DWORD PTR [ebp-0x18],esi
100cfa67:	0f 90 c1             	seto   cl
100cfa6a:	f7 d9                	neg    ecx
100cfa6c:	0b c8                	or     ecx,eax
100cfa6e:	51                   	push   ecx
100cfa6f:	e8 34 eb 06 00       	call   0x1013e5a8
100cfa74:	83 c4 08             	add    esp,0x8
100cfa77:	89 45 e4             	mov    DWORD PTR [ebp-0x1c],eax
100cfa7a:	85 f6                	test   esi,esi
100cfa7c:	0f 84 37 03 00 00    	je     0x100cfdb9
100cfa82:	85 c0                	test   eax,eax
100cfa84:	0f 84 1f 03 00 00    	je     0x100cfda9
100cfa8a:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [ebp-0x8],0x0
100cfa91:	33 c0                	xor    eax,eax
100cfa93:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
100cfa96:	83 e8 00             	sub    eax,0x0
100cfa99:	74 0e                	je     0x100cfaa9
100cfa9b:	83 e8 01             	sub    eax,0x1
100cfa9e:	75 10                	jne    0x100cfab0
100cfaa0:	c7 45 ec 40 03 00 00 	mov    DWORD PTR [ebp-0x14],0x340
100cfaa7:	eb 07                	jmp    0x100cfab0
100cfaa9:	c7 45 ec 00 00 00 00 	mov    DWORD PTR [ebp-0x14],0x0
100cfab0:	8b 4f 18             	mov    ecx,DWORD PTR [edi+0x18]
100cfab3:	33 d2                	xor    edx,edx
100cfab5:	89 55 f4             	mov    DWORD PTR [ebp-0xc],edx
100cfab8:	85 c9                	test   ecx,ecx
100cfaba:	0f 8e a5 01 00 00    	jle    0x100cfc65
100cfac0:	33 f6                	xor    esi,esi
100cfac2:	8b c1                	mov    eax,ecx
100cfac4:	89 75 f0             	mov    DWORD PTR [ebp-0x10],esi
100cfac7:	85 c9                	test   ecx,ecx
100cfac9:	0f 8e 88 01 00 00    	jle    0x100cfc57
100cfacf:	90                   	nop
100cfad0:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
100cfad3:	8b cf                	mov    ecx,edi
100cfad5:	c7 47 08 00 00 00 00 	mov    DWORD PTR [edi+0x8],0x0
100cfadc:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
100cfadf:	56                   	push   esi
100cfae0:	52                   	push   edx
100cfae1:	ff 75 e8             	push   DWORD PTR [ebp-0x18]
100cfae4:	e8 f7 da ff ff       	call   0x100cd5e0
100cfae9:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
100cfaec:	8b cf                	mov    ecx,edi
100cfaee:	89 45 d8             	mov    DWORD PTR [ebp-0x28],eax
100cfaf1:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
100cfaf4:	c7 47 08 01 00 00 00 	mov    DWORD PTR [edi+0x8],0x1
100cfafb:	56                   	push   esi
100cfafc:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
100cfaff:	ff 75 e4             	push   DWORD PTR [ebp-0x1c]
100cfb02:	e8 d9 da ff ff       	call   0x100cd5e0
100cfb07:	89 45 d4             	mov    DWORD PTR [ebp-0x2c],eax
100cfb0a:	83 f8 0a             	cmp    eax,0xa
100cfb0d:	0f 84 32 01 00 00    	je     0x100cfc45
100cfb13:	8b 4d d8             	mov    ecx,DWORD PTR [ebp-0x28]
100cfb16:	0f 57 c9             	xorps  xmm1,xmm1
100cfb19:	49                   	dec    ecx
100cfb1a:	f3 0f 11 4d dc       	movss  DWORD PTR [ebp-0x24],xmm1
100cfb1f:	89 4d d0             	mov    DWORD PTR [ebp-0x30],ecx
100cfb22:	85 c9                	test   ecx,ecx
100cfb24:	7e 74                	jle    0x100cfb9a
100cfb26:	8b 75 e8             	mov    esi,DWORD PTR [ebp-0x18]
100cfb29:	83 c6 04             	add    esi,0x4
100cfb2c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100cfb30:	8b 46 fc             	mov    eax,DWORD PTR [esi-0x4]
100cfb33:	3b 06                	cmp    eax,DWORD PTR [esi]
100cfb35:	74 57                	je     0x100cfb8e
100cfb37:	8b 7f 0c             	mov    edi,DWORD PTR [edi+0xc]
100cfb3a:	33 c9                	xor    ecx,ecx
100cfb3c:	6b c0 58             	imul   eax,eax,0x58
100cfb3f:	8b 54 38 20          	mov    edx,DWORD PTR [eax+edi*1+0x20]
100cfb43:	89 55 cc             	mov    DWORD PTR [ebp-0x34],edx
100cfb46:	3b d1                	cmp    edx,ecx
100cfb48:	7e 2c                	jle    0x100cfb76
100cfb4a:	8b 44 38 24          	mov    eax,DWORD PTR [eax+edi*1+0x24]
100cfb4e:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
100cfb51:	8b 7d cc             	mov    edi,DWORD PTR [ebp-0x34]
100cfb54:	89 45 c8             	mov    DWORD PTR [ebp-0x38],eax
100cfb57:	8d 04 40             	lea    eax,[eax+eax*2]
100cfb5a:	8d 04 c5 04 00 00 00 	lea    eax,[eax*8+0x4]
100cfb61:	03 42 10             	add    eax,DWORD PTR [edx+0x10]
100cfb64:	8b 16                	mov    edx,DWORD PTR [esi]
100cfb66:	39 10                	cmp    DWORD PTR [eax],edx
100cfb68:	0f 84 1c 01 00 00    	je     0x100cfc8a
100cfb6e:	41                   	inc    ecx
100cfb6f:	83 c0 18             	add    eax,0x18
100cfb72:	3b cf                	cmp    ecx,edi
100cfb74:	7c f0                	jl     0x100cfb66
100cfb76:	68 6c 74 1d 10       	push   0x101d746c
100cfb7b:	6a 02                	push   0x2
100cfb7d:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cfb83:	f3 0f 10 4d dc       	movss  xmm1,DWORD PTR [ebp-0x24]
100cfb88:	83 c4 08             	add    esp,0x8
100cfb8b:	8b 7d fc             	mov    edi,DWORD PTR [ebp-0x4]
100cfb8e:	83 c6 04             	add    esi,0x4
100cfb91:	83 6d d0 01          	sub    DWORD PTR [ebp-0x30],0x1
100cfb95:	75 99                	jne    0x100cfb30
100cfb97:	8b 45 d4             	mov    eax,DWORD PTR [ebp-0x2c]
100cfb9a:	48                   	dec    eax
100cfb9b:	0f 57 c9             	xorps  xmm1,xmm1
100cfb9e:	f3 0f 11 4d d0       	movss  DWORD PTR [ebp-0x30],xmm1
100cfba3:	89 45 cc             	mov    DWORD PTR [ebp-0x34],eax
100cfba6:	85 c0                	test   eax,eax
100cfba8:	7e 74                	jle    0x100cfc1e
100cfbaa:	8b 75 e4             	mov    esi,DWORD PTR [ebp-0x1c]
100cfbad:	83 c6 04             	add    esi,0x4
100cfbb0:	8b 46 fc             	mov    eax,DWORD PTR [esi-0x4]
100cfbb3:	3b 06                	cmp    eax,DWORD PTR [esi]
100cfbb5:	74 5e                	je     0x100cfc15
100cfbb7:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
100cfbba:	33 c9                	xor    ecx,ecx
100cfbbc:	6b c0 58             	imul   eax,eax,0x58
100cfbbf:	8b 52 0c             	mov    edx,DWORD PTR [edx+0xc]
100cfbc2:	8b 7c 10 20          	mov    edi,DWORD PTR [eax+edx*1+0x20]
100cfbc6:	89 7d c8             	mov    DWORD PTR [ebp-0x38],edi
100cfbc9:	3b f9                	cmp    edi,ecx
100cfbcb:	7e 33                	jle    0x100cfc00
100cfbcd:	8b 44 10 24          	mov    eax,DWORD PTR [eax+edx*1+0x24]
100cfbd1:	8b 7d fc             	mov    edi,DWORD PTR [ebp-0x4]
100cfbd4:	8b 55 c8             	mov    edx,DWORD PTR [ebp-0x38]
100cfbd7:	89 45 c4             	mov    DWORD PTR [ebp-0x3c],eax
100cfbda:	8d 04 40             	lea    eax,[eax+eax*2]
100cfbdd:	8d 04 c5 04 00 00 00 	lea    eax,[eax*8+0x4]
100cfbe4:	03 47 10             	add    eax,DWORD PTR [edi+0x10]
100cfbe7:	8b 3e                	mov    edi,DWORD PTR [esi]
100cfbe9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100cfbf0:	39 38                	cmp    DWORD PTR [eax],edi
100cfbf2:	0f 84 b0 00 00 00    	je     0x100cfca8
100cfbf8:	41                   	inc    ecx
100cfbf9:	83 c0 18             	add    eax,0x18
100cfbfc:	3b ca                	cmp    ecx,edx
100cfbfe:	7c f0                	jl     0x100cfbf0
100cfc00:	68 6c 74 1d 10       	push   0x101d746c
100cfc05:	6a 02                	push   0x2
100cfc07:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cfc0d:	f3 0f 10 4d d0       	movss  xmm1,DWORD PTR [ebp-0x30]
100cfc12:	83 c4 08             	add    esp,0x8
100cfc15:	83 c6 04             	add    esi,0x4
100cfc18:	83 6d cc 01          	sub    DWORD PTR [ebp-0x34],0x1
100cfc1c:	75 92                	jne    0x100cfbb0
100cfc1e:	f3 0f 10 45 dc       	movss  xmm0,DWORD PTR [ebp-0x24]
100cfc23:	f3 0f 5c c1          	subss  xmm0,xmm1
100cfc27:	0f 5a c0             	cvtps2pd xmm0,xmm0
100cfc2a:	0f 54 05 90 1f 1a 10 	andps  xmm0,XMMWORD PTR ds:0x101a1f90
100cfc31:	66 0f 2f 05 f8 1d 1a 	comisd xmm0,QWORD PTR ds:0x101a1df8
100cfc38:	10 
100cfc39:	0f 87 87 00 00 00    	ja     0x100cfcc6
100cfc3f:	8b 7d fc             	mov    edi,DWORD PTR [ebp-0x4]
100cfc42:	8b 75 f0             	mov    esi,DWORD PTR [ebp-0x10]
100cfc45:	8b 47 18             	mov    eax,DWORD PTR [edi+0x18]
100cfc48:	46                   	inc    esi
100cfc49:	8b 55 f4             	mov    edx,DWORD PTR [ebp-0xc]
100cfc4c:	89 75 f0             	mov    DWORD PTR [ebp-0x10],esi
100cfc4f:	3b f0                	cmp    esi,eax
100cfc51:	0f 8c 79 fe ff ff    	jl     0x100cfad0
100cfc57:	42                   	inc    edx
100cfc58:	8b c8                	mov    ecx,eax
100cfc5a:	89 55 f4             	mov    DWORD PTR [ebp-0xc],edx
100cfc5d:	3b d0                	cmp    edx,eax
100cfc5f:	0f 8c 5b fe ff ff    	jl     0x100cfac0
100cfc65:	8b 45 e0             	mov    eax,DWORD PTR [ebp-0x20]
100cfc68:	40                   	inc    eax
100cfc69:	89 45 e0             	mov    DWORD PTR [ebp-0x20],eax
100cfc6c:	83 f8 02             	cmp    eax,0x2
100cfc6f:	0f 8c 21 fe ff ff    	jl     0x100cfa96
100cfc75:	8b 75 f8             	mov    esi,DWORD PTR [ebp-0x8]
100cfc78:	46                   	inc    esi
100cfc79:	89 75 f8             	mov    DWORD PTR [ebp-0x8],esi
100cfc7c:	83 fe 04             	cmp    esi,0x4
100cfc7f:	0f 8c 0c fe ff ff    	jl     0x100cfa91
100cfc85:	e9 1f 01 00 00       	jmp    0x100cfda9
100cfc8a:	8b 7d fc             	mov    edi,DWORD PTR [ebp-0x4]
100cfc8d:	8b 45 c8             	mov    eax,DWORD PTR [ebp-0x38]
100cfc90:	03 c1                	add    eax,ecx
100cfc92:	8b 4f 10             	mov    ecx,DWORD PTR [edi+0x10]
100cfc95:	8d 04 40             	lea    eax,[eax+eax*2]
100cfc98:	f3 0f 58 4c c1 14    	addss  xmm1,DWORD PTR [ecx+eax*8+0x14]
100cfc9e:	f3 0f 11 4d dc       	movss  DWORD PTR [ebp-0x24],xmm1
100cfca3:	e9 e6 fe ff ff       	jmp    0x100cfb8e
100cfca8:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
100cfcab:	8b 45 c4             	mov    eax,DWORD PTR [ebp-0x3c]
100cfcae:	03 c1                	add    eax,ecx
100cfcb0:	8b 4a 10             	mov    ecx,DWORD PTR [edx+0x10]
100cfcb3:	8d 04 40             	lea    eax,[eax+eax*2]
100cfcb6:	f3 0f 58 4c c1 14    	addss  xmm1,DWORD PTR [ecx+eax*8+0x14]
100cfcbc:	f3 0f 11 4d d0       	movss  DWORD PTR [ebp-0x30],xmm1
100cfcc1:	e9 4f ff ff ff       	jmp    0x100cfc15
100cfcc6:	68 78 74 1d 10       	push   0x101d7478
100cfccb:	6a 02                	push   0x2
100cfccd:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cfcd3:	ff 75 e0             	push   DWORD PTR [ebp-0x20]
100cfcd6:	8b 7d f0             	mov    edi,DWORD PTR [ebp-0x10]
100cfcd9:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
100cfcdc:	57                   	push   edi
100cfcdd:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
100cfce0:	68 94 74 1d 10       	push   0x101d7494
100cfce5:	6a 02                	push   0x2
100cfce7:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cfced:	33 f6                	xor    esi,esi
100cfcef:	83 c4 20             	add    esp,0x20
100cfcf2:	39 75 d8             	cmp    DWORD PTR [ebp-0x28],esi
100cfcf5:	7e 27                	jle    0x100cfd1e
100cfcf7:	8b 7d d8             	mov    edi,DWORD PTR [ebp-0x28]
100cfcfa:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100cfd00:	8b 45 e8             	mov    eax,DWORD PTR [ebp-0x18]
100cfd03:	ff 34 b0             	push   DWORD PTR [eax+esi*4]
100cfd06:	68 a8 74 1d 10       	push   0x101d74a8
100cfd0b:	6a 02                	push   0x2
100cfd0d:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cfd13:	46                   	inc    esi
100cfd14:	83 c4 0c             	add    esp,0xc
100cfd17:	3b f7                	cmp    esi,edi
100cfd19:	7c e5                	jl     0x100cfd00
100cfd1b:	8b 7d f0             	mov    edi,DWORD PTR [ebp-0x10]
100cfd1e:	ff 75 e0             	push   DWORD PTR [ebp-0x20]
100cfd21:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
100cfd24:	57                   	push   edi
100cfd25:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
100cfd28:	68 ac 74 1d 10       	push   0x101d74ac
100cfd2d:	6a 02                	push   0x2
100cfd2f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cfd35:	33 f6                	xor    esi,esi
100cfd37:	83 c4 18             	add    esp,0x18
100cfd3a:	39 75 d4             	cmp    DWORD PTR [ebp-0x2c],esi
100cfd3d:	7e 21                	jle    0x100cfd60
100cfd3f:	8b 7d d4             	mov    edi,DWORD PTR [ebp-0x2c]
100cfd42:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
100cfd45:	ff 34 b0             	push   DWORD PTR [eax+esi*4]
100cfd48:	68 a8 74 1d 10       	push   0x101d74a8
100cfd4d:	6a 02                	push   0x2
100cfd4f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cfd55:	46                   	inc    esi
100cfd56:	83 c4 0c             	add    esp,0xc
100cfd59:	3b f7                	cmp    esi,edi
100cfd5b:	7c e5                	jl     0x100cfd42
100cfd5d:	8b 7d f0             	mov    edi,DWORD PTR [ebp-0x10]
100cfd60:	68 c8 84 1a 10       	push   0x101a84c8
100cfd65:	6a 02                	push   0x2
100cfd67:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100cfd6d:	8b 75 fc             	mov    esi,DWORD PTR [ebp-0x4]
100cfd70:	83 c4 08             	add    esp,0x8
100cfd73:	8b ce                	mov    ecx,esi
100cfd75:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
100cfd78:	c7 46 08 00 00 00 00 	mov    DWORD PTR [esi+0x8],0x0
100cfd7f:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
100cfd82:	57                   	push   edi
100cfd83:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
100cfd86:	ff 75 e8             	push   DWORD PTR [ebp-0x18]
100cfd89:	e8 52 d8 ff ff       	call   0x100cd5e0
100cfd8e:	ff 75 ec             	push   DWORD PTR [ebp-0x14]
100cfd91:	8b ce                	mov    ecx,esi
100cfd93:	c7 46 08 01 00 00 00 	mov    DWORD PTR [esi+0x8],0x1
100cfd9a:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
100cfd9d:	57                   	push   edi
100cfd9e:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
100cfda1:	ff 75 e4             	push   DWORD PTR [ebp-0x1c]
100cfda4:	e8 37 d8 ff ff       	call   0x100cd5e0
100cfda9:	6a 04                	push   0x4
100cfdab:	ff 75 e8             	push   DWORD PTR [ebp-0x18]
100cfdae:	e8 f2 dd 06 00       	call   0x1013dba5
100cfdb3:	8b 45 e4             	mov    eax,DWORD PTR [ebp-0x1c]
100cfdb6:	83 c4 08             	add    esp,0x8
100cfdb9:	5f                   	pop    edi
100cfdba:	5e                   	pop    esi
100cfdbb:	85 c0                	test   eax,eax
100cfdbd:	74 0b                	je     0x100cfdca
100cfdbf:	6a 04                	push   0x4
100cfdc1:	50                   	push   eax
100cfdc2:	e8 de dd 06 00       	call   0x1013dba5
100cfdc7:	83 c4 08             	add    esp,0x8
100cfdca:	8b e5                	mov    esp,ebp
100cfdcc:	5d                   	pop    ebp
100cfdcd:	c3                   	ret
