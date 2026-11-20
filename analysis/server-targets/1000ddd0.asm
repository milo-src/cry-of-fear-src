
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000ddd0 <.text+0xcdd0>:
1000ddd0:	55                   	push   ebp
1000ddd1:	8b ec                	mov    ebp,esp
1000ddd3:	81 ec 84 00 00 00    	sub    esp,0x84
1000ddd9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1000ddde:	33 c5                	xor    eax,ebp
1000dde0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1000dde3:	56                   	push   esi
1000dde4:	57                   	push   edi
1000dde5:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1000dde8:	8b f1                	mov    esi,ecx
1000ddea:	ba 54 23 1a 10       	mov    edx,0x101a2354
1000ddef:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1000ddf2:	8a 08                	mov    cl,BYTE PTR [eax]
1000ddf4:	3a 0a                	cmp    cl,BYTE PTR [edx]
1000ddf6:	75 1a                	jne    0x1000de12
1000ddf8:	84 c9                	test   cl,cl
1000ddfa:	74 12                	je     0x1000de0e
1000ddfc:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1000ddff:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
1000de02:	75 0e                	jne    0x1000de12
1000de04:	83 c0 02             	add    eax,0x2
1000de07:	83 c2 02             	add    edx,0x2
1000de0a:	84 c9                	test   cl,cl
1000de0c:	75 e4                	jne    0x1000ddf2
1000de0e:	33 c0                	xor    eax,eax
1000de10:	eb 05                	jmp    0x1000de17
1000de12:	1b c0                	sbb    eax,eax
1000de14:	83 c8 01             	or     eax,0x1
1000de17:	85 c0                	test   eax,eax
1000de19:	75 2a                	jne    0x1000de45
1000de1b:	ff 77 08             	push   DWORD PTR [edi+0x8]
1000de1e:	e8 3b d7 15 00       	call   0x1016b55e
1000de23:	83 c4 04             	add    esp,0x4
1000de26:	89 86 68 01 00 00    	mov    DWORD PTR [esi+0x168],eax
1000de2c:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1000de33:	5f                   	pop    edi
1000de34:	5e                   	pop    esi
1000de35:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000de38:	33 cd                	xor    ecx,ebp
1000de3a:	e8 74 fd 12 00       	call   0x1013dbb3
1000de3f:	8b e5                	mov    esp,ebp
1000de41:	5d                   	pop    ebp
1000de42:	c2 04 00             	ret    0x4
1000de45:	83 be e0 00 00 00 10 	cmp    DWORD PTR [esi+0xe0],0x10
1000de4c:	7d 76                	jge    0x1000dec4
1000de4e:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
1000de54:	50                   	push   eax
1000de55:	ff 77 04             	push   DWORD PTR [edi+0x4]
1000de58:	e8 03 c9 10 00       	call   0x1011a760
1000de5d:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
1000de63:	50                   	push   eax
1000de64:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1000de6a:	8b 8e e0 00 00 00    	mov    ecx,DWORD PTR [esi+0xe0]
1000de70:	89 84 8e e4 00 00 00 	mov    DWORD PTR [esi+ecx*4+0xe4],eax
1000de77:	ff 77 08             	push   DWORD PTR [edi+0x8]
1000de7a:	e8 df d6 15 00       	call   0x1016b55e
1000de7f:	8b 8e e0 00 00 00    	mov    ecx,DWORD PTR [esi+0xe0]
1000de85:	83 c4 10             	add    esp,0x10
1000de88:	89 84 8e 28 01 00 00 	mov    DWORD PTR [esi+ecx*4+0x128],eax
1000de8f:	8b 8e e0 00 00 00    	mov    ecx,DWORD PTR [esi+0xe0]
1000de95:	8b 84 8e 28 01 00 00 	mov    eax,DWORD PTR [esi+ecx*4+0x128]
1000de9c:	01 86 24 01 00 00    	add    DWORD PTR [esi+0x124],eax
1000dea2:	8d 41 01             	lea    eax,[ecx+0x1]
1000dea5:	89 86 e0 00 00 00    	mov    DWORD PTR [esi+0xe0],eax
1000deab:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1000deb2:	5f                   	pop    edi
1000deb3:	5e                   	pop    esi
1000deb4:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000deb7:	33 cd                	xor    ecx,ebp
1000deb9:	e8 f5 fc 12 00       	call   0x1013dbb3
1000debe:	8b e5                	mov    esp,ebp
1000dec0:	5d                   	pop    ebp
1000dec1:	c2 04 00             	ret    0x4
1000dec4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1000dec7:	6a 10                	push   0x10
1000dec9:	8b 88 d0 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d0]
1000decf:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1000ded4:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1000deda:	51                   	push   ecx
1000dedb:	68 38 2c 1a 10       	push   0x101a2c38
1000dee0:	6a 04                	push   0x4
1000dee2:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000dee8:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000deeb:	83 c4 10             	add    esp,0x10
1000deee:	33 cd                	xor    ecx,ebp
1000def0:	5f                   	pop    edi
1000def1:	5e                   	pop    esi
1000def2:	e8 bc fc 12 00       	call   0x1013dbb3
1000def7:	8b e5                	mov    esp,ebp
1000def9:	5d                   	pop    ebp
1000defa:	c2 04 00             	ret    0x4
