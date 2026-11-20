
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f5e50 <.text+0xf4e50>:
100f5e50:	55                   	push   ebp
100f5e51:	8b ec                	mov    ebp,esp
100f5e53:	56                   	push   esi
100f5e54:	57                   	push   edi
100f5e55:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100f5e58:	8b f1                	mov    esi,ecx
100f5e5a:	8b cf                	mov    ecx,edi
100f5e5c:	8b 07                	mov    eax,DWORD PTR [edi]
100f5e5e:	ff 90 40 01 00 00    	call   DWORD PTR [eax+0x140]
100f5e64:	85 c0                	test   eax,eax
100f5e66:	75 06                	jne    0x100f5e6e
100f5e68:	5f                   	pop    edi
100f5e69:	5e                   	pop    esi
100f5e6a:	5d                   	pop    ebp
100f5e6b:	c2 04 00             	ret    0x4
100f5e6e:	8b ce                	mov    ecx,esi
100f5e70:	e8 cb b5 ff ff       	call   0x100f1440
100f5e75:	8b 8e 2c 25 00 00    	mov    ecx,DWORD PTR [esi+0x252c]
100f5e7b:	85 c9                	test   ecx,ecx
100f5e7d:	74 08                	je     0x100f5e87
100f5e7f:	8b 01                	mov    eax,DWORD PTR [ecx]
100f5e81:	ff 90 4c 01 00 00    	call   DWORD PTR [eax+0x14c]
100f5e87:	89 be 38 25 00 00    	mov    DWORD PTR [esi+0x2538],edi
100f5e8d:	b8 01 00 00 00       	mov    eax,0x1
100f5e92:	5f                   	pop    edi
100f5e93:	c6 86 f9 1e 00 00 01 	mov    BYTE PTR [esi+0x1ef9],0x1
100f5e9a:	5e                   	pop    esi
100f5e9b:	5d                   	pop    ebp
100f5e9c:	c2 04 00             	ret    0x4
