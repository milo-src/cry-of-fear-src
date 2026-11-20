
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100befc0 <.text+0xbdfc0>:
100befc0:	55                   	push   ebp
100befc1:	8b ec                	mov    ebp,esp
100befc3:	83 ec 0c             	sub    esp,0xc
100befc6:	83 3d 14 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f14,0x0
100befcd:	56                   	push   esi
100befce:	8b f1                	mov    esi,ecx
100befd0:	0f 84 f8 02 00 00    	je     0x100bf2ce
100befd6:	83 3d 20 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f20,0x0
100befdd:	0f 85 eb 02 00 00    	jne    0x100bf2ce
100befe3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100befe6:	6a 06                	push   0x6
100befe8:	6a 01                	push   0x1
100befea:	f3 0f 10 40 54       	movss  xmm0,DWORD PTR [eax+0x54]
100befef:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
100beff4:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100beffb:	c7 45 f4 00 00 00 00 	mov    DWORD PTR [ebp-0xc],0x0
100bf002:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100bf008:	83 c4 08             	add    esp,0x8
100bf00b:	83 f8 01             	cmp    eax,0x1
100bf00e:	75 0a                	jne    0x100bf01a
100bf010:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bf013:	b9 bc c2 1a 10       	mov    ecx,0x101ac2bc
100bf018:	eb 78                	jmp    0x100bf092
100bf01a:	6a 64                	push   0x64
100bf01c:	6a 01                	push   0x1
100bf01e:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100bf024:	8b c8                	mov    ecx,eax
100bf026:	83 c4 08             	add    esp,0x8
100bf029:	83 f9 05             	cmp    ecx,0x5
100bf02c:	7f 22                	jg     0x100bf050
100bf02e:	6a 01                	push   0x1
100bf030:	6a 00                	push   0x0
100bf032:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100bf038:	83 c4 08             	add    esp,0x8
100bf03b:	b9 38 54 1d 10       	mov    ecx,0x101d5438
100bf040:	83 f8 01             	cmp    eax,0x1
100bf043:	ba 44 54 1d 10       	mov    edx,0x101d5444
100bf048:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bf04b:	0f 45 ca             	cmovne ecx,edx
100bf04e:	eb 42                	jmp    0x100bf092
100bf050:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bf053:	83 f9 0a             	cmp    ecx,0xa
100bf056:	7f 07                	jg     0x100bf05f
100bf058:	b9 50 54 1d 10       	mov    ecx,0x101d5450
100bf05d:	eb 33                	jmp    0x100bf092
100bf05f:	83 f9 14             	cmp    ecx,0x14
100bf062:	7f 07                	jg     0x100bf06b
100bf064:	b9 60 54 1d 10       	mov    ecx,0x101d5460
100bf069:	eb 27                	jmp    0x100bf092
100bf06b:	83 f9 28             	cmp    ecx,0x28
100bf06e:	7f 07                	jg     0x100bf077
100bf070:	b9 6c 54 1d 10       	mov    ecx,0x101d546c
100bf075:	eb 1b                	jmp    0x100bf092
100bf077:	83 f9 32             	cmp    ecx,0x32
100bf07a:	7f 07                	jg     0x100bf083
100bf07c:	b9 78 54 1d 10       	mov    ecx,0x101d5478
100bf081:	eb 0f                	jmp    0x100bf092
100bf083:	83 f9 46             	cmp    ecx,0x46
100bf086:	b9 84 54 1d 10       	mov    ecx,0x101d5484
100bf08b:	7e 05                	jle    0x100bf092
100bf08d:	b9 50 47 1b 10       	mov    ecx,0x101b4750
100bf092:	6a 00                	push   0x0
100bf094:	8d 55 f4             	lea    edx,[ebp-0xc]
100bf097:	83 c0 08             	add    eax,0x8
100bf09a:	52                   	push   edx
100bf09b:	50                   	push   eax
100bf09c:	51                   	push   ecx
100bf09d:	e8 ae 88 f5 ff       	call   0x10017950
100bf0a2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bf0a5:	83 c4 10             	add    esp,0x10
100bf0a8:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
100bf0ae:	53                   	push   ebx
100bf0af:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100bf0b5:	f7 d9                	neg    ecx
100bf0b7:	1b c9                	sbb    ecx,ecx
100bf0b9:	23 c8                	and    ecx,eax
100bf0bb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100bf0c0:	8b 11                	mov    edx,DWORD PTR [ecx]
100bf0c2:	b9 90 54 1d 10       	mov    ecx,0x101d5490
100bf0c7:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100bf0cd:	03 d0                	add    edx,eax
100bf0cf:	8b c2                	mov    eax,edx
100bf0d1:	8a 18                	mov    bl,BYTE PTR [eax]
100bf0d3:	3a 19                	cmp    bl,BYTE PTR [ecx]
100bf0d5:	75 1a                	jne    0x100bf0f1
100bf0d7:	84 db                	test   bl,bl
100bf0d9:	74 12                	je     0x100bf0ed
100bf0db:	8a 58 01             	mov    bl,BYTE PTR [eax+0x1]
100bf0de:	3a 59 01             	cmp    bl,BYTE PTR [ecx+0x1]
100bf0e1:	75 0e                	jne    0x100bf0f1
100bf0e3:	83 c0 02             	add    eax,0x2
100bf0e6:	83 c1 02             	add    ecx,0x2
100bf0e9:	84 db                	test   bl,bl
100bf0eb:	75 e4                	jne    0x100bf0d1
100bf0ed:	33 f6                	xor    esi,esi
100bf0ef:	eb 05                	jmp    0x100bf0f6
100bf0f1:	1b f6                	sbb    esi,esi
100bf0f3:	83 ce 01             	or     esi,0x1
100bf0f6:	b9 a0 54 1d 10       	mov    ecx,0x101d54a0
100bf0fb:	8b c2                	mov    eax,edx
100bf0fd:	0f 1f 00             	nop    DWORD PTR [eax]
100bf100:	8a 18                	mov    bl,BYTE PTR [eax]
100bf102:	3a 19                	cmp    bl,BYTE PTR [ecx]
100bf104:	75 1a                	jne    0x100bf120
100bf106:	84 db                	test   bl,bl
100bf108:	74 12                	je     0x100bf11c
100bf10a:	8a 58 01             	mov    bl,BYTE PTR [eax+0x1]
100bf10d:	3a 59 01             	cmp    bl,BYTE PTR [ecx+0x1]
100bf110:	75 0e                	jne    0x100bf120
100bf112:	83 c0 02             	add    eax,0x2
100bf115:	83 c1 02             	add    ecx,0x2
100bf118:	84 db                	test   bl,bl
100bf11a:	75 e4                	jne    0x100bf100
100bf11c:	33 c0                	xor    eax,eax
100bf11e:	eb 05                	jmp    0x100bf125
100bf120:	1b c0                	sbb    eax,eax
100bf122:	83 c8 01             	or     eax,0x1
100bf125:	57                   	push   edi
100bf126:	85 f6                	test   esi,esi
100bf128:	b9 14 00 00 00       	mov    ecx,0x14
100bf12d:	bf 1e 00 00 00       	mov    edi,0x1e
100bf132:	0f 45 f9             	cmovne edi,ecx
100bf135:	85 c0                	test   eax,eax
100bf137:	b9 32 00 00 00       	mov    ecx,0x32
100bf13c:	8b c2                	mov    eax,edx
100bf13e:	0f 44 f9             	cmove  edi,ecx
100bf141:	b9 4c 8e 1a 10       	mov    ecx,0x101a8e4c
100bf146:	8a 18                	mov    bl,BYTE PTR [eax]
100bf148:	3a 19                	cmp    bl,BYTE PTR [ecx]
100bf14a:	75 1a                	jne    0x100bf166
100bf14c:	84 db                	test   bl,bl
100bf14e:	74 12                	je     0x100bf162
100bf150:	8a 58 01             	mov    bl,BYTE PTR [eax+0x1]
100bf153:	3a 59 01             	cmp    bl,BYTE PTR [ecx+0x1]
100bf156:	75 0e                	jne    0x100bf166
100bf158:	83 c0 02             	add    eax,0x2
100bf15b:	83 c1 02             	add    ecx,0x2
100bf15e:	84 db                	test   bl,bl
100bf160:	75 e4                	jne    0x100bf146
100bf162:	33 c0                	xor    eax,eax
100bf164:	eb 05                	jmp    0x100bf16b
100bf166:	1b c0                	sbb    eax,eax
100bf168:	83 c8 01             	or     eax,0x1
100bf16b:	85 c0                	test   eax,eax
100bf16d:	b9 3c 00 00 00       	mov    ecx,0x3c
100bf172:	b8 e4 21 1a 10       	mov    eax,0x101a21e4
100bf177:	0f 44 f9             	cmove  edi,ecx
100bf17a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
100bf180:	8a 0a                	mov    cl,BYTE PTR [edx]
100bf182:	3a 08                	cmp    cl,BYTE PTR [eax]
100bf184:	75 1a                	jne    0x100bf1a0
100bf186:	84 c9                	test   cl,cl
100bf188:	74 12                	je     0x100bf19c
100bf18a:	8a 4a 01             	mov    cl,BYTE PTR [edx+0x1]
100bf18d:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
100bf190:	75 0e                	jne    0x100bf1a0
100bf192:	83 c2 02             	add    edx,0x2
100bf195:	83 c0 02             	add    eax,0x2
100bf198:	84 c9                	test   cl,cl
100bf19a:	75 e4                	jne    0x100bf180
100bf19c:	33 c0                	xor    eax,eax
100bf19e:	eb 05                	jmp    0x100bf1a5
100bf1a0:	1b c0                	sbb    eax,eax
100bf1a2:	83 c8 01             	or     eax,0x1
100bf1a5:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
100bf1a8:	85 c0                	test   eax,eax
100bf1aa:	b9 78 00 00 00       	mov    ecx,0x78
100bf1af:	0f 44 f9             	cmove  edi,ecx
100bf1b2:	8b cb                	mov    ecx,ebx
100bf1b4:	8b 03                	mov    eax,DWORD PTR [ebx]
100bf1b6:	01 bb 38 06 00 00    	add    DWORD PTR [ebx+0x638],edi
100bf1bc:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
100bf1c2:	85 c0                	test   eax,eax
100bf1c4:	0f 84 02 01 00 00    	je     0x100bf2cc
100bf1ca:	68 14 a4 1c 10       	push   0x101ca414
100bf1cf:	6a 00                	push   0x0
100bf1d1:	e8 8a 92 05 00       	call   0x10118460
100bf1d6:	83 c4 08             	add    esp,0x8
100bf1d9:	85 c0                	test   eax,eax
100bf1db:	74 56                	je     0x100bf233
100bf1dd:	ff 70 04             	push   DWORD PTR [eax+0x4]
100bf1e0:	e8 1b 12 fd ff       	call   0x10090400
100bf1e5:	8b d0                	mov    edx,eax
100bf1e7:	83 c4 04             	add    esp,0x4
100bf1ea:	85 d2                	test   edx,edx
100bf1ec:	74 45                	je     0x100bf233
100bf1ee:	8b 4a 04             	mov    ecx,DWORD PTR [edx+0x4]
100bf1f1:	83 b9 4c 02 00 00 00 	cmp    DWORD PTR [ecx+0x24c],0x0
100bf1f8:	74 39                	je     0x100bf233
100bf1fa:	80 ba dd 00 00 00 01 	cmp    BYTE PTR [edx+0xdd],0x1
100bf201:	75 30                	jne    0x100bf233
100bf203:	8b 8a f4 00 00 00    	mov    ecx,DWORD PTR [edx+0xf4]
100bf209:	01 ba ec 00 00 00    	add    DWORD PTR [edx+0xec],edi
100bf20f:	03 cf                	add    ecx,edi
100bf211:	89 8a f4 00 00 00    	mov    DWORD PTR [edx+0xf4],ecx
100bf217:	83 f9 3b             	cmp    ecx,0x3b
100bf21a:	7c 17                	jl     0x100bf233
100bf21c:	33 f6                	xor    esi,esi
100bf21e:	8d 41 c4             	lea    eax,[ecx-0x3c]
100bf221:	83 f9 3c             	cmp    ecx,0x3c
100bf224:	0f 4c c6             	cmovl  eax,esi
100bf227:	89 82 f4 00 00 00    	mov    DWORD PTR [edx+0xf4],eax
100bf22d:	ff 82 f8 00 00 00    	inc    DWORD PTR [edx+0xf8]
100bf233:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100bf238:	be 01 00 00 00       	mov    esi,0x1
100bf23d:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
100bf243:	0f 8c 83 00 00 00    	jl     0x100bf2cc
100bf249:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100bf250:	56                   	push   esi
100bf251:	e8 2a a4 05 00       	call   0x10119680
100bf256:	83 c4 04             	add    esp,0x4
100bf259:	85 c0                	test   eax,eax
100bf25b:	74 61                	je     0x100bf2be
100bf25d:	3b c3                	cmp    eax,ebx
100bf25f:	75 24                	jne    0x100bf285
100bf261:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100bf264:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100bf26a:	6a 00                	push   0x0
100bf26c:	ff 35 a8 66 22 10    	push   DWORD PTR ds:0x102266a8
100bf272:	6a 01                	push   0x1
100bf274:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100bf27a:	57                   	push   edi
100bf27b:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100bf281:	6a 01                	push   0x1
100bf283:	eb 22                	jmp    0x100bf2a7
100bf285:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100bf288:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100bf28e:	6a 00                	push   0x0
100bf290:	ff 35 a8 66 22 10    	push   DWORD PTR ds:0x102266a8
100bf296:	6a 01                	push   0x1
100bf298:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100bf29e:	57                   	push   edi
100bf29f:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100bf2a5:	6a 00                	push   0x0
100bf2a7:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100bf2ad:	6a 00                	push   0x0
100bf2af:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100bf2b5:	83 c4 1c             	add    esp,0x1c
100bf2b8:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100bf2be:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100bf2c3:	46                   	inc    esi
100bf2c4:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
100bf2ca:	7e 84                	jle    0x100bf250
100bf2cc:	5f                   	pop    edi
100bf2cd:	5b                   	pop    ebx
100bf2ce:	5e                   	pop    esi
100bf2cf:	8b e5                	mov    esp,ebp
100bf2d1:	5d                   	pop    ebp
100bf2d2:	c2 08 00             	ret    0x8
