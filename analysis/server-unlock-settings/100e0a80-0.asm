
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e0a80 <.text+0xdfa80>:
100e0a80:	55                   	push   ebp
100e0a81:	8b ec                	mov    ebp,esp
100e0a83:	53                   	push   ebx
100e0a84:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100e0a87:	57                   	push   edi
100e0a88:	8b f9                	mov    edi,ecx
100e0a8a:	85 db                	test   ebx,ebx
100e0a8c:	0f 84 4e 01 00 00    	je     0x100e0be0
100e0a92:	ba 58 eb 1a 10       	mov    edx,0x101aeb58
100e0a97:	8b c3                	mov    eax,ebx
100e0a99:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100e0aa0:	8a 08                	mov    cl,BYTE PTR [eax]
100e0aa2:	3a 0a                	cmp    cl,BYTE PTR [edx]
100e0aa4:	75 1a                	jne    0x100e0ac0
100e0aa6:	84 c9                	test   cl,cl
100e0aa8:	74 12                	je     0x100e0abc
100e0aaa:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100e0aad:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
100e0ab0:	75 0e                	jne    0x100e0ac0
100e0ab2:	83 c0 02             	add    eax,0x2
100e0ab5:	83 c2 02             	add    edx,0x2
100e0ab8:	84 c9                	test   cl,cl
100e0aba:	75 e4                	jne    0x100e0aa0
100e0abc:	33 c0                	xor    eax,eax
100e0abe:	eb 05                	jmp    0x100e0ac5
100e0ac0:	1b c0                	sbb    eax,eax
100e0ac2:	83 c8 01             	or     eax,0x1
100e0ac5:	85 c0                	test   eax,eax
100e0ac7:	75 13                	jne    0x100e0adc
100e0ac9:	50                   	push   eax
100e0aca:	50                   	push   eax
100e0acb:	6a 40                	push   0x40
100e0acd:	8b cf                	mov    ecx,edi
100e0acf:	e8 2c c5 ff ff       	call   0x100dd000
100e0ad4:	84 c0                	test   al,al
100e0ad6:	0f 84 f6 01 00 00    	je     0x100e0cd2
100e0adc:	b9 14 a3 1a 10       	mov    ecx,0x101aa314
100e0ae1:	8b c3                	mov    eax,ebx
100e0ae3:	8a 10                	mov    dl,BYTE PTR [eax]
100e0ae5:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e0ae7:	75 1a                	jne    0x100e0b03
100e0ae9:	84 d2                	test   dl,dl
100e0aeb:	74 12                	je     0x100e0aff
100e0aed:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e0af0:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e0af3:	75 0e                	jne    0x100e0b03
100e0af5:	83 c0 02             	add    eax,0x2
100e0af8:	83 c1 02             	add    ecx,0x2
100e0afb:	84 d2                	test   dl,dl
100e0afd:	75 e4                	jne    0x100e0ae3
100e0aff:	33 c0                	xor    eax,eax
100e0b01:	eb 05                	jmp    0x100e0b08
100e0b03:	1b c0                	sbb    eax,eax
100e0b05:	83 c8 01             	or     eax,0x1
100e0b08:	85 c0                	test   eax,eax
100e0b0a:	75 16                	jne    0x100e0b22
100e0b0c:	50                   	push   eax
100e0b0d:	50                   	push   eax
100e0b0e:	68 00 00 08 00       	push   0x80000
100e0b13:	8b cf                	mov    ecx,edi
100e0b15:	e8 e6 c4 ff ff       	call   0x100dd000
100e0b1a:	84 c0                	test   al,al
100e0b1c:	0f 84 b0 01 00 00    	je     0x100e0cd2
100e0b22:	b9 78 cd 1b 10       	mov    ecx,0x101bcd78
100e0b27:	8b c3                	mov    eax,ebx
100e0b29:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100e0b30:	8a 10                	mov    dl,BYTE PTR [eax]
100e0b32:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e0b34:	75 1a                	jne    0x100e0b50
100e0b36:	84 d2                	test   dl,dl
100e0b38:	74 12                	je     0x100e0b4c
100e0b3a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e0b3d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e0b40:	75 0e                	jne    0x100e0b50
100e0b42:	83 c0 02             	add    eax,0x2
100e0b45:	83 c1 02             	add    ecx,0x2
100e0b48:	84 d2                	test   dl,dl
100e0b4a:	75 e4                	jne    0x100e0b30
100e0b4c:	33 c0                	xor    eax,eax
100e0b4e:	eb 05                	jmp    0x100e0b55
100e0b50:	1b c0                	sbb    eax,eax
100e0b52:	83 c8 01             	or     eax,0x1
100e0b55:	85 c0                	test   eax,eax
100e0b57:	75 1c                	jne    0x100e0b75
100e0b59:	38 45 10             	cmp    BYTE PTR [ebp+0x10],al
100e0b5c:	75 17                	jne    0x100e0b75
100e0b5e:	8b cf                	mov    ecx,edi
100e0b60:	e8 fb 41 00 00       	call   0x100e4d60
100e0b65:	85 c0                	test   eax,eax
100e0b67:	75 0c                	jne    0x100e0b75
100e0b69:	39 87 b4 03 00 00    	cmp    DWORD PTR [edi+0x3b4],eax
100e0b6f:	0f 84 5d 01 00 00    	je     0x100e0cd2
100e0b75:	b9 84 44 1b 10       	mov    ecx,0x101b4484
100e0b7a:	8b c3                	mov    eax,ebx
100e0b7c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100e0b80:	8a 10                	mov    dl,BYTE PTR [eax]
100e0b82:	3a 11                	cmp    dl,BYTE PTR [ecx]
100e0b84:	75 1a                	jne    0x100e0ba0
100e0b86:	84 d2                	test   dl,dl
100e0b88:	74 12                	je     0x100e0b9c
100e0b8a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100e0b8d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100e0b90:	75 0e                	jne    0x100e0ba0
100e0b92:	83 c0 02             	add    eax,0x2
100e0b95:	83 c1 02             	add    ecx,0x2
100e0b98:	84 d2                	test   dl,dl
100e0b9a:	75 e4                	jne    0x100e0b80
100e0b9c:	33 c0                	xor    eax,eax
100e0b9e:	eb 05                	jmp    0x100e0ba5
100e0ba0:	1b c0                	sbb    eax,eax
100e0ba2:	83 c8 01             	or     eax,0x1
100e0ba5:	85 c0                	test   eax,eax
100e0ba7:	75 37                	jne    0x100e0be0
100e0ba9:	8b cf                	mov    ecx,edi
100e0bab:	e8 80 40 00 00       	call   0x100e4c30
100e0bb0:	85 c0                	test   eax,eax
100e0bb2:	75 2c                	jne    0x100e0be0
100e0bb4:	8b 87 c4 00 00 00    	mov    eax,DWORD PTR [edi+0xc4]
100e0bba:	83 f8 02             	cmp    eax,0x2
100e0bbd:	74 21                	je     0x100e0be0
100e0bbf:	83 f8 03             	cmp    eax,0x3
100e0bc2:	74 1c                	je     0x100e0be0
100e0bc4:	83 f8 04             	cmp    eax,0x4
100e0bc7:	74 17                	je     0x100e0be0
100e0bc9:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100e0bcf:	85 c9                	test   ecx,ecx
100e0bd1:	74 0d                	je     0x100e0be0
100e0bd3:	e8 08 ec fc ff       	call   0x100af7e0
100e0bd8:	84 c0                	test   al,al
100e0bda:	0f 84 f2 00 00 00    	je     0x100e0cd2
100e0be0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100e0be5:	8b cb                	mov    ecx,ebx
100e0be7:	56                   	push   esi
100e0be8:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
100e0bee:	51                   	push   ecx
100e0bef:	ff 15 a4 2f 22 10    	call   DWORD PTR ds:0x10222fa4
100e0bf5:	8b f0                	mov    esi,eax
100e0bf7:	83 c4 04             	add    esp,0x4
100e0bfa:	85 f6                	test   esi,esi
100e0bfc:	0f 84 bf 00 00 00    	je     0x100e0cc1
100e0c02:	56                   	push   esi
100e0c03:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
100e0c09:	83 c4 04             	add    esp,0x4
100e0c0c:	85 c0                	test   eax,eax
100e0c0e:	0f 84 ad 00 00 00    	je     0x100e0cc1
100e0c14:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e0c17:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
100e0c1c:	66 0f d6 86 88 00 00 	movq   QWORD PTR [esi+0x88],xmm0
100e0c23:	00 
100e0c24:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
100e0c27:	89 86 90 00 00 00    	mov    DWORD PTR [esi+0x90],eax
100e0c2d:	81 8e 24 02 00 00 00 	or     DWORD PTR [esi+0x224],0x40000000
100e0c34:	00 00 40 
100e0c37:	c7 86 d4 02 00 00 01 	mov    DWORD PTR [esi+0x2d4],0x1
100e0c3e:	00 00 00 
100e0c41:	80 3d 88 64 22 10 00 	cmp    BYTE PTR ds:0x10226488,0x0
100e0c48:	74 11                	je     0x100e0c5b
100e0c4a:	c7 86 d0 02 00 00 01 	mov    DWORD PTR [esi+0x2d0],0x1
100e0c51:	00 00 00 
100e0c54:	c6 05 88 64 22 10 00 	mov    BYTE PTR ds:0x10226488,0x0
100e0c5b:	80 bf f8 1e 00 00 00 	cmp    BYTE PTR [edi+0x1ef8],0x0
100e0c62:	74 1c                	je     0x100e0c80
100e0c64:	68 90 87 1a 10       	push   0x101a8790
100e0c69:	53                   	push   ebx
100e0c6a:	e8 81 e9 05 00       	call   0x1013f5f0
100e0c6f:	83 c4 08             	add    esp,0x8
100e0c72:	85 c0                	test   eax,eax
100e0c74:	74 0a                	je     0x100e0c80
100e0c76:	c7 86 34 02 00 00 00 	mov    DWORD PTR [esi+0x234],0x3f800000
100e0c7d:	00 80 3f 
100e0c80:	80 7d 0c 00          	cmp    BYTE PTR [ebp+0xc],0x0
100e0c84:	74 1c                	je     0x100e0ca2
100e0c86:	68 90 87 1a 10       	push   0x101a8790
100e0c8b:	53                   	push   ebx
100e0c8c:	e8 5f e9 05 00       	call   0x1013f5f0
100e0c91:	83 c4 08             	add    esp,0x8
100e0c94:	85 c0                	test   eax,eax
100e0c96:	74 0a                	je     0x100e0ca2
100e0c98:	c7 86 34 02 00 00 00 	mov    DWORD PTR [esi+0x234],0x40000000
100e0c9f:	00 00 40 
100e0ca2:	56                   	push   esi
100e0ca3:	e8 28 5b f3 ff       	call   0x100167d0
100e0ca8:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100e0cab:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100e0cb1:	56                   	push   esi
100e0cb2:	e8 c9 5c f3 ff       	call   0x10016980
100e0cb7:	83 c4 0c             	add    esp,0xc
100e0cba:	5e                   	pop    esi
100e0cbb:	5f                   	pop    edi
100e0cbc:	5b                   	pop    ebx
100e0cbd:	5d                   	pop    ebp
100e0cbe:	c2 0c 00             	ret    0xc
100e0cc1:	68 50 b8 1d 10       	push   0x101db850
100e0cc6:	6a 01                	push   0x1
100e0cc8:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100e0cce:	83 c4 08             	add    esp,0x8
100e0cd1:	5e                   	pop    esi
100e0cd2:	5f                   	pop    edi
100e0cd3:	5b                   	pop    ebx
100e0cd4:	5d                   	pop    ebp
100e0cd5:	c2 0c 00             	ret    0xc
