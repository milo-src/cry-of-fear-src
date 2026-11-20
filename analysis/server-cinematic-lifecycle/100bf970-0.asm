
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bf970 <.text+0xbe970>:
100bf970:	55                   	push   ebp
100bf971:	8b ec                	mov    ebp,esp
100bf973:	53                   	push   ebx
100bf974:	56                   	push   esi
100bf975:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100bf978:	ba 2c 52 1d 10       	mov    edx,0x101d522c
100bf97d:	57                   	push   edi
100bf97e:	8b f9                	mov    edi,ecx
100bf980:	8b 5e 04             	mov    ebx,DWORD PTR [esi+0x4]
100bf983:	8b c3                	mov    eax,ebx
100bf985:	8a 08                	mov    cl,BYTE PTR [eax]
100bf987:	3a 0a                	cmp    cl,BYTE PTR [edx]
100bf989:	75 1a                	jne    0x100bf9a5
100bf98b:	84 c9                	test   cl,cl
100bf98d:	74 12                	je     0x100bf9a1
100bf98f:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100bf992:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
100bf995:	75 0e                	jne    0x100bf9a5
100bf997:	83 c0 02             	add    eax,0x2
100bf99a:	83 c2 02             	add    edx,0x2
100bf99d:	84 c9                	test   cl,cl
100bf99f:	75 e4                	jne    0x100bf985
100bf9a1:	33 c0                	xor    eax,eax
100bf9a3:	eb 05                	jmp    0x100bf9aa
100bf9a5:	1b c0                	sbb    eax,eax
100bf9a7:	83 c8 01             	or     eax,0x1
100bf9aa:	85 c0                	test   eax,eax
100bf9ac:	75 20                	jne    0x100bf9ce
100bf9ae:	ff 76 08             	push   DWORD PTR [esi+0x8]
100bf9b1:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100bf9b7:	83 c4 04             	add    esp,0x4
100bf9ba:	89 87 34 03 00 00    	mov    DWORD PTR [edi+0x334],eax
100bf9c0:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100bf9c7:	5f                   	pop    edi
100bf9c8:	5e                   	pop    esi
100bf9c9:	5b                   	pop    ebx
100bf9ca:	5d                   	pop    ebp
100bf9cb:	c2 04 00             	ret    0x4
100bf9ce:	b9 3c 52 1d 10       	mov    ecx,0x101d523c
100bf9d3:	8b c3                	mov    eax,ebx
100bf9d5:	8a 10                	mov    dl,BYTE PTR [eax]
100bf9d7:	3a 11                	cmp    dl,BYTE PTR [ecx]
100bf9d9:	75 1a                	jne    0x100bf9f5
100bf9db:	84 d2                	test   dl,dl
100bf9dd:	74 12                	je     0x100bf9f1
100bf9df:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100bf9e2:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100bf9e5:	75 0e                	jne    0x100bf9f5
100bf9e7:	83 c0 02             	add    eax,0x2
100bf9ea:	83 c1 02             	add    ecx,0x2
100bf9ed:	84 d2                	test   dl,dl
100bf9ef:	75 e4                	jne    0x100bf9d5
100bf9f1:	33 c0                	xor    eax,eax
100bf9f3:	eb 05                	jmp    0x100bf9fa
100bf9f5:	1b c0                	sbb    eax,eax
100bf9f7:	83 c8 01             	or     eax,0x1
100bf9fa:	85 c0                	test   eax,eax
100bf9fc:	75 1f                	jne    0x100bfa1d
100bf9fe:	ff 76 08             	push   DWORD PTR [esi+0x8]
100bfa01:	e8 58 bb 0a 00       	call   0x1016b55e
100bfa06:	83 c4 04             	add    esp,0x4
100bfa09:	89 87 30 03 00 00    	mov    DWORD PTR [edi+0x330],eax
100bfa0f:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100bfa16:	5f                   	pop    edi
100bfa17:	5e                   	pop    esi
100bfa18:	5b                   	pop    ebx
100bfa19:	5d                   	pop    ebp
100bfa1a:	c2 04 00             	ret    0x4
100bfa1d:	b9 fc b1 1c 10       	mov    ecx,0x101cb1fc
100bfa22:	8b c3                	mov    eax,ebx
100bfa24:	8a 10                	mov    dl,BYTE PTR [eax]
100bfa26:	3a 11                	cmp    dl,BYTE PTR [ecx]
100bfa28:	75 1a                	jne    0x100bfa44
100bfa2a:	84 d2                	test   dl,dl
100bfa2c:	74 12                	je     0x100bfa40
100bfa2e:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100bfa31:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100bfa34:	75 0e                	jne    0x100bfa44
100bfa36:	83 c0 02             	add    eax,0x2
100bfa39:	83 c1 02             	add    ecx,0x2
100bfa3c:	84 d2                	test   dl,dl
100bfa3e:	75 e4                	jne    0x100bfa24
100bfa40:	33 c0                	xor    eax,eax
100bfa42:	eb 05                	jmp    0x100bfa49
100bfa44:	1b c0                	sbb    eax,eax
100bfa46:	83 c8 01             	or     eax,0x1
100bfa49:	85 c0                	test   eax,eax
100bfa4b:	75 1f                	jne    0x100bfa6c
100bfa4d:	ff 76 08             	push   DWORD PTR [esi+0x8]
100bfa50:	e8 09 bb 0a 00       	call   0x1016b55e
100bfa55:	83 c4 04             	add    esp,0x4
100bfa58:	89 87 50 03 00 00    	mov    DWORD PTR [edi+0x350],eax
100bfa5e:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100bfa65:	5f                   	pop    edi
100bfa66:	5e                   	pop    esi
100bfa67:	5b                   	pop    ebx
100bfa68:	5d                   	pop    ebp
100bfa69:	c2 04 00             	ret    0x4
100bfa6c:	68 0c 4b 1d 10       	push   0x101d4b0c
100bfa71:	53                   	push   ebx
100bfa72:	e8 29 b1 f4 ff       	call   0x1000aba0
100bfa77:	83 c4 08             	add    esp,0x8
100bfa7a:	85 c0                	test   eax,eax
100bfa7c:	74 1f                	je     0x100bfa9d
100bfa7e:	ff 76 08             	push   DWORD PTR [esi+0x8]
100bfa81:	e8 d8 ba 0a 00       	call   0x1016b55e
100bfa86:	83 c4 04             	add    esp,0x4
100bfa89:	89 87 54 03 00 00    	mov    DWORD PTR [edi+0x354],eax
100bfa8f:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100bfa96:	5f                   	pop    edi
100bfa97:	5e                   	pop    esi
100bfa98:	5b                   	pop    ebx
100bfa99:	5d                   	pop    ebp
100bfa9a:	c2 04 00             	ret    0x4
100bfa9d:	68 50 52 1d 10       	push   0x101d5250
100bfaa2:	53                   	push   ebx
100bfaa3:	e8 f8 b0 f4 ff       	call   0x1000aba0
100bfaa8:	83 c4 08             	add    esp,0x8
100bfaab:	85 c0                	test   eax,eax
100bfaad:	74 1f                	je     0x100bface
100bfaaf:	ff 76 08             	push   DWORD PTR [esi+0x8]
100bfab2:	e8 a7 ba 0a 00       	call   0x1016b55e
100bfab7:	83 c4 04             	add    esp,0x4
100bfaba:	89 87 44 03 00 00    	mov    DWORD PTR [edi+0x344],eax
100bfac0:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
100bfac7:	5f                   	pop    edi
100bfac8:	5e                   	pop    esi
100bfac9:	5b                   	pop    ebx
100bfaca:	5d                   	pop    ebp
100bfacb:	c2 04 00             	ret    0x4
100bface:	56                   	push   esi
100bfacf:	8b cf                	mov    ecx,edi
100bfad1:	e8 aa 29 04 00       	call   0x10102480
100bfad6:	5f                   	pop    edi
100bfad7:	5e                   	pop    esi
100bfad8:	5b                   	pop    ebx
100bfad9:	5d                   	pop    ebp
100bfada:	c2 04 00             	ret    0x4
