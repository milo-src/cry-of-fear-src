
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b0770 <.text+0xaf770>:
100b0770:	55                   	push   ebp
100b0771:	8b ec                	mov    ebp,esp
100b0773:	53                   	push   ebx
100b0774:	56                   	push   esi
100b0775:	57                   	push   edi
100b0776:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100b0779:	8b d9                	mov    ebx,ecx
100b077b:	ba c0 e5 1c 10       	mov    edx,0x101ce5c0
100b0780:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100b0783:	8b c6                	mov    eax,esi
100b0785:	8a 08                	mov    cl,BYTE PTR [eax]
100b0787:	3a 0a                	cmp    cl,BYTE PTR [edx]
100b0789:	75 1a                	jne    0x100b07a5
100b078b:	84 c9                	test   cl,cl
100b078d:	74 12                	je     0x100b07a1
100b078f:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100b0792:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
100b0795:	75 0e                	jne    0x100b07a5
100b0797:	83 c0 02             	add    eax,0x2
100b079a:	83 c2 02             	add    edx,0x2
100b079d:	84 c9                	test   cl,cl
100b079f:	75 e4                	jne    0x100b0785
100b07a1:	33 c0                	xor    eax,eax
100b07a3:	eb 05                	jmp    0x100b07aa
100b07a5:	1b c0                	sbb    eax,eax
100b07a7:	83 c8 01             	or     eax,0x1
100b07aa:	85 c0                	test   eax,eax
100b07ac:	75 1f                	jne    0x100b07cd
100b07ae:	ff 77 08             	push   DWORD PTR [edi+0x8]
100b07b1:	e8 a8 ad 0b 00       	call   0x1016b55e
100b07b6:	83 c4 04             	add    esp,0x4
100b07b9:	89 83 1c 03 00 00    	mov    DWORD PTR [ebx+0x31c],eax
100b07bf:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100b07c6:	5f                   	pop    edi
100b07c7:	5e                   	pop    esi
100b07c8:	5b                   	pop    ebx
100b07c9:	5d                   	pop    ebp
100b07ca:	c2 04 00             	ret    0x4
100b07cd:	b9 54 11 1c 10       	mov    ecx,0x101c1154
100b07d2:	8b c6                	mov    eax,esi
100b07d4:	8a 10                	mov    dl,BYTE PTR [eax]
100b07d6:	3a 11                	cmp    dl,BYTE PTR [ecx]
100b07d8:	75 1a                	jne    0x100b07f4
100b07da:	84 d2                	test   dl,dl
100b07dc:	74 12                	je     0x100b07f0
100b07de:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100b07e1:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100b07e4:	75 0e                	jne    0x100b07f4
100b07e6:	83 c0 02             	add    eax,0x2
100b07e9:	83 c1 02             	add    ecx,0x2
100b07ec:	84 d2                	test   dl,dl
100b07ee:	75 e4                	jne    0x100b07d4
100b07f0:	33 c0                	xor    eax,eax
100b07f2:	eb 05                	jmp    0x100b07f9
100b07f4:	1b c0                	sbb    eax,eax
100b07f6:	83 c8 01             	or     eax,0x1
100b07f9:	85 c0                	test   eax,eax
100b07fb:	75 1f                	jne    0x100b081c
100b07fd:	ff 77 08             	push   DWORD PTR [edi+0x8]
100b0800:	e8 59 ad 0b 00       	call   0x1016b55e
100b0805:	83 c4 04             	add    esp,0x4
100b0808:	89 83 68 03 00 00    	mov    DWORD PTR [ebx+0x368],eax
100b080e:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100b0815:	5f                   	pop    edi
100b0816:	5e                   	pop    esi
100b0817:	5b                   	pop    ebx
100b0818:	5d                   	pop    ebp
100b0819:	c2 04 00             	ret    0x4
100b081c:	b8 58 ae 1c 10       	mov    eax,0x101cae58
100b0821:	8a 0e                	mov    cl,BYTE PTR [esi]
100b0823:	3a 08                	cmp    cl,BYTE PTR [eax]
100b0825:	75 1a                	jne    0x100b0841
100b0827:	84 c9                	test   cl,cl
100b0829:	74 12                	je     0x100b083d
100b082b:	8a 4e 01             	mov    cl,BYTE PTR [esi+0x1]
100b082e:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
100b0831:	75 0e                	jne    0x100b0841
100b0833:	83 c6 02             	add    esi,0x2
100b0836:	83 c0 02             	add    eax,0x2
100b0839:	84 c9                	test   cl,cl
100b083b:	75 e4                	jne    0x100b0821
100b083d:	33 c0                	xor    eax,eax
100b083f:	eb 05                	jmp    0x100b0846
100b0841:	1b c0                	sbb    eax,eax
100b0843:	83 c8 01             	or     eax,0x1
100b0846:	85 c0                	test   eax,eax
100b0848:	75 20                	jne    0x100b086a
100b084a:	ff 77 08             	push   DWORD PTR [edi+0x8]
100b084d:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
100b0853:	83 c4 04             	add    esp,0x4
100b0856:	89 83 74 03 00 00    	mov    DWORD PTR [ebx+0x374],eax
100b085c:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100b0863:	5f                   	pop    edi
100b0864:	5e                   	pop    esi
100b0865:	5b                   	pop    ebx
100b0866:	5d                   	pop    ebp
100b0867:	c2 04 00             	ret    0x4
100b086a:	57                   	push   edi
100b086b:	8b cb                	mov    ecx,ebx
100b086d:	e8 fe f0 00 00       	call   0x100bf970
100b0872:	5f                   	pop    edi
100b0873:	5e                   	pop    esi
100b0874:	5b                   	pop    ebx
100b0875:	5d                   	pop    ebp
100b0876:	c2 04 00             	ret    0x4
