
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c6de0 <.text+0xc5de0>:
100c6de0:	55                   	push   ebp
100c6de1:	8b ec                	mov    ebp,esp
100c6de3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100c6de6:	56                   	push   esi
100c6de7:	33 f6                	xor    esi,esi
100c6de9:	c6 05 a8 31 22 10 00 	mov    BYTE PTR ds:0x102231a8,0x0
100c6df0:	85 c0                	test   eax,eax
100c6df2:	0f 84 e7 00 00 00    	je     0x100c6edf
100c6df8:	8a 08                	mov    cl,BYTE PTR [eax]
100c6dfa:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100c6e00:	0f be c9             	movsx  ecx,cl
100c6e03:	83 f9 20             	cmp    ecx,0x20
100c6e06:	7f 12                	jg     0x100c6e1a
100c6e08:	85 c9                	test   ecx,ecx
100c6e0a:	0f 84 cf 00 00 00    	je     0x100c6edf
100c6e10:	0f be 48 01          	movsx  ecx,BYTE PTR [eax+0x1]
100c6e14:	40                   	inc    eax
100c6e15:	83 f9 20             	cmp    ecx,0x20
100c6e18:	7e ee                	jle    0x100c6e08
100c6e1a:	83 f9 2f             	cmp    ecx,0x2f
100c6e1d:	75 22                	jne    0x100c6e41
100c6e1f:	38 48 01             	cmp    BYTE PTR [eax+0x1],cl
100c6e22:	75 72                	jne    0x100c6e96
100c6e24:	8a 08                	mov    cl,BYTE PTR [eax]
100c6e26:	84 c9                	test   cl,cl
100c6e28:	74 d6                	je     0x100c6e00
100c6e2a:	8a d1                	mov    dl,cl
100c6e2c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100c6e30:	80 fa 0a             	cmp    dl,0xa
100c6e33:	74 cb                	je     0x100c6e00
100c6e35:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100c6e38:	40                   	inc    eax
100c6e39:	8a d1                	mov    dl,cl
100c6e3b:	84 c9                	test   cl,cl
100c6e3d:	75 f1                	jne    0x100c6e30
100c6e3f:	eb bf                	jmp    0x100c6e00
100c6e41:	83 f9 22             	cmp    ecx,0x22
100c6e44:	75 32                	jne    0x100c6e78
100c6e46:	0f be 48 01          	movsx  ecx,BYTE PTR [eax+0x1]
100c6e4a:	83 c0 02             	add    eax,0x2
100c6e4d:	83 f9 22             	cmp    ecx,0x22
100c6e50:	74 1c                	je     0x100c6e6e
100c6e52:	85 c9                	test   ecx,ecx
100c6e54:	74 10                	je     0x100c6e66
100c6e56:	88 8e a8 31 22 10    	mov    BYTE PTR [esi+0x102231a8],cl
100c6e5c:	46                   	inc    esi
100c6e5d:	0f be 08             	movsx  ecx,BYTE PTR [eax]
100c6e60:	40                   	inc    eax
100c6e61:	83 f9 22             	cmp    ecx,0x22
100c6e64:	75 ec                	jne    0x100c6e52
100c6e66:	81 fe dc 05 00 00    	cmp    esi,0x5dc
100c6e6c:	73 76                	jae    0x100c6ee4
100c6e6e:	c6 86 a8 31 22 10 00 	mov    BYTE PTR [esi+0x102231a8],0x0
100c6e75:	5e                   	pop    esi
100c6e76:	5d                   	pop    ebp
100c6e77:	c3                   	ret
100c6e78:	83 f9 7b             	cmp    ecx,0x7b
100c6e7b:	74 51                	je     0x100c6ece
100c6e7d:	83 f9 7d             	cmp    ecx,0x7d
100c6e80:	74 4c                	je     0x100c6ece
100c6e82:	83 f9 29             	cmp    ecx,0x29
100c6e85:	74 47                	je     0x100c6ece
100c6e87:	83 f9 28             	cmp    ecx,0x28
100c6e8a:	74 42                	je     0x100c6ece
100c6e8c:	83 f9 27             	cmp    ecx,0x27
100c6e8f:	74 3d                	je     0x100c6ece
100c6e91:	83 f9 2c             	cmp    ecx,0x2c
100c6e94:	74 38                	je     0x100c6ece
100c6e96:	ba a8 31 22 10       	mov    edx,0x102231a8
100c6e9b:	2b d0                	sub    edx,eax
100c6e9d:	0f 1f 00             	nop    DWORD PTR [eax]
100c6ea0:	88 0c 02             	mov    BYTE PTR [edx+eax*1],cl
100c6ea3:	46                   	inc    esi
100c6ea4:	0f be 48 01          	movsx  ecx,BYTE PTR [eax+0x1]
100c6ea8:	40                   	inc    eax
100c6ea9:	83 f9 7b             	cmp    ecx,0x7b
100c6eac:	74 b8                	je     0x100c6e66
100c6eae:	83 f9 7d             	cmp    ecx,0x7d
100c6eb1:	74 b3                	je     0x100c6e66
100c6eb3:	83 f9 29             	cmp    ecx,0x29
100c6eb6:	74 ae                	je     0x100c6e66
100c6eb8:	83 f9 28             	cmp    ecx,0x28
100c6ebb:	74 a9                	je     0x100c6e66
100c6ebd:	83 f9 27             	cmp    ecx,0x27
100c6ec0:	74 a4                	je     0x100c6e66
100c6ec2:	83 f9 2c             	cmp    ecx,0x2c
100c6ec5:	74 9f                	je     0x100c6e66
100c6ec7:	83 f9 20             	cmp    ecx,0x20
100c6eca:	7f d4                	jg     0x100c6ea0
100c6ecc:	eb 98                	jmp    0x100c6e66
100c6ece:	88 0d a8 31 22 10    	mov    BYTE PTR ds:0x102231a8,cl
100c6ed4:	40                   	inc    eax
100c6ed5:	c6 05 a9 31 22 10 00 	mov    BYTE PTR ds:0x102231a9,0x0
100c6edc:	5e                   	pop    esi
100c6edd:	5d                   	pop    ebp
100c6ede:	c3                   	ret
100c6edf:	33 c0                	xor    eax,eax
100c6ee1:	5e                   	pop    esi
100c6ee2:	5d                   	pop    ebp
100c6ee3:	c3                   	ret
100c6ee4:	e8 5f 6e 07 00       	call   0x1013dd48
