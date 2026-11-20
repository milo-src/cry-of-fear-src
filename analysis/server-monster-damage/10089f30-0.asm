
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10089f30 <.text+0x88f30>:
10089f30:	55                   	push   ebp
10089f31:	8b ec                	mov    ebp,esp
10089f33:	53                   	push   ebx
10089f34:	56                   	push   esi
10089f35:	57                   	push   edi
10089f36:	8b f9                	mov    edi,ecx
10089f38:	be 58 ed 1b 10       	mov    esi,0x101bed58
10089f3d:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
10089f40:	8b 8a 0c 02 00 00    	mov    ecx,DWORD PTR [edx+0x20c]
10089f46:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
10089f4c:	f7 d9                	neg    ecx
10089f4e:	1b c9                	sbb    ecx,ecx
10089f50:	23 c8                	and    ecx,eax
10089f52:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10089f57:	8b 09                	mov    ecx,DWORD PTR [ecx]
10089f59:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10089f5f:	03 c8                	add    ecx,eax
10089f61:	8b c1                	mov    eax,ecx
10089f63:	8a 18                	mov    bl,BYTE PTR [eax]
10089f65:	3a 1e                	cmp    bl,BYTE PTR [esi]
10089f67:	75 1a                	jne    0x10089f83
10089f69:	84 db                	test   bl,bl
10089f6b:	74 12                	je     0x10089f7f
10089f6d:	8a 58 01             	mov    bl,BYTE PTR [eax+0x1]
10089f70:	3a 5e 01             	cmp    bl,BYTE PTR [esi+0x1]
10089f73:	75 0e                	jne    0x10089f83
10089f75:	83 c0 02             	add    eax,0x2
10089f78:	83 c6 02             	add    esi,0x2
10089f7b:	84 db                	test   bl,bl
10089f7d:	75 e4                	jne    0x10089f63
10089f7f:	33 c0                	xor    eax,eax
10089f81:	eb 05                	jmp    0x10089f88
10089f83:	1b c0                	sbb    eax,eax
10089f85:	83 c8 01             	or     eax,0x1
10089f88:	85 c0                	test   eax,eax
10089f8a:	74 32                	je     0x10089fbe
10089f8c:	b8 68 ed 1b 10       	mov    eax,0x101bed68
10089f91:	8a 19                	mov    bl,BYTE PTR [ecx]
10089f93:	3a 18                	cmp    bl,BYTE PTR [eax]
10089f95:	75 1a                	jne    0x10089fb1
10089f97:	84 db                	test   bl,bl
10089f99:	74 12                	je     0x10089fad
10089f9b:	8a 59 01             	mov    bl,BYTE PTR [ecx+0x1]
10089f9e:	3a 58 01             	cmp    bl,BYTE PTR [eax+0x1]
10089fa1:	75 0e                	jne    0x10089fb1
10089fa3:	83 c1 02             	add    ecx,0x2
10089fa6:	83 c0 02             	add    eax,0x2
10089fa9:	84 db                	test   bl,bl
10089fab:	75 e4                	jne    0x10089f91
10089fad:	33 c0                	xor    eax,eax
10089faf:	eb 05                	jmp    0x10089fb6
10089fb1:	1b c0                	sbb    eax,eax
10089fb3:	83 c8 01             	or     eax,0x1
10089fb6:	85 c0                	test   eax,eax
10089fb8:	0f 85 6d 02 00 00    	jne    0x1008a22b
10089fbe:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10089fc1:	48                   	dec    eax
10089fc2:	83 f8 12             	cmp    eax,0x12
10089fc5:	0f 87 60 02 00 00    	ja     0x1008a22b
10089fcb:	0f b6 80 64 a2 08 10 	movzx  eax,BYTE PTR [eax+0x1008a264]
10089fd2:	ff 24 85 34 a2 08 10 	jmp    DWORD PTR [eax*4+0x1008a234]
10089fd9:	8b 82 10 02 00 00    	mov    eax,DWORD PTR [edx+0x210]
10089fdf:	a8 01                	test   al,0x1
10089fe1:	0f 85 44 02 00 00    	jne    0x1008a22b
10089fe7:	83 c8 01             	or     eax,0x1
10089fea:	68 78 ed 1b 10       	push   0x101bed78
10089fef:	6a 01                	push   0x1
10089ff1:	89 82 10 02 00 00    	mov    DWORD PTR [edx+0x210],eax
10089ff7:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
10089ffd:	83 c4 08             	add    esp,0x8
1008a000:	5f                   	pop    edi
1008a001:	5e                   	pop    esi
1008a002:	5b                   	pop    ebx
1008a003:	5d                   	pop    ebp
1008a004:	c2 08 00             	ret    0x8
1008a007:	8b 82 10 02 00 00    	mov    eax,DWORD PTR [edx+0x210]
1008a00d:	a8 02                	test   al,0x2
1008a00f:	0f 85 16 02 00 00    	jne    0x1008a22b
1008a015:	83 c8 02             	or     eax,0x2
1008a018:	68 94 ed 1b 10       	push   0x101bed94
1008a01d:	6a 01                	push   0x1
1008a01f:	89 82 10 02 00 00    	mov    DWORD PTR [edx+0x210],eax
1008a025:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1008a02b:	83 c4 08             	add    esp,0x8
1008a02e:	5f                   	pop    edi
1008a02f:	5e                   	pop    esi
1008a030:	5b                   	pop    ebx
1008a031:	5d                   	pop    ebp
1008a032:	c2 08 00             	ret    0x8
1008a035:	8b 82 10 02 00 00    	mov    eax,DWORD PTR [edx+0x210]
1008a03b:	a8 04                	test   al,0x4
1008a03d:	0f 85 e8 01 00 00    	jne    0x1008a22b
1008a043:	83 c8 04             	or     eax,0x4
1008a046:	68 b4 ed 1b 10       	push   0x101bedb4
1008a04b:	6a 01                	push   0x1
1008a04d:	89 82 10 02 00 00    	mov    DWORD PTR [edx+0x210],eax
1008a053:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1008a059:	83 c4 08             	add    esp,0x8
1008a05c:	5f                   	pop    edi
1008a05d:	5e                   	pop    esi
1008a05e:	5b                   	pop    ebx
1008a05f:	5d                   	pop    ebp
1008a060:	c2 08 00             	ret    0x8
1008a063:	8b 82 10 02 00 00    	mov    eax,DWORD PTR [edx+0x210]
1008a069:	a8 08                	test   al,0x8
1008a06b:	0f 85 ba 01 00 00    	jne    0x1008a22b
1008a071:	83 c8 02             	or     eax,0x2
1008a074:	89 82 10 02 00 00    	mov    DWORD PTR [edx+0x210],eax
1008a07a:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008a07d:	68 d8 ed 1b 10       	push   0x101bedd8
1008a082:	6a 01                	push   0x1
1008a084:	83 88 10 02 00 00 08 	or     DWORD PTR [eax+0x210],0x8
1008a08b:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1008a091:	83 c4 08             	add    esp,0x8
1008a094:	5f                   	pop    edi
1008a095:	5e                   	pop    esi
1008a096:	5b                   	pop    ebx
1008a097:	5d                   	pop    ebp
1008a098:	c2 08 00             	ret    0x8
1008a09b:	8b 82 10 02 00 00    	mov    eax,DWORD PTR [edx+0x210]
1008a0a1:	a8 10                	test   al,0x10
1008a0a3:	0f 85 82 01 00 00    	jne    0x1008a22b
1008a0a9:	83 c8 02             	or     eax,0x2
1008a0ac:	89 82 10 02 00 00    	mov    DWORD PTR [edx+0x210],eax
1008a0b2:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008a0b5:	68 00 ee 1b 10       	push   0x101bee00
1008a0ba:	6a 01                	push   0x1
1008a0bc:	83 88 10 02 00 00 08 	or     DWORD PTR [eax+0x210],0x8
1008a0c3:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008a0c6:	83 88 10 02 00 00 10 	or     DWORD PTR [eax+0x210],0x10
1008a0cd:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1008a0d3:	83 c4 08             	add    esp,0x8
1008a0d6:	5f                   	pop    edi
1008a0d7:	5e                   	pop    esi
1008a0d8:	5b                   	pop    ebx
1008a0d9:	5d                   	pop    ebp
1008a0da:	c2 08 00             	ret    0x8
1008a0dd:	8b 82 10 02 00 00    	mov    eax,DWORD PTR [edx+0x210]
1008a0e3:	a8 0c                	test   al,0xc
1008a0e5:	0f 85 40 01 00 00    	jne    0x1008a22b
1008a0eb:	83 c8 04             	or     eax,0x4
1008a0ee:	89 82 10 02 00 00    	mov    DWORD PTR [edx+0x210],eax
1008a0f4:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008a0f7:	68 28 ee 1b 10       	push   0x101bee28
1008a0fc:	6a 01                	push   0x1
1008a0fe:	83 88 10 02 00 00 20 	or     DWORD PTR [eax+0x210],0x20
1008a105:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1008a10b:	83 c4 08             	add    esp,0x8
1008a10e:	5f                   	pop    edi
1008a10f:	5e                   	pop    esi
1008a110:	5b                   	pop    ebx
1008a111:	5d                   	pop    ebp
1008a112:	c2 08 00             	ret    0x8
1008a115:	8b 82 10 02 00 00    	mov    eax,DWORD PTR [edx+0x210]
1008a11b:	a8 40                	test   al,0x40
1008a11d:	0f 85 08 01 00 00    	jne    0x1008a22b
1008a123:	83 c8 04             	or     eax,0x4
1008a126:	89 82 10 02 00 00    	mov    DWORD PTR [edx+0x210],eax
1008a12c:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008a12f:	68 4c ee 1b 10       	push   0x101bee4c
1008a134:	6a 01                	push   0x1
1008a136:	83 88 10 02 00 00 20 	or     DWORD PTR [eax+0x210],0x20
1008a13d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008a140:	83 88 10 02 00 00 40 	or     DWORD PTR [eax+0x210],0x40
1008a147:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1008a14d:	83 c4 08             	add    esp,0x8
1008a150:	5f                   	pop    edi
1008a151:	5e                   	pop    esi
1008a152:	5b                   	pop    ebx
1008a153:	5d                   	pop    ebp
1008a154:	c2 08 00             	ret    0x8
1008a157:	8b 82 10 02 00 00    	mov    eax,DWORD PTR [edx+0x210]
1008a15d:	84 c0                	test   al,al
1008a15f:	0f 88 c6 00 00 00    	js     0x1008a22b
1008a165:	0d 80 00 00 00       	or     eax,0x80
1008a16a:	68 74 ee 1b 10       	push   0x101bee74
1008a16f:	6a 01                	push   0x1
1008a171:	89 82 10 02 00 00    	mov    DWORD PTR [edx+0x210],eax
1008a177:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1008a17d:	83 c4 08             	add    esp,0x8
1008a180:	5f                   	pop    edi
1008a181:	5e                   	pop    esi
1008a182:	5b                   	pop    ebx
1008a183:	5d                   	pop    ebp
1008a184:	c2 08 00             	ret    0x8
1008a187:	8b 82 10 02 00 00    	mov    eax,DWORD PTR [edx+0x210]
1008a18d:	a9 00 01 00 00       	test   eax,0x100
1008a192:	0f 85 93 00 00 00    	jne    0x1008a22b
1008a198:	0d 00 01 00 00       	or     eax,0x100
1008a19d:	89 82 10 02 00 00    	mov    DWORD PTR [edx+0x210],eax
1008a1a3:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008a1a6:	68 9c ee 1b 10       	push   0x101bee9c
1008a1ab:	6a 01                	push   0x1
1008a1ad:	81 88 10 02 00 00 80 	or     DWORD PTR [eax+0x210],0x80
1008a1b4:	00 00 00 
1008a1b7:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1008a1bd:	83 c4 08             	add    esp,0x8
1008a1c0:	5f                   	pop    edi
1008a1c1:	5e                   	pop    esi
1008a1c2:	5b                   	pop    ebx
1008a1c3:	5d                   	pop    ebp
1008a1c4:	c2 08 00             	ret    0x8
1008a1c7:	8b 82 10 02 00 00    	mov    eax,DWORD PTR [edx+0x210]
1008a1cd:	a9 00 02 00 00       	test   eax,0x200
1008a1d2:	75 57                	jne    0x1008a22b
1008a1d4:	0d 00 02 00 00       	or     eax,0x200
1008a1d9:	68 c4 ee 1b 10       	push   0x101beec4
1008a1de:	6a 01                	push   0x1
1008a1e0:	89 82 10 02 00 00    	mov    DWORD PTR [edx+0x210],eax
1008a1e6:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1008a1ec:	83 c4 08             	add    esp,0x8
1008a1ef:	5f                   	pop    edi
1008a1f0:	5e                   	pop    esi
1008a1f1:	5b                   	pop    ebx
1008a1f2:	5d                   	pop    ebp
1008a1f3:	c2 08 00             	ret    0x8
1008a1f6:	8b 82 10 02 00 00    	mov    eax,DWORD PTR [edx+0x210]
1008a1fc:	a9 00 04 00 00       	test   eax,0x400
1008a201:	75 28                	jne    0x1008a22b
1008a203:	0d 00 04 00 00       	or     eax,0x400
1008a208:	89 82 10 02 00 00    	mov    DWORD PTR [edx+0x210],eax
1008a20e:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008a211:	68 e8 ee 1b 10       	push   0x101beee8
1008a216:	6a 01                	push   0x1
1008a218:	81 88 10 02 00 00 00 	or     DWORD PTR [eax+0x210],0x200
1008a21f:	02 00 00 
1008a222:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1008a228:	83 c4 08             	add    esp,0x8
1008a22b:	5f                   	pop    edi
1008a22c:	5e                   	pop    esi
1008a22d:	5b                   	pop    ebx
1008a22e:	5d                   	pop    ebp
1008a22f:	c2 08 00             	ret    0x8
