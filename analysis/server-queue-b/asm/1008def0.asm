
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008def0 <.text+0x8cef0>:
1008def0:	55                   	push   ebp
1008def1:	8b ec                	mov    ebp,esp
1008def3:	56                   	push   esi
1008def4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1008def7:	ba 10 40 1a 10       	mov    edx,0x101a4010
1008defc:	57                   	push   edi
1008defd:	8b f9                	mov    edi,ecx
1008deff:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008df02:	8a 08                	mov    cl,BYTE PTR [eax]
1008df04:	3a 0a                	cmp    cl,BYTE PTR [edx]
1008df06:	75 1a                	jne    0x1008df22
1008df08:	84 c9                	test   cl,cl
1008df0a:	74 12                	je     0x1008df1e
1008df0c:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1008df0f:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
1008df12:	75 0e                	jne    0x1008df22
1008df14:	83 c0 02             	add    eax,0x2
1008df17:	83 c2 02             	add    edx,0x2
1008df1a:	84 c9                	test   cl,cl
1008df1c:	75 e4                	jne    0x1008df02
1008df1e:	33 c0                	xor    eax,eax
1008df20:	eb 05                	jmp    0x1008df27
1008df22:	1b c0                	sbb    eax,eax
1008df24:	83 c8 01             	or     eax,0x1
1008df27:	85 c0                	test   eax,eax
1008df29:	75 1f                	jne    0x1008df4a
1008df2b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008df2e:	ff 76 08             	push   DWORD PTR [esi+0x8]
1008df31:	83 c0 44             	add    eax,0x44
1008df34:	50                   	push   eax
1008df35:	e8 86 c7 08 00       	call   0x1011a6c0
1008df3a:	83 c4 08             	add    esp,0x8
1008df3d:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1008df44:	5f                   	pop    edi
1008df45:	5e                   	pop    esi
1008df46:	5d                   	pop    ebp
1008df47:	c2 04 00             	ret    0x4
1008df4a:	56                   	push   esi
1008df4b:	8b cf                	mov    ecx,edi
1008df4d:	e8 ae fb ff ff       	call   0x1008db00
1008df52:	5f                   	pop    edi
1008df53:	5e                   	pop    esi
1008df54:	5d                   	pop    ebp
1008df55:	c2 04 00             	ret    0x4
