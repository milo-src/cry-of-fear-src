
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bed80 <.text+0xbdd80>:
100bed80:	56                   	push   esi
100bed81:	57                   	push   edi
100bed82:	8b f9                	mov    edi,ecx
100bed84:	f7 87 80 01 00 00 0a 	test   DWORD PTR [edi+0x180],0x40000a
100bed8b:	00 40 00 
100bed8e:	0f 84 d4 00 00 00    	je     0x100bee68
100bed94:	8b 07                	mov    eax,DWORD PTR [edi]
100bed96:	53                   	push   ebx
100bed97:	ff 90 4c 01 00 00    	call   DWORD PTR [eax+0x14c]
100bed9d:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
100beda3:	8b d8                	mov    ebx,eax
100beda5:	e8 e6 89 f5 ff       	call   0x10017790
100bedaa:	3b d8                	cmp    ebx,eax
100bedac:	0f 84 b5 00 00 00    	je     0x100bee67
100bedb2:	85 db                	test   ebx,ebx
100bedb4:	0f 84 ad 00 00 00    	je     0x100bee67
100bedba:	8b 87 30 02 00 00    	mov    eax,DWORD PTR [edi+0x230]
100bedc0:	85 c0                	test   eax,eax
100bedc2:	0f 84 9f 00 00 00    	je     0x100bee67
100bedc8:	f7 40 08 00 00 01 00 	test   DWORD PTR [eax+0x8],0x10000
100bedcf:	74 4d                	je     0x100bee1e
100bedd1:	8d b7 f4 02 00 00    	lea    esi,[edi+0x2f4]
100bedd7:	56                   	push   esi
100bedd8:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
100bedde:	e8 ad 89 f5 ff       	call   0x10017790
100bede3:	50                   	push   eax
100bede4:	8b cf                	mov    ecx,edi
100bede6:	e8 85 28 00 00       	call   0x100c1670
100bedeb:	81 8f 80 01 00 00 00 	or     DWORD PTR [edi+0x180],0x10000
100bedf2:	00 01 00 
100bedf5:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
100bedfb:	53                   	push   ebx
100bedfc:	e8 3f 89 f5 ff       	call   0x10017740
100bee01:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
100bee07:	e8 94 89 f5 ff       	call   0x100177a0
100bee0c:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100bee0f:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
100bee14:	66 0f d6 06          	movq   QWORD PTR [esi],xmm0
100bee18:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
100bee1b:	89 46 08             	mov    DWORD PTR [esi+0x8],eax
100bee1e:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100bee21:	8b 88 9c 01 00 00    	mov    ecx,DWORD PTR [eax+0x19c]
100bee27:	85 c9                	test   ecx,ecx
100bee29:	74 3c                	je     0x100bee67
100bee2b:	8b 49 7c             	mov    ecx,DWORD PTR [ecx+0x7c]
100bee2e:	85 c9                	test   ecx,ecx
100bee30:	74 35                	je     0x100bee67
100bee32:	8b 01                	mov    eax,DWORD PTR [ecx]
100bee34:	ff 50 78             	call   DWORD PTR [eax+0x78]
100bee37:	8b f0                	mov    esi,eax
100bee39:	85 f6                	test   esi,esi
100bee3b:	74 2a                	je     0x100bee67
100bee3d:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100bee40:	f6 81 a8 01 00 00 20 	test   BYTE PTR [ecx+0x1a8],0x20
100bee47:	74 1e                	je     0x100bee67
100bee49:	8b 17                	mov    edx,DWORD PTR [edi]
100bee4b:	8b cf                	mov    ecx,edi
100bee4d:	56                   	push   esi
100bee4e:	ff 92 38 01 00 00    	call   DWORD PTR [edx+0x138]
100bee54:	85 c0                	test   eax,eax
100bee56:	74 0f                	je     0x100bee67
100bee58:	8d 87 f4 02 00 00    	lea    eax,[edi+0x2f4]
100bee5e:	8b cf                	mov    ecx,edi
100bee60:	50                   	push   eax
100bee61:	56                   	push   esi
100bee62:	e8 09 28 00 00       	call   0x100c1670
100bee67:	5b                   	pop    ebx
100bee68:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
100bee6e:	e8 0d 89 f5 ff       	call   0x10017780
100bee73:	85 c0                	test   eax,eax
100bee75:	75 28                	jne    0x100bee9f
100bee77:	8b cf                	mov    ecx,edi
100bee79:	e8 62 27 00 00       	call   0x100c15e0
100bee7e:	85 c0                	test   eax,eax
100bee80:	74 1d                	je     0x100bee9f
100bee82:	8b 87 30 02 00 00    	mov    eax,DWORD PTR [edi+0x230]
100bee88:	85 c0                	test   eax,eax
100bee8a:	74 13                	je     0x100bee9f
100bee8c:	f7 40 08 00 00 01 00 	test   DWORD PTR [eax+0x8],0x10000
100bee93:	74 0a                	je     0x100bee9f
100bee95:	81 8f 80 01 00 00 00 	or     DWORD PTR [edi+0x180],0x10000
100bee9c:	00 01 00 
100bee9f:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
100beea5:	e8 d6 88 f5 ff       	call   0x10017780
100beeaa:	85 c0                	test   eax,eax
100beeac:	74 38                	je     0x100beee6
100beeae:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
100beeb4:	e8 e7 88 f5 ff       	call   0x100177a0
100beeb9:	8b c8                	mov    ecx,eax
100beebb:	8b 10                	mov    edx,DWORD PTR [eax]
100beebd:	ff 92 d0 00 00 00    	call   DWORD PTR [edx+0xd0]
100beec3:	85 c0                	test   eax,eax
100beec5:	74 17                	je     0x100beede
100beec7:	8d 8f 84 01 00 00    	lea    ecx,[edi+0x184]
100beecd:	e8 be 88 f5 ff       	call   0x10017790
100beed2:	57                   	push   edi
100beed3:	8d 88 40 23 00 00    	lea    ecx,[eax+0x2340]
100beed9:	e8 62 88 f5 ff       	call   0x10017740
100beede:	5f                   	pop    edi
100beedf:	b8 01 00 00 00       	mov    eax,0x1
100beee4:	5e                   	pop    esi
100beee5:	c3                   	ret
100beee6:	5f                   	pop    edi
100beee7:	33 c0                	xor    eax,eax
100beee9:	5e                   	pop    esi
100beeea:	c3                   	ret
