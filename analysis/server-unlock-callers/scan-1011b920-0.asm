
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011b920 <.text+0x11a920>:
1011b920:	55                   	push   ebp
1011b921:	8b ec                	mov    ebp,esp
1011b923:	53                   	push   ebx
1011b924:	56                   	push   esi
1011b925:	57                   	push   edi
1011b926:	8b f9                	mov    edi,ecx
1011b928:	be 14 a3 1a 10       	mov    esi,0x101aa314
1011b92d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011b930:	8b 90 0c 02 00 00    	mov    edx,DWORD PTR [eax+0x20c]
1011b936:	8d 82 80 00 00 00    	lea    eax,[edx+0x80]
1011b93c:	f7 da                	neg    edx
1011b93e:	1b d2                	sbb    edx,edx
1011b940:	23 d0                	and    edx,eax
1011b942:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011b947:	8b 0a                	mov    ecx,DWORD PTR [edx]
1011b949:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1011b94f:	90                   	nop
1011b950:	8a 01                	mov    al,BYTE PTR [ecx]
1011b952:	3a 06                	cmp    al,BYTE PTR [esi]
1011b954:	75 1a                	jne    0x1011b970
1011b956:	84 c0                	test   al,al
1011b958:	74 12                	je     0x1011b96c
1011b95a:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1011b95d:	3a 46 01             	cmp    al,BYTE PTR [esi+0x1]
1011b960:	75 0e                	jne    0x1011b970
1011b962:	83 c1 02             	add    ecx,0x2
1011b965:	83 c6 02             	add    esi,0x2
1011b968:	84 c0                	test   al,al
1011b96a:	75 e4                	jne    0x1011b950
1011b96c:	33 c0                	xor    eax,eax
1011b96e:	eb 05                	jmp    0x1011b975
1011b970:	1b c0                	sbb    eax,eax
1011b972:	83 c8 01             	or     eax,0x1
1011b975:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1011b978:	85 c0                	test   eax,eax
1011b97a:	75 2a                	jne    0x1011b9a6
1011b97c:	f7 86 2c 04 00 00 00 	test   DWORD PTR [esi+0x42c],0x80000
1011b983:	00 08 00 
1011b986:	75 1e                	jne    0x1011b9a6
1011b988:	6a 00                	push   0x0
1011b98a:	6a 00                	push   0x0
1011b98c:	68 00 00 08 00       	push   0x80000
1011b991:	8b ce                	mov    ecx,esi
1011b993:	e8 68 16 fc ff       	call   0x100dd000
1011b998:	84 c0                	test   al,al
1011b99a:	75 0a                	jne    0x1011b9a6
1011b99c:	81 8e 2c 04 00 00 00 	or     DWORD PTR [esi+0x42c],0x80000
1011b9a3:	00 08 00 
1011b9a6:	8b 5f 04             	mov    ebx,DWORD PTR [edi+0x4]
1011b9a9:	ba b8 8a 1a 10       	mov    edx,0x101a8ab8
1011b9ae:	8b 83 0c 02 00 00    	mov    eax,DWORD PTR [ebx+0x20c]
1011b9b4:	8b c8                	mov    ecx,eax
1011b9b6:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1011b9b9:	83 e8 80             	sub    eax,0xffffff80
1011b9bc:	f7 d9                	neg    ecx
1011b9be:	1b c9                	sbb    ecx,ecx
1011b9c0:	23 c8                	and    ecx,eax
1011b9c2:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011b9c7:	8b 09                	mov    ecx,DWORD PTR [ecx]
1011b9c9:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1011b9cf:	90                   	nop
1011b9d0:	8a 01                	mov    al,BYTE PTR [ecx]
1011b9d2:	3a 02                	cmp    al,BYTE PTR [edx]
1011b9d4:	75 1a                	jne    0x1011b9f0
1011b9d6:	84 c0                	test   al,al
1011b9d8:	74 12                	je     0x1011b9ec
1011b9da:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1011b9dd:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
1011b9e0:	75 0e                	jne    0x1011b9f0
1011b9e2:	83 c1 02             	add    ecx,0x2
1011b9e5:	83 c2 02             	add    edx,0x2
1011b9e8:	84 c0                	test   al,al
1011b9ea:	75 e4                	jne    0x1011b9d0
1011b9ec:	33 c0                	xor    eax,eax
1011b9ee:	eb 05                	jmp    0x1011b9f5
1011b9f0:	1b c0                	sbb    eax,eax
1011b9f2:	83 c8 01             	or     eax,0x1
1011b9f5:	85 c0                	test   eax,eax
1011b9f7:	75 5f                	jne    0x1011ba58
1011b9f9:	83 bb 48 02 00 00 01 	cmp    DWORD PTR [ebx+0x248],0x1
1011ba00:	75 56                	jne    0x1011ba58
1011ba02:	6a 64                	push   0x64
1011ba04:	6a 20                	push   0x20
1011ba06:	83 ec 08             	sub    esp,0x8
1011ba09:	89 44 24 04          	mov    DWORD PTR [esp+0x4],eax
1011ba0d:	89 04 24             	mov    DWORD PTR [esp],eax
1011ba10:	68 c8 8a 1a 10       	push   0x101a8ac8
1011ba15:	6a 01                	push   0x1
1011ba17:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011ba1a:	e8 d1 0f fe ff       	call   0x100fc9f0
1011ba1f:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011ba22:	83 c4 1c             	add    esp,0x1c
1011ba25:	c7 80 60 01 00 00 00 	mov    DWORD PTR [eax+0x160],0x0
1011ba2c:	00 00 00 
1011ba2f:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011ba32:	c7 80 4c 01 00 00 05 	mov    DWORD PTR [eax+0x14c],0x5
1011ba39:	00 00 00 
1011ba3c:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011ba3f:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x0
1011ba46:	00 00 00 
1011ba49:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011ba4c:	c7 80 14 01 00 00 00 	mov    DWORD PTR [eax+0x114],0x0
1011ba53:	00 00 00 
1011ba56:	eb 0a                	jmp    0x1011ba62
1011ba58:	c7 83 18 01 00 00 80 	mov    DWORD PTR [ebx+0x118],0x80
1011ba5f:	00 00 00 
1011ba62:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011ba65:	c7 80 c0 01 00 00 00 	mov    DWORD PTR [eax+0x1c0],0x0
1011ba6c:	00 00 00 
1011ba6f:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011ba72:	c7 80 08 01 00 00 0c 	mov    DWORD PTR [eax+0x108],0xc
1011ba79:	00 00 00 
1011ba7c:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011ba7f:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
1011ba86:	00 00 00 
1011ba89:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011ba8c:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1011ba8f:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
1011ba95:	89 81 98 01 00 00    	mov    DWORD PTR [ecx+0x198],eax
1011ba9b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1011ba9e:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1011baa1:	51                   	push   ecx
1011baa2:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
1011baa9:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
1011baaf:	89 81 9c 01 00 00    	mov    DWORD PTR [ecx+0x19c],eax
1011bab5:	8b cf                	mov    ecx,edi
1011bab7:	8b 07                	mov    eax,DWORD PTR [edi]
1011bab9:	ff 50 08             	call   DWORD PTR [eax+0x8]
1011babc:	8b 4f 14             	mov    ecx,DWORD PTR [edi+0x14]
1011babf:	c7 47 7c 00 00 00 00 	mov    DWORD PTR [edi+0x7c],0x0
1011bac6:	c7 87 80 00 00 00 00 	mov    DWORD PTR [edi+0x80],0x0
1011bacd:	00 00 00 
1011bad0:	85 c9                	test   ecx,ecx
1011bad2:	74 15                	je     0x1011bae9
1011bad4:	8b 01                	mov    eax,DWORD PTR [ecx]
1011bad6:	ff 50 40             	call   DWORD PTR [eax+0x40]
1011bad9:	83 e0 02             	and    eax,0x2
1011badc:	89 87 08 01 00 00    	mov    DWORD PTR [edi+0x108],eax
1011bae2:	5f                   	pop    edi
1011bae3:	5e                   	pop    esi
1011bae4:	5b                   	pop    ebx
1011bae5:	5d                   	pop    ebp
1011bae6:	c2 04 00             	ret    0x4
1011bae9:	c7 87 08 01 00 00 02 	mov    DWORD PTR [edi+0x108],0x2
1011baf0:	00 00 00 
1011baf3:	5f                   	pop    edi
1011baf4:	5e                   	pop    esi
1011baf5:	5b                   	pop    ebx
1011baf6:	5d                   	pop    ebp
1011baf7:	c2 04 00             	ret    0x4
