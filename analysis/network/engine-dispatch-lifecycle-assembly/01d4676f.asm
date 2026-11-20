 1d4676f:	55                   	push   ebp
 1d46770:	8b ec                	mov    ebp,esp
 1d46772:	b8 01 00 00 00       	mov    eax,0x1
 1d46777:	85 c0                	test   eax,eax
 1d46779:	74 37                	je     0x1d467b2
 1d4677b:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1d4677e:	0f be 11             	movsx  edx,BYTE PTR [ecx]
 1d46781:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
 1d46784:	0f be 08             	movsx  ecx,BYTE PTR [eax]
 1d46787:	3b d1                	cmp    edx,ecx
 1d46789:	74 05                	je     0x1d46790
 1d4678b:	83 c8 ff             	or     eax,0xffffffff
 1d4678e:	eb 25                	jmp    0x1d467b5
 1d46790:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d46793:	0f be 02             	movsx  eax,BYTE PTR [edx]
 1d46796:	85 c0                	test   eax,eax
 1d46798:	75 04                	jne    0x1d4679e
 1d4679a:	33 c0                	xor    eax,eax
 1d4679c:	eb 17                	jmp    0x1d467b5
 1d4679e:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1d467a1:	83 c1 01             	add    ecx,0x1
 1d467a4:	89 4d 08             	mov    DWORD PTR [ebp+0x8],ecx
 1d467a7:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
 1d467aa:	83 c2 01             	add    edx,0x1
 1d467ad:	89 55 0c             	mov    DWORD PTR [ebp+0xc],edx
 1d467b0:	eb c0                	jmp    0x1d46772
 1d467b2:	83 c8 ff             	or     eax,0xffffffff
 1d467b5:	5d                   	pop    ebp
 1d467b6:	c3                   	ret
