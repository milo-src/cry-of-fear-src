
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c6ef0 <.text+0xc5ef0>:
100c6ef0:	55                   	push   ebp
100c6ef1:	8b ec                	mov    ebp,esp
100c6ef3:	56                   	push   esi
100c6ef4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100c6ef7:	8a 06                	mov    al,BYTE PTR [esi]
100c6ef9:	84 c0                	test   al,al
100c6efb:	74 2f                	je     0x100c6f2c
100c6efd:	0f 1f 00             	nop    DWORD PTR [eax]
100c6f00:	3c 0a                	cmp    al,0xa
100c6f02:	74 28                	je     0x100c6f2c
100c6f04:	0f be c0             	movsx  eax,al
100c6f07:	50                   	push   eax
100c6f08:	e8 43 63 0a 00       	call   0x1016d250
100c6f0d:	83 c4 04             	add    esp,0x4
100c6f10:	85 c0                	test   eax,eax
100c6f12:	74 1d                	je     0x100c6f31
100c6f14:	0f be 06             	movsx  eax,BYTE PTR [esi]
100c6f17:	50                   	push   eax
100c6f18:	e8 13 5e 0a 00       	call   0x1016cd30
100c6f1d:	83 c4 04             	add    esp,0x4
100c6f20:	85 c0                	test   eax,eax
100c6f22:	75 0d                	jne    0x100c6f31
100c6f24:	8a 46 01             	mov    al,BYTE PTR [esi+0x1]
100c6f27:	46                   	inc    esi
100c6f28:	84 c0                	test   al,al
100c6f2a:	75 d4                	jne    0x100c6f00
100c6f2c:	33 c0                	xor    eax,eax
100c6f2e:	5e                   	pop    esi
100c6f2f:	5d                   	pop    ebp
100c6f30:	c3                   	ret
100c6f31:	b8 01 00 00 00       	mov    eax,0x1
100c6f36:	5e                   	pop    esi
100c6f37:	5d                   	pop    ebp
100c6f38:	c3                   	ret
