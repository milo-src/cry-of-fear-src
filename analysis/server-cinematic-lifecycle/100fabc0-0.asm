
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fabc0 <.text+0xf9bc0>:
100fabc0:	55                   	push   ebp
100fabc1:	8b ec                	mov    ebp,esp
100fabc3:	51                   	push   ecx
100fabc4:	53                   	push   ebx
100fabc5:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
100fabc8:	56                   	push   esi
100fabc9:	57                   	push   edi
100fabca:	53                   	push   ebx
100fabcb:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100fabce:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
100fabd1:	6a 00                	push   0x0
100fabd3:	e8 28 d9 01 00       	call   0x10118500
100fabd8:	8b f0                	mov    esi,eax
100fabda:	83 c4 0c             	add    esp,0xc
100fabdd:	85 f6                	test   esi,esi
100fabdf:	74 5e                	je     0x100fac3f
100fabe1:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100fabe4:	f6 81 a8 01 00 00 20 	test   BYTE PTR [ecx+0x1a8],0x20
100fabeb:	74 3f                	je     0x100fac2c
100fabed:	8b 06                	mov    eax,DWORD PTR [esi]
100fabef:	8b ce                	mov    ecx,esi
100fabf1:	ff 50 78             	call   DWORD PTR [eax+0x78]
100fabf4:	8b f8                	mov    edi,eax
100fabf6:	85 ff                	test   edi,edi
100fabf8:	74 1f                	je     0x100fac19
100fabfa:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100fabfd:	8b 17                	mov    edx,DWORD PTR [edi]
100fabff:	8b 88 a4 03 00 00    	mov    ecx,DWORD PTR [eax+0x3a4]
100fac05:	83 c9 01             	or     ecx,0x1
100fac08:	51                   	push   ecx
100fac09:	8b cf                	mov    ecx,edi
100fac0b:	ff 92 98 01 00 00    	call   DWORD PTR [edx+0x198]
100fac11:	85 c0                	test   eax,eax
100fac13:	0f 85 8b 00 00 00    	jne    0x100faca4
100fac19:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100fac1c:	68 74 de 1d 10       	push   0x101dde74
100fac21:	6a 01                	push   0x1
100fac23:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100fac29:	83 c4 0c             	add    esp,0xc
100fac2c:	53                   	push   ebx
100fac2d:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100fac30:	56                   	push   esi
100fac31:	e8 ca d8 01 00       	call   0x10118500
100fac36:	8b f0                	mov    esi,eax
100fac38:	83 c4 0c             	add    esp,0xc
100fac3b:	85 f6                	test   esi,esi
100fac3d:	75 a2                	jne    0x100fabe1
100fac3f:	8b 5d fc             	mov    ebx,DWORD PTR [ebp-0x4]
100fac42:	51                   	push   ecx
100fac43:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100fac46:	f3 0f 10 83 94 03 00 	movss  xmm0,DWORD PTR [ebx+0x394]
100fac4d:	00 
100fac4e:	83 c0 08             	add    eax,0x8
100fac51:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100fac56:	50                   	push   eax
100fac57:	6a 00                	push   0x0
100fac59:	e8 52 da 01 00       	call   0x101186b0
100fac5e:	8b f8                	mov    edi,eax
100fac60:	83 c4 0c             	add    esp,0xc
100fac63:	85 ff                	test   edi,edi
100fac65:	0f 84 9f 00 00 00    	je     0x100fad0a
100fac6b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100fac70:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100fac76:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100fac79:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100fac7c:	8b 89 98 00 00 00    	mov    ecx,DWORD PTR [ecx+0x98]
100fac82:	03 0e                	add    ecx,DWORD PTR [esi]
100fac84:	8a 01                	mov    al,BYTE PTR [ecx]
100fac86:	3a 02                	cmp    al,BYTE PTR [edx]
100fac88:	75 25                	jne    0x100facaf
100fac8a:	84 c0                	test   al,al
100fac8c:	74 12                	je     0x100faca0
100fac8e:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100fac91:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100fac94:	75 19                	jne    0x100facaf
100fac96:	83 c1 02             	add    ecx,0x2
100fac99:	83 c2 02             	add    edx,0x2
100fac9c:	84 c0                	test   al,al
100fac9e:	75 e4                	jne    0x100fac84
100faca0:	33 c0                	xor    eax,eax
100faca2:	eb 10                	jmp    0x100facb4
100faca4:	8b c7                	mov    eax,edi
100faca6:	5f                   	pop    edi
100faca7:	5e                   	pop    esi
100faca8:	5b                   	pop    ebx
100faca9:	8b e5                	mov    esp,ebp
100facab:	5d                   	pop    ebp
100facac:	c2 08 00             	ret    0x8
100facaf:	1b c0                	sbb    eax,eax
100facb1:	83 c8 01             	or     eax,0x1
100facb4:	85 c0                	test   eax,eax
100facb6:	75 2a                	jne    0x100face2
100facb8:	f6 86 a8 01 00 00 20 	test   BYTE PTR [esi+0x1a8],0x20
100facbf:	74 21                	je     0x100face2
100facc1:	8b 07                	mov    eax,DWORD PTR [edi]
100facc3:	8b cf                	mov    ecx,edi
100facc5:	ff 50 78             	call   DWORD PTR [eax+0x78]
100facc8:	8b f0                	mov    esi,eax
100facca:	85 f6                	test   esi,esi
100faccc:	74 14                	je     0x100face2
100facce:	8b 16                	mov    edx,DWORD PTR [esi]
100facd0:	8b ce                	mov    ecx,esi
100facd2:	ff b3 a4 03 00 00    	push   DWORD PTR [ebx+0x3a4]
100facd8:	ff 92 98 01 00 00    	call   DWORD PTR [edx+0x198]
100facde:	85 c0                	test   eax,eax
100face0:	75 33                	jne    0x100fad15
100face2:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100face5:	f3 0f 10 83 94 03 00 	movss  xmm0,DWORD PTR [ebx+0x394]
100facec:	00 
100faced:	83 c0 08             	add    eax,0x8
100facf0:	51                   	push   ecx
100facf1:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100facf6:	50                   	push   eax
100facf7:	57                   	push   edi
100facf8:	e8 b3 d9 01 00       	call   0x101186b0
100facfd:	8b f8                	mov    edi,eax
100facff:	83 c4 0c             	add    esp,0xc
100fad02:	85 ff                	test   edi,edi
100fad04:	0f 85 66 ff ff ff    	jne    0x100fac70
100fad0a:	5f                   	pop    edi
100fad0b:	5e                   	pop    esi
100fad0c:	33 c0                	xor    eax,eax
100fad0e:	5b                   	pop    ebx
100fad0f:	8b e5                	mov    esp,ebp
100fad11:	5d                   	pop    ebp
100fad12:	c2 08 00             	ret    0x8
100fad15:	5f                   	pop    edi
100fad16:	8b c6                	mov    eax,esi
100fad18:	5e                   	pop    esi
100fad19:	5b                   	pop    ebx
100fad1a:	8b e5                	mov    esp,ebp
100fad1c:	5d                   	pop    ebp
100fad1d:	c2 08 00             	ret    0x8
