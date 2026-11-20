
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101001b0 <.text+0xff1b0>:
101001b0:	55                   	push   ebp
101001b1:	8b ec                	mov    ebp,esp
101001b3:	83 ec 10             	sub    esp,0x10
101001b6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
101001bb:	33 c5                	xor    eax,ebp
101001bd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
101001c0:	83 3d c4 c8 22 10 00 	cmp    DWORD PTR ds:0x1022c8c4,0x0
101001c7:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
101001ca:	53                   	push   ebx
101001cb:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
101001ce:	0f 84 d9 00 00 00    	je     0x101002ad
101001d4:	85 c0                	test   eax,eax
101001d6:	0f 88 d1 00 00 00    	js     0x101002ad
101001dc:	6b c0 34             	imul   eax,eax,0x34
101001df:	8d 90 c8 c8 22 10    	lea    edx,[eax+0x1022c8c8]
101001e5:	8a 80 d8 c8 22 10    	mov    al,BYTE PTR [eax+0x1022c8d8]
101001eb:	84 c0                	test   al,al
101001ed:	0f 84 ba 00 00 00    	je     0x101002ad
101001f3:	0f b6 c0             	movzx  eax,al
101001f6:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
101001f9:	39 45 10             	cmp    DWORD PTR [ebp+0x10],eax
101001fc:	7c 04                	jl     0x10100202
101001fe:	48                   	dec    eax
101001ff:	89 45 10             	mov    DWORD PTR [ebp+0x10],eax
10100202:	56                   	push   esi
10100203:	b8 21 00 00 00       	mov    eax,0x21
10100208:	8b f2                	mov    esi,edx
1010020a:	57                   	push   edi
1010020b:	66 89 03             	mov    WORD PTR [ebx],ax
1010020e:	66 90                	xchg   ax,ax
10100210:	8a 02                	mov    al,BYTE PTR [edx]
10100212:	42                   	inc    edx
10100213:	84 c0                	test   al,al
10100215:	75 f9                	jne    0x10100210
10100217:	2b d6                	sub    edx,esi
10100219:	8d 7b ff             	lea    edi,[ebx-0x1]
1010021c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10100220:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
10100223:	47                   	inc    edi
10100224:	84 c0                	test   al,al
10100226:	75 f8                	jne    0x10100220
10100228:	ff 75 10             	push   DWORD PTR [ebp+0x10]
1010022b:	8b ca                	mov    ecx,edx
1010022d:	8d 45 f4             	lea    eax,[ebp-0xc]
10100230:	c1 e9 02             	shr    ecx,0x2
10100233:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10100235:	8b ca                	mov    ecx,edx
10100237:	83 e1 03             	and    ecx,0x3
1010023a:	68 cc 20 1c 10       	push   0x101c20cc
1010023f:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
10100241:	50                   	push   eax
10100242:	e8 19 ef f1 ff       	call   0x1001f160
10100247:	8d 55 f4             	lea    edx,[ebp-0xc]
1010024a:	83 c4 0c             	add    esp,0xc
1010024d:	8b f2                	mov    esi,edx
1010024f:	90                   	nop
10100250:	8a 02                	mov    al,BYTE PTR [edx]
10100252:	42                   	inc    edx
10100253:	84 c0                	test   al,al
10100255:	75 f9                	jne    0x10100250
10100257:	2b d6                	sub    edx,esi
10100259:	4b                   	dec    ebx
1010025a:	66 0f 1f 44 00 00    	nop    WORD PTR [eax+eax*1+0x0]
10100260:	8a 43 01             	mov    al,BYTE PTR [ebx+0x1]
10100263:	43                   	inc    ebx
10100264:	84 c0                	test   al,al
10100266:	75 f8                	jne    0x10100260
10100268:	8b ca                	mov    ecx,edx
1010026a:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
1010026d:	c1 e9 02             	shr    ecx,0x2
10100270:	8b fb                	mov    edi,ebx
10100272:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10100274:	8b ca                	mov    ecx,edx
10100276:	83 e1 03             	and    ecx,0x3
10100279:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
1010027b:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
1010027e:	5f                   	pop    edi
1010027f:	5e                   	pop    esi
10100280:	3b c8                	cmp    ecx,eax
10100282:	7c 17                	jl     0x1010029b
10100284:	33 c9                	xor    ecx,ecx
10100286:	39 4d 14             	cmp    DWORD PTR [ebp+0x14],ecx
10100289:	5b                   	pop    ebx
1010028a:	0f 45 c1             	cmovne eax,ecx
1010028d:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10100290:	33 cd                	xor    ecx,ebp
10100292:	e8 1c d9 03 00       	call   0x1013dbb3
10100297:	8b e5                	mov    esp,ebp
10100299:	5d                   	pop    ebp
1010029a:	c3                   	ret
1010029b:	8d 41 01             	lea    eax,[ecx+0x1]
1010029e:	5b                   	pop    ebx
1010029f:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
101002a2:	33 cd                	xor    ecx,ebp
101002a4:	e8 0a d9 03 00       	call   0x1013dbb3
101002a9:	8b e5                	mov    esp,ebp
101002ab:	5d                   	pop    ebp
101002ac:	c3                   	ret
101002ad:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
101002b0:	83 c8 ff             	or     eax,0xffffffff
101002b3:	33 cd                	xor    ecx,ebp
101002b5:	5b                   	pop    ebx
101002b6:	e8 f8 d8 03 00       	call   0x1013dbb3
101002bb:	8b e5                	mov    esp,ebp
101002bd:	5d                   	pop    ebp
101002be:	c3                   	ret
