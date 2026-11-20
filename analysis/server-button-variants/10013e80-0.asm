
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10013e80 <.text+0x12e80>:
10013e80:	55                   	push   ebp
10013e81:	8b ec                	mov    ebp,esp
10013e83:	56                   	push   esi
10013e84:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10013e87:	ba 10 40 1a 10       	mov    edx,0x101a4010
10013e8c:	57                   	push   edi
10013e8d:	8b f9                	mov    edi,ecx
10013e8f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10013e92:	8a 08                	mov    cl,BYTE PTR [eax]
10013e94:	3a 0a                	cmp    cl,BYTE PTR [edx]
10013e96:	75 1a                	jne    0x10013eb2
10013e98:	84 c9                	test   cl,cl
10013e9a:	74 12                	je     0x10013eae
10013e9c:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
10013e9f:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
10013ea2:	75 0e                	jne    0x10013eb2
10013ea4:	83 c0 02             	add    eax,0x2
10013ea7:	83 c2 02             	add    edx,0x2
10013eaa:	84 c9                	test   cl,cl
10013eac:	75 e4                	jne    0x10013e92
10013eae:	33 c0                	xor    eax,eax
10013eb0:	eb 05                	jmp    0x10013eb7
10013eb2:	1b c0                	sbb    eax,eax
10013eb4:	83 c8 01             	or     eax,0x1
10013eb7:	85 c0                	test   eax,eax
10013eb9:	75 1f                	jne    0x10013eda
10013ebb:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10013ebe:	ff 76 08             	push   DWORD PTR [esi+0x8]
10013ec1:	83 c0 44             	add    eax,0x44
10013ec4:	50                   	push   eax
10013ec5:	e8 f6 67 10 00       	call   0x1011a6c0
10013eca:	83 c4 08             	add    esp,0x8
10013ecd:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
10013ed4:	5f                   	pop    edi
10013ed5:	5e                   	pop    esi
10013ed6:	5d                   	pop    ebp
10013ed7:	c2 04 00             	ret    0x4
10013eda:	56                   	push   esi
10013edb:	8b cf                	mov    ecx,edi
10013edd:	e8 fe f6 ff ff       	call   0x100135e0
10013ee2:	5f                   	pop    edi
10013ee3:	5e                   	pop    esi
10013ee4:	5d                   	pop    ebp
10013ee5:	c2 04 00             	ret    0x4
