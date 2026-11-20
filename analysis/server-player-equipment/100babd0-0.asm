
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100babd0 <.text+0xb9bd0>:
100babd0:	55                   	push   ebp
100babd1:	8b ec                	mov    ebp,esp
100babd3:	53                   	push   ebx
100babd4:	56                   	push   esi
100babd5:	57                   	push   edi
100babd6:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100babd9:	8b d9                	mov    ebx,ecx
100babdb:	ba a0 52 1a 10       	mov    edx,0x101a52a0
100babe0:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100babe3:	8b c6                	mov    eax,esi
100babe5:	8a 08                	mov    cl,BYTE PTR [eax]
100babe7:	3a 0a                	cmp    cl,BYTE PTR [edx]
100babe9:	75 1a                	jne    0x100bac05
100babeb:	84 c9                	test   cl,cl
100babed:	74 12                	je     0x100bac01
100babef:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100babf2:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
100babf5:	75 0e                	jne    0x100bac05
100babf7:	83 c0 02             	add    eax,0x2
100babfa:	83 c2 02             	add    edx,0x2
100babfd:	84 c9                	test   cl,cl
100babff:	75 e4                	jne    0x100babe5
100bac01:	33 c0                	xor    eax,eax
100bac03:	eb 05                	jmp    0x100bac0a
100bac05:	1b c0                	sbb    eax,eax
100bac07:	83 c8 01             	or     eax,0x1
100bac0a:	85 c0                	test   eax,eax
100bac0c:	75 20                	jne    0x100bac2e
100bac0e:	ff 77 08             	push   DWORD PTR [edi+0x8]
100bac11:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100bac17:	83 c4 04             	add    esp,0x4
100bac1a:	89 83 dc 00 00 00    	mov    DWORD PTR [ebx+0xdc],eax
100bac20:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100bac27:	5f                   	pop    edi
100bac28:	5e                   	pop    esi
100bac29:	5b                   	pop    ebx
100bac2a:	5d                   	pop    ebp
100bac2b:	c2 04 00             	ret    0x4
100bac2e:	b9 7c 24 1a 10       	mov    ecx,0x101a247c
100bac33:	8b c6                	mov    eax,esi
100bac35:	8a 10                	mov    dl,BYTE PTR [eax]
100bac37:	3a 11                	cmp    dl,BYTE PTR [ecx]
100bac39:	75 1a                	jne    0x100bac55
100bac3b:	84 d2                	test   dl,dl
100bac3d:	74 12                	je     0x100bac51
100bac3f:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100bac42:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100bac45:	75 0e                	jne    0x100bac55
100bac47:	83 c0 02             	add    eax,0x2
100bac4a:	83 c1 02             	add    ecx,0x2
100bac4d:	84 d2                	test   dl,dl
100bac4f:	75 e4                	jne    0x100bac35
100bac51:	33 c0                	xor    eax,eax
100bac53:	eb 05                	jmp    0x100bac5a
100bac55:	1b c0                	sbb    eax,eax
100bac57:	83 c8 01             	or     eax,0x1
100bac5a:	85 c0                	test   eax,eax
100bac5c:	75 1d                	jne    0x100bac7b
100bac5e:	ff 77 08             	push   DWORD PTR [edi+0x8]
100bac61:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100bac67:	83 c4 04             	add    esp,0x4
100bac6a:	89 43 18             	mov    DWORD PTR [ebx+0x18],eax
100bac6d:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100bac74:	5f                   	pop    edi
100bac75:	5e                   	pop    esi
100bac76:	5b                   	pop    ebx
100bac77:	5d                   	pop    ebp
100bac78:	c2 04 00             	ret    0x4
100bac7b:	b9 88 24 1a 10       	mov    ecx,0x101a2488
100bac80:	8b c6                	mov    eax,esi
100bac82:	8a 10                	mov    dl,BYTE PTR [eax]
100bac84:	3a 11                	cmp    dl,BYTE PTR [ecx]
100bac86:	75 1a                	jne    0x100baca2
100bac88:	84 d2                	test   dl,dl
100bac8a:	74 12                	je     0x100bac9e
100bac8c:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100bac8f:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100bac92:	75 0e                	jne    0x100baca2
100bac94:	83 c0 02             	add    eax,0x2
100bac97:	83 c1 02             	add    ecx,0x2
100bac9a:	84 d2                	test   dl,dl
100bac9c:	75 e4                	jne    0x100bac82
100bac9e:	33 c0                	xor    eax,eax
100baca0:	eb 05                	jmp    0x100baca7
100baca2:	1b c0                	sbb    eax,eax
100baca4:	83 c8 01             	or     eax,0x1
100baca7:	85 c0                	test   eax,eax
100baca9:	75 1c                	jne    0x100bacc7
100bacab:	ff 77 08             	push   DWORD PTR [edi+0x8]
100bacae:	e8 ab 08 0b 00       	call   0x1016b55e
100bacb3:	83 c4 04             	add    esp,0x4
100bacb6:	89 43 60             	mov    DWORD PTR [ebx+0x60],eax
100bacb9:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100bacc0:	5f                   	pop    edi
100bacc1:	5e                   	pop    esi
100bacc2:	5b                   	pop    ebx
100bacc3:	5d                   	pop    ebp
100bacc4:	c2 04 00             	ret    0x4
100bacc7:	b8 90 24 1a 10       	mov    eax,0x101a2490
100baccc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100bacd0:	8a 0e                	mov    cl,BYTE PTR [esi]
100bacd2:	3a 08                	cmp    cl,BYTE PTR [eax]
100bacd4:	75 1a                	jne    0x100bacf0
100bacd6:	84 c9                	test   cl,cl
100bacd8:	74 12                	je     0x100bacec
100bacda:	8a 4e 01             	mov    cl,BYTE PTR [esi+0x1]
100bacdd:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
100bace0:	75 0e                	jne    0x100bacf0
100bace2:	83 c6 02             	add    esi,0x2
100bace5:	83 c0 02             	add    eax,0x2
100bace8:	84 c9                	test   cl,cl
100bacea:	75 e4                	jne    0x100bacd0
100bacec:	33 c0                	xor    eax,eax
100bacee:	eb 05                	jmp    0x100bacf5
100bacf0:	1b c0                	sbb    eax,eax
100bacf2:	83 c8 01             	or     eax,0x1
100bacf5:	85 c0                	test   eax,eax
100bacf7:	75 1c                	jne    0x100bad15
100bacf9:	ff 77 08             	push   DWORD PTR [edi+0x8]
100bacfc:	e8 5d 08 0b 00       	call   0x1016b55e
100bad01:	83 c4 04             	add    esp,0x4
100bad04:	89 43 64             	mov    DWORD PTR [ebx+0x64],eax
100bad07:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100bad0e:	5f                   	pop    edi
100bad0f:	5e                   	pop    esi
100bad10:	5b                   	pop    ebx
100bad11:	5d                   	pop    ebp
100bad12:	c2 04 00             	ret    0x4
100bad15:	c7 47 0c 00 00 00 00 	mov    DWORD PTR [edi+0xc],0x0
100bad1c:	5f                   	pop    edi
100bad1d:	5e                   	pop    esi
100bad1e:	5b                   	pop    ebx
100bad1f:	5d                   	pop    ebp
100bad20:	c2 04 00             	ret    0x4
