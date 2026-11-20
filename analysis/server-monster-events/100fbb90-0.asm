
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fbb90 <.text+0xfab90>:
100fbb90:	56                   	push   esi
100fbb91:	8b f1                	mov    esi,ecx
100fbb93:	57                   	push   edi
100fbb94:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fbb97:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
100fbb9e:	00 00 00 
100fbba1:	83 be 6c 03 00 00 00 	cmp    DWORD PTR [esi+0x36c],0x0
100fbba8:	c7 86 68 03 00 00 00 	mov    DWORD PTR [esi+0x368],0x0
100fbbaf:	00 00 00 
100fbbb2:	75 15                	jne    0x100fbbc9
100fbbb4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100fbbb7:	83 b8 d0 01 00 00 00 	cmp    DWORD PTR [eax+0x1d0],0x0
100fbbbe:	75 1d                	jne    0x100fbbdd
100fbbc0:	c7 46 78 c0 a8 0f 10 	mov    DWORD PTR [esi+0x78],0x100fa8c0
100fbbc7:	eb 07                	jmp    0x100fbbd0
100fbbc9:	c7 46 78 50 b0 0f 10 	mov    DWORD PTR [esi+0x78],0x100fb050
100fbbd0:	8b 06                	mov    eax,DWORD PTR [esi]
100fbbd2:	51                   	push   ecx
100fbbd3:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100fbbda:	ff 50 08             	call   DWORD PTR [eax+0x8]
100fbbdd:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
100fbbe0:	b9 60 de 1d 10       	mov    ecx,0x101dde60
100fbbe5:	8b 87 a4 01 00 00    	mov    eax,DWORD PTR [edi+0x1a4]
100fbbeb:	c1 e8 05             	shr    eax,0x5
100fbbee:	f7 d0                	not    eax
100fbbf0:	83 e0 01             	and    eax,0x1
100fbbf3:	89 86 bc 03 00 00    	mov    DWORD PTR [esi+0x3bc],eax
100fbbf9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100fbbfe:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100fbc04:	03 07                	add    eax,DWORD PTR [edi]
100fbc06:	8a 10                	mov    dl,BYTE PTR [eax]
100fbc08:	3a 11                	cmp    dl,BYTE PTR [ecx]
100fbc0a:	75 1a                	jne    0x100fbc26
100fbc0c:	84 d2                	test   dl,dl
100fbc0e:	74 12                	je     0x100fbc22
100fbc10:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
100fbc13:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100fbc16:	75 0e                	jne    0x100fbc26
100fbc18:	83 c0 02             	add    eax,0x2
100fbc1b:	83 c1 02             	add    ecx,0x2
100fbc1e:	84 d2                	test   dl,dl
100fbc20:	75 e4                	jne    0x100fbc06
100fbc22:	33 c0                	xor    eax,eax
100fbc24:	eb 05                	jmp    0x100fbc2b
100fbc26:	1b c0                	sbb    eax,eax
100fbc28:	83 c8 01             	or     eax,0x1
100fbc2b:	85 c0                	test   eax,eax
100fbc2d:	74 09                	je     0x100fbc38
100fbc2f:	f6 87 a4 01 00 00 40 	test   BYTE PTR [edi+0x1a4],0x40
100fbc36:	74 07                	je     0x100fbc3f
100fbc38:	83 8e a4 03 00 00 02 	or     DWORD PTR [esi+0x3a4],0x2
100fbc3f:	5f                   	pop    edi
100fbc40:	5e                   	pop    esi
100fbc41:	c3                   	ret
