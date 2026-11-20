
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001cc90 <.text+0x1bc90>:
1001cc90:	55                   	push   ebp
1001cc91:	8b ec                	mov    ebp,esp
1001cc93:	81 ec 08 01 00 00    	sub    esp,0x108
1001cc99:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1001cc9e:	33 c5                	xor    eax,ebp
1001cca0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1001cca3:	83 3d 04 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f04,0x0
1001ccaa:	57                   	push   edi
1001ccab:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1001ccae:	0f 85 21 02 00 00    	jne    0x1001ced5
1001ccb4:	8b c7                	mov    eax,edi
1001ccb6:	53                   	push   ebx
1001ccb7:	56                   	push   esi
1001ccb8:	85 ff                	test   edi,edi
1001ccba:	75 0e                	jne    0x1001ccca
1001ccbc:	57                   	push   edi
1001ccbd:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
1001ccc3:	83 c4 04             	add    esp,0x4
1001ccc6:	85 c0                	test   eax,eax
1001ccc8:	74 76                	je     0x1001cd40
1001ccca:	8b 58 7c             	mov    ebx,DWORD PTR [eax+0x7c]
1001cccd:	85 db                	test   ebx,ebx
1001cccf:	74 6f                	je     0x1001cd40
1001ccd1:	8b 03                	mov    eax,DWORD PTR [ebx]
1001ccd3:	8b cb                	mov    ecx,ebx
1001ccd5:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1001ccdb:	85 c0                	test   eax,eax
1001ccdd:	74 0d                	je     0x1001ccec
1001ccdf:	6a 00                	push   0x0
1001cce1:	8d 8b 48 23 00 00    	lea    ecx,[ebx+0x2348]
1001cce7:	e8 54 aa ff ff       	call   0x10017740
1001ccec:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001ccf1:	be 01 00 00 00       	mov    esi,0x1
1001ccf6:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
1001ccfc:	7c 42                	jl     0x1001cd40
1001ccfe:	66 90                	xchg   ax,ax
1001cd00:	56                   	push   esi
1001cd01:	e8 7a c9 0f 00       	call   0x10119680
1001cd06:	83 c4 04             	add    esp,0x4
1001cd09:	85 c0                	test   eax,eax
1001cd0b:	74 16                	je     0x1001cd23
1001cd0d:	05 a0 26 00 00       	add    eax,0x26a0
1001cd12:	8b c8                	mov    ecx,eax
1001cd14:	89 85 f8 fe ff ff    	mov    DWORD PTR [ebp-0x108],eax
1001cd1a:	e8 71 aa ff ff       	call   0x10017790
1001cd1f:	3b c3                	cmp    eax,ebx
1001cd21:	74 10                	je     0x1001cd33
1001cd23:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001cd28:	46                   	inc    esi
1001cd29:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
1001cd2f:	7e cf                	jle    0x1001cd00
1001cd31:	eb 0d                	jmp    0x1001cd40
1001cd33:	8b 8d f8 fe ff ff    	mov    ecx,DWORD PTR [ebp-0x108]
1001cd39:	6a 00                	push   0x0
1001cd3b:	e8 00 aa ff ff       	call   0x10017740
1001cd40:	8b 15 10 2e 22 10    	mov    edx,DWORD PTR ds:0x10222e10
1001cd46:	85 d2                	test   edx,edx
1001cd48:	74 69                	je     0x1001cdb3
1001cd4a:	be 1c 04 00 00       	mov    esi,0x41c
1001cd4f:	90                   	nop
1001cd50:	80 3a 00             	cmp    BYTE PTR [edx],0x0
1001cd53:	74 50                	je     0x1001cda5
1001cd55:	8d 5a 04             	lea    ebx,[edx+0x4]
1001cd58:	03 de                	add    ebx,esi
1001cd5a:	80 3b 00             	cmp    BYTE PTR [ebx],0x0
1001cd5d:	74 46                	je     0x1001cda5
1001cd5f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001cd64:	8b 8f 54 02 00 00    	mov    ecx,DWORD PTR [edi+0x254]
1001cd6a:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1001cd70:	39 4c 16 0c          	cmp    DWORD PTR [esi+edx*1+0xc],ecx
1001cd74:	75 2f                	jne    0x1001cda5
1001cd76:	68 1c 04 00 00       	push   0x41c
1001cd7b:	6a 00                	push   0x0
1001cd7d:	53                   	push   ebx
1001cd7e:	e8 0d 27 12 00       	call   0x1013f490
1001cd83:	a1 10 2e 22 10       	mov    eax,ds:0x10222e10
1001cd88:	68 1c 04 00 00       	push   0x41c
1001cd8d:	05 a0 87 00 00       	add    eax,0x87a0
1001cd92:	03 c6                	add    eax,esi
1001cd94:	6a 00                	push   0x0
1001cd96:	50                   	push   eax
1001cd97:	e8 f4 26 12 00       	call   0x1013f490
1001cd9c:	8b 15 10 2e 22 10    	mov    edx,DWORD PTR ds:0x10222e10
1001cda2:	83 c4 18             	add    esp,0x18
1001cda5:	81 c6 1c 04 00 00    	add    esi,0x41c
1001cdab:	81 fe 80 83 00 00    	cmp    esi,0x8380
1001cdb1:	7e 9d                	jle    0x1001cd50
1001cdb3:	a1 e4 2e 22 10       	mov    eax,ds:0x10222ee4
1001cdb8:	85 c0                	test   eax,eax
1001cdba:	74 63                	je     0x1001ce1f
1001cdbc:	80 b8 a8 00 00 00 00 	cmp    BYTE PTR [eax+0xa8],0x0
1001cdc3:	74 5a                	je     0x1001ce1f
1001cdc5:	57                   	push   edi
1001cdc6:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
1001cdcc:	8b f0                	mov    esi,eax
1001cdce:	83 c4 04             	add    esp,0x4
1001cdd1:	8d 4e ff             	lea    ecx,[esi-0x1]
1001cdd4:	83 f9 1f             	cmp    ecx,0x1f
1001cdd7:	77 46                	ja     0x1001ce1f
1001cdd9:	6a 00                	push   0x0
1001cddb:	6a 00                	push   0x0
1001cddd:	ff 35 b0 66 22 10    	push   DWORD PTR ds:0x102266b0
1001cde3:	6a 02                	push   0x2
1001cde5:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1001cdeb:	57                   	push   edi
1001cdec:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
1001cdf2:	50                   	push   eax
1001cdf3:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1001cdf9:	6a 00                	push   0x0
1001cdfb:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1001ce01:	6a 00                	push   0x0
1001ce03:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1001ce09:	83 c4 20             	add    esp,0x20
1001ce0c:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1001ce12:	a1 e4 2e 22 10       	mov    eax,ds:0x10222ee4
1001ce17:	c6 84 30 a9 00 00 00 00 	mov    BYTE PTR [eax+esi*1+0xa9],0x0
1001ce1f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001ce24:	8b 8f 54 02 00 00    	mov    ecx,DWORD PTR [edi+0x254]
1001ce2a:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1001ce30:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
1001ce36:	51                   	push   ecx
1001ce37:	68 78 84 1a 10       	push   0x101a8478
1001ce3c:	50                   	push   eax
1001ce3d:	e8 1e 23 00 00       	call   0x1001f160
1001ce42:	6a 00                	push   0x0
1001ce44:	6a 00                	push   0x0
1001ce46:	ff 35 18 65 22 10    	push   DWORD PTR ds:0x10226518
1001ce4c:	6a 02                	push   0x2
1001ce4e:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
1001ce54:	57                   	push   edi
1001ce55:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
1001ce5b:	50                   	push   eax
1001ce5c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
1001ce62:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
1001ce68:	50                   	push   eax
1001ce69:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
1001ce6f:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
1001ce75:	57                   	push   edi
1001ce76:	e8 45 37 0e 00       	call   0x101005c0
1001ce7b:	50                   	push   eax
1001ce7c:	e8 8f 3a 0e 00       	call   0x10100910
1001ce81:	83 c4 30             	add    esp,0x30
1001ce84:	5e                   	pop    esi
1001ce85:	5b                   	pop    ebx
1001ce86:	85 c0                	test   eax,eax
1001ce88:	74 07                	je     0x1001ce91
1001ce8a:	8b c8                	mov    ecx,eax
1001ce8c:	e8 4f 3a 0e 00       	call   0x101008e0
1001ce91:	8d 87 88 00 00 00    	lea    eax,[edi+0x88]
1001ce97:	c7 87 e4 02 00 00 00 00 80 3f 	mov    DWORD PTR [edi+0x2e4],0x3f800000
1001cea1:	50                   	push   eax
1001cea2:	57                   	push   edi
1001cea3:	c7 87 f0 01 00 00 00 00 00 00 	mov    DWORD PTR [edi+0x1f0],0x0
1001cead:	c7 87 8c 01 00 00 00 00 00 00 	mov    DWORD PTR [edi+0x18c],0x0
1001ceb7:	e8 e4 d0 0f 00       	call   0x10119fa0
1001cebc:	81 8f 28 02 00 00 80 00 00 00 	or     DWORD PTR [edi+0x228],0x80
1001cec6:	83 c4 08             	add    esp,0x8
1001cec9:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1001cecf:	57                   	push   edi
1001ced0:	8b 01                	mov    eax,DWORD PTR [ecx]
1001ced2:	ff 50 3c             	call   DWORD PTR [eax+0x3c]
1001ced5:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1001ced8:	33 cd                	xor    ecx,ebp
1001ceda:	5f                   	pop    edi
1001cedb:	e8 d3 0c 12 00       	call   0x1013dbb3
1001cee0:	8b e5                	mov    esp,ebp
1001cee2:	5d                   	pop    ebp
1001cee3:	c3                   	ret
