
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1005fc20 <.text+0x5ec20>:
1005fc20:	55                   	push   ebp
1005fc21:	8b ec                	mov    ebp,esp
1005fc23:	83 ec 08             	sub    esp,0x8
1005fc26:	53                   	push   ebx
1005fc27:	56                   	push   esi
1005fc28:	8b f1                	mov    esi,ecx
1005fc2a:	8d 8e f8 01 00 00    	lea    ecx,[esi+0x1f8]
1005fc30:	e8 6b 7b fb ff       	call   0x100177a0
1005fc35:	8b c8                	mov    ecx,eax
1005fc37:	8b 10                	mov    edx,DWORD PTR [eax]
1005fc39:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
1005fc3f:	85 c0                	test   eax,eax
1005fc41:	0f 84 42 03 00 00    	je     0x1005ff89
1005fc47:	57                   	push   edi
1005fc48:	8d 8e f8 01 00 00    	lea    ecx,[esi+0x1f8]
1005fc4e:	e8 4d 7b fb ff       	call   0x100177a0
1005fc53:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1005fc56:	50                   	push   eax
1005fc57:	e8 84 29 fb ff       	call   0x100125e0
1005fc5c:	8b f8                	mov    edi,eax
1005fc5e:	83 c4 04             	add    esp,0x4
1005fc61:	85 ff                	test   edi,edi
1005fc63:	0f 84 1f 03 00 00    	je     0x1005ff88
1005fc69:	8b 8f 2c 25 00 00    	mov    ecx,DWORD PTR [edi+0x252c]
1005fc6f:	85 c9                	test   ecx,ecx
1005fc71:	0f 84 11 03 00 00    	je     0x1005ff88
1005fc77:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
1005fc7a:	ba 50 de 1a 10       	mov    edx,0x101ade50
1005fc7f:	8b 89 0c 02 00 00    	mov    ecx,DWORD PTR [ecx+0x20c]
1005fc85:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
1005fc8b:	f7 d9                	neg    ecx
1005fc8d:	1b c9                	sbb    ecx,ecx
1005fc8f:	23 c8                	and    ecx,eax
1005fc91:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1005fc96:	8b 09                	mov    ecx,DWORD PTR [ecx]
1005fc98:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1005fc9e:	66 90                	xchg   ax,ax
1005fca0:	8a 01                	mov    al,BYTE PTR [ecx]
1005fca2:	3a 02                	cmp    al,BYTE PTR [edx]
1005fca4:	75 1a                	jne    0x1005fcc0
1005fca6:	84 c0                	test   al,al
1005fca8:	74 12                	je     0x1005fcbc
1005fcaa:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1005fcad:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
1005fcb0:	75 0e                	jne    0x1005fcc0
1005fcb2:	83 c1 02             	add    ecx,0x2
1005fcb5:	83 c2 02             	add    edx,0x2
1005fcb8:	84 c0                	test   al,al
1005fcba:	75 e4                	jne    0x1005fca0
1005fcbc:	33 c0                	xor    eax,eax
1005fcbe:	eb 05                	jmp    0x1005fcc5
1005fcc0:	1b c0                	sbb    eax,eax
1005fcc2:	83 c8 01             	or     eax,0x1
1005fcc5:	85 c0                	test   eax,eax
1005fcc7:	0f 85 bb 02 00 00    	jne    0x1005ff88
1005fccd:	8b 07                	mov    eax,DWORD PTR [edi]
1005fccf:	8b cf                	mov    ecx,edi
1005fcd1:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
1005fcd7:	85 c0                	test   eax,eax
1005fcd9:	75 5c                	jne    0x1005fd37
1005fcdb:	50                   	push   eax
1005fcdc:	6a 02                	push   0x2
1005fcde:	68 b0 5f 1b 10       	push   0x101b5fb0
1005fce3:	8d 8e f8 01 00 00    	lea    ecx,[esi+0x1f8]
1005fce9:	e8 a2 7a fb ff       	call   0x10017790
1005fcee:	50                   	push   eax
1005fcef:	e8 1c 9b 0b 00       	call   0x10119810
1005fcf4:	83 c4 10             	add    esp,0x10
1005fcf7:	8d 8e f8 01 00 00    	lea    ecx,[esi+0x1f8]
1005fcfd:	e8 9e 7a fb ff       	call   0x100177a0
1005fd02:	6a 64                	push   0x64
1005fd04:	6a 00                	push   0x0
1005fd06:	83 ec 08             	sub    esp,0x8
1005fd09:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1005fd0c:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1005fd13:	3f 
1005fd14:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1005fd1b:	68 68 40 1a 10       	push   0x101a4068
1005fd20:	6a 00                	push   0x0
1005fd22:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1005fd28:	e8 c3 cc 09 00       	call   0x100fc9f0
1005fd2d:	83 c4 1c             	add    esp,0x1c
1005fd30:	5f                   	pop    edi
1005fd31:	5e                   	pop    esi
1005fd32:	5b                   	pop    ebx
1005fd33:	8b e5                	mov    esp,ebp
1005fd35:	5d                   	pop    ebp
1005fd36:	c3                   	ret
1005fd37:	8b 87 2c 25 00 00    	mov    eax,DWORD PTR [edi+0x252c]
1005fd3d:	ff 70 04             	push   DWORD PTR [eax+0x4]
1005fd40:	e8 eb 30 ff ff       	call   0x10052e30
1005fd45:	8b d8                	mov    ebx,eax
1005fd47:	83 c4 04             	add    esp,0x4
1005fd4a:	85 db                	test   ebx,ebx
1005fd4c:	0f 84 36 02 00 00    	je     0x1005ff88
1005fd52:	80 be 00 02 00 00 00 	cmp    BYTE PTR [esi+0x200],0x0
1005fd59:	8b 8e f4 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f4]
1005fd5f:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
1005fd62:	0f 85 2b 01 00 00    	jne    0x1005fe93
1005fd68:	8b 06                	mov    eax,DWORD PTR [esi]
1005fd6a:	c6 86 00 02 00 00 01 	mov    BYTE PTR [esi+0x200],0x1
1005fd71:	f3 0f 10 84 8e 6c 01 	movss  xmm0,DWORD PTR [esi+ecx*4+0x16c]
1005fd78:	00 00 
1005fd7a:	51                   	push   ecx
1005fd7b:	8b ce                	mov    ecx,esi
1005fd7d:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1005fd82:	ff 50 08             	call   DWORD PTR [eax+0x8]
1005fd85:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1005fd88:	ba 34 29 1b 10       	mov    edx,0x101b2934
1005fd8d:	c7 46 78 20 fc 05 10 	mov    DWORD PTR [esi+0x78],0x1005fc20
1005fd94:	b9 4c 29 1b 10       	mov    ecx,0x101b294c
1005fd99:	83 b8 48 02 00 00 00 	cmp    DWORD PTR [eax+0x248],0x0
1005fda0:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1005fda3:	0f 45 ca             	cmovne ecx,edx
1005fda6:	51                   	push   ecx
1005fda7:	6a 00                	push   0x0
1005fda9:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
1005fdaf:	50                   	push   eax
1005fdb0:	e8 db eb fb ff       	call   0x1001e990
1005fdb5:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1005fdb8:	83 c4 0c             	add    esp,0xc
1005fdbb:	6a 64                	push   0x64
1005fdbd:	6a 00                	push   0x0
1005fdbf:	83 ec 08             	sub    esp,0x8
1005fdc2:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1005fdc9:	3f 
1005fdca:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1005fdd1:	68 28 2a 1b 10       	push   0x101b2a28
1005fdd6:	6a 00                	push   0x0
1005fdd8:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1005fdde:	e8 0d cc 09 00       	call   0x100fc9f0
1005fde3:	83 c4 1c             	add    esp,0x1c
1005fde6:	83 be f0 01 00 00 00 	cmp    DWORD PTR [esi+0x1f0],0x0
1005fded:	74 47                	je     0x1005fe36
1005fdef:	8d 8e f8 01 00 00    	lea    ecx,[esi+0x1f8]
1005fdf5:	e8 a6 79 fb ff       	call   0x100177a0
1005fdfa:	6a 64                	push   0x64
1005fdfc:	6a 00                	push   0x0
1005fdfe:	83 ec 08             	sub    esp,0x8
1005fe01:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1005fe04:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1005fe0b:	3f 
1005fe0c:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
1005fe12:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1005fe17:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1005fe1e:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1005fe24:	03 86 f0 01 00 00    	add    eax,DWORD PTR [esi+0x1f0]
1005fe2a:	50                   	push   eax
1005fe2b:	6a 00                	push   0x0
1005fe2d:	51                   	push   ecx
1005fe2e:	e8 bd cb 09 00       	call   0x100fc9f0
1005fe33:	83 c4 1c             	add    esp,0x1c
1005fe36:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1005fe3b:	8b cb                	mov    ecx,ebx
1005fe3d:	83 bf 98 1e 00 00 00 	cmp    DWORD PTR [edi+0x1e98],0x0
1005fe44:	6a 00                	push   0x0
1005fe46:	6a 01                	push   0x1
1005fe48:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1005fe4c:	8b 03                	mov    eax,DWORD PTR [ebx]
1005fe4e:	0f 5a c0             	cvtps2pd xmm0,xmm0
1005fe51:	f2 0f 58 05 f0 5f 1b 	addsd  xmm0,QWORD PTR ds:0x101b5ff0
1005fe58:	10 
1005fe59:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1005fe5d:	f3 0f 11 83 d8 01 00 	movss  DWORD PTR [ebx+0x1d8],xmm0
1005fe64:	00 
1005fe65:	74 16                	je     0x1005fe7d
1005fe67:	6a 0d                	push   0xd
1005fe69:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
1005fe6f:	c6 87 e8 1e 00 00 01 	mov    BYTE PTR [edi+0x1ee8],0x1
1005fe76:	5f                   	pop    edi
1005fe77:	5e                   	pop    esi
1005fe78:	5b                   	pop    ebx
1005fe79:	8b e5                	mov    esp,ebp
1005fe7b:	5d                   	pop    ebp
1005fe7c:	c3                   	ret
1005fe7d:	6a 0c                	push   0xc
1005fe7f:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
1005fe85:	c6 87 e8 1e 00 00 01 	mov    BYTE PTR [edi+0x1ee8],0x1
1005fe8c:	5f                   	pop    edi
1005fe8d:	5e                   	pop    esi
1005fe8e:	5b                   	pop    ebx
1005fe8f:	8b e5                	mov    esp,ebp
1005fe91:	5d                   	pop    ebp
1005fe92:	c3                   	ret
1005fe93:	68 b4 5f 1b 10       	push   0x101b5fb4
1005fe98:	6a 00                	push   0x0
1005fe9a:	e8 c1 85 0b 00       	call   0x10118460
1005fe9f:	8b f8                	mov    edi,eax
1005fea1:	83 c4 08             	add    esp,0x8
1005fea4:	0f 57 c9             	xorps  xmm1,xmm1
1005fea7:	85 ff                	test   edi,edi
1005fea9:	74 6b                	je     0x1005ff16
1005feab:	68 30 21 1a 10       	push   0x101a2130
1005feb0:	6a 00                	push   0x0
1005feb2:	e8 a9 85 0b 00       	call   0x10118460
1005feb7:	8b d8                	mov    ebx,eax
1005feb9:	83 c4 08             	add    esp,0x8
1005febc:	85 db                	test   ebx,ebx
1005febe:	74 53                	je     0x1005ff13
1005fec0:	8b 8e f4 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f4]
1005fec6:	8b 84 8e e8 00 00 00 	mov    eax,DWORD PTR [esi+ecx*4+0xe8]
1005fecd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1005fed0:	85 c0                	test   eax,eax
1005fed2:	74 2f                	je     0x1005ff03
1005fed4:	ff 77 04             	push   DWORD PTR [edi+0x4]
1005fed7:	e8 e4 fc ff ff       	call   0x1005fbc0
1005fedc:	66 0f 6e 45 fc       	movd   xmm0,DWORD PTR [ebp-0x4]
1005fee1:	8b cf                	mov    ecx,edi
1005fee3:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1005fee6:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1005feed:	6a 03                	push   0x3
1005feef:	53                   	push   ebx
1005fef0:	53                   	push   ebx
1005fef1:	f3 0f 11 80 dc 00 00 	movss  DWORD PTR [eax+0xdc],xmm0
1005fef8:	00 
1005fef9:	8b 07                	mov    eax,DWORD PTR [edi]
1005fefb:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
1005ff01:	eb 10                	jmp    0x1005ff13
1005ff03:	68 c4 5f 1b 10       	push   0x101b5fc4
1005ff08:	6a 01                	push   0x1
1005ff0a:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1005ff10:	83 c4 08             	add    esp,0x8
1005ff13:	0f 57 c9             	xorps  xmm1,xmm1
1005ff16:	8b 5d f8             	mov    ebx,DWORD PTR [ebp-0x8]
1005ff19:	83 fb 20             	cmp    ebx,0x20
1005ff1c:	7d 6a                	jge    0x1005ff88
1005ff1e:	83 bc 9e ec 00 00 00 	cmp    DWORD PTR [esi+ebx*4+0xec],0x0
1005ff25:	00 
1005ff26:	74 30                	je     0x1005ff58
1005ff28:	f3 0f 10 84 9e 70 01 	movss  xmm0,DWORD PTR [esi+ebx*4+0x170]
1005ff2f:	00 00 
1005ff31:	0f 2f c1             	comiss xmm0,xmm1
1005ff34:	76 22                	jbe    0x1005ff58
1005ff36:	ff 86 f4 01 00 00    	inc    DWORD PTR [esi+0x1f4]
1005ff3c:	8b 86 f4 01 00 00    	mov    eax,DWORD PTR [esi+0x1f4]
1005ff42:	8b 16                	mov    edx,DWORD PTR [esi]
1005ff44:	51                   	push   ecx
1005ff45:	8b ce                	mov    ecx,esi
1005ff47:	f3 0f 10 84 86 6c 01 	movss  xmm0,DWORD PTR [esi+eax*4+0x16c]
1005ff4e:	00 00 
1005ff50:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1005ff55:	ff 52 08             	call   DWORD PTR [edx+0x8]
1005ff58:	f3 0f 10 8c 9e 70 01 	movss  xmm1,DWORD PTR [esi+ebx*4+0x170]
1005ff5f:	00 00 
1005ff61:	f2 0f 10 05 f8 1d 1a 	movsd  xmm0,QWORD PTR ds:0x101a1df8
1005ff68:	10 
1005ff69:	0f 5a c9             	cvtps2pd xmm1,xmm1
1005ff6c:	66 0f 2f c1          	comisd xmm0,xmm1
1005ff70:	76 16                	jbe    0x1005ff88
1005ff72:	8b 06                	mov    eax,DWORD PTR [esi]
1005ff74:	51                   	push   ecx
1005ff75:	8b ce                	mov    ecx,esi
1005ff77:	c7 46 78 90 ff 05 10 	mov    DWORD PTR [esi+0x78],0x1005ff90
1005ff7e:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1005ff85:	ff 50 08             	call   DWORD PTR [eax+0x8]
1005ff88:	5f                   	pop    edi
1005ff89:	5e                   	pop    esi
1005ff8a:	5b                   	pop    ebx
1005ff8b:	8b e5                	mov    esp,ebp
1005ff8d:	5d                   	pop    ebp
1005ff8e:	c3                   	ret
