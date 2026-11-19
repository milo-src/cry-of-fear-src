
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004fb50 <.text+0x4eb50>:
1004fb50:	55                   	push   ebp
1004fb51:	8b ec                	mov    ebp,esp
1004fb53:	83 ec 0c             	sub    esp,0xc
1004fb56:	53                   	push   ebx
1004fb57:	8b d9                	mov    ebx,ecx
1004fb59:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1004fb5c:	85 c9                	test   ecx,ecx
1004fb5e:	0f 84 10 03 00 00    	je     0x1004fe74
1004fb64:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1004fb67:	83 b8 b8 00 00 00 00 	cmp    DWORD PTR [eax+0xb8],0x0
1004fb6e:	0f 84 00 03 00 00    	je     0x1004fe74
1004fb74:	56                   	push   esi
1004fb75:	57                   	push   edi
1004fb76:	ff 71 04             	push   DWORD PTR [ecx+0x4]
1004fb79:	e8 62 2a fc ff       	call   0x100125e0
1004fb7e:	8b f8                	mov    edi,eax
1004fb80:	83 c4 04             	add    esp,0x4
1004fb83:	85 ff                	test   edi,edi
1004fb85:	0f 84 19 01 00 00    	je     0x1004fca4
1004fb8b:	8b 8f 2c 25 00 00    	mov    ecx,DWORD PTR [edi+0x252c]
1004fb91:	85 c9                	test   ecx,ecx
1004fb93:	0f 84 0b 01 00 00    	je     0x1004fca4
1004fb99:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
1004fb9c:	ba b8 8a 1a 10       	mov    edx,0x101a8ab8
1004fba1:	8b 35 88 31 22 10    	mov    esi,DWORD PTR ds:0x10223188
1004fba7:	8b 89 0c 02 00 00    	mov    ecx,DWORD PTR [ecx+0x20c]
1004fbad:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
1004fbb3:	f7 d9                	neg    ecx
1004fbb5:	1b c9                	sbb    ecx,ecx
1004fbb7:	23 c8                	and    ecx,eax
1004fbb9:	8b 01                	mov    eax,DWORD PTR [ecx]
1004fbbb:	03 86 98 00 00 00    	add    eax,DWORD PTR [esi+0x98]
1004fbc1:	8a 08                	mov    cl,BYTE PTR [eax]
1004fbc3:	3a 0a                	cmp    cl,BYTE PTR [edx]
1004fbc5:	75 1a                	jne    0x1004fbe1
1004fbc7:	84 c9                	test   cl,cl
1004fbc9:	74 12                	je     0x1004fbdd
1004fbcb:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1004fbce:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
1004fbd1:	75 0e                	jne    0x1004fbe1
1004fbd3:	83 c0 02             	add    eax,0x2
1004fbd6:	83 c2 02             	add    edx,0x2
1004fbd9:	84 c9                	test   cl,cl
1004fbdb:	75 e4                	jne    0x1004fbc1
1004fbdd:	33 c0                	xor    eax,eax
1004fbdf:	eb 05                	jmp    0x1004fbe6
1004fbe1:	1b c0                	sbb    eax,eax
1004fbe3:	83 c8 01             	or     eax,0x1
1004fbe6:	85 c0                	test   eax,eax
1004fbe8:	75 23                	jne    0x1004fc0d
1004fbea:	6a 0d                	push   0xd
1004fbec:	8b cf                	mov    ecx,edi
1004fbee:	e8 1d 07 09 00       	call   0x100e0310
1004fbf3:	85 c0                	test   eax,eax
1004fbf5:	74 10                	je     0x1004fc07
1004fbf7:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004fbfa:	83 b8 48 02 00 00 00 	cmp    DWORD PTR [eax+0x248],0x0
1004fc01:	0f 85 82 00 00 00    	jne    0x1004fc89
1004fc07:	8b 35 88 31 22 10    	mov    esi,DWORD PTR ds:0x10223188
1004fc0d:	8b 87 2c 25 00 00    	mov    eax,DWORD PTR [edi+0x252c]
1004fc13:	ba b8 dc 1a 10       	mov    edx,0x101adcb8
1004fc18:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004fc1b:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
1004fc21:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
1004fc27:	f7 d9                	neg    ecx
1004fc29:	1b c9                	sbb    ecx,ecx
1004fc2b:	23 c8                	and    ecx,eax
1004fc2d:	8b 01                	mov    eax,DWORD PTR [ecx]
1004fc2f:	03 86 98 00 00 00    	add    eax,DWORD PTR [esi+0x98]
1004fc35:	8a 08                	mov    cl,BYTE PTR [eax]
1004fc37:	3a 0a                	cmp    cl,BYTE PTR [edx]
1004fc39:	75 1a                	jne    0x1004fc55
1004fc3b:	84 c9                	test   cl,cl
1004fc3d:	74 12                	je     0x1004fc51
1004fc3f:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1004fc42:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
1004fc45:	75 0e                	jne    0x1004fc55
1004fc47:	83 c0 02             	add    eax,0x2
1004fc4a:	83 c2 02             	add    edx,0x2
1004fc4d:	84 c9                	test   cl,cl
1004fc4f:	75 e4                	jne    0x1004fc35
1004fc51:	33 c0                	xor    eax,eax
1004fc53:	eb 05                	jmp    0x1004fc5a
1004fc55:	1b c0                	sbb    eax,eax
1004fc57:	83 c8 01             	or     eax,0x1
1004fc5a:	85 c0                	test   eax,eax
1004fc5c:	75 46                	jne    0x1004fca4
1004fc5e:	83 bf 70 1e 00 00 0d 	cmp    DWORD PTR [edi+0x1e70],0xd
1004fc65:	74 09                	je     0x1004fc70
1004fc67:	83 bf 74 1e 00 00 0d 	cmp    DWORD PTR [edi+0x1e74],0xd
1004fc6e:	75 34                	jne    0x1004fca4
1004fc70:	6a 0d                	push   0xd
1004fc72:	8b cf                	mov    ecx,edi
1004fc74:	e8 97 06 09 00       	call   0x100e0310
1004fc79:	85 c0                	test   eax,eax
1004fc7b:	74 27                	je     0x1004fca4
1004fc7d:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004fc80:	83 b8 48 02 00 00 00 	cmp    DWORD PTR [eax+0x248],0x0
1004fc87:	74 1b                	je     0x1004fca4
1004fc89:	6a 00                	push   0x0
1004fc8b:	6a 05                	push   0x5
1004fc8d:	68 38 1c 1b 10       	push   0x101b1c38
1004fc92:	57                   	push   edi
1004fc93:	e8 78 9b 0c 00       	call   0x10119810
1004fc98:	83 c4 10             	add    esp,0x10
1004fc9b:	5f                   	pop    edi
1004fc9c:	5e                   	pop    esi
1004fc9d:	5b                   	pop    ebx
1004fc9e:	8b e5                	mov    esp,ebp
1004fca0:	5d                   	pop    ebp
1004fca1:	c2 10 00             	ret    0x10
1004fca4:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
1004fca9:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1004fcb0:	9f                   	lahf
1004fcb1:	f6 c4 44             	test   ah,0x44
1004fcb4:	7b 04                	jnp    0x1004fcba
1004fcb6:	b0 01                	mov    al,0x1
1004fcb8:	eb 02                	jmp    0x1004fcbc
1004fcba:	32 c0                	xor    al,al
1004fcbc:	88 83 e4 00 00 00    	mov    BYTE PTR [ebx+0xe4],al
1004fcc2:	85 ff                	test   edi,edi
1004fcc4:	0f 84 a8 01 00 00    	je     0x1004fe72
1004fcca:	6a 00                	push   0x0
1004fccc:	8b cf                	mov    ecx,edi
1004fcce:	89 bb 14 01 00 00    	mov    DWORD PTR [ebx+0x114],edi
1004fcd4:	e8 17 f3 08 00       	call   0x100deff0
1004fcd9:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1004fcdc:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1004fcdf:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1004fce5:	8d 41 50             	lea    eax,[ecx+0x50]
1004fce8:	50                   	push   eax
1004fce9:	8d 41 08             	lea    eax,[ecx+0x8]
1004fcec:	50                   	push   eax
1004fced:	68 68 1c 1b 10       	push   0x101b1c68
1004fcf2:	e8 59 7c fc ff       	call   0x10017950
1004fcf7:	83 c4 10             	add    esp,0x10
1004fcfa:	89 87 ac 05 00 00    	mov    DWORD PTR [edi+0x5ac],eax
1004fd00:	80 bb e4 00 00 00 00 	cmp    BYTE PTR [ebx+0xe4],0x0
1004fd07:	74 08                	je     0x1004fd11
1004fd09:	8b 83 ac 01 00 00    	mov    eax,DWORD PTR [ebx+0x1ac]
1004fd0f:	eb 05                	jmp    0x1004fd16
1004fd11:	b8 01 00 00 00       	mov    eax,0x1
1004fd16:	89 83 b0 01 00 00    	mov    DWORD PTR [ebx+0x1b0],eax
1004fd1c:	8b 8f ac 05 00 00    	mov    ecx,DWORD PTR [edi+0x5ac]
1004fd22:	85 c9                	test   ecx,ecx
1004fd24:	0f 84 2b 01 00 00    	je     0x1004fe55
1004fd2a:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1004fd2d:	f3 0f 10 48 0c       	movss  xmm1,DWORD PTR [eax+0xc]
1004fd32:	f3 0f 10 50 10       	movss  xmm2,DWORD PTR [eax+0x10]
1004fd37:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
1004fd3c:	8d 45 f4             	lea    eax,[ebp-0xc]
1004fd3f:	50                   	push   eax
1004fd40:	51                   	push   ecx
1004fd41:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1004fd46:	f3 0f 11 4d f8       	movss  DWORD PTR [ebp-0x8],xmm1
1004fd4b:	f3 0f 11 55 fc       	movss  DWORD PTR [ebp-0x4],xmm2
1004fd50:	e8 8b a2 0c 00       	call   0x10119fe0
1004fd55:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1004fd58:	8b 88 b8 00 00 00    	mov    ecx,DWORD PTR [eax+0xb8]
1004fd5e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004fd63:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1004fd69:	8b 87 ac 05 00 00    	mov    eax,DWORD PTR [edi+0x5ac]
1004fd6f:	51                   	push   ecx
1004fd70:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004fd73:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1004fd79:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
1004fd7f:	83 c4 10             	add    esp,0x10
1004fd82:	80 bb e4 00 00 00 00 	cmp    BYTE PTR [ebx+0xe4],0x0
1004fd89:	74 1e                	je     0x1004fda9
1004fd8b:	8b 87 ac 05 00 00    	mov    eax,DWORD PTR [edi+0x5ac]
1004fd91:	66 0f 6e 83 18 01 00 	movd   xmm0,DWORD PTR [ebx+0x118]
1004fd98:	00 
1004fd99:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1004fd9c:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004fd9f:	f3 0f 58 40 10       	addss  xmm0,DWORD PTR [eax+0x10]
1004fda4:	f3 0f 11 40 10       	movss  DWORD PTR [eax+0x10],xmm0
1004fda9:	ff b7 ac 05 00 00    	push   DWORD PTR [edi+0x5ac]
1004fdaf:	8d 8f 88 03 00 00    	lea    ecx,[edi+0x388]
1004fdb5:	e8 86 79 fc ff       	call   0x10017740
1004fdba:	8b 87 88 03 00 00    	mov    eax,DWORD PTR [edi+0x388]
1004fdc0:	89 87 c0 05 00 00    	mov    DWORD PTR [edi+0x5c0],eax
1004fdc6:	8b 87 8c 03 00 00    	mov    eax,DWORD PTR [edi+0x38c]
1004fdcc:	89 87 c4 05 00 00    	mov    DWORD PTR [edi+0x5c4],eax
1004fdd2:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1004fdd5:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1004fddb:	6a 00                	push   0x0
1004fddd:	ff 35 4c 66 22 10    	push   DWORD PTR ds:0x1022664c
1004fde3:	6a 01                	push   0x1
1004fde5:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1004fdeb:	83 c4 10             	add    esp,0x10
1004fdee:	8d 8f 88 03 00 00    	lea    ecx,[edi+0x388]
1004fdf4:	e8 a7 79 fc ff       	call   0x100177a0
1004fdf9:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004fdfc:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1004fe02:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
1004fe08:	50                   	push   eax
1004fe09:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
1004fe0f:	6a 01                	push   0x1
1004fe11:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1004fe17:	83 c4 0c             	add    esp,0xc
1004fe1a:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1004fe20:	8b 83 14 01 00 00    	mov    eax,DWORD PTR [ebx+0x114]
1004fe26:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004fe29:	81 88 a8 01 00 00 80 	or     DWORD PTR [eax+0x1a8],0x80
1004fe30:	00 00 00 
1004fe33:	8b 83 14 01 00 00    	mov    eax,DWORD PTR [ebx+0x114]
1004fe39:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004fe3c:	83 88 a8 01 00 00 40 	or     DWORD PTR [eax+0x1a8],0x40
1004fe43:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1004fe46:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1004fe49:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
1004fe4f:	89 81 9c 01 00 00    	mov    DWORD PTR [ecx+0x19c],eax
1004fe55:	8b 03                	mov    eax,DWORD PTR [ebx]
1004fe57:	51                   	push   ecx
1004fe58:	8b cb                	mov    ecx,ebx
1004fe5a:	c7 43 78 40 ed 04 10 	mov    DWORD PTR [ebx+0x78],0x1004ed40
1004fe61:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
1004fe68:	ff 50 08             	call   DWORD PTR [eax+0x8]
1004fe6b:	8b cb                	mov    ecx,ebx
1004fe6d:	e8 fe f5 ff ff       	call   0x1004f470
1004fe72:	5f                   	pop    edi
1004fe73:	5e                   	pop    esi
1004fe74:	5b                   	pop    ebx
1004fe75:	8b e5                	mov    esp,ebp
1004fe77:	5d                   	pop    ebp
1004fe78:	c2 10 00             	ret    0x10
1004fe7b:	cc                   	int3
1004fe7c:	cc                   	int3
1004fe7d:	cc                   	int3
1004fe7e:	cc                   	int3
1004fe7f:	cc                   	int3
