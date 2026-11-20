
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bda70 <.text+0xbca70>:
100bda70:	56                   	push   esi
100bda71:	8b f1                	mov    esi,ecx
100bda73:	57                   	push   edi
100bda74:	8b 86 30 03 00 00    	mov    eax,DWORD PTR [esi+0x330]
100bda7a:	85 c0                	test   eax,eax
100bda7c:	0f 84 d4 00 00 00    	je     0x100bdb56
100bda82:	48                   	dec    eax
100bda83:	83 f8 0a             	cmp    eax,0xa
100bda86:	0f 87 ca 00 00 00    	ja     0x100bdb56
100bda8c:	ff 24 85 e4 db 0b 10 	jmp    DWORD PTR [eax*4+0x100bdbe4]
100bda93:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
100bda99:	e8 e2 9c f5 ff       	call   0x10017780
100bda9e:	85 c0                	test   eax,eax
100bdaa0:	0f 84 b0 00 00 00    	je     0x100bdb56
100bdaa6:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
100bdaac:	e8 ef 9c f5 ff       	call   0x100177a0
100bdab1:	8b c8                	mov    ecx,eax
100bdab3:	8b 10                	mov    edx,DWORD PTR [eax]
100bdab5:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
100bdabb:	85 c0                	test   eax,eax
100bdabd:	0f 84 93 00 00 00    	je     0x100bdb56
100bdac3:	f6 86 80 01 00 00 10 	test   BYTE PTR [esi+0x180],0x10
100bdaca:	e9 c9 00 00 00       	jmp    0x100bdb98
100bdacf:	8b 8e 80 01 00 00    	mov    ecx,DWORD PTR [esi+0x180]
100bdad5:	c1 e9 15             	shr    ecx,0x15
100bdad8:	83 e1 01             	and    ecx,0x1
100bdadb:	85 c9                	test   ecx,ecx
100bdadd:	e9 b6 00 00 00       	jmp    0x100bdb98
100bdae2:	f7 86 80 01 00 00 00 	test   DWORD PTR [esi+0x180],0x200000
100bdae9:	00 20 00 
100bdaec:	74 68                	je     0x100bdb56
100bdaee:	8b 86 24 02 00 00    	mov    eax,DWORD PTR [esi+0x224]
100bdaf4:	83 f8 02             	cmp    eax,0x2
100bdaf7:	74 5d                	je     0x100bdb56
100bdaf9:	83 f8 05             	cmp    eax,0x5
100bdafc:	74 58                	je     0x100bdb56
100bdafe:	83 f8 06             	cmp    eax,0x6
100bdb01:	e9 92 00 00 00       	jmp    0x100bdb98
100bdb06:	8b 8e 80 01 00 00    	mov    ecx,DWORD PTR [esi+0x180]
100bdb0c:	81 e1 00 03 00 00    	and    ecx,0x300
100bdb12:	f7 d9                	neg    ecx
100bdb14:	1b c9                	sbb    ecx,ecx
100bdb16:	f7 d9                	neg    ecx
100bdb18:	85 c9                	test   ecx,ecx
100bdb1a:	eb 7c                	jmp    0x100bdb98
100bdb1c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bdb1f:	33 c9                	xor    ecx,ecx
100bdb21:	39 88 74 01 00 00    	cmp    DWORD PTR [eax+0x174],ecx
100bdb27:	0f 95 c1             	setne  cl
100bdb2a:	85 c9                	test   ecx,ecx
100bdb2c:	eb 6a                	jmp    0x100bdb98
100bdb2e:	8b 06                	mov    eax,DWORD PTR [esi]
100bdb30:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
100bdb36:	85 c0                	test   eax,eax
100bdb38:	74 1c                	je     0x100bdb56
100bdb3a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bdb3d:	f3 0f 10 80 b4 01 00 	movss  xmm0,DWORD PTR [eax+0x1b4]
100bdb44:	00 
100bdb45:	f3 0f 59 05 d8 1d 1a 	mulss  xmm0,DWORD PTR ds:0x101a1dd8
100bdb4c:	10 
100bdb4d:	0f 2f 80 64 01 00 00 	comiss xmm0,DWORD PTR [eax+0x164]
100bdb54:	73 44                	jae    0x100bdb9a
100bdb56:	5f                   	pop    edi
100bdb57:	33 c0                	xor    eax,eax
100bdb59:	5e                   	pop    esi
100bdb5a:	c3                   	ret
100bdb5b:	f7 86 80 01 00 00 00 	test   DWORD PTR [esi+0x180],0x20000
100bdb62:	00 02 00 
100bdb65:	74 ef                	je     0x100bdb56
100bdb67:	f6 86 d8 02 00 00 02 	test   BYTE PTR [esi+0x2d8],0x2
100bdb6e:	eb 28                	jmp    0x100bdb98
100bdb70:	f7 86 80 01 00 00 00 	test   DWORD PTR [esi+0x180],0x20000
100bdb77:	00 02 00 
100bdb7a:	74 da                	je     0x100bdb56
100bdb7c:	f6 86 d8 02 00 00 04 	test   BYTE PTR [esi+0x2d8],0x4
100bdb83:	eb 13                	jmp    0x100bdb98
100bdb85:	f7 86 80 01 00 00 00 	test   DWORD PTR [esi+0x180],0x20000
100bdb8c:	00 02 00 
100bdb8f:	74 c5                	je     0x100bdb56
100bdb91:	f6 86 d8 02 00 00 01 	test   BYTE PTR [esi+0x2d8],0x1
100bdb98:	74 bc                	je     0x100bdb56
100bdb9a:	68 60 52 1d 10       	push   0x101d5260
100bdb9f:	6a 02                	push   0x2
100bdba1:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100bdba7:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100bdbac:	83 c4 04             	add    esp,0x4
100bdbaf:	8b 8e 34 03 00 00    	mov    ecx,DWORD PTR [esi+0x334]
100bdbb5:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100bdbbb:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100bdbc2:	6a 03                	push   0x3
100bdbc4:	56                   	push   esi
100bdbc5:	56                   	push   esi
100bdbc6:	51                   	push   ecx
100bdbc7:	e8 24 44 04 00       	call   0x10101ff0
100bdbcc:	83 c4 14             	add    esp,0x14
100bdbcf:	c7 86 30 03 00 00 00 	mov    DWORD PTR [esi+0x330],0x0
100bdbd6:	00 00 00 
100bdbd9:	b8 01 00 00 00       	mov    eax,0x1
100bdbde:	5f                   	pop    edi
100bdbdf:	5e                   	pop    esi
100bdbe0:	c3                   	ret
