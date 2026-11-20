
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10104f70 <.text+0x103f70>:
10104f70:	55                   	push   ebp
10104f71:	8b ec                	mov    ebp,esp
10104f73:	53                   	push   ebx
10104f74:	56                   	push   esi
10104f75:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10104f78:	ba fc f9 1d 10       	mov    edx,0x101df9fc
10104f7d:	57                   	push   edi
10104f7e:	8b f9                	mov    edi,ecx
10104f80:	8b 5e 04             	mov    ebx,DWORD PTR [esi+0x4]
10104f83:	8b c3                	mov    eax,ebx
10104f85:	8a 08                	mov    cl,BYTE PTR [eax]
10104f87:	3a 0a                	cmp    cl,BYTE PTR [edx]
10104f89:	75 1a                	jne    0x10104fa5
10104f8b:	84 c9                	test   cl,cl
10104f8d:	74 12                	je     0x10104fa1
10104f8f:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
10104f92:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
10104f95:	75 0e                	jne    0x10104fa5
10104f97:	83 c0 02             	add    eax,0x2
10104f9a:	83 c2 02             	add    edx,0x2
10104f9d:	84 c9                	test   cl,cl
10104f9f:	75 e4                	jne    0x10104f85
10104fa1:	33 c0                	xor    eax,eax
10104fa3:	eb 05                	jmp    0x10104faa
10104fa5:	1b c0                	sbb    eax,eax
10104fa7:	83 c8 01             	or     eax,0x1
10104faa:	85 c0                	test   eax,eax
10104fac:	75 20                	jne    0x10104fce
10104fae:	ff 76 08             	push   DWORD PTR [esi+0x8]
10104fb1:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10104fb7:	83 c4 04             	add    esp,0x4
10104fba:	89 87 c4 03 00 00    	mov    DWORD PTR [edi+0x3c4],eax
10104fc0:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10104fc7:	5f                   	pop    edi
10104fc8:	5e                   	pop    esi
10104fc9:	5b                   	pop    ebx
10104fca:	5d                   	pop    ebp
10104fcb:	c2 04 00             	ret    0x4
10104fce:	b9 08 fa 1d 10       	mov    ecx,0x101dfa08
10104fd3:	8b c3                	mov    eax,ebx
10104fd5:	8a 10                	mov    dl,BYTE PTR [eax]
10104fd7:	3a 11                	cmp    dl,BYTE PTR [ecx]
10104fd9:	75 1a                	jne    0x10104ff5
10104fdb:	84 d2                	test   dl,dl
10104fdd:	74 12                	je     0x10104ff1
10104fdf:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10104fe2:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10104fe5:	75 0e                	jne    0x10104ff5
10104fe7:	83 c0 02             	add    eax,0x2
10104fea:	83 c1 02             	add    ecx,0x2
10104fed:	84 d2                	test   dl,dl
10104fef:	75 e4                	jne    0x10104fd5
10104ff1:	33 c0                	xor    eax,eax
10104ff3:	eb 05                	jmp    0x10104ffa
10104ff5:	1b c0                	sbb    eax,eax
10104ff7:	83 c8 01             	or     eax,0x1
10104ffa:	85 c0                	test   eax,eax
10104ffc:	75 20                	jne    0x1010501e
10104ffe:	ff 76 08             	push   DWORD PTR [esi+0x8]
10105001:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10105007:	83 c4 04             	add    esp,0x4
1010500a:	89 87 c8 03 00 00    	mov    DWORD PTR [edi+0x3c8],eax
10105010:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10105017:	5f                   	pop    edi
10105018:	5e                   	pop    esi
10105019:	5b                   	pop    ebx
1010501a:	5d                   	pop    ebp
1010501b:	c2 04 00             	ret    0x4
1010501e:	b9 18 fa 1d 10       	mov    ecx,0x101dfa18
10105023:	8b c3                	mov    eax,ebx
10105025:	8a 10                	mov    dl,BYTE PTR [eax]
10105027:	3a 11                	cmp    dl,BYTE PTR [ecx]
10105029:	75 1a                	jne    0x10105045
1010502b:	84 d2                	test   dl,dl
1010502d:	74 12                	je     0x10105041
1010502f:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10105032:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10105035:	75 0e                	jne    0x10105045
10105037:	83 c0 02             	add    eax,0x2
1010503a:	83 c1 02             	add    ecx,0x2
1010503d:	84 d2                	test   dl,dl
1010503f:	75 e4                	jne    0x10105025
10105041:	33 c0                	xor    eax,eax
10105043:	eb 05                	jmp    0x1010504a
10105045:	1b c0                	sbb    eax,eax
10105047:	83 c8 01             	or     eax,0x1
1010504a:	85 c0                	test   eax,eax
1010504c:	75 20                	jne    0x1010506e
1010504e:	ff 76 08             	push   DWORD PTR [esi+0x8]
10105051:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10105057:	83 c4 04             	add    esp,0x4
1010505a:	89 87 cc 03 00 00    	mov    DWORD PTR [edi+0x3cc],eax
10105060:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10105067:	5f                   	pop    edi
10105068:	5e                   	pop    esi
10105069:	5b                   	pop    ebx
1010506a:	5d                   	pop    ebp
1010506b:	c2 04 00             	ret    0x4
1010506e:	68 28 fa 1d 10       	push   0x101dfa28
10105073:	53                   	push   ebx
10105074:	e8 27 5b f0 ff       	call   0x1000aba0
10105079:	83 c4 08             	add    esp,0x8
1010507c:	85 c0                	test   eax,eax
1010507e:	74 20                	je     0x101050a0
10105080:	ff 76 08             	push   DWORD PTR [esi+0x8]
10105083:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10105089:	83 c4 04             	add    esp,0x4
1010508c:	89 87 d0 03 00 00    	mov    DWORD PTR [edi+0x3d0],eax
10105092:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10105099:	5f                   	pop    edi
1010509a:	5e                   	pop    esi
1010509b:	5b                   	pop    ebx
1010509c:	5d                   	pop    ebp
1010509d:	c2 04 00             	ret    0x4
101050a0:	56                   	push   esi
101050a1:	8b cf                	mov    ecx,edi
101050a3:	e8 c8 a8 fb ff       	call   0x100bf970
101050a8:	5f                   	pop    edi
101050a9:	5e                   	pop    esi
101050aa:	5b                   	pop    ebx
101050ab:	5d                   	pop    ebp
101050ac:	c2 04 00             	ret    0x4
