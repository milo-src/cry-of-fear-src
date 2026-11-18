
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004dbf0 <.text+0x4cbf0>:
1004dbf0:	55                   	push   ebp
1004dbf1:	8b ec                	mov    ebp,esp
1004dbf3:	81 ec 10 02 00 00    	sub    esp,0x210
1004dbf9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1004dbfe:	33 c5                	xor    eax,ebp
1004dc00:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1004dc03:	53                   	push   ebx
1004dc04:	56                   	push   esi
1004dc05:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
1004dc08:	8d 85 f8 fd ff ff    	lea    eax,[ebp-0x208]
1004dc0e:	50                   	push   eax
1004dc0f:	56                   	push   esi
1004dc10:	89 8d f0 fd ff ff    	mov    DWORD PTR [ebp-0x210],ecx
1004dc16:	ff 15 c4 30 22 10    	call   DWORD PTR ds:0x102230c4
1004dc1c:	8b d8                	mov    ebx,eax
1004dc1e:	83 c4 08             	add    esp,0x8
1004dc21:	85 db                	test   ebx,ebx
1004dc23:	0f 84 ec 01 00 00    	je     0x1004de15
1004dc29:	83 bd f8 fd ff ff 00 	cmp    DWORD PTR [ebp-0x208],0x0
1004dc30:	0f 84 df 01 00 00    	je     0x1004de15
1004dc36:	53                   	push   ebx
1004dc37:	e8 a4 91 07 00       	call   0x100c6de0
1004dc3c:	ba a8 31 22 10       	mov    edx,0x102231a8
1004dc41:	8b f0                	mov    esi,eax
1004dc43:	83 c4 04             	add    esp,0x4
1004dc46:	8d 42 01             	lea    eax,[edx+0x1]
1004dc49:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
1004dc50:	8a 0a                	mov    cl,BYTE PTR [edx]
1004dc52:	42                   	inc    edx
1004dc53:	84 c9                	test   cl,cl
1004dc55:	75 f9                	jne    0x1004dc50
1004dc57:	57                   	push   edi
1004dc58:	2b d0                	sub    edx,eax
1004dc5a:	0f 84 51 01 00 00    	je     0x1004ddb1
1004dc60:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1004dc63:	33 c9                	xor    ecx,ecx
1004dc65:	66 66 66 0f 1f 84 00 	data16 data16 nop WORD PTR [eax+eax*1+0x0]
1004dc6c:	00 00 00 00 
1004dc70:	8a 81 a8 31 22 10    	mov    al,BYTE PTR [ecx+0x102231a8]
1004dc76:	8d 49 01             	lea    ecx,[ecx+0x1]
1004dc79:	88 84 0d fb fd ff ff 	mov    BYTE PTR [ebp+ecx*1-0x205],al
1004dc80:	84 c0                	test   al,al
1004dc82:	75 ec                	jne    0x1004dc70
1004dc84:	56                   	push   esi
1004dc85:	e8 56 91 07 00       	call   0x100c6de0
1004dc8a:	83 c4 04             	add    esp,0x4
1004dc8d:	80 3d a8 31 22 10 7b 	cmp    BYTE PTR ds:0x102231a8,0x7b
1004dc94:	0f 85 ed 00 00 00    	jne    0x1004dd87
1004dc9a:	50                   	push   eax
1004dc9b:	e8 40 91 07 00       	call   0x100c6de0
1004dca0:	83 c4 04             	add    esp,0x4
1004dca3:	8b f0                	mov    esi,eax
1004dca5:	80 3d a8 31 22 10 7d 	cmp    BYTE PTR ds:0x102231a8,0x7d
1004dcac:	0f 84 8f 00 00 00    	je     0x1004dd41
1004dcb2:	ba a8 31 22 10       	mov    edx,0x102231a8
1004dcb7:	b9 e0 17 1b 10       	mov    ecx,0x101b17e0
1004dcbc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
1004dcc0:	8a 01                	mov    al,BYTE PTR [ecx]
1004dcc2:	3a 02                	cmp    al,BYTE PTR [edx]
1004dcc4:	75 1a                	jne    0x1004dce0
1004dcc6:	84 c0                	test   al,al
1004dcc8:	74 12                	je     0x1004dcdc
1004dcca:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1004dccd:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
1004dcd0:	75 0e                	jne    0x1004dce0
1004dcd2:	83 c1 02             	add    ecx,0x2
1004dcd5:	83 c2 02             	add    edx,0x2
1004dcd8:	84 c0                	test   al,al
1004dcda:	75 e4                	jne    0x1004dcc0
1004dcdc:	33 c0                	xor    eax,eax
1004dcde:	eb 05                	jmp    0x1004dce5
1004dce0:	1b c0                	sbb    eax,eax
1004dce2:	83 c8 01             	or     eax,0x1
1004dce5:	85 c0                	test   eax,eax
1004dce7:	75 40                	jne    0x1004dd29
1004dce9:	56                   	push   esi
1004dcea:	e8 f1 90 07 00       	call   0x100c6de0
1004dcef:	8b f0                	mov    esi,eax
1004dcf1:	83 c4 04             	add    esp,0x4
1004dcf4:	8b cf                	mov    ecx,edi
1004dcf6:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
1004dcfc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
1004dd00:	8a 10                	mov    dl,BYTE PTR [eax]
1004dd02:	3a 11                	cmp    dl,BYTE PTR [ecx]
1004dd04:	75 1a                	jne    0x1004dd20
1004dd06:	84 d2                	test   dl,dl
1004dd08:	74 12                	je     0x1004dd1c
1004dd0a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1004dd0d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1004dd10:	75 0e                	jne    0x1004dd20
1004dd12:	83 c0 02             	add    eax,0x2
1004dd15:	83 c1 02             	add    ecx,0x2
1004dd18:	84 d2                	test   dl,dl
1004dd1a:	75 e4                	jne    0x1004dd00
1004dd1c:	33 c0                	xor    eax,eax
1004dd1e:	eb 05                	jmp    0x1004dd25
1004dd20:	1b c0                	sbb    eax,eax
1004dd22:	83 c8 01             	or     eax,0x1
1004dd25:	85 c0                	test   eax,eax
1004dd27:	74 3c                	je     0x1004dd65
1004dd29:	56                   	push   esi
1004dd2a:	e8 b1 90 07 00       	call   0x100c6de0
1004dd2f:	83 c4 04             	add    esp,0x4
1004dd32:	8b f0                	mov    esi,eax
1004dd34:	80 3d a8 31 22 10 7d 	cmp    BYTE PTR ds:0x102231a8,0x7d
1004dd3b:	0f 85 71 ff ff ff    	jne    0x1004dcb2
1004dd41:	56                   	push   esi
1004dd42:	e8 99 90 07 00       	call   0x100c6de0
1004dd47:	b9 a8 31 22 10       	mov    ecx,0x102231a8
1004dd4c:	83 c4 04             	add    esp,0x4
1004dd4f:	8b f0                	mov    esi,eax
1004dd51:	8d 51 01             	lea    edx,[ecx+0x1]
1004dd54:	8a 01                	mov    al,BYTE PTR [ecx]
1004dd56:	41                   	inc    ecx
1004dd57:	84 c0                	test   al,al
1004dd59:	75 f9                	jne    0x1004dd54
1004dd5b:	2b ca                	sub    ecx,edx
1004dd5d:	0f 85 00 ff ff ff    	jne    0x1004dc63
1004dd63:	eb 4c                	jmp    0x1004ddb1
1004dd65:	53                   	push   ebx
1004dd66:	ff 15 c8 30 22 10    	call   DWORD PTR ds:0x102230c8
1004dd6c:	83 c4 04             	add    esp,0x4
1004dd6f:	b8 a8 31 22 10       	mov    eax,0x102231a8
1004dd74:	5f                   	pop    edi
1004dd75:	5e                   	pop    esi
1004dd76:	5b                   	pop    ebx
1004dd77:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1004dd7a:	33 cd                	xor    ecx,ebp
1004dd7c:	e8 32 fe 0e 00       	call   0x1013dbb3
1004dd81:	8b e5                	mov    esp,ebp
1004dd83:	5d                   	pop    ebp
1004dd84:	c2 08 00             	ret    0x8
1004dd87:	68 74 17 1b 10       	push   0x101b1774
1004dd8c:	6a 01                	push   0x1
1004dd8e:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1004dd94:	68 a8 17 1b 10       	push   0x101b17a8
1004dd99:	6a 01                	push   0x1
1004dd9b:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1004dda1:	68 74 17 1b 10       	push   0x101b1774
1004dda6:	6a 01                	push   0x1
1004dda8:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1004ddae:	83 c4 18             	add    esp,0x18
1004ddb1:	53                   	push   ebx
1004ddb2:	ff 15 c8 30 22 10    	call   DWORD PTR ds:0x102230c8
1004ddb8:	8b 85 f0 fd ff ff    	mov    eax,DWORD PTR [ebp-0x210]
1004ddbe:	83 ec 14             	sub    esp,0x14
1004ddc1:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004ddc4:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
1004ddc9:	0f 5a c0             	cvtps2pd xmm0,xmm0
1004ddcc:	f2 0f 11 44 24 10    	movsd  QWORD PTR [esp+0x10],xmm0
1004ddd2:	f3 0f 10 40 0c       	movss  xmm0,DWORD PTR [eax+0xc]
1004ddd7:	0f 5a c0             	cvtps2pd xmm0,xmm0
1004ddda:	f2 0f 11 44 24 08    	movsd  QWORD PTR [esp+0x8],xmm0
1004dde0:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
1004dde5:	0f 5a c0             	cvtps2pd xmm0,xmm0
1004dde8:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
1004dded:	68 e8 17 1b 10       	push   0x101b17e8
1004ddf2:	6a 01                	push   0x1
1004ddf4:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1004ddfa:	83 c4 20             	add    esp,0x20
1004ddfd:	b8 96 24 1a 10       	mov    eax,0x101a2496
1004de02:	5f                   	pop    edi
1004de03:	5e                   	pop    esi
1004de04:	5b                   	pop    ebx
1004de05:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1004de08:	33 cd                	xor    ecx,ebp
1004de0a:	e8 a4 fd 0e 00       	call   0x1013dbb3
1004de0f:	8b e5                	mov    esp,ebp
1004de11:	5d                   	pop    ebp
1004de12:	c2 08 00             	ret    0x8
1004de15:	68 74 17 1b 10       	push   0x101b1774
1004de1a:	6a 01                	push   0x1
1004de1c:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1004de22:	56                   	push   esi
1004de23:	68 78 17 1b 10       	push   0x101b1778
1004de28:	6a 01                	push   0x1
1004de2a:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1004de30:	68 74 17 1b 10       	push   0x101b1774
1004de35:	6a 01                	push   0x1
1004de37:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1004de3d:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1004de40:	83 c4 1c             	add    esp,0x1c
1004de43:	33 cd                	xor    ecx,ebp
1004de45:	b8 96 24 1a 10       	mov    eax,0x101a2496
1004de4a:	5e                   	pop    esi
1004de4b:	5b                   	pop    ebx
1004de4c:	e8 62 fd 0e 00       	call   0x1013dbb3
1004de51:	8b e5                	mov    esp,ebp
1004de53:	5d                   	pop    ebp
1004de54:	c2 08 00             	ret    0x8
1004de57:	cc                   	int3
1004de58:	cc                   	int3
1004de59:	cc                   	int3
1004de5a:	cc                   	int3
1004de5b:	cc                   	int3
1004de5c:	cc                   	int3
1004de5d:	cc                   	int3
1004de5e:	cc                   	int3
1004de5f:	cc                   	int3
