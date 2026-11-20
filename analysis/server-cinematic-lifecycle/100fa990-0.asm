
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fa990 <.text+0xf9990>:
100fa990:	55                   	push   ebp
100fa991:	8b ec                	mov    ebp,esp
100fa993:	51                   	push   ecx
100fa994:	8b c1                	mov    eax,ecx
100fa996:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100fa999:	57                   	push   edi
100fa99a:	8b 50 04             	mov    edx,DWORD PTR [eax+0x4]
100fa99d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fa9a2:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100fa9a8:	03 82 d0 01 00 00    	add    eax,DWORD PTR [edx+0x1d0]
100fa9ae:	50                   	push   eax
100fa9af:	6a 00                	push   0x0
100fa9b1:	e8 da db 01 00       	call   0x10118590
100fa9b6:	8b f8                	mov    edi,eax
100fa9b8:	83 c4 08             	add    esp,0x8
100fa9bb:	85 ff                	test   edi,edi
100fa9bd:	0f 84 2c 01 00 00    	je     0x100faaef
100fa9c3:	53                   	push   ebx
100fa9c4:	56                   	push   esi
100fa9c5:	66 66 66 0f 1f 84 00 	data16 data16 nop WORD PTR [eax+eax*1+0x0]
100fa9cc:	00 00 00 00 
100fa9d0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fa9d5:	b9 74 df 1d 10       	mov    ecx,0x101ddf74
100fa9da:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100fa9dd:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100fa9e3:	03 16                	add    edx,DWORD PTR [esi]
100fa9e5:	8b c2                	mov    eax,edx
100fa9e7:	8a 18                	mov    bl,BYTE PTR [eax]
100fa9e9:	3a 19                	cmp    bl,BYTE PTR [ecx]
100fa9eb:	75 1a                	jne    0x100faa07
100fa9ed:	84 db                	test   bl,bl
100fa9ef:	74 12                	je     0x100faa03
100fa9f1:	8a 58 01             	mov    bl,BYTE PTR [eax+0x1]
100fa9f4:	3a 59 01             	cmp    bl,BYTE PTR [ecx+0x1]
100fa9f7:	75 0e                	jne    0x100faa07
100fa9f9:	83 c0 02             	add    eax,0x2
100fa9fc:	83 c1 02             	add    ecx,0x2
100fa9ff:	84 db                	test   bl,bl
100faa01:	75 e4                	jne    0x100fa9e7
100faa03:	33 c0                	xor    eax,eax
100faa05:	eb 05                	jmp    0x100faa0c
100faa07:	1b c0                	sbb    eax,eax
100faa09:	83 c8 01             	or     eax,0x1
100faa0c:	85 c0                	test   eax,eax
100faa0e:	74 32                	je     0x100faa42
100faa10:	b8 a0 1f 1a 10       	mov    eax,0x101a1fa0
100faa15:	8a 0a                	mov    cl,BYTE PTR [edx]
100faa17:	3a 08                	cmp    cl,BYTE PTR [eax]
100faa19:	75 1a                	jne    0x100faa35
100faa1b:	84 c9                	test   cl,cl
100faa1d:	74 12                	je     0x100faa31
100faa1f:	8a 4a 01             	mov    cl,BYTE PTR [edx+0x1]
100faa22:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
100faa25:	75 0e                	jne    0x100faa35
100faa27:	83 c2 02             	add    edx,0x2
100faa2a:	83 c0 02             	add    eax,0x2
100faa2d:	84 c9                	test   cl,cl
100faa2f:	75 e4                	jne    0x100faa15
100faa31:	33 c0                	xor    eax,eax
100faa33:	eb 05                	jmp    0x100faa3a
100faa35:	1b c0                	sbb    eax,eax
100faa37:	83 c8 01             	or     eax,0x1
100faa3a:	85 c0                	test   eax,eax
100faa3c:	0f 85 80 00 00 00    	jne    0x100faac2
100faa42:	56                   	push   esi
100faa43:	e8 58 f7 ff ff       	call   0x100fa1a0
100faa48:	8b f0                	mov    esi,eax
100faa4a:	83 c4 04             	add    esp,0x4
100faa4d:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
100faa51:	8b 86 a8 03 00 00    	mov    eax,DWORD PTR [esi+0x3a8]
100faa57:	74 0b                	je     0x100faa64
100faa59:	8d 48 01             	lea    ecx,[eax+0x1]
100faa5c:	89 8e a8 03 00 00    	mov    DWORD PTR [esi+0x3a8],ecx
100faa62:	eb 5e                	jmp    0x100faac2
100faa64:	48                   	dec    eax
100faa65:	89 86 a8 03 00 00    	mov    DWORD PTR [esi+0x3a8],eax
100faa6b:	85 c0                	test   eax,eax
100faa6d:	7f 53                	jg     0x100faac2
100faa6f:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100faa72:	51                   	push   ecx
100faa73:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100faa7a:	6a 03                	push   0x3
100faa7c:	50                   	push   eax
100faa7d:	c7 86 68 03 00 00 02 	mov    DWORD PTR [esi+0x368],0x2
100faa84:	00 00 00 
100faa87:	8b 88 80 03 00 00    	mov    ecx,DWORD PTR [eax+0x380]
100faa8d:	50                   	push   eax
100faa8e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100faa93:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100faa99:	51                   	push   ecx
100faa9a:	e8 51 75 00 00       	call   0x10101ff0
100faa9f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100faaa4:	83 c4 14             	add    esp,0x14
100faaa7:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100faaab:	0f 5a c0             	cvtps2pd xmm0,xmm0
100faaae:	f2 0f 58 05 f0 1d 1a 	addsd  xmm0,QWORD PTR ds:0x101a1df0
100faab5:	10 
100faab6:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100faaba:	f3 0f 11 86 ac 03 00 	movss  DWORD PTR [esi+0x3ac],xmm0
100faac1:	00 
100faac2:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100faac5:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100faac8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100faacd:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100faad3:	03 81 d0 01 00 00    	add    eax,DWORD PTR [ecx+0x1d0]
100faad9:	50                   	push   eax
100faada:	57                   	push   edi
100faadb:	e8 b0 da 01 00       	call   0x10118590
100faae0:	8b f8                	mov    edi,eax
100faae2:	83 c4 08             	add    esp,0x8
100faae5:	85 ff                	test   edi,edi
100faae7:	0f 85 e3 fe ff ff    	jne    0x100fa9d0
100faaed:	5e                   	pop    esi
100faaee:	5b                   	pop    ebx
100faaef:	5f                   	pop    edi
100faaf0:	8b e5                	mov    esp,ebp
100faaf2:	5d                   	pop    ebp
100faaf3:	c2 04 00             	ret    0x4
