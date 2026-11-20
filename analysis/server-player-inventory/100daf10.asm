
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100daf10 <.text+0xd9f10>:
100daf10:	55                   	push   ebp
100daf11:	8b ec                	mov    ebp,esp
100daf13:	51                   	push   ecx
100daf14:	53                   	push   ebx
100daf15:	56                   	push   esi
100daf16:	57                   	push   edi
100daf17:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100daf1a:	8b d9                	mov    ebx,ecx
100daf1c:	8b cf                	mov    ecx,edi
100daf1e:	8b 07                	mov    eax,DWORD PTR [edi]
100daf20:	ff 90 80 01 00 00    	call   DWORD PTR [eax+0x180]
100daf26:	8b b4 83 14 25 00 00 	mov    esi,DWORD PTR [ebx+eax*4+0x2514]
100daf2d:	85 f6                	test   esi,esi
100daf2f:	74 6c                	je     0x100daf9d
100daf31:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100daf36:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100daf3c:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100daf3f:	89 55 08             	mov    DWORD PTR [ebp+0x8],edx
100daf42:	8b 00                	mov    eax,DWORD PTR [eax]
100daf44:	03 c2                	add    eax,edx
100daf46:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100daf49:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100daf50:	8b c8                	mov    ecx,eax
100daf52:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100daf55:	8b 00                	mov    eax,DWORD PTR [eax]
100daf57:	03 c2                	add    eax,edx
100daf59:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100daf60:	8a 10                	mov    dl,BYTE PTR [eax]
100daf62:	3a 11                	cmp    dl,BYTE PTR [ecx]
100daf64:	75 1a                	jne    0x100daf80
100daf66:	84 d2                	test   dl,dl
100daf68:	74 12                	je     0x100daf7c
100daf6a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100daf6d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100daf70:	75 0e                	jne    0x100daf80
100daf72:	83 c0 02             	add    eax,0x2
100daf75:	83 c1 02             	add    ecx,0x2
100daf78:	84 d2                	test   dl,dl
100daf7a:	75 e4                	jne    0x100daf60
100daf7c:	33 c0                	xor    eax,eax
100daf7e:	eb 05                	jmp    0x100daf85
100daf80:	1b c0                	sbb    eax,eax
100daf82:	83 c8 01             	or     eax,0x1
100daf85:	85 c0                	test   eax,eax
100daf87:	0f 84 8d 00 00 00    	je     0x100db01a
100daf8d:	8b b6 64 01 00 00    	mov    esi,DWORD PTR [esi+0x164]
100daf93:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
100daf96:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100daf99:	85 f6                	test   esi,esi
100daf9b:	75 b3                	jne    0x100daf50
100daf9d:	8b 07                	mov    eax,DWORD PTR [edi]
100daf9f:	8b cf                	mov    ecx,edi
100dafa1:	53                   	push   ebx
100dafa2:	ff 90 34 01 00 00    	call   DWORD PTR [eax+0x134]
100dafa8:	85 c0                	test   eax,eax
100dafaa:	0f 84 af 00 00 00    	je     0x100db05f
100dafb0:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100dafb6:	57                   	push   edi
100dafb7:	53                   	push   ebx
100dafb8:	8b 01                	mov    eax,DWORD PTR [ecx]
100dafba:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
100dafc0:	8b cf                	mov    ecx,edi
100dafc2:	e8 79 10 04 00       	call   0x1011c040
100dafc7:	8b 07                	mov    eax,DWORD PTR [edi]
100dafc9:	8b cf                	mov    ecx,edi
100dafcb:	ff 90 80 01 00 00    	call   DWORD PTR [eax+0x180]
100dafd1:	8b cf                	mov    ecx,edi
100dafd3:	8b 84 83 14 25 00 00 	mov    eax,DWORD PTR [ebx+eax*4+0x2514]
100dafda:	89 87 64 01 00 00    	mov    DWORD PTR [edi+0x164],eax
100dafe0:	8b 07                	mov    eax,DWORD PTR [edi]
100dafe2:	ff 90 80 01 00 00    	call   DWORD PTR [eax+0x180]
100dafe8:	89 bc 83 14 25 00 00 	mov    DWORD PTR [ebx+eax*4+0x2514],edi
100dafef:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100daff5:	85 c9                	test   ecx,ecx
100daff7:	74 13                	je     0x100db00c
100daff9:	8b 01                	mov    eax,DWORD PTR [ecx]
100daffb:	57                   	push   edi
100daffc:	53                   	push   ebx
100daffd:	ff 50 18             	call   DWORD PTR [eax+0x18]
100db000:	85 c0                	test   eax,eax
100db002:	74 08                	je     0x100db00c
100db004:	57                   	push   edi
100db005:	8b cb                	mov    ecx,ebx
100db007:	e8 44 ae 01 00       	call   0x100f5e50
100db00c:	5f                   	pop    edi
100db00d:	5e                   	pop    esi
100db00e:	b8 01 00 00 00       	mov    eax,0x1
100db013:	5b                   	pop    ebx
100db014:	8b e5                	mov    esp,ebp
100db016:	5d                   	pop    ebp
100db017:	c2 04 00             	ret    0x4
100db01a:	8b 07                	mov    eax,DWORD PTR [edi]
100db01c:	8b cf                	mov    ecx,edi
100db01e:	53                   	push   ebx
100db01f:	56                   	push   esi
100db020:	ff 90 38 01 00 00    	call   DWORD PTR [eax+0x138]
100db026:	85 c0                	test   eax,eax
100db028:	74 35                	je     0x100db05f
100db02a:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100db030:	57                   	push   edi
100db031:	53                   	push   ebx
100db032:	8b 01                	mov    eax,DWORD PTR [ecx]
100db034:	ff 90 80 00 00 00    	call   DWORD PTR [eax+0x80]
100db03a:	8b cf                	mov    ecx,edi
100db03c:	e8 ff 0f 04 00       	call   0x1011c040
100db041:	8b 06                	mov    eax,DWORD PTR [esi]
100db043:	8b ce                	mov    ecx,esi
100db045:	ff 90 50 01 00 00    	call   DWORD PTR [eax+0x150]
100db04b:	8b 8b 2c 25 00 00    	mov    ecx,DWORD PTR [ebx+0x252c]
100db051:	85 c9                	test   ecx,ecx
100db053:	74 1c                	je     0x100db071
100db055:	8b 01                	mov    eax,DWORD PTR [ecx]
100db057:	ff 90 50 01 00 00    	call   DWORD PTR [eax+0x150]
100db05d:	eb 12                	jmp    0x100db071
100db05f:	83 3d 7c 64 22 10 00 	cmp    DWORD PTR ds:0x1022647c,0x0
100db066:	75 09                	jne    0x100db071
100db068:	83 3d 80 64 22 10 00 	cmp    DWORD PTR ds:0x10226480,0x0
100db06f:	74 0a                	je     0x100db07b
100db071:	8b 07                	mov    eax,DWORD PTR [edi]
100db073:	8b cf                	mov    ecx,edi
100db075:	ff 90 60 01 00 00    	call   DWORD PTR [eax+0x160]
100db07b:	5f                   	pop    edi
100db07c:	5e                   	pop    esi
100db07d:	33 c0                	xor    eax,eax
100db07f:	5b                   	pop    ebx
100db080:	8b e5                	mov    esp,ebp
100db082:	5d                   	pop    ebp
100db083:	c2 04 00             	ret    0x4
