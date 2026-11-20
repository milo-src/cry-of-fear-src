
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011dd70 <.text+0x11cd70>:
1011dd70:	55                   	push   ebp
1011dd71:	8b ec                	mov    ebp,esp
1011dd73:	53                   	push   ebx
1011dd74:	56                   	push   esi
1011dd75:	57                   	push   edi
1011dd76:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1011dd79:	8b d9                	mov    ebx,ecx
1011dd7b:	ba 98 66 1e 10       	mov    edx,0x101e6698
1011dd80:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
1011dd83:	8b c6                	mov    eax,esi
1011dd85:	8a 08                	mov    cl,BYTE PTR [eax]
1011dd87:	3a 0a                	cmp    cl,BYTE PTR [edx]
1011dd89:	75 1a                	jne    0x1011dda5
1011dd8b:	84 c9                	test   cl,cl
1011dd8d:	74 12                	je     0x1011dda1
1011dd8f:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1011dd92:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
1011dd95:	75 0e                	jne    0x1011dda5
1011dd97:	83 c0 02             	add    eax,0x2
1011dd9a:	83 c2 02             	add    edx,0x2
1011dd9d:	84 c9                	test   cl,cl
1011dd9f:	75 e4                	jne    0x1011dd85
1011dda1:	33 c0                	xor    eax,eax
1011dda3:	eb 05                	jmp    0x1011ddaa
1011dda5:	1b c0                	sbb    eax,eax
1011dda7:	83 c8 01             	or     eax,0x1
1011ddaa:	85 c0                	test   eax,eax
1011ddac:	75 20                	jne    0x1011ddce
1011ddae:	ff 77 08             	push   DWORD PTR [edi+0x8]
1011ddb1:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1011ddb7:	83 c4 04             	add    esp,0x4
1011ddba:	89 83 6c 01 00 00    	mov    DWORD PTR [ebx+0x16c],eax
1011ddc0:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1011ddc7:	5f                   	pop    edi
1011ddc8:	5e                   	pop    esi
1011ddc9:	5b                   	pop    ebx
1011ddca:	5d                   	pop    ebp
1011ddcb:	c2 04 00             	ret    0x4
1011ddce:	b9 a0 66 1e 10       	mov    ecx,0x101e66a0
1011ddd3:	8b c6                	mov    eax,esi
1011ddd5:	8a 10                	mov    dl,BYTE PTR [eax]
1011ddd7:	3a 11                	cmp    dl,BYTE PTR [ecx]
1011ddd9:	75 1a                	jne    0x1011ddf5
1011dddb:	84 d2                	test   dl,dl
1011dddd:	74 12                	je     0x1011ddf1
1011dddf:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1011dde2:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1011dde5:	75 0e                	jne    0x1011ddf5
1011dde7:	83 c0 02             	add    eax,0x2
1011ddea:	83 c1 02             	add    ecx,0x2
1011dded:	84 d2                	test   dl,dl
1011ddef:	75 e4                	jne    0x1011ddd5
1011ddf1:	33 c0                	xor    eax,eax
1011ddf3:	eb 05                	jmp    0x1011ddfa
1011ddf5:	1b c0                	sbb    eax,eax
1011ddf7:	83 c8 01             	or     eax,0x1
1011ddfa:	85 c0                	test   eax,eax
1011ddfc:	75 20                	jne    0x1011de1e
1011ddfe:	ff 77 08             	push   DWORD PTR [edi+0x8]
1011de01:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1011de07:	83 c4 04             	add    esp,0x4
1011de0a:	89 83 70 01 00 00    	mov    DWORD PTR [ebx+0x170],eax
1011de10:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1011de17:	5f                   	pop    edi
1011de18:	5e                   	pop    esi
1011de19:	5b                   	pop    ebx
1011de1a:	5d                   	pop    ebp
1011de1b:	c2 04 00             	ret    0x4
1011de1e:	b9 a8 66 1e 10       	mov    ecx,0x101e66a8
1011de23:	8b c6                	mov    eax,esi
1011de25:	8a 10                	mov    dl,BYTE PTR [eax]
1011de27:	3a 11                	cmp    dl,BYTE PTR [ecx]
1011de29:	75 1a                	jne    0x1011de45
1011de2b:	84 d2                	test   dl,dl
1011de2d:	74 12                	je     0x1011de41
1011de2f:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1011de32:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1011de35:	75 0e                	jne    0x1011de45
1011de37:	83 c0 02             	add    eax,0x2
1011de3a:	83 c1 02             	add    ecx,0x2
1011de3d:	84 d2                	test   dl,dl
1011de3f:	75 e4                	jne    0x1011de25
1011de41:	33 c0                	xor    eax,eax
1011de43:	eb 05                	jmp    0x1011de4a
1011de45:	1b c0                	sbb    eax,eax
1011de47:	83 c8 01             	or     eax,0x1
1011de4a:	85 c0                	test   eax,eax
1011de4c:	75 20                	jne    0x1011de6e
1011de4e:	ff 77 08             	push   DWORD PTR [edi+0x8]
1011de51:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1011de57:	83 c4 04             	add    esp,0x4
1011de5a:	89 83 74 01 00 00    	mov    DWORD PTR [ebx+0x174],eax
1011de60:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1011de67:	5f                   	pop    edi
1011de68:	5e                   	pop    esi
1011de69:	5b                   	pop    ebx
1011de6a:	5d                   	pop    ebp
1011de6b:	c2 04 00             	ret    0x4
1011de6e:	b9 7c 24 1a 10       	mov    ecx,0x101a247c
1011de73:	8b c6                	mov    eax,esi
1011de75:	8a 10                	mov    dl,BYTE PTR [eax]
1011de77:	3a 11                	cmp    dl,BYTE PTR [ecx]
1011de79:	75 1a                	jne    0x1011de95
1011de7b:	84 d2                	test   dl,dl
1011de7d:	74 12                	je     0x1011de91
1011de7f:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1011de82:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1011de85:	75 0e                	jne    0x1011de95
1011de87:	83 c0 02             	add    eax,0x2
1011de8a:	83 c1 02             	add    ecx,0x2
1011de8d:	84 d2                	test   dl,dl
1011de8f:	75 e4                	jne    0x1011de75
1011de91:	33 c0                	xor    eax,eax
1011de93:	eb 05                	jmp    0x1011de9a
1011de95:	1b c0                	sbb    eax,eax
1011de97:	83 c8 01             	or     eax,0x1
1011de9a:	85 c0                	test   eax,eax
1011de9c:	75 1d                	jne    0x1011debb
1011de9e:	ff 77 08             	push   DWORD PTR [edi+0x8]
1011dea1:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1011dea7:	83 c4 04             	add    esp,0x4
1011deaa:	89 43 18             	mov    DWORD PTR [ebx+0x18],eax
1011dead:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1011deb4:	5f                   	pop    edi
1011deb5:	5e                   	pop    esi
1011deb6:	5b                   	pop    ebx
1011deb7:	5d                   	pop    ebp
1011deb8:	c2 04 00             	ret    0x4
1011debb:	b9 88 24 1a 10       	mov    ecx,0x101a2488
1011dec0:	8b c6                	mov    eax,esi
1011dec2:	8a 10                	mov    dl,BYTE PTR [eax]
1011dec4:	3a 11                	cmp    dl,BYTE PTR [ecx]
1011dec6:	75 1a                	jne    0x1011dee2
1011dec8:	84 d2                	test   dl,dl
1011deca:	74 12                	je     0x1011dede
1011decc:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1011decf:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1011ded2:	75 0e                	jne    0x1011dee2
1011ded4:	83 c0 02             	add    eax,0x2
1011ded7:	83 c1 02             	add    ecx,0x2
1011deda:	84 d2                	test   dl,dl
1011dedc:	75 e4                	jne    0x1011dec2
1011dede:	33 c0                	xor    eax,eax
1011dee0:	eb 05                	jmp    0x1011dee7
1011dee2:	1b c0                	sbb    eax,eax
1011dee4:	83 c8 01             	or     eax,0x1
1011dee7:	85 c0                	test   eax,eax
1011dee9:	75 1c                	jne    0x1011df07
1011deeb:	ff 77 08             	push   DWORD PTR [edi+0x8]
1011deee:	e8 6b d6 04 00       	call   0x1016b55e
1011def3:	83 c4 04             	add    esp,0x4
1011def6:	89 43 60             	mov    DWORD PTR [ebx+0x60],eax
1011def9:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1011df00:	5f                   	pop    edi
1011df01:	5e                   	pop    esi
1011df02:	5b                   	pop    ebx
1011df03:	5d                   	pop    ebp
1011df04:	c2 04 00             	ret    0x4
1011df07:	b8 90 24 1a 10       	mov    eax,0x101a2490
1011df0c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
1011df10:	8a 0e                	mov    cl,BYTE PTR [esi]
1011df12:	3a 08                	cmp    cl,BYTE PTR [eax]
1011df14:	75 1a                	jne    0x1011df30
1011df16:	84 c9                	test   cl,cl
1011df18:	74 12                	je     0x1011df2c
1011df1a:	8a 4e 01             	mov    cl,BYTE PTR [esi+0x1]
1011df1d:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
1011df20:	75 0e                	jne    0x1011df30
1011df22:	83 c6 02             	add    esi,0x2
1011df25:	83 c0 02             	add    eax,0x2
1011df28:	84 c9                	test   cl,cl
1011df2a:	75 e4                	jne    0x1011df10
1011df2c:	33 c0                	xor    eax,eax
1011df2e:	eb 05                	jmp    0x1011df35
1011df30:	1b c0                	sbb    eax,eax
1011df32:	83 c8 01             	or     eax,0x1
1011df35:	85 c0                	test   eax,eax
1011df37:	75 1c                	jne    0x1011df55
1011df39:	ff 77 08             	push   DWORD PTR [edi+0x8]
1011df3c:	e8 1d d6 04 00       	call   0x1016b55e
1011df41:	83 c4 04             	add    esp,0x4
1011df44:	89 43 64             	mov    DWORD PTR [ebx+0x64],eax
1011df47:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1011df4e:	5f                   	pop    edi
1011df4f:	5e                   	pop    esi
1011df50:	5b                   	pop    ebx
1011df51:	5d                   	pop    ebp
1011df52:	c2 04 00             	ret    0x4
1011df55:	c7 47 0c 00 00 00 00 	mov    DWORD PTR [edi+0xc],0x0
1011df5c:	5f                   	pop    edi
1011df5d:	5e                   	pop    esi
1011df5e:	5b                   	pop    ebx
1011df5f:	5d                   	pop    ebp
1011df60:	c2 04 00             	ret    0x4
