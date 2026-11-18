
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1004de60 <.text+0x4ce60>:
1004de60:	55                   	push   ebp
1004de61:	8b ec                	mov    ebp,esp
1004de63:	56                   	push   esi
1004de64:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1004de67:	ba 20 18 1b 10       	mov    edx,0x101b1820
1004de6c:	57                   	push   edi
1004de6d:	8b f9                	mov    edi,ecx
1004de6f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004de72:	8a 08                	mov    cl,BYTE PTR [eax]
1004de74:	3a 0a                	cmp    cl,BYTE PTR [edx]
1004de76:	75 1a                	jne    0x1004de92
1004de78:	84 c9                	test   cl,cl
1004de7a:	74 12                	je     0x1004de8e
1004de7c:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
1004de7f:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
1004de82:	75 0e                	jne    0x1004de92
1004de84:	83 c0 02             	add    eax,0x2
1004de87:	83 c2 02             	add    edx,0x2
1004de8a:	84 c9                	test   cl,cl
1004de8c:	75 e4                	jne    0x1004de72
1004de8e:	33 c0                	xor    eax,eax
1004de90:	eb 05                	jmp    0x1004de97
1004de92:	1b c0                	sbb    eax,eax
1004de94:	83 c8 01             	or     eax,0x1
1004de97:	85 c0                	test   eax,eax
1004de99:	75 22                	jne    0x1004debd
1004de9b:	ff 76 08             	push   DWORD PTR [esi+0x8]
1004de9e:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1004dea4:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1004dea7:	83 c4 04             	add    esp,0x4
1004deaa:	89 81 ec 01 00 00    	mov    DWORD PTR [ecx+0x1ec],eax
1004deb0:	5f                   	pop    edi
1004deb1:	c7 46 0c 01 00 00 00 	mov    DWORD PTR [esi+0xc],0x1
1004deb8:	5e                   	pop    esi
1004deb9:	5d                   	pop    ebp
1004deba:	c2 04 00             	ret    0x4
1004debd:	56                   	push   esi
1004debe:	8b cf                	mov    ecx,edi
1004dec0:	e8 fb 44 0b 00       	call   0x101023c0
1004dec5:	5f                   	pop    edi
1004dec6:	5e                   	pop    esi
1004dec7:	5d                   	pop    ebp
1004dec8:	c2 04 00             	ret    0x4
1004decb:	cc                   	int3
1004decc:	cc                   	int3
1004decd:	cc                   	int3
1004dece:	cc                   	int3
1004decf:	cc                   	int3
