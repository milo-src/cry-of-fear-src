
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1016f700 <.text+0x16e700>:
1016f700:	8b 4c 24 0c          	mov    ecx,DWORD PTR [esp+0xc]
1016f704:	57                   	push   edi
1016f705:	85 c9                	test   ecx,ecx
1016f707:	0f 84 92 00 00 00    	je     0x1016f79f
1016f70d:	56                   	push   esi
1016f70e:	53                   	push   ebx
1016f70f:	8b d9                	mov    ebx,ecx
1016f711:	8b 74 24 14          	mov    esi,DWORD PTR [esp+0x14]
1016f715:	f7 c6 03 00 00 00    	test   esi,0x3
1016f71b:	8b 7c 24 10          	mov    edi,DWORD PTR [esp+0x10]
1016f71f:	75 0b                	jne    0x1016f72c
1016f721:	c1 e9 02             	shr    ecx,0x2
1016f724:	0f 85 85 00 00 00    	jne    0x1016f7af
1016f72a:	eb 27                	jmp    0x1016f753
1016f72c:	8a 06                	mov    al,BYTE PTR [esi]
1016f72e:	83 c6 01             	add    esi,0x1
1016f731:	88 07                	mov    BYTE PTR [edi],al
1016f733:	83 c7 01             	add    edi,0x1
1016f736:	83 e9 01             	sub    ecx,0x1
1016f739:	74 2b                	je     0x1016f766
1016f73b:	84 c0                	test   al,al
1016f73d:	74 2f                	je     0x1016f76e
1016f73f:	f7 c6 03 00 00 00    	test   esi,0x3
1016f745:	75 e5                	jne    0x1016f72c
1016f747:	8b d9                	mov    ebx,ecx
1016f749:	c1 e9 02             	shr    ecx,0x2
1016f74c:	75 61                	jne    0x1016f7af
1016f74e:	83 e3 03             	and    ebx,0x3
1016f751:	74 13                	je     0x1016f766
1016f753:	8a 06                	mov    al,BYTE PTR [esi]
1016f755:	83 c6 01             	add    esi,0x1
1016f758:	88 07                	mov    BYTE PTR [edi],al
1016f75a:	83 c7 01             	add    edi,0x1
1016f75d:	84 c0                	test   al,al
1016f75f:	74 37                	je     0x1016f798
1016f761:	83 eb 01             	sub    ebx,0x1
1016f764:	75 ed                	jne    0x1016f753
1016f766:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1016f76a:	5b                   	pop    ebx
1016f76b:	5e                   	pop    esi
1016f76c:	5f                   	pop    edi
1016f76d:	c3                   	ret
1016f76e:	f7 c7 03 00 00 00    	test   edi,0x3
1016f774:	74 16                	je     0x1016f78c
1016f776:	88 07                	mov    BYTE PTR [edi],al
1016f778:	83 c7 01             	add    edi,0x1
1016f77b:	83 e9 01             	sub    ecx,0x1
1016f77e:	0f 84 98 00 00 00    	je     0x1016f81c
1016f784:	f7 c7 03 00 00 00    	test   edi,0x3
1016f78a:	75 ea                	jne    0x1016f776
1016f78c:	8b d9                	mov    ebx,ecx
1016f78e:	c1 e9 02             	shr    ecx,0x2
1016f791:	75 74                	jne    0x1016f807
1016f793:	88 07                	mov    BYTE PTR [edi],al
1016f795:	83 c7 01             	add    edi,0x1
1016f798:	83 eb 01             	sub    ebx,0x1
1016f79b:	75 f6                	jne    0x1016f793
1016f79d:	5b                   	pop    ebx
1016f79e:	5e                   	pop    esi
1016f79f:	8b 44 24 08          	mov    eax,DWORD PTR [esp+0x8]
1016f7a3:	5f                   	pop    edi
1016f7a4:	c3                   	ret
1016f7a5:	89 17                	mov    DWORD PTR [edi],edx
1016f7a7:	83 c7 04             	add    edi,0x4
1016f7aa:	83 e9 01             	sub    ecx,0x1
1016f7ad:	74 9f                	je     0x1016f74e
1016f7af:	ba ff fe fe 7e       	mov    edx,0x7efefeff
1016f7b4:	8b 06                	mov    eax,DWORD PTR [esi]
1016f7b6:	03 d0                	add    edx,eax
1016f7b8:	83 f0 ff             	xor    eax,0xffffffff
1016f7bb:	33 c2                	xor    eax,edx
1016f7bd:	8b 16                	mov    edx,DWORD PTR [esi]
1016f7bf:	83 c6 04             	add    esi,0x4
1016f7c2:	a9 00 01 01 81       	test   eax,0x81010100
1016f7c7:	74 dc                	je     0x1016f7a5
1016f7c9:	84 d2                	test   dl,dl
1016f7cb:	74 2c                	je     0x1016f7f9
1016f7cd:	84 f6                	test   dh,dh
1016f7cf:	74 1e                	je     0x1016f7ef
1016f7d1:	f7 c2 00 00 ff 00    	test   edx,0xff0000
1016f7d7:	74 0c                	je     0x1016f7e5
1016f7d9:	f7 c2 00 00 00 ff    	test   edx,0xff000000
1016f7df:	75 c4                	jne    0x1016f7a5
1016f7e1:	89 17                	mov    DWORD PTR [edi],edx
1016f7e3:	eb 18                	jmp    0x1016f7fd
1016f7e5:	81 e2 ff ff 00 00    	and    edx,0xffff
1016f7eb:	89 17                	mov    DWORD PTR [edi],edx
1016f7ed:	eb 0e                	jmp    0x1016f7fd
1016f7ef:	81 e2 ff 00 00 00    	and    edx,0xff
1016f7f5:	89 17                	mov    DWORD PTR [edi],edx
1016f7f7:	eb 04                	jmp    0x1016f7fd
1016f7f9:	33 d2                	xor    edx,edx
1016f7fb:	89 17                	mov    DWORD PTR [edi],edx
1016f7fd:	83 c7 04             	add    edi,0x4
1016f800:	33 c0                	xor    eax,eax
1016f802:	83 e9 01             	sub    ecx,0x1
1016f805:	74 0c                	je     0x1016f813
1016f807:	33 c0                	xor    eax,eax
1016f809:	89 07                	mov    DWORD PTR [edi],eax
1016f80b:	83 c7 04             	add    edi,0x4
1016f80e:	83 e9 01             	sub    ecx,0x1
1016f811:	75 f6                	jne    0x1016f809
1016f813:	83 e3 03             	and    ebx,0x3
1016f816:	0f 85 77 ff ff ff    	jne    0x1016f793
1016f81c:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
1016f820:	5b                   	pop    ebx
1016f821:	5e                   	pop    esi
1016f822:	5f                   	pop    edi
1016f823:	c3                   	ret
