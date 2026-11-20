
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fe300 <.text+0xfd300>:
100fe300:	55                   	push   ebp
100fe301:	8b ec                	mov    ebp,esp
100fe303:	83 ec 10             	sub    esp,0x10
100fe306:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100fe30b:	33 c5                	xor    eax,ebp
100fe30d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100fe310:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100fe313:	53                   	push   ebx
100fe314:	56                   	push   esi
100fe315:	33 db                	xor    ebx,ebx
100fe317:	57                   	push   edi
100fe318:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
100fe31b:	39 1d c0 c8 22 10    	cmp    DWORD PTR ds:0x1022c8c0,ebx
100fe321:	7e 2a                	jle    0x100fe34d
100fe323:	40                   	inc    eax
100fe324:	be c0 68 22 10       	mov    esi,0x102268c0
100fe329:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100fe32c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100fe330:	50                   	push   eax
100fe331:	56                   	push   esi
100fe332:	e8 84 d9 07 00       	call   0x1017bcbb
100fe337:	83 c4 08             	add    esp,0x8
100fe33a:	85 c0                	test   eax,eax
100fe33c:	74 23                	je     0x100fe361
100fe33e:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
100fe341:	43                   	inc    ebx
100fe342:	83 c6 10             	add    esi,0x10
100fe345:	3b 1d c0 c8 22 10    	cmp    ebx,DWORD PTR ds:0x1022c8c0
100fe34b:	7c e3                	jl     0x100fe330
100fe34d:	5f                   	pop    edi
100fe34e:	5e                   	pop    esi
100fe34f:	83 c8 ff             	or     eax,0xffffffff
100fe352:	5b                   	pop    ebx
100fe353:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100fe356:	33 cd                	xor    ecx,ebp
100fe358:	e8 56 f8 03 00       	call   0x1013dbb3
100fe35d:	8b e5                	mov    esp,ebp
100fe35f:	5d                   	pop    ebp
100fe360:	c3                   	ret
100fe361:	85 ff                	test   edi,edi
100fe363:	74 41                	je     0x100fe3a6
100fe365:	b8 21 00 00 00       	mov    eax,0x21
100fe36a:	53                   	push   ebx
100fe36b:	66 89 07             	mov    WORD PTR [edi],ax
100fe36e:	8d 45 f4             	lea    eax,[ebp-0xc]
100fe371:	68 cc 20 1c 10       	push   0x101c20cc
100fe376:	50                   	push   eax
100fe377:	e8 e4 0d f2 ff       	call   0x1001f160
100fe37c:	8d 55 f4             	lea    edx,[ebp-0xc]
100fe37f:	83 c4 0c             	add    esp,0xc
100fe382:	8b f2                	mov    esi,edx
100fe384:	8a 02                	mov    al,BYTE PTR [edx]
100fe386:	42                   	inc    edx
100fe387:	84 c0                	test   al,al
100fe389:	75 f9                	jne    0x100fe384
100fe38b:	2b d6                	sub    edx,esi
100fe38d:	4f                   	dec    edi
100fe38e:	66 90                	xchg   ax,ax
100fe390:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100fe393:	47                   	inc    edi
100fe394:	84 c0                	test   al,al
100fe396:	75 f8                	jne    0x100fe390
100fe398:	8b ca                	mov    ecx,edx
100fe39a:	c1 e9 02             	shr    ecx,0x2
100fe39d:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100fe39f:	8b ca                	mov    ecx,edx
100fe3a1:	83 e1 03             	and    ecx,0x3
100fe3a4:	f3 a4                	rep movs BYTE PTR es:[edi],BYTE PTR ds:[esi]
100fe3a6:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100fe3a9:	8b c3                	mov    eax,ebx
100fe3ab:	5f                   	pop    edi
100fe3ac:	5e                   	pop    esi
100fe3ad:	33 cd                	xor    ecx,ebp
100fe3af:	5b                   	pop    ebx
100fe3b0:	e8 fe f7 03 00       	call   0x1013dbb3
100fe3b5:	8b e5                	mov    esp,ebp
100fe3b7:	5d                   	pop    ebp
100fe3b8:	c3                   	ret
