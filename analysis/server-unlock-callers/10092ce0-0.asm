
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10092ce0 <.text+0x91ce0>:
10092ce0:	55                   	push   ebp
10092ce1:	8b ec                	mov    ebp,esp
10092ce3:	53                   	push   ebx
10092ce4:	56                   	push   esi
10092ce5:	57                   	push   edi
10092ce6:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
10092ce9:	8b 87 6c 06 00 00    	mov    eax,DWORD PTR [edi+0x66c]
10092cef:	8b c8                	mov    ecx,eax
10092cf1:	c1 e1 04             	shl    ecx,0x4
10092cf4:	2b c8                	sub    ecx,eax
10092cf6:	8b 87 68 06 00 00    	mov    eax,DWORD PTR [edi+0x668]
10092cfc:	8d 34 88             	lea    esi,[eax+ecx*4]
10092cff:	8b cf                	mov    ecx,edi
10092d01:	e8 aa 92 04 00       	call   0x100dbfb0
10092d06:	8b 87 7c 06 00 00    	mov    eax,DWORD PTR [edi+0x67c]
10092d0c:	33 d2                	xor    edx,edx
10092d0e:	bb 02 00 00 00       	mov    ebx,0x2
10092d13:	83 f8 01             	cmp    eax,0x1
10092d16:	8b cb                	mov    ecx,ebx
10092d18:	dd d8                	fstp   st(0)
10092d1a:	0f 45 ca             	cmovne ecx,edx
10092d1d:	8d 53 05             	lea    edx,[ebx+0x5]
10092d20:	3b c3                	cmp    eax,ebx
10092d22:	75 05                	jne    0x10092d29
10092d24:	8d 4b 02             	lea    ecx,[ebx+0x2]
10092d27:	eb 10                	jmp    0x10092d39
10092d29:	83 f8 03             	cmp    eax,0x3
10092d2c:	75 05                	jne    0x10092d33
10092d2e:	8d 48 03             	lea    ecx,[eax+0x3]
10092d31:	eb 06                	jmp    0x10092d39
10092d33:	83 f8 04             	cmp    eax,0x4
10092d36:	0f 44 ca             	cmove  ecx,edx
10092d39:	f3 0f 10 87 4c 06 00 	movss  xmm0,DWORD PTR [edi+0x64c]
10092d40:	00 
10092d41:	33 c0                	xor    eax,eax
10092d43:	0f 2f 05 f4 1e 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1ef4
10092d4a:	f3 0f 10 0d 70 b6 1a 	movss  xmm1,DWORD PTR ds:0x101ab670
10092d51:	10 
10092d52:	72 0b                	jb     0x10092d5f
10092d54:	0f 2f c8             	comiss xmm1,xmm0
10092d57:	ba 01 00 00 00       	mov    edx,0x1
10092d5c:	0f 47 c2             	cmova  eax,edx
10092d5f:	0f 2f c1             	comiss xmm0,xmm1
10092d62:	f3 0f 10 0d fc 1e 1a 	movss  xmm1,DWORD PTR ds:0x101a1efc
10092d69:	10 
10092d6a:	72 06                	jb     0x10092d72
10092d6c:	0f 2f c8             	comiss xmm1,xmm0
10092d6f:	0f 47 c3             	cmova  eax,ebx
10092d72:	0f 2f c1             	comiss xmm0,xmm1
10092d75:	f3 0f 10 0d 00 1f 1a 	movss  xmm1,DWORD PTR ds:0x101a1f00
10092d7c:	10 
10092d7d:	72 0b                	jb     0x10092d8a
10092d7f:	0f 2f c8             	comiss xmm1,xmm0
10092d82:	ba 03 00 00 00       	mov    edx,0x3
10092d87:	0f 47 c2             	cmova  eax,edx
10092d8a:	0f 2f c1             	comiss xmm0,xmm1
10092d8d:	f3 0f 10 0d 18 47 1a 	movss  xmm1,DWORD PTR ds:0x101a4718
10092d94:	10 
10092d95:	72 0b                	jb     0x10092da2
10092d97:	0f 2f c8             	comiss xmm1,xmm0
10092d9a:	ba 04 00 00 00       	mov    edx,0x4
10092d9f:	0f 47 c2             	cmova  eax,edx
10092da2:	0f 2f c1             	comiss xmm0,xmm1
10092da5:	f3 0f 10 0d 14 1f 1a 	movss  xmm1,DWORD PTR ds:0x101a1f14
10092dac:	10 
10092dad:	72 0b                	jb     0x10092dba
10092daf:	0f 2f c8             	comiss xmm1,xmm0
10092db2:	ba 05 00 00 00       	mov    edx,0x5
10092db7:	0f 47 c2             	cmova  eax,edx
10092dba:	0f 2f c1             	comiss xmm0,xmm1
10092dbd:	f3 0f 10 0d c0 13 1a 	movss  xmm1,DWORD PTR ds:0x101a13c0
10092dc4:	10 
10092dc5:	72 0b                	jb     0x10092dd2
10092dc7:	0f 2f c8             	comiss xmm1,xmm0
10092dca:	ba 06 00 00 00       	mov    edx,0x6
10092dcf:	0f 47 c2             	cmova  eax,edx
10092dd2:	0f 2f c1             	comiss xmm0,xmm1
10092dd5:	ba 07 00 00 00       	mov    edx,0x7
10092dda:	0f 43 c2             	cmovae eax,edx
10092ddd:	8d 14 08             	lea    edx,[eax+ecx*1]
10092de0:	8b 8f 50 06 00 00    	mov    ecx,DWORD PTR [edi+0x650]
10092de6:	33 c0                	xor    eax,eax
10092de8:	83 f9 46             	cmp    ecx,0x46
10092deb:	0f 9f c0             	setg   al
10092dee:	7f 3c                	jg     0x10092e2c
10092df0:	83 f9 3c             	cmp    ecx,0x3c
10092df3:	7e 04                	jle    0x10092df9
10092df5:	8b c3                	mov    eax,ebx
10092df7:	eb 33                	jmp    0x10092e2c
10092df9:	83 f9 28             	cmp    ecx,0x28
10092dfc:	7e 07                	jle    0x10092e05
10092dfe:	b8 03 00 00 00       	mov    eax,0x3
10092e03:	eb 27                	jmp    0x10092e2c
10092e05:	83 f9 19             	cmp    ecx,0x19
10092e08:	7e 07                	jle    0x10092e11
10092e0a:	b8 04 00 00 00       	mov    eax,0x4
10092e0f:	eb 1b                	jmp    0x10092e2c
10092e11:	83 f9 0a             	cmp    ecx,0xa
10092e14:	7e 07                	jle    0x10092e1d
10092e16:	b8 05 00 00 00       	mov    eax,0x5
10092e1b:	eb 0f                	jmp    0x10092e2c
10092e1d:	b8 06 00 00 00       	mov    eax,0x6
10092e22:	83 f9 05             	cmp    ecx,0x5
10092e25:	7f 05                	jg     0x10092e2c
10092e27:	b8 07 00 00 00       	mov    eax,0x7
10092e2c:	8b 8f 44 06 00 00    	mov    ecx,DWORD PTR [edi+0x644]
10092e32:	03 d0                	add    edx,eax
10092e34:	33 c0                	xor    eax,eax
10092e36:	83 f9 2d             	cmp    ecx,0x2d
10092e39:	0f 9f c0             	setg   al
10092e3c:	7f 3b                	jg     0x10092e79
10092e3e:	83 f9 28             	cmp    ecx,0x28
10092e41:	7e 04                	jle    0x10092e47
10092e43:	8b c3                	mov    eax,ebx
10092e45:	eb 32                	jmp    0x10092e79
10092e47:	83 f9 1e             	cmp    ecx,0x1e
10092e4a:	7e 07                	jle    0x10092e53
10092e4c:	b8 03 00 00 00       	mov    eax,0x3
10092e51:	eb 26                	jmp    0x10092e79
10092e53:	83 f9 14             	cmp    ecx,0x14
10092e56:	7e 07                	jle    0x10092e5f
10092e58:	b8 04 00 00 00       	mov    eax,0x4
10092e5d:	eb 1a                	jmp    0x10092e79
10092e5f:	83 f9 0a             	cmp    ecx,0xa
10092e62:	7e 07                	jle    0x10092e6b
10092e64:	b8 05 00 00 00       	mov    eax,0x5
10092e69:	eb 0e                	jmp    0x10092e79
10092e6b:	b8 06 00 00 00       	mov    eax,0x6
10092e70:	3b cb                	cmp    ecx,ebx
10092e72:	7f 05                	jg     0x10092e79
10092e74:	b8 07 00 00 00       	mov    eax,0x7
10092e79:	03 d0                	add    edx,eax
10092e7b:	81 fe a4 01 00 00    	cmp    esi,0x1a4
10092e81:	0f 8f bb 00 00 00    	jg     0x10092f42
10092e87:	81 fe 68 01 00 00    	cmp    esi,0x168
10092e8d:	7e 19                	jle    0x10092ea8
10092e8f:	b8 01 00 00 00       	mov    eax,0x1
10092e94:	8d 0c 10             	lea    ecx,[eax+edx*1]
10092e97:	33 c0                	xor    eax,eax
10092e99:	80 bf 78 06 00 00 01 	cmp    BYTE PTR [edi+0x678],0x1
10092ea0:	5f                   	pop    edi
10092ea1:	5e                   	pop    esi
10092ea2:	0f 44 c1             	cmove  eax,ecx
10092ea5:	5b                   	pop    ebx
10092ea6:	5d                   	pop    ebp
10092ea7:	c3                   	ret
10092ea8:	81 fe 2c 01 00 00    	cmp    esi,0x12c
10092eae:	7e 16                	jle    0x10092ec6
10092eb0:	8b c3                	mov    eax,ebx
10092eb2:	8d 0c 10             	lea    ecx,[eax+edx*1]
10092eb5:	33 c0                	xor    eax,eax
10092eb7:	80 bf 78 06 00 00 01 	cmp    BYTE PTR [edi+0x678],0x1
10092ebe:	5f                   	pop    edi
10092ebf:	5e                   	pop    esi
10092ec0:	0f 44 c1             	cmove  eax,ecx
10092ec3:	5b                   	pop    ebx
10092ec4:	5d                   	pop    ebp
10092ec5:	c3                   	ret
10092ec6:	81 fe f0 00 00 00    	cmp    esi,0xf0
10092ecc:	7e 19                	jle    0x10092ee7
10092ece:	b8 03 00 00 00       	mov    eax,0x3
10092ed3:	8d 0c 10             	lea    ecx,[eax+edx*1]
10092ed6:	33 c0                	xor    eax,eax
10092ed8:	80 bf 78 06 00 00 01 	cmp    BYTE PTR [edi+0x678],0x1
10092edf:	5f                   	pop    edi
10092ee0:	5e                   	pop    esi
10092ee1:	0f 44 c1             	cmove  eax,ecx
10092ee4:	5b                   	pop    ebx
10092ee5:	5d                   	pop    ebp
10092ee6:	c3                   	ret
10092ee7:	81 fe b4 00 00 00    	cmp    esi,0xb4
10092eed:	7e 19                	jle    0x10092f08
10092eef:	b8 04 00 00 00       	mov    eax,0x4
10092ef4:	8d 0c 10             	lea    ecx,[eax+edx*1]
10092ef7:	33 c0                	xor    eax,eax
10092ef9:	80 bf 78 06 00 00 01 	cmp    BYTE PTR [edi+0x678],0x1
10092f00:	5f                   	pop    edi
10092f01:	5e                   	pop    esi
10092f02:	0f 44 c1             	cmove  eax,ecx
10092f05:	5b                   	pop    ebx
10092f06:	5d                   	pop    ebp
10092f07:	c3                   	ret
10092f08:	81 fe 96 00 00 00    	cmp    esi,0x96
10092f0e:	7e 19                	jle    0x10092f29
10092f10:	b8 05 00 00 00       	mov    eax,0x5
10092f15:	8d 0c 10             	lea    ecx,[eax+edx*1]
10092f18:	33 c0                	xor    eax,eax
10092f1a:	80 bf 78 06 00 00 01 	cmp    BYTE PTR [edi+0x678],0x1
10092f21:	5f                   	pop    edi
10092f22:	5e                   	pop    esi
10092f23:	0f 44 c1             	cmove  eax,ecx
10092f26:	5b                   	pop    ebx
10092f27:	5d                   	pop    ebp
10092f28:	c3                   	ret
10092f29:	b8 07 00 00 00       	mov    eax,0x7
10092f2e:	8d 0c 10             	lea    ecx,[eax+edx*1]
10092f31:	33 c0                	xor    eax,eax
10092f33:	80 bf 78 06 00 00 01 	cmp    BYTE PTR [edi+0x678],0x1
10092f3a:	5f                   	pop    edi
10092f3b:	5e                   	pop    esi
10092f3c:	0f 44 c1             	cmove  eax,ecx
10092f3f:	5b                   	pop    ebx
10092f40:	5d                   	pop    ebp
10092f41:	c3                   	ret
10092f42:	33 c0                	xor    eax,eax
10092f44:	80 bf 78 06 00 00 01 	cmp    BYTE PTR [edi+0x678],0x1
10092f4b:	5f                   	pop    edi
10092f4c:	5e                   	pop    esi
10092f4d:	5b                   	pop    ebx
10092f4e:	8d 0c 10             	lea    ecx,[eax+edx*1]
10092f51:	0f 44 c1             	cmove  eax,ecx
10092f54:	5d                   	pop    ebp
10092f55:	c3                   	ret
