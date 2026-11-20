
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f1d00 <.text+0xf0d00>:
100f1d00:	55                   	push   ebp
100f1d01:	8b ec                	mov    ebp,esp
100f1d03:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f1d08:	56                   	push   esi
100f1d09:	8b f1                	mov    esi,ecx
100f1d0b:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
100f1d0f:	f3 0f 10 86 e4 1e 00 	movss  xmm0,DWORD PTR [esi+0x1ee4]
100f1d16:	00 
100f1d17:	0f 2f c1             	comiss xmm0,xmm1
100f1d1a:	0f 87 bb 00 00 00    	ja     0x100f1ddb
100f1d20:	53                   	push   ebx
100f1d21:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100f1d24:	8b 84 9e 14 25 00 00 	mov    eax,DWORD PTR [esi+ebx*4+0x2514]
100f1d2b:	85 c0                	test   eax,eax
100f1d2d:	0f 84 a7 00 00 00    	je     0x100f1dda
100f1d33:	8b 96 2c 25 00 00    	mov    edx,DWORD PTR [esi+0x252c]
100f1d39:	f3 0f 10 82 cc 01 00 	movss  xmm0,DWORD PTR [edx+0x1cc]
100f1d40:	00 
100f1d41:	0f 2f c1             	comiss xmm0,xmm1
100f1d44:	0f 87 90 00 00 00    	ja     0x100f1dda
100f1d4a:	f3 0f 10 82 d0 01 00 	movss  xmm0,DWORD PTR [edx+0x1d0]
100f1d51:	00 
100f1d52:	0f 2f c1             	comiss xmm0,xmm1
100f1d55:	0f 87 7f 00 00 00    	ja     0x100f1dda
100f1d5b:	f3 0f 10 82 d4 01 00 	movss  xmm0,DWORD PTR [edx+0x1d4]
100f1d62:	00 
100f1d63:	0f 2f c1             	comiss xmm0,xmm1
100f1d66:	77 72                	ja     0x100f1dda
100f1d68:	f3 0f 10 86 08 03 00 	movss  xmm0,DWORD PTR [esi+0x308]
100f1d6f:	00 
100f1d70:	0f 2f c1             	comiss xmm0,xmm1
100f1d73:	77 65                	ja     0x100f1dda
100f1d75:	57                   	push   edi
100f1d76:	3b c2                	cmp    eax,edx
100f1d78:	75 3f                	jne    0x100f1db9
100f1d7a:	8b ba 64 01 00 00    	mov    edi,DWORD PTR [edx+0x164]
100f1d80:	85 ff                	test   edi,edi
100f1d82:	74 55                	je     0x100f1dd9
100f1d84:	8b 87 64 01 00 00    	mov    eax,DWORD PTR [edi+0x164]
100f1d8a:	8b cf                	mov    ecx,edi
100f1d8c:	85 c0                	test   eax,eax
100f1d8e:	74 0c                	je     0x100f1d9c
100f1d90:	8b c8                	mov    ecx,eax
100f1d92:	8b 81 64 01 00 00    	mov    eax,DWORD PTR [ecx+0x164]
100f1d98:	85 c0                	test   eax,eax
100f1d9a:	75 f4                	jne    0x100f1d90
100f1d9c:	89 91 64 01 00 00    	mov    DWORD PTR [ecx+0x164],edx
100f1da2:	8b 86 2c 25 00 00    	mov    eax,DWORD PTR [esi+0x252c]
100f1da8:	c7 80 64 01 00 00 00 	mov    DWORD PTR [eax+0x164],0x0
100f1daf:	00 00 00 
100f1db2:	89 bc 9e 14 25 00 00 	mov    DWORD PTR [esi+ebx*4+0x2514],edi
100f1db9:	8b ce                	mov    ecx,esi
100f1dbb:	e8 80 f6 ff ff       	call   0x100f1440
100f1dc0:	8b 8e 2c 25 00 00    	mov    ecx,DWORD PTR [esi+0x252c]
100f1dc6:	85 c9                	test   ecx,ecx
100f1dc8:	74 08                	je     0x100f1dd2
100f1dca:	8b 01                	mov    eax,DWORD PTR [ecx]
100f1dcc:	ff 90 4c 01 00 00    	call   DWORD PTR [eax+0x14c]
100f1dd2:	c6 86 f9 1e 00 00 01 	mov    BYTE PTR [esi+0x1ef9],0x1
100f1dd9:	5f                   	pop    edi
100f1dda:	5b                   	pop    ebx
100f1ddb:	5e                   	pop    esi
100f1ddc:	5d                   	pop    ebp
100f1ddd:	c2 04 00             	ret    0x4
