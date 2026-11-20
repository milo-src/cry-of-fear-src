
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fba10 <.text+0xfaa10>:
100fba10:	55                   	push   ebp
100fba11:	8b ec                	mov    ebp,esp
100fba13:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fba18:	b9 74 df 1d 10       	mov    ecx,0x101ddf74
100fba1d:	53                   	push   ebx
100fba1e:	56                   	push   esi
100fba1f:	57                   	push   edi
100fba20:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100fba23:	8b 98 98 00 00 00    	mov    ebx,DWORD PTR [eax+0x98]
100fba29:	33 c0                	xor    eax,eax
100fba2b:	85 ff                	test   edi,edi
100fba2d:	8d b7 80 00 00 00    	lea    esi,[edi+0x80]
100fba33:	0f 45 c6             	cmovne eax,esi
100fba36:	8b 00                	mov    eax,DWORD PTR [eax]
100fba38:	03 c3                	add    eax,ebx
100fba3a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100fba40:	8a 10                	mov    dl,BYTE PTR [eax]
100fba42:	3a 11                	cmp    dl,BYTE PTR [ecx]
100fba44:	75 1a                	jne    0x100fba60
100fba46:	84 d2                	test   dl,dl
100fba48:	74 12                	je     0x100fba5c
100fba4a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100fba4d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100fba50:	75 0e                	jne    0x100fba60
100fba52:	83 c0 02             	add    eax,0x2
100fba55:	83 c1 02             	add    ecx,0x2
100fba58:	84 d2                	test   dl,dl
100fba5a:	75 e4                	jne    0x100fba40
100fba5c:	33 c0                	xor    eax,eax
100fba5e:	eb 05                	jmp    0x100fba65
100fba60:	1b c0                	sbb    eax,eax
100fba62:	83 c8 01             	or     eax,0x1
100fba65:	85 c0                	test   eax,eax
100fba67:	74 40                	je     0x100fbaa9
100fba69:	33 c0                	xor    eax,eax
100fba6b:	b9 a0 1f 1a 10       	mov    ecx,0x101a1fa0
100fba70:	85 ff                	test   edi,edi
100fba72:	0f 45 c6             	cmovne eax,esi
100fba75:	8b 00                	mov    eax,DWORD PTR [eax]
100fba77:	03 c3                	add    eax,ebx
100fba79:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100fba80:	8a 10                	mov    dl,BYTE PTR [eax]
100fba82:	3a 11                	cmp    dl,BYTE PTR [ecx]
100fba84:	75 1a                	jne    0x100fbaa0
100fba86:	84 d2                	test   dl,dl
100fba88:	74 12                	je     0x100fba9c
100fba8a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100fba8d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100fba90:	75 0e                	jne    0x100fbaa0
100fba92:	83 c0 02             	add    eax,0x2
100fba95:	83 c1 02             	add    ecx,0x2
100fba98:	84 d2                	test   dl,dl
100fba9a:	75 e4                	jne    0x100fba80
100fba9c:	33 c0                	xor    eax,eax
100fba9e:	eb 05                	jmp    0x100fbaa5
100fbaa0:	1b c0                	sbb    eax,eax
100fbaa2:	83 c8 01             	or     eax,0x1
100fbaa5:	85 c0                	test   eax,eax
100fbaa7:	75 6e                	jne    0x100fbb17
100fbaa9:	85 ff                	test   edi,edi
100fbaab:	75 0d                	jne    0x100fbaba
100fbaad:	57                   	push   edi
100fbaae:	e8 ed e6 ff ff       	call   0x100fa1a0
100fbab3:	83 c4 04             	add    esp,0x4
100fbab6:	33 f6                	xor    esi,esi
100fbab8:	eb 09                	jmp    0x100fbac3
100fbaba:	56                   	push   esi
100fbabb:	e8 e0 e6 ff ff       	call   0x100fa1a0
100fbac0:	83 c4 04             	add    esp,0x4
100fbac3:	56                   	push   esi
100fbac4:	c7 80 68 03 00 00 00 	mov    DWORD PTR [eax+0x368],0x0
100fbacb:	00 00 00 
100fbace:	e8 cd e6 ff ff       	call   0x100fa1a0
100fbad3:	83 c4 04             	add    esp,0x4
100fbad6:	8d 88 8c 01 00 00    	lea    ecx,[eax+0x18c]
100fbadc:	e8 af bc f1 ff       	call   0x10017790
100fbae1:	85 c0                	test   eax,eax
100fbae3:	74 32                	je     0x100fbb17
100fbae5:	8b 10                	mov    edx,DWORD PTR [eax]
100fbae7:	8b c8                	mov    ecx,eax
100fbae9:	ff 52 78             	call   DWORD PTR [edx+0x78]
100fbaec:	8b f0                	mov    esi,eax
100fbaee:	85 f6                	test   esi,esi
100fbaf0:	74 25                	je     0x100fbb17
100fbaf2:	83 be 24 02 00 00 06 	cmp    DWORD PTR [esi+0x224],0x6
100fbaf9:	75 1c                	jne    0x100fbb17
100fbafb:	8b ce                	mov    ecx,esi
100fbafd:	c7 86 48 03 00 00 02 	mov    DWORD PTR [esi+0x348],0x2
100fbb04:	00 00 00 
100fbb07:	e8 24 ea ff ff       	call   0x100fa530
100fbb0c:	5f                   	pop    edi
100fbb0d:	8b ce                	mov    ecx,esi
100fbb0f:	5e                   	pop    esi
100fbb10:	5b                   	pop    ebx
100fbb11:	5d                   	pop    ebp
100fbb12:	e9 b9 ef f0 ff       	jmp    0x1000aad0
100fbb17:	5f                   	pop    edi
100fbb18:	5e                   	pop    esi
100fbb19:	5b                   	pop    ebx
100fbb1a:	5d                   	pop    ebp
100fbb1b:	c3                   	ret
