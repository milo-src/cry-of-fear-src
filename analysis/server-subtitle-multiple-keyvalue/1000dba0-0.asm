
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000dba0 <.text+0xcba0>:
1000dba0:	55                   	push   ebp
1000dba1:	8b ec                	mov    ebp,esp
1000dba3:	53                   	push   ebx
1000dba4:	56                   	push   esi
1000dba5:	57                   	push   edi
1000dba6:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1000dba9:	8b d9                	mov    ebx,ecx
1000dbab:	ba 7c 24 1a 10       	mov    edx,0x101a247c
1000dbb0:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
1000dbb3:	8b c6                	mov    eax,esi
1000dbb5:	8a 08                	mov    cl,BYTE PTR [eax]
1000dbb7:	3a 0a                	cmp    cl,BYTE PTR [edx]
1000dbb9:	75 1a                	jne    0x1000dbd5
1000dbbb:	84 c9                	test   cl,cl
1000dbbd:	74 12                	je     0x1000dbd1
1000dbbf:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1000dbc2:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
1000dbc5:	75 0e                	jne    0x1000dbd5
1000dbc7:	83 c0 02             	add    eax,0x2
1000dbca:	83 c2 02             	add    edx,0x2
1000dbcd:	84 c9                	test   cl,cl
1000dbcf:	75 e4                	jne    0x1000dbb5
1000dbd1:	33 c0                	xor    eax,eax
1000dbd3:	eb 05                	jmp    0x1000dbda
1000dbd5:	1b c0                	sbb    eax,eax
1000dbd7:	83 c8 01             	or     eax,0x1
1000dbda:	85 c0                	test   eax,eax
1000dbdc:	75 1d                	jne    0x1000dbfb
1000dbde:	ff 77 08             	push   DWORD PTR [edi+0x8]
1000dbe1:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1000dbe7:	83 c4 04             	add    esp,0x4
1000dbea:	89 43 18             	mov    DWORD PTR [ebx+0x18],eax
1000dbed:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1000dbf4:	5f                   	pop    edi
1000dbf5:	5e                   	pop    esi
1000dbf6:	5b                   	pop    ebx
1000dbf7:	5d                   	pop    ebp
1000dbf8:	c2 04 00             	ret    0x4
1000dbfb:	b9 88 24 1a 10       	mov    ecx,0x101a2488
1000dc00:	8b c6                	mov    eax,esi
1000dc02:	8a 10                	mov    dl,BYTE PTR [eax]
1000dc04:	3a 11                	cmp    dl,BYTE PTR [ecx]
1000dc06:	75 1a                	jne    0x1000dc22
1000dc08:	84 d2                	test   dl,dl
1000dc0a:	74 12                	je     0x1000dc1e
1000dc0c:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1000dc0f:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1000dc12:	75 0e                	jne    0x1000dc22
1000dc14:	83 c0 02             	add    eax,0x2
1000dc17:	83 c1 02             	add    ecx,0x2
1000dc1a:	84 d2                	test   dl,dl
1000dc1c:	75 e4                	jne    0x1000dc02
1000dc1e:	33 c0                	xor    eax,eax
1000dc20:	eb 05                	jmp    0x1000dc27
1000dc22:	1b c0                	sbb    eax,eax
1000dc24:	83 c8 01             	or     eax,0x1
1000dc27:	85 c0                	test   eax,eax
1000dc29:	75 1c                	jne    0x1000dc47
1000dc2b:	ff 77 08             	push   DWORD PTR [edi+0x8]
1000dc2e:	e8 2b d9 15 00       	call   0x1016b55e
1000dc33:	83 c4 04             	add    esp,0x4
1000dc36:	89 43 60             	mov    DWORD PTR [ebx+0x60],eax
1000dc39:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1000dc40:	5f                   	pop    edi
1000dc41:	5e                   	pop    esi
1000dc42:	5b                   	pop    ebx
1000dc43:	5d                   	pop    ebp
1000dc44:	c2 04 00             	ret    0x4
1000dc47:	b8 90 24 1a 10       	mov    eax,0x101a2490
1000dc4c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
1000dc50:	8a 0e                	mov    cl,BYTE PTR [esi]
1000dc52:	3a 08                	cmp    cl,BYTE PTR [eax]
1000dc54:	75 1a                	jne    0x1000dc70
1000dc56:	84 c9                	test   cl,cl
1000dc58:	74 12                	je     0x1000dc6c
1000dc5a:	8a 4e 01             	mov    cl,BYTE PTR [esi+0x1]
1000dc5d:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
1000dc60:	75 0e                	jne    0x1000dc70
1000dc62:	83 c6 02             	add    esi,0x2
1000dc65:	83 c0 02             	add    eax,0x2
1000dc68:	84 c9                	test   cl,cl
1000dc6a:	75 e4                	jne    0x1000dc50
1000dc6c:	33 c0                	xor    eax,eax
1000dc6e:	eb 05                	jmp    0x1000dc75
1000dc70:	1b c0                	sbb    eax,eax
1000dc72:	83 c8 01             	or     eax,0x1
1000dc75:	85 c0                	test   eax,eax
1000dc77:	75 1c                	jne    0x1000dc95
1000dc79:	ff 77 08             	push   DWORD PTR [edi+0x8]
1000dc7c:	e8 dd d8 15 00       	call   0x1016b55e
1000dc81:	83 c4 04             	add    esp,0x4
1000dc84:	89 43 64             	mov    DWORD PTR [ebx+0x64],eax
1000dc87:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1000dc8e:	5f                   	pop    edi
1000dc8f:	5e                   	pop    esi
1000dc90:	5b                   	pop    ebx
1000dc91:	5d                   	pop    ebp
1000dc92:	c2 04 00             	ret    0x4
1000dc95:	c7 47 0c 00 00 00 00 	mov    DWORD PTR [edi+0xc],0x0
1000dc9c:	5f                   	pop    edi
1000dc9d:	5e                   	pop    esi
1000dc9e:	5b                   	pop    ebx
1000dc9f:	5d                   	pop    ebp
1000dca0:	c2 04 00             	ret    0x4
