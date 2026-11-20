
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10100c20 <.text+0xffc20>:
10100c20:	53                   	push   ebx
10100c21:	8b d9                	mov    ebx,ecx
10100c23:	56                   	push   esi
10100c24:	57                   	push   edi
10100c25:	8d 8b 84 01 00 00    	lea    ecx,[ebx+0x184]
10100c2b:	e8 60 6b f1 ff       	call   0x10017790
10100c30:	50                   	push   eax
10100c31:	8b cb                	mov    ecx,ebx
10100c33:	e8 c8 c4 fb ff       	call   0x100bd100
10100c38:	8d 8b 68 03 00 00    	lea    ecx,[ebx+0x368]
10100c3e:	8b f8                	mov    edi,eax
10100c40:	e8 3b 6b f1 ff       	call   0x10017780
10100c45:	85 c0                	test   eax,eax
10100c47:	74 46                	je     0x10100c8f
10100c49:	8d 8b 68 03 00 00    	lea    ecx,[ebx+0x368]
10100c4f:	e8 3c 6b f1 ff       	call   0x10017790
10100c54:	85 c0                	test   eax,eax
10100c56:	8b cb                	mov    ecx,ebx
10100c58:	0f 45 c8             	cmovne ecx,eax
10100c5b:	81 c1 84 01 00 00    	add    ecx,0x184
10100c61:	e8 2a 6b f1 ff       	call   0x10017790
10100c66:	8d 8b 84 01 00 00    	lea    ecx,[ebx+0x184]
10100c6c:	8b f0                	mov    esi,eax
10100c6e:	e8 1d 6b f1 ff       	call   0x10017790
10100c73:	3b c6                	cmp    eax,esi
10100c75:	75 18                	jne    0x10100c8f
10100c77:	8b cb                	mov    ecx,ebx
10100c79:	85 ff                	test   edi,edi
10100c7b:	74 0d                	je     0x10100c8a
10100c7d:	e8 ce 08 00 00       	call   0x10101550
10100c82:	8b c7                	mov    eax,edi
10100c84:	5f                   	pop    edi
10100c85:	5e                   	pop    esi
10100c86:	5b                   	pop    ebx
10100c87:	c2 04 00             	ret    0x4
10100c8a:	e8 a1 05 00 00       	call   0x10101230
10100c8f:	8b c7                	mov    eax,edi
10100c91:	5f                   	pop    edi
10100c92:	5e                   	pop    esi
10100c93:	5b                   	pop    ebx
10100c94:	c2 04 00             	ret    0x4
