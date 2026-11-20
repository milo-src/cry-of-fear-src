
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

100fe800 <.text+0xfd800>:
100fe800:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
100fe804:	57                   	push   edi
100fe805:	85 c9                	test   ecx,ecx
100fe807:	0f 84 92 00 00 00    	je     0x100fe89f
100fe80d:	56                   	push   esi
100fe80e:	53                   	push   ebx
100fe80f:	8b d9                	mov    ebx,ecx
100fe811:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
100fe815:	f7 c6 03 00 00 00    	test   esi,0x3
100fe81b:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
100fe81f:	75 0b                	jne    0x100fe82c
100fe821:	c1 e9 02             	shr    ecx,0x2
100fe824:	0f 85 85 00 00 00    	jne    0x100fe8af
100fe82a:	eb 27                	jmp    0x100fe853
100fe82c:	8a 06                	mov    al,BYTE PTR [esi]
100fe82e:	83 c6 01             	add    esi,0x1
100fe831:	88 07                	mov    BYTE PTR [edi],al
100fe833:	83 c7 01             	add    edi,0x1
100fe836:	83 e9 01             	sub    ecx,0x1
100fe839:	74 2b                	je     0x100fe866
100fe83b:	84 c0                	test   al,al
100fe83d:	74 2f                	je     0x100fe86e
100fe83f:	f7 c6 03 00 00 00    	test   esi,0x3
100fe845:	75 e5                	jne    0x100fe82c
100fe847:	8b d9                	mov    ebx,ecx
100fe849:	c1 e9 02             	shr    ecx,0x2
100fe84c:	75 61                	jne    0x100fe8af
100fe84e:	83 e3 03             	and    ebx,0x3
100fe851:	74 13                	je     0x100fe866
100fe853:	8a 06                	mov    al,BYTE PTR [esi]
100fe855:	83 c6 01             	add    esi,0x1
100fe858:	88 07                	mov    BYTE PTR [edi],al
100fe85a:	83 c7 01             	add    edi,0x1
100fe85d:	84 c0                	test   al,al
100fe85f:	74 37                	je     0x100fe898
100fe861:	83 eb 01             	sub    ebx,0x1
100fe864:	75 ed                	jne    0x100fe853
100fe866:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
100fe86a:	5b                   	pop    ebx
100fe86b:	5e                   	pop    esi
100fe86c:	5f                   	pop    edi
100fe86d:	c3                   	ret
100fe86e:	f7 c7 03 00 00 00    	test   edi,0x3
100fe874:	74 16                	je     0x100fe88c
100fe876:	88 07                	mov    BYTE PTR [edi],al
100fe878:	83 c7 01             	add    edi,0x1
100fe87b:	83 e9 01             	sub    ecx,0x1
100fe87e:	0f 84 98 00 00 00    	je     0x100fe91c
100fe884:	f7 c7 03 00 00 00    	test   edi,0x3
100fe88a:	75 ea                	jne    0x100fe876
100fe88c:	8b d9                	mov    ebx,ecx
100fe88e:	c1 e9 02             	shr    ecx,0x2
100fe891:	75 74                	jne    0x100fe907
100fe893:	88 07                	mov    BYTE PTR [edi],al
100fe895:	83 c7 01             	add    edi,0x1
100fe898:	83 eb 01             	sub    ebx,0x1
100fe89b:	75 f6                	jne    0x100fe893
100fe89d:	5b                   	pop    ebx
100fe89e:	5e                   	pop    esi
100fe89f:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
100fe8a3:	5f                   	pop    edi
100fe8a4:	c3                   	ret
100fe8a5:	89 17                	mov    DWORD PTR [edi],edx
100fe8a7:	83 c7 04             	add    edi,0x4
100fe8aa:	83 e9 01             	sub    ecx,0x1
100fe8ad:	74 9f                	je     0x100fe84e
100fe8af:	ba ff fe fe 7e       	mov    edx,0x7efefeff
100fe8b4:	8b 06                	mov    eax,DWORD PTR [esi]
100fe8b6:	03 d0                	add    edx,eax
100fe8b8:	83 f0 ff             	xor    eax,0xffffffff
100fe8bb:	33 c2                	xor    eax,edx
100fe8bd:	8b 16                	mov    edx,DWORD PTR [esi]
100fe8bf:	83 c6 04             	add    esi,0x4
100fe8c2:	a9 00 01 01 81       	test   eax,0x81010100
100fe8c7:	74 dc                	je     0x100fe8a5
100fe8c9:	84 d2                	test   dl,dl
100fe8cb:	74 2c                	je     0x100fe8f9
100fe8cd:	84 f6                	test   dh,dh
100fe8cf:	74 1e                	je     0x100fe8ef
100fe8d1:	f7 c2 00 00 ff 00    	test   edx,0xff0000
100fe8d7:	74 0c                	je     0x100fe8e5
100fe8d9:	f7 c2 00 00 00 ff    	test   edx,0xff000000
100fe8df:	75 c4                	jne    0x100fe8a5
100fe8e1:	89 17                	mov    DWORD PTR [edi],edx
100fe8e3:	eb 18                	jmp    0x100fe8fd
100fe8e5:	81 e2 ff ff 00 00    	and    edx,0xffff
100fe8eb:	89 17                	mov    DWORD PTR [edi],edx
100fe8ed:	eb 0e                	jmp    0x100fe8fd
100fe8ef:	81 e2 ff 00 00 00    	and    edx,0xff
100fe8f5:	89 17                	mov    DWORD PTR [edi],edx
100fe8f7:	eb 04                	jmp    0x100fe8fd
100fe8f9:	33 d2                	xor    edx,edx
100fe8fb:	89 17                	mov    DWORD PTR [edi],edx
100fe8fd:	83 c7 04             	add    edi,0x4
100fe900:	33 c0                	xor    eax,eax
100fe902:	83 e9 01             	sub    ecx,0x1
100fe905:	74 0c                	je     0x100fe913
100fe907:	33 c0                	xor    eax,eax
100fe909:	89 07                	mov    DWORD PTR [edi],eax
100fe90b:	83 c7 04             	add    edi,0x4
100fe90e:	83 e9 01             	sub    ecx,0x1
100fe911:	75 f6                	jne    0x100fe909
100fe913:	83 e3 03             	and    ebx,0x3
100fe916:	0f 85 77 ff ff ff    	jne    0x100fe893
100fe91c:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
100fe920:	5b                   	pop    ebx
100fe921:	5e                   	pop    esi
100fe922:	5f                   	pop    edi
100fe923:	c3                   	ret
