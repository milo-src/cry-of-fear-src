
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10100080 <.text+0xff080>:
10100080:	55                   	push   ebp
10100081:	8b ec                	mov    ebp,esp
10100083:	83 ec 14             	sub    esp,0x14
10100086:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1010008b:	33 c5                	xor    eax,ebp
1010008d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10100090:	83 3d c4 c8 22 10 00 	cmp    DWORD PTR ds:0x1022c8c4,0x0
10100097:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1010009a:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1010009d:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
101000a0:	0f 84 f6 00 00 00    	je     0x1010019c
101000a6:	85 c9                	test   ecx,ecx
101000a8:	0f 88 ee 00 00 00    	js     0x1010019c
101000ae:	6b c1 34             	imul   eax,ecx,0x34
101000b1:	53                   	push   ebx
101000b2:	56                   	push   esi
101000b3:	57                   	push   edi
101000b4:	8a 98 d8 c8 22 10    	mov    bl,BYTE PTR [eax+0x1022c8d8]
101000ba:	8d 88 c8 c8 22 10    	lea    ecx,[eax+0x1022c8c8]
101000c0:	89 4d ec             	mov    DWORD PTR [ebp-0x14],ecx
101000c3:	8d b0 dc c8 22 10    	lea    esi,[eax+0x1022c8dc]
101000c9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
101000d0:	32 c0                	xor    al,al
101000d2:	84 db                	test   bl,bl
101000d4:	74 11                	je     0x101000e7
101000d6:	0f b6 c8             	movzx  ecx,al
101000d9:	8a 14 31             	mov    dl,BYTE PTR [ecx+esi*1]
101000dc:	80 fa ff             	cmp    dl,0xff
101000df:	75 15                	jne    0x101000f6
101000e1:	fe c0                	inc    al
101000e3:	3a c3                	cmp    al,bl
101000e5:	72 ef                	jb     0x101000d6
101000e7:	0f b6 c3             	movzx  eax,bl
101000ea:	50                   	push   eax
101000eb:	56                   	push   esi
101000ec:	e8 0f ff ff ff       	call   0x10100000
101000f1:	83 c4 08             	add    esp,0x8
101000f4:	eb da                	jmp    0x101000d0
101000f6:	8b 5d f0             	mov    ebx,DWORD PTR [ebp-0x10]
101000f9:	b8 21 00 00 00       	mov    eax,0x21
101000fe:	c6 04 31 ff          	mov    BYTE PTR [ecx+esi*1],0xff
10100102:	8b 75 ec             	mov    esi,DWORD PTR [ebp-0x14]
10100105:	8b ce                	mov    ecx,esi
10100107:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
1010010a:	66 89 03             	mov    WORD PTR [ebx],ax
1010010d:	0f 1f 00             	nop    DWORD PTR [eax]
10100110:	8a 06                	mov    al,BYTE PTR [esi]
10100112:	46                   	inc    esi
10100113:	84 c0                	test   al,al
10100115:	75 f9                	jne    0x10100110
10100117:	2b f1                	sub    esi,ecx
10100119:	8d 7b ff             	lea    edi,[ebx-0x1]
1010011c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10100120:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
10100123:	47                   	inc    edi
10100124:	84 c0                	test   al,al
10100126:	75 f8                	jne    0x10100120
10100128:	8b ce                	mov    ecx,esi
1010012a:	0f b6 c2             	movzx  eax,dl
1010012d:	89 75 ec             	mov    DWORD PTR [ebp-0x14],esi
10100130:	8b 75 f0             	mov    esi,DWORD PTR [ebp-0x10]
10100133:	c1 e9 02             	shr    ecx,0x2
10100136:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10100138:	8b 4d ec             	mov    ecx,DWORD PTR [ebp-0x14]
1010013b:	50                   	push   eax
1010013c:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
1010013f:	83 e1 03             	and    ecx,0x3
10100142:	8d 45 f4             	lea    eax,[ebp-0xc]
10100145:	68 cc 20 1c 10       	push   0x101c20cc
1010014a:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
1010014c:	50                   	push   eax
1010014d:	e8 0e f0 f1 ff       	call   0x1001f160
10100152:	8d 55 f4             	lea    edx,[ebp-0xc]
10100155:	83 c4 0c             	add    esp,0xc
10100158:	8b f2                	mov    esi,edx
1010015a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10100160:	8a 02                	mov    al,BYTE PTR [edx]
10100162:	42                   	inc    edx
10100163:	84 c0                	test   al,al
10100165:	75 f9                	jne    0x10100160
10100167:	2b d6                	sub    edx,esi
10100169:	4b                   	dec    ebx
1010016a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10100170:	8a 43 01             	mov    al,BYTE PTR [ebx+0x1]
10100173:	43                   	inc    ebx
10100174:	84 c0                	test   al,al
10100176:	75 f8                	jne    0x10100170
10100178:	8b ca                	mov    ecx,edx
1010017a:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
1010017d:	c1 e9 02             	shr    ecx,0x2
10100180:	8b fb                	mov    edi,ebx
10100182:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10100184:	8b ca                	mov    ecx,edx
10100186:	83 e1 03             	and    ecx,0x3
10100189:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
1010018b:	5f                   	pop    edi
1010018c:	5e                   	pop    esi
1010018d:	5b                   	pop    ebx
1010018e:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10100191:	33 cd                	xor    ecx,ebp
10100193:	e8 1b da 03 00       	call   0x1013dbb3
10100198:	8b e5                	mov    esp,ebp
1010019a:	5d                   	pop    ebp
1010019b:	c3                   	ret
1010019c:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1010019f:	83 c8 ff             	or     eax,0xffffffff
101001a2:	33 cd                	xor    ecx,ebp
101001a4:	e8 0a da 03 00       	call   0x1013dbb3
101001a9:	8b e5                	mov    esp,ebp
101001ab:	5d                   	pop    ebp
101001ac:	c3                   	ret
