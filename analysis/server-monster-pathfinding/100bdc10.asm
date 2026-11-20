
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bdc10 <.text+0xbcc10>:
100bdc10:	55                   	push   ebp
100bdc11:	8b ec                	mov    ebp,esp
100bdc13:	83 ec 30             	sub    esp,0x30
100bdc16:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100bdc1b:	33 c5                	xor    eax,ebp
100bdc1d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100bdc20:	53                   	push   ebx
100bdc21:	56                   	push   esi
100bdc22:	57                   	push   edi
100bdc23:	8b f9                	mov    edi,ecx
100bdc25:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100bdc2a:	57                   	push   edi
100bdc2b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100bdc2e:	83 c0 08             	add    eax,0x8
100bdc31:	50                   	push   eax
100bdc32:	e8 f9 f8 00 00       	call   0x100cd530
100bdc37:	8b f0                	mov    esi,eax
100bdc39:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100bdc3e:	57                   	push   edi
100bdc3f:	8d 45 08             	lea    eax,[ebp+0x8]
100bdc42:	89 75 d0             	mov    DWORD PTR [ebp-0x30],esi
100bdc45:	50                   	push   eax
100bdc46:	e8 e5 f8 00 00       	call   0x100cd530
100bdc4b:	8b d8                	mov    ebx,eax
100bdc4d:	83 fe ff             	cmp    esi,0xffffffff
100bdc50:	74 41                	je     0x100bdc93
100bdc52:	83 fb ff             	cmp    ebx,0xffffffff
100bdc55:	74 3c                	je     0x100bdc93
100bdc57:	57                   	push   edi
100bdc58:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100bdc5d:	e8 ee 01 01 00       	call   0x100cde50
100bdc62:	ff b7 04 03 00 00    	push   DWORD PTR [edi+0x304]
100bdc68:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100bdc6d:	50                   	push   eax
100bdc6e:	53                   	push   ebx
100bdc6f:	56                   	push   esi
100bdc70:	8d 45 d4             	lea    eax,[ebp-0x2c]
100bdc73:	50                   	push   eax
100bdc74:	e8 67 f9 00 00       	call   0x100cd5e0
100bdc79:	8b f0                	mov    esi,eax
100bdc7b:	85 f6                	test   esi,esi
100bdc7d:	75 29                	jne    0x100bdca8
100bdc7f:	53                   	push   ebx
100bdc80:	ff 75 d0             	push   DWORD PTR [ebp-0x30]
100bdc83:	68 a4 50 1d 10       	push   0x101d50a4
100bdc88:	6a 02                	push   0x2
100bdc8a:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100bdc90:	83 c4 10             	add    esp,0x10
100bdc93:	5f                   	pop    edi
100bdc94:	5e                   	pop    esi
100bdc95:	33 c0                	xor    eax,eax
100bdc97:	5b                   	pop    ebx
100bdc98:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100bdc9b:	33 cd                	xor    ecx,ebp
100bdc9d:	e8 11 ff 07 00       	call   0x1013dbb3
100bdca2:	8b e5                	mov    esp,ebp
100bdca4:	5d                   	pop    ebp
100bdca5:	c2 0c 00             	ret    0xc
100bdca8:	83 fe 08             	cmp    esi,0x8
100bdcab:	7d 06                	jge    0x100bdcb3
100bdcad:	85 f6                	test   esi,esi
100bdcaf:	7e 3d                	jle    0x100bdcee
100bdcb1:	eb 05                	jmp    0x100bdcb8
100bdcb3:	be 08 00 00 00       	mov    esi,0x8
100bdcb8:	8d 8f 44 02 00 00    	lea    ecx,[edi+0x244]
100bdcbe:	33 d2                	xor    edx,edx
100bdcc0:	6b 44 95 d4 58       	imul   eax,DWORD PTR [ebp+edx*4-0x2c],0x58
100bdcc5:	8d 49 10             	lea    ecx,[ecx+0x10]
100bdcc8:	42                   	inc    edx
100bdcc9:	03 05 bc 38 22 10    	add    eax,DWORD PTR ds:0x102238bc
100bdccf:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
100bdcd3:	66 0f d6 41 e4       	movq   QWORD PTR [ecx-0x1c],xmm0
100bdcd8:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
100bdcdb:	89 41 ec             	mov    DWORD PTR [ecx-0x14],eax
100bdcde:	c7 41 f0 20 00 00 00 	mov    DWORD PTR [ecx-0x10],0x20
100bdce5:	3b d6                	cmp    edx,esi
100bdce7:	7c d7                	jl     0x100bdcc0
100bdce9:	83 fe 08             	cmp    esi,0x8
100bdcec:	7d 25                	jge    0x100bdd13
100bdcee:	f3 0f 7e 45 08       	movq   xmm0,QWORD PTR [ebp+0x8]
100bdcf3:	03 f6                	add    esi,esi
100bdcf5:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100bdcf8:	81 8c f7 44 02 00 00 	or     DWORD PTR [edi+esi*8+0x244],0x80
100bdcff:	80 00 00 00 
100bdd03:	66 0f d6 84 f7 38 02 	movq   QWORD PTR [edi+esi*8+0x238],xmm0
100bdd0a:	00 00 
100bdd0c:	89 84 f7 40 02 00 00 	mov    DWORD PTR [edi+esi*8+0x240],eax
100bdd13:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100bdd16:	b8 01 00 00 00       	mov    eax,0x1
100bdd1b:	5f                   	pop    edi
100bdd1c:	5e                   	pop    esi
100bdd1d:	33 cd                	xor    ecx,ebp
100bdd1f:	5b                   	pop    ebx
100bdd20:	e8 8e fe 07 00       	call   0x1013dbb3
100bdd25:	8b e5                	mov    esp,ebp
100bdd27:	5d                   	pop    ebp
100bdd28:	c2 0c 00             	ret    0xc
