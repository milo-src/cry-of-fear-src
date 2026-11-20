
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100772e0 <.text+0x762e0>:
100772e0:	55                   	push   ebp
100772e1:	8b ec                	mov    ebp,esp
100772e3:	53                   	push   ebx
100772e4:	56                   	push   esi
100772e5:	57                   	push   edi
100772e6:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100772e9:	8b d9                	mov    ebx,ecx
100772eb:	ba 9c b2 1b 10       	mov    edx,0x101bb29c
100772f0:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100772f3:	8b c6                	mov    eax,esi
100772f5:	8a 08                	mov    cl,BYTE PTR [eax]
100772f7:	3a 0a                	cmp    cl,BYTE PTR [edx]
100772f9:	75 1a                	jne    0x10077315
100772fb:	84 c9                	test   cl,cl
100772fd:	74 12                	je     0x10077311
100772ff:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
10077302:	3a 4a 01             	cmp    cl,BYTE PTR [edx+0x1]
10077305:	75 0e                	jne    0x10077315
10077307:	83 c0 02             	add    eax,0x2
1007730a:	83 c2 02             	add    edx,0x2
1007730d:	84 c9                	test   cl,cl
1007730f:	75 e4                	jne    0x100772f5
10077311:	33 c0                	xor    eax,eax
10077313:	eb 05                	jmp    0x1007731a
10077315:	1b c0                	sbb    eax,eax
10077317:	83 c8 01             	or     eax,0x1
1007731a:	85 c0                	test   eax,eax
1007731c:	75 1f                	jne    0x1007733d
1007731e:	ff 77 08             	push   DWORD PTR [edi+0x8]
10077321:	e8 c6 82 0f 00       	call   0x1016f5ec
10077326:	83 c4 04             	add    esp,0x4
10077329:	d9 9b dc 00 00 00    	fstp   DWORD PTR [ebx+0xdc]
1007732f:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10077336:	5f                   	pop    edi
10077337:	5e                   	pop    esi
10077338:	5b                   	pop    ebx
10077339:	5d                   	pop    ebp
1007733a:	c2 04 00             	ret    0x4
1007733d:	b9 7c 24 1a 10       	mov    ecx,0x101a247c
10077342:	8b c6                	mov    eax,esi
10077344:	8a 10                	mov    dl,BYTE PTR [eax]
10077346:	3a 11                	cmp    dl,BYTE PTR [ecx]
10077348:	75 1a                	jne    0x10077364
1007734a:	84 d2                	test   dl,dl
1007734c:	74 12                	je     0x10077360
1007734e:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10077351:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10077354:	75 0e                	jne    0x10077364
10077356:	83 c0 02             	add    eax,0x2
10077359:	83 c1 02             	add    ecx,0x2
1007735c:	84 d2                	test   dl,dl
1007735e:	75 e4                	jne    0x10077344
10077360:	33 c0                	xor    eax,eax
10077362:	eb 05                	jmp    0x10077369
10077364:	1b c0                	sbb    eax,eax
10077366:	83 c8 01             	or     eax,0x1
10077369:	85 c0                	test   eax,eax
1007736b:	75 1d                	jne    0x1007738a
1007736d:	ff 77 08             	push   DWORD PTR [edi+0x8]
10077370:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
10077376:	83 c4 04             	add    esp,0x4
10077379:	89 43 18             	mov    DWORD PTR [ebx+0x18],eax
1007737c:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
10077383:	5f                   	pop    edi
10077384:	5e                   	pop    esi
10077385:	5b                   	pop    ebx
10077386:	5d                   	pop    ebp
10077387:	c2 04 00             	ret    0x4
1007738a:	b9 88 24 1a 10       	mov    ecx,0x101a2488
1007738f:	8b c6                	mov    eax,esi
10077391:	8a 10                	mov    dl,BYTE PTR [eax]
10077393:	3a 11                	cmp    dl,BYTE PTR [ecx]
10077395:	75 1a                	jne    0x100773b1
10077397:	84 d2                	test   dl,dl
10077399:	74 12                	je     0x100773ad
1007739b:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1007739e:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
100773a1:	75 0e                	jne    0x100773b1
100773a3:	83 c0 02             	add    eax,0x2
100773a6:	83 c1 02             	add    ecx,0x2
100773a9:	84 d2                	test   dl,dl
100773ab:	75 e4                	jne    0x10077391
100773ad:	33 c0                	xor    eax,eax
100773af:	eb 05                	jmp    0x100773b6
100773b1:	1b c0                	sbb    eax,eax
100773b3:	83 c8 01             	or     eax,0x1
100773b6:	85 c0                	test   eax,eax
100773b8:	75 1c                	jne    0x100773d6
100773ba:	ff 77 08             	push   DWORD PTR [edi+0x8]
100773bd:	e8 9c 41 0f 00       	call   0x1016b55e
100773c2:	83 c4 04             	add    esp,0x4
100773c5:	89 43 60             	mov    DWORD PTR [ebx+0x60],eax
100773c8:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
100773cf:	5f                   	pop    edi
100773d0:	5e                   	pop    esi
100773d1:	5b                   	pop    ebx
100773d2:	5d                   	pop    ebp
100773d3:	c2 04 00             	ret    0x4
100773d6:	b8 90 24 1a 10       	mov    eax,0x101a2490
100773db:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100773e0:	8a 0e                	mov    cl,BYTE PTR [esi]
100773e2:	3a 08                	cmp    cl,BYTE PTR [eax]
100773e4:	75 1a                	jne    0x10077400
100773e6:	84 c9                	test   cl,cl
100773e8:	74 12                	je     0x100773fc
100773ea:	8a 4e 01             	mov    cl,BYTE PTR [esi+0x1]
100773ed:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
100773f0:	75 0e                	jne    0x10077400
100773f2:	83 c6 02             	add    esi,0x2
100773f5:	83 c0 02             	add    eax,0x2
100773f8:	84 c9                	test   cl,cl
100773fa:	75 e4                	jne    0x100773e0
100773fc:	33 c0                	xor    eax,eax
100773fe:	eb 05                	jmp    0x10077405
10077400:	1b c0                	sbb    eax,eax
10077402:	83 c8 01             	or     eax,0x1
10077405:	85 c0                	test   eax,eax
10077407:	75 1c                	jne    0x10077425
10077409:	ff 77 08             	push   DWORD PTR [edi+0x8]
1007740c:	e8 4d 41 0f 00       	call   0x1016b55e
10077411:	83 c4 04             	add    esp,0x4
10077414:	89 43 64             	mov    DWORD PTR [ebx+0x64],eax
10077417:	c7 47 0c 01 00 00 00 	mov    DWORD PTR [edi+0xc],0x1
1007741e:	5f                   	pop    edi
1007741f:	5e                   	pop    esi
10077420:	5b                   	pop    ebx
10077421:	5d                   	pop    ebp
10077422:	c2 04 00             	ret    0x4
10077425:	c7 47 0c 00 00 00 00 	mov    DWORD PTR [edi+0xc],0x0
1007742c:	5f                   	pop    edi
1007742d:	5e                   	pop    esi
1007742e:	5b                   	pop    ebx
1007742f:	5d                   	pop    ebp
10077430:	c2 04 00             	ret    0x4
