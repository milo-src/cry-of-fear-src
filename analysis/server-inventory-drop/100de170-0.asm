
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100de170 <.text+0xdd170>:
100de170:	55                   	push   ebp
100de171:	8b ec                	mov    ebp,esp
100de173:	83 ec 08             	sub    esp,0x8
100de176:	53                   	push   ebx
100de177:	56                   	push   esi
100de178:	57                   	push   edi
100de179:	8b f9                	mov    edi,ecx
100de17b:	c6 45 ff 00          	mov    BYTE PTR [ebp-0x1],0x0
100de17f:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100de182:	8b d1                	mov    edx,ecx
100de184:	8d 72 01             	lea    esi,[edx+0x1]
100de187:	8a 02                	mov    al,BYTE PTR [edx]
100de189:	42                   	inc    edx
100de18a:	84 c0                	test   al,al
100de18c:	75 f9                	jne    0x100de187
100de18e:	2b d6                	sub    edx,esi
100de190:	bb 00 00 00 00       	mov    ebx,0x0
100de195:	0f 45 d9             	cmovne ebx,ecx
100de198:	33 c0                	xor    eax,eax
100de19a:	8d 8f 14 25 00 00    	lea    ecx,[edi+0x2514]
100de1a0:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100de1a3:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100de1a6:	8b 31                	mov    esi,DWORD PTR [ecx]
100de1a8:	85 f6                	test   esi,esi
100de1aa:	74 5a                	je     0x100de206
100de1ac:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100de1b0:	85 db                	test   ebx,ebx
100de1b2:	74 6a                	je     0x100de21e
100de1b4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de1b7:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100de1bd:	8b 00                	mov    eax,DWORD PTR [eax]
100de1bf:	03 81 98 00 00 00    	add    eax,DWORD PTR [ecx+0x98]
100de1c5:	8b cb                	mov    ecx,ebx
100de1c7:	8a 11                	mov    dl,BYTE PTR [ecx]
100de1c9:	3a 10                	cmp    dl,BYTE PTR [eax]
100de1cb:	75 1a                	jne    0x100de1e7
100de1cd:	84 d2                	test   dl,dl
100de1cf:	74 12                	je     0x100de1e3
100de1d1:	8a 51 01             	mov    dl,BYTE PTR [ecx+0x1]
100de1d4:	3a 50 01             	cmp    dl,BYTE PTR [eax+0x1]
100de1d7:	75 0e                	jne    0x100de1e7
100de1d9:	83 c1 02             	add    ecx,0x2
100de1dc:	83 c0 02             	add    eax,0x2
100de1df:	84 d2                	test   dl,dl
100de1e1:	75 e4                	jne    0x100de1c7
100de1e3:	33 c0                	xor    eax,eax
100de1e5:	eb 05                	jmp    0x100de1ec
100de1e7:	1b c0                	sbb    eax,eax
100de1e9:	83 c8 01             	or     eax,0x1
100de1ec:	85 c0                	test   eax,eax
100de1ee:	75 36                	jne    0x100de226
100de1f0:	3b b7 2c 25 00 00    	cmp    esi,DWORD PTR [edi+0x252c]
100de1f6:	75 04                	jne    0x100de1fc
100de1f8:	c6 45 ff 01          	mov    BYTE PTR [ebp-0x1],0x1
100de1fc:	85 f6                	test   esi,esi
100de1fe:	75 32                	jne    0x100de232
100de200:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
100de203:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100de206:	40                   	inc    eax
100de207:	83 c1 04             	add    ecx,0x4
100de20a:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100de20d:	89 4d f8             	mov    DWORD PTR [ebp-0x8],ecx
100de210:	83 f8 06             	cmp    eax,0x6
100de213:	7c 91                	jl     0x100de1a6
100de215:	5f                   	pop    edi
100de216:	5e                   	pop    esi
100de217:	5b                   	pop    ebx
100de218:	8b e5                	mov    esp,ebp
100de21a:	5d                   	pop    ebp
100de21b:	c2 08 00             	ret    0x8
100de21e:	3b b7 2c 25 00 00    	cmp    esi,DWORD PTR [edi+0x252c]
100de224:	74 d2                	je     0x100de1f8
100de226:	8b b6 64 01 00 00    	mov    esi,DWORD PTR [esi+0x164]
100de22c:	85 f6                	test   esi,esi
100de22e:	75 80                	jne    0x100de1b0
100de230:	eb ce                	jmp    0x100de200
100de232:	80 be 78 01 00 00 00 	cmp    BYTE PTR [esi+0x178],0x0
100de239:	74 0a                	je     0x100de245
100de23b:	8b 06                	mov    eax,DWORD PTR [esi]
100de23d:	8b ce                	mov    ecx,esi
100de23f:	ff 90 30 01 00 00    	call   DWORD PTR [eax+0x130]
100de245:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de248:	c7 46 78 00 00 00 00 	mov    DWORD PTR [esi+0x78],0x0
100de24f:	83 b8 50 02 00 00 00 	cmp    DWORD PTR [eax+0x250],0x0
100de256:	0f 84 87 00 00 00    	je     0x100de2e3
100de25c:	80 7d ff 00          	cmp    BYTE PTR [ebp-0x1],0x0
100de260:	74 3a                	je     0x100de29c
100de262:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100de265:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100de26b:	6a 00                	push   0x0
100de26d:	ff 35 cc 64 22 10    	push   DWORD PTR ds:0x102264cc
100de273:	6a 01                	push   0x1
100de275:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100de27b:	6a 00                	push   0x0
100de27d:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100de283:	6a 00                	push   0x0
100de285:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100de28b:	6a 00                	push   0x0
100de28d:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100de293:	83 c4 1c             	add    esp,0x1c
100de296:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100de29c:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
100de29f:	8b 86 68 01 00 00    	mov    eax,DWORD PTR [esi+0x168]
100de2a5:	6a 01                	push   0x1
100de2a7:	8b 8a 6c 01 00 00    	mov    ecx,DWORD PTR [edx+0x16c]
100de2ad:	0f b3 c1             	btr    ecx,eax
100de2b0:	89 8a 6c 01 00 00    	mov    DWORD PTR [edx+0x16c],ecx
100de2b6:	8b cf                	mov    ecx,edi
100de2b8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100de2bd:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100de2c3:	03 86 10 01 00 00    	add    eax,DWORD PTR [esi+0x110]
100de2c9:	50                   	push   eax
100de2ca:	e8 71 3f 00 00       	call   0x100e2240
100de2cf:	8b 07                	mov    eax,DWORD PTR [edi]
100de2d1:	8b cf                	mov    ecx,edi
100de2d3:	56                   	push   esi
100de2d4:	ff 90 90 00 00 00    	call   DWORD PTR [eax+0x90]
100de2da:	5f                   	pop    edi
100de2db:	5e                   	pop    esi
100de2dc:	5b                   	pop    ebx
100de2dd:	8b e5                	mov    esp,ebp
100de2df:	5d                   	pop    ebp
100de2e0:	c2 08 00             	ret    0x8
100de2e3:	83 38 00             	cmp    DWORD PTR [eax],0x0
100de2e6:	0f 84 8f 06 00 00    	je     0x100de97b
100de2ec:	6b 8e 68 01 00 00 2c 	imul   ecx,DWORD PTR [esi+0x168],0x2c
100de2f3:	83 b9 a4 18 23 10 ff 	cmp    DWORD PTR [ecx+0x102318a4],0xffffffff
100de2fa:	75 0d                	jne    0x100de309
100de2fc:	83 b9 90 18 23 10 00 	cmp    DWORD PTR [ecx+0x10231890],0x0
100de303:	0f 85 c9 00 00 00    	jne    0x100de3d2
100de309:	83 be 60 01 00 00 00 	cmp    DWORD PTR [esi+0x160],0x0
100de310:	74 41                	je     0x100de353
100de312:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100de315:	83 c0 74             	add    eax,0x74
100de318:	50                   	push   eax
100de319:	e8 02 b0 03 00       	call   0x10119320
100de31e:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
100de321:	83 c4 04             	add    esp,0x4
100de324:	8b 86 68 01 00 00    	mov    eax,DWORD PTR [esi+0x168]
100de32a:	8b 8a 6c 01 00 00    	mov    ecx,DWORD PTR [edx+0x16c]
100de330:	0f b3 c1             	btr    ecx,eax
100de333:	89 8a 6c 01 00 00    	mov    DWORD PTR [edx+0x16c],ecx
100de339:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
100de33f:	56                   	push   esi
100de340:	8b 01                	mov    eax,DWORD PTR [ecx]
100de342:	ff 90 90 00 00 00    	call   DWORD PTR [eax+0x90]
100de348:	85 c0                	test   eax,eax
100de34a:	0f 84 82 00 00 00    	je     0x100de3d2
100de350:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de353:	81 88 a4 01 00 00 00 	or     DWORD PTR [eax+0x1a4],0x40000000
100de35a:	00 00 40 
100de35d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de360:	c7 80 08 01 00 00 00 	mov    DWORD PTR [eax+0x108],0x0
100de367:	00 00 00 
100de36a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de36d:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
100de374:	00 00 00 
100de377:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de37a:	c7 80 18 01 00 00 80 	mov    DWORD PTR [eax+0x118],0x80
100de381:	00 00 00 
100de384:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de387:	c7 80 b4 00 00 00 00 	mov    DWORD PTR [eax+0xb4],0x0
100de38e:	00 00 00 
100de391:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de394:	c7 80 b8 00 00 00 00 	mov    DWORD PTR [eax+0xb8],0x0
100de39b:	00 00 00 
100de39e:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100de3a1:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100de3a4:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100de3aa:	89 81 9c 01 00 00    	mov    DWORD PTR [ecx+0x19c],eax
100de3b0:	c7 86 14 01 00 00 00 	mov    DWORD PTR [esi+0x114],0x0
100de3b7:	00 00 00 
100de3ba:	c7 86 60 01 00 00 00 	mov    DWORD PTR [esi+0x160],0x0
100de3c1:	00 00 00 
100de3c4:	c7 46 7c 00 00 00 00 	mov    DWORD PTR [esi+0x7c],0x0
100de3cb:	c7 46 78 00 00 00 00 	mov    DWORD PTR [esi+0x78],0x0
100de3d2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de3d5:	f3 0f 10 80 b4 01 00 	movss  xmm0,DWORD PTR [eax+0x1b4]
100de3dc:	00 
100de3dd:	0f 2e 05 80 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1380
100de3e4:	9f                   	lahf
100de3e5:	f6 c4 44             	test   ah,0x44
100de3e8:	7a 09                	jp     0x100de3f3
100de3ea:	56                   	push   esi
100de3eb:	e8 10 b5 03 00       	call   0x10119900
100de3f0:	83 c4 04             	add    esp,0x4
100de3f3:	6b 86 68 01 00 00 2c 	imul   eax,DWORD PTR [esi+0x168],0x2c
100de3fa:	83 b8 a4 18 23 10 ff 	cmp    DWORD PTR [eax+0x102318a4],0xffffffff
100de401:	0f 85 a6 04 00 00    	jne    0x100de8ad
100de407:	83 b8 90 18 23 10 00 	cmp    DWORD PTR [eax+0x10231890],0x0
100de40e:	0f 84 99 04 00 00    	je     0x100de8ad
100de414:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de417:	ba bc c2 1a 10       	mov    edx,0x101ac2bc
100de41c:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
100de422:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100de428:	f7 d9                	neg    ecx
100de42a:	1b c9                	sbb    ecx,ecx
100de42c:	23 c8                	and    ecx,eax
100de42e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100de433:	8b 09                	mov    ecx,DWORD PTR [ecx]
100de435:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100de43b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100de440:	8a 01                	mov    al,BYTE PTR [ecx]
100de442:	3a 02                	cmp    al,BYTE PTR [edx]
100de444:	75 1a                	jne    0x100de460
100de446:	84 c0                	test   al,al
100de448:	74 12                	je     0x100de45c
100de44a:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100de44d:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100de450:	75 0e                	jne    0x100de460
100de452:	83 c1 02             	add    ecx,0x2
100de455:	83 c2 02             	add    edx,0x2
100de458:	84 c0                	test   al,al
100de45a:	75 e4                	jne    0x100de440
100de45c:	33 c0                	xor    eax,eax
100de45e:	eb 05                	jmp    0x100de465
100de460:	1b c0                	sbb    eax,eax
100de462:	83 c8 01             	or     eax,0x1
100de465:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
100de468:	85 c0                	test   eax,eax
100de46a:	0f 85 9b 01 00 00    	jne    0x100de60b
100de470:	ff 76 04             	push   DWORD PTR [esi+0x4]
100de473:	e8 68 c0 f9 ff       	call   0x1007a4e0
100de478:	8b 80 dc 01 00 00    	mov    eax,DWORD PTR [eax+0x1dc]
100de47e:	ff 8c 87 40 25 00 00 	dec    DWORD PTR [edi+eax*4+0x2540]
100de485:	ff 76 04             	push   DWORD PTR [esi+0x4]
100de488:	e8 53 c0 f9 ff       	call   0x1007a4e0
100de48d:	83 c4 08             	add    esp,0x8
100de490:	8b 80 dc 01 00 00    	mov    eax,DWORD PTR [eax+0x1dc]
100de496:	83 bc 87 40 25 00 00 	cmp    DWORD PTR [edi+eax*4+0x2540],0x0
100de49d:	00 
100de49e:	7d 1c                	jge    0x100de4bc
100de4a0:	ff 76 04             	push   DWORD PTR [esi+0x4]
100de4a3:	e8 38 c0 f9 ff       	call   0x1007a4e0
100de4a8:	83 c4 04             	add    esp,0x4
100de4ab:	8b 80 dc 01 00 00    	mov    eax,DWORD PTR [eax+0x1dc]
100de4b1:	c7 84 87 40 25 00 00 	mov    DWORD PTR [edi+eax*4+0x2540],0x0
100de4b8:	00 00 00 00 
100de4bc:	8b 0d b8 65 22 10    	mov    ecx,DWORD PTR ds:0x102265b8
100de4c2:	85 c9                	test   ecx,ecx
100de4c4:	74 72                	je     0x100de538
100de4c6:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100de4c9:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100de4cf:	6a 00                	push   0x0
100de4d1:	51                   	push   ecx
100de4d2:	6a 01                	push   0x1
100de4d4:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100de4da:	ff b6 68 01 00 00    	push   DWORD PTR [esi+0x168]
100de4e0:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100de4e6:	6b 86 68 01 00 00 2c 	imul   eax,DWORD PTR [esi+0x168],0x2c
100de4ed:	ff b0 a4 18 23 10    	push   DWORD PTR [eax+0x102318a4]
100de4f3:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100de4f9:	ff 76 04             	push   DWORD PTR [esi+0x4]
100de4fc:	e8 df bf f9 ff       	call   0x1007a4e0
100de501:	8b 80 dc 01 00 00    	mov    eax,DWORD PTR [eax+0x1dc]
100de507:	ff b4 87 40 25 00 00 	push   DWORD PTR [edi+eax*4+0x2540]
100de50e:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100de514:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100de51a:	ff 76 04             	push   DWORD PTR [esi+0x4]
100de51d:	e8 1e 9f f3 ff       	call   0x10018440
100de522:	83 c4 24             	add    esp,0x24
100de525:	8b 80 dc 01 00 00    	mov    eax,DWORD PTR [eax+0x1dc]
100de52b:	8b 84 87 40 25 00 00 	mov    eax,DWORD PTR [edi+eax*4+0x2540]
100de532:	89 86 20 01 00 00    	mov    DWORD PTR [esi+0x120],eax
100de538:	ff 76 04             	push   DWORD PTR [esi+0x4]
100de53b:	e8 a0 bf f9 ff       	call   0x1007a4e0
100de540:	83 c4 04             	add    esp,0x4
100de543:	8b 80 dc 01 00 00    	mov    eax,DWORD PTR [eax+0x1dc]
100de549:	83 bc 87 40 25 00 00 	cmp    DWORD PTR [edi+eax*4+0x2540],0x1
100de550:	01 
100de551:	7d 72                	jge    0x100de5c5
100de553:	ff 76 04             	push   DWORD PTR [esi+0x4]
100de556:	e8 85 bf f9 ff       	call   0x1007a4e0
100de55b:	83 c4 04             	add    esp,0x4
100de55e:	8b c8                	mov    ecx,eax
100de560:	e8 ab c1 f9 ff       	call   0x1007a710
100de565:	85 db                	test   ebx,ebx
100de567:	74 0a                	je     0x100de573
100de569:	6a 00                	push   0x0
100de56b:	53                   	push   ebx
100de56c:	8b cf                	mov    ecx,edi
100de56e:	e8 1d f4 ff ff       	call   0x100dd990
100de573:	ff 76 04             	push   DWORD PTR [esi+0x4]
100de576:	e8 65 bf f9 ff       	call   0x1007a4e0
100de57b:	83 c4 04             	add    esp,0x4
100de57e:	80 7d ff 00          	cmp    BYTE PTR [ebp-0x1],0x0
100de582:	c6 80 fc 01 00 00 01 	mov    BYTE PTR [eax+0x1fc],0x1
100de589:	74 3a                	je     0x100de5c5
100de58b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100de58e:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100de594:	6a 00                	push   0x0
100de596:	ff 35 cc 64 22 10    	push   DWORD PTR ds:0x102264cc
100de59c:	6a 01                	push   0x1
100de59e:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100de5a4:	6a 00                	push   0x0
100de5a6:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100de5ac:	6a 00                	push   0x0
100de5ae:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100de5b4:	6a 00                	push   0x0
100de5b6:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100de5bc:	83 c4 1c             	add    esp,0x1c
100de5bf:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100de5c5:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100de5c8:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100de5ce:	8d 41 50             	lea    eax,[ecx+0x50]
100de5d1:	50                   	push   eax
100de5d2:	8d 41 08             	lea    eax,[ecx+0x8]
100de5d5:	50                   	push   eax
100de5d6:	68 bc c2 1a 10       	push   0x101ac2bc
100de5db:	e8 70 93 f3 ff       	call   0x10017950
100de5e0:	8b d8                	mov    ebx,eax
100de5e2:	83 c4 10             	add    esp,0x10
100de5e5:	85 db                	test   ebx,ebx
100de5e7:	74 1f                	je     0x100de608
100de5e9:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100de5ec:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100de5f2:	ff 15 b0 2f 22 10    	call   DWORD PTR ds:0x10222fb0
100de5f8:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100de5fb:	83 c4 04             	add    esp,0x4
100de5fe:	c7 80 c0 01 00 00 00 	mov    DWORD PTR [eax+0x1c0],0x44268000
100de605:	80 26 44 
100de608:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
100de60b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de60e:	ba b8 8a 1a 10       	mov    edx,0x101a8ab8
100de613:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
100de619:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100de61f:	f7 d9                	neg    ecx
100de621:	1b c9                	sbb    ecx,ecx
100de623:	23 c8                	and    ecx,eax
100de625:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100de62a:	8b 09                	mov    ecx,DWORD PTR [ecx]
100de62c:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100de632:	8a 01                	mov    al,BYTE PTR [ecx]
100de634:	3a 02                	cmp    al,BYTE PTR [edx]
100de636:	75 1a                	jne    0x100de652
100de638:	84 c0                	test   al,al
100de63a:	74 12                	je     0x100de64e
100de63c:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100de63f:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100de642:	75 0e                	jne    0x100de652
100de644:	83 c1 02             	add    ecx,0x2
100de647:	83 c2 02             	add    edx,0x2
100de64a:	84 c0                	test   al,al
100de64c:	75 e4                	jne    0x100de632
100de64e:	33 c0                	xor    eax,eax
100de650:	eb 05                	jmp    0x100de657
100de652:	1b c0                	sbb    eax,eax
100de654:	83 c8 01             	or     eax,0x1
100de657:	85 c0                	test   eax,eax
100de659:	0f 85 1c 03 00 00    	jne    0x100de97b
100de65f:	ff 76 04             	push   DWORD PTR [esi+0x4]
100de662:	e8 79 a0 f3 ff       	call   0x100186e0
100de667:	8b 80 dc 01 00 00    	mov    eax,DWORD PTR [eax+0x1dc]
100de66d:	ff 8c 87 40 25 00 00 	dec    DWORD PTR [edi+eax*4+0x2540]
100de674:	ff 76 04             	push   DWORD PTR [esi+0x4]
100de677:	e8 64 a0 f3 ff       	call   0x100186e0
100de67c:	83 c4 08             	add    esp,0x8
100de67f:	8b 80 dc 01 00 00    	mov    eax,DWORD PTR [eax+0x1dc]
100de685:	83 bc 87 40 25 00 00 	cmp    DWORD PTR [edi+eax*4+0x2540],0x0
100de68c:	00 
100de68d:	7d 1c                	jge    0x100de6ab
100de68f:	ff 76 04             	push   DWORD PTR [esi+0x4]
100de692:	e8 49 a0 f3 ff       	call   0x100186e0
100de697:	83 c4 04             	add    esp,0x4
100de69a:	8b 80 dc 01 00 00    	mov    eax,DWORD PTR [eax+0x1dc]
100de6a0:	c7 84 87 40 25 00 00 	mov    DWORD PTR [edi+eax*4+0x2540],0x0
100de6a7:	00 00 00 00 
100de6ab:	8b 0d b8 65 22 10    	mov    ecx,DWORD PTR ds:0x102265b8
100de6b1:	85 c9                	test   ecx,ecx
100de6b3:	74 72                	je     0x100de727
100de6b5:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100de6b8:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100de6be:	6a 00                	push   0x0
100de6c0:	51                   	push   ecx
100de6c1:	6a 01                	push   0x1
100de6c3:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100de6c9:	ff b6 68 01 00 00    	push   DWORD PTR [esi+0x168]
100de6cf:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100de6d5:	6b 86 68 01 00 00 2c 	imul   eax,DWORD PTR [esi+0x168],0x2c
100de6dc:	ff b0 a4 18 23 10    	push   DWORD PTR [eax+0x102318a4]
100de6e2:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100de6e8:	ff 76 04             	push   DWORD PTR [esi+0x4]
100de6eb:	e8 f0 9f f3 ff       	call   0x100186e0
100de6f0:	8b 80 dc 01 00 00    	mov    eax,DWORD PTR [eax+0x1dc]
100de6f6:	ff b4 87 40 25 00 00 	push   DWORD PTR [edi+eax*4+0x2540]
100de6fd:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100de703:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100de709:	ff 76 04             	push   DWORD PTR [esi+0x4]
100de70c:	e8 2f 9d f3 ff       	call   0x10018440
100de711:	83 c4 24             	add    esp,0x24
100de714:	8b 80 dc 01 00 00    	mov    eax,DWORD PTR [eax+0x1dc]
100de71a:	8b 84 87 40 25 00 00 	mov    eax,DWORD PTR [edi+eax*4+0x2540]
100de721:	89 86 20 01 00 00    	mov    DWORD PTR [esi+0x120],eax
100de727:	ff 76 04             	push   DWORD PTR [esi+0x4]
100de72a:	e8 b1 9f f3 ff       	call   0x100186e0
100de72f:	83 c4 04             	add    esp,0x4
100de732:	8b 80 dc 01 00 00    	mov    eax,DWORD PTR [eax+0x1dc]
100de738:	83 bc 87 40 25 00 00 	cmp    DWORD PTR [edi+eax*4+0x2540],0x0
100de73f:	00 
100de740:	0f 8f 96 00 00 00    	jg     0x100de7dc
100de746:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
100de749:	8b 86 68 01 00 00    	mov    eax,DWORD PTR [esi+0x168]
100de74f:	6a 01                	push   0x1
100de751:	8b 8a 6c 01 00 00    	mov    ecx,DWORD PTR [edx+0x16c]
100de757:	0f b3 c1             	btr    ecx,eax
100de75a:	89 8a 6c 01 00 00    	mov    DWORD PTR [edx+0x16c],ecx
100de760:	8b cf                	mov    ecx,edi
100de762:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100de767:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100de76d:	03 86 10 01 00 00    	add    eax,DWORD PTR [esi+0x110]
100de773:	50                   	push   eax
100de774:	e8 c7 3a 00 00       	call   0x100e2240
100de779:	8b 07                	mov    eax,DWORD PTR [edi]
100de77b:	8b cf                	mov    ecx,edi
100de77d:	56                   	push   esi
100de77e:	ff 90 90 00 00 00    	call   DWORD PTR [eax+0x90]
100de784:	80 7d ff 00          	cmp    BYTE PTR [ebp-0x1],0x0
100de788:	74 3a                	je     0x100de7c4
100de78a:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100de78d:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100de793:	6a 00                	push   0x0
100de795:	ff 35 cc 64 22 10    	push   DWORD PTR ds:0x102264cc
100de79b:	6a 01                	push   0x1
100de79d:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100de7a3:	6a 00                	push   0x0
100de7a5:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100de7ab:	6a 00                	push   0x0
100de7ad:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100de7b3:	6a 00                	push   0x0
100de7b5:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100de7bb:	83 c4 1c             	add    esp,0x1c
100de7be:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100de7c4:	8b 06                	mov    eax,DWORD PTR [esi]
100de7c6:	8b ce                	mov    ecx,esi
100de7c8:	ff 90 60 01 00 00    	call   DWORD PTR [eax+0x160]
100de7ce:	85 db                	test   ebx,ebx
100de7d0:	74 0a                	je     0x100de7dc
100de7d2:	6a 00                	push   0x0
100de7d4:	53                   	push   ebx
100de7d5:	8b cf                	mov    ecx,edi
100de7d7:	e8 b4 f1 ff ff       	call   0x100dd990
100de7dc:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100de7df:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100de7e5:	8d 41 50             	lea    eax,[ecx+0x50]
100de7e8:	50                   	push   eax
100de7e9:	8d 41 08             	lea    eax,[ecx+0x8]
100de7ec:	50                   	push   eax
100de7ed:	68 b8 8a 1a 10       	push   0x101a8ab8
100de7f2:	e8 59 91 f3 ff       	call   0x10017950
100de7f7:	8b d8                	mov    ebx,eax
100de7f9:	83 c4 10             	add    esp,0x10
100de7fc:	85 db                	test   ebx,ebx
100de7fe:	0f 84 77 01 00 00    	je     0x100de97b
100de804:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100de807:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100de80d:	ff 15 b0 2f 22 10    	call   DWORD PTR ds:0x10222fb0
100de813:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100de816:	c7 80 c0 01 00 00 00 	mov    DWORD PTR [eax+0x1c0],0x44268000
100de81d:	80 26 44 
100de820:	ff 76 04             	push   DWORD PTR [esi+0x4]
100de823:	e8 b8 9e f3 ff       	call   0x100186e0
100de828:	83 c4 08             	add    esp,0x8
100de82b:	8b 80 dc 01 00 00    	mov    eax,DWORD PTR [eax+0x1dc]
100de831:	83 bc 87 40 25 00 00 	cmp    DWORD PTR [edi+eax*4+0x2540],0x0
100de838:	00 
100de839:	0f 8f 3c 01 00 00    	jg     0x100de97b
100de83f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de842:	8b 88 48 02 00 00    	mov    ecx,DWORD PTR [eax+0x248]
100de848:	85 c9                	test   ecx,ecx
100de84a:	0f 8e 2b 01 00 00    	jle    0x100de97b
100de850:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100de853:	89 88 48 02 00 00    	mov    DWORD PTR [eax+0x248],ecx
100de859:	33 c0                	xor    eax,eax
100de85b:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100de85e:	83 b9 48 02 00 00 01 	cmp    DWORD PTR [ecx+0x248],0x1
100de865:	0f 94 c0             	sete   al
100de868:	89 81 14 01 00 00    	mov    DWORD PTR [ecx+0x114],eax
100de86e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100de873:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100de876:	8b 00                	mov    eax,DWORD PTR [eax]
100de878:	89 81 b8 01 00 00    	mov    DWORD PTR [ecx+0x1b8],eax
100de87e:	8b cb                	mov    ecx,ebx
100de880:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100de883:	c7 80 9c 01 00 00 00 	mov    DWORD PTR [eax+0x19c],0x0
100de88a:	00 00 00 
100de88d:	8b 03                	mov    eax,DWORD PTR [ebx]
100de88f:	ff 50 2c             	call   DWORD PTR [eax+0x2c]
100de892:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de895:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100de898:	5f                   	pop    edi
100de899:	5e                   	pop    esi
100de89a:	8b 80 08 02 00 00    	mov    eax,DWORD PTR [eax+0x208]
100de8a0:	89 81 08 02 00 00    	mov    DWORD PTR [ecx+0x208],eax
100de8a6:	5b                   	pop    ebx
100de8a7:	8b e5                	mov    esp,ebp
100de8a9:	5d                   	pop    ebp
100de8aa:	c2 08 00             	ret    0x8
100de8ad:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100de8b0:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100de8b3:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
100de8b8:	66 0f d6 41 08       	movq   QWORD PTR [ecx+0x8],xmm0
100de8bd:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
100de8c0:	89 41 10             	mov    DWORD PTR [ecx+0x10],eax
100de8c3:	8b ce                	mov    ecx,esi
100de8c5:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de8c8:	c7 80 08 01 00 00 00 	mov    DWORD PTR [eax+0x108],0x0
100de8cf:	00 00 00 
100de8d2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de8d5:	c7 80 0c 01 00 00 01 	mov    DWORD PTR [eax+0x10c],0x1
100de8dc:	00 00 00 
100de8df:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de8e2:	c7 80 98 01 00 00 00 	mov    DWORD PTR [eax+0x198],0x0
100de8e9:	00 00 00 
100de8ec:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de8ef:	81 a0 18 01 00 00 7f 	and    DWORD PTR [eax+0x118],0xffffff7f
100de8f6:	ff ff ff 
100de8f9:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de8fc:	c7 80 9c 01 00 00 00 	mov    DWORD PTR [eax+0x19c],0x0
100de903:	00 00 00 
100de906:	8b 06                	mov    eax,DWORD PTR [esi]
100de908:	ff 50 2c             	call   DWORD PTR [eax+0x2c]
100de90b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de90e:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100de914:	ff 15 b0 2f 22 10    	call   DWORD PTR ds:0x10222fb0
100de91a:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100de91d:	83 c4 04             	add    esp,0x4
100de920:	85 c0                	test   eax,eax
100de922:	74 0a                	je     0x100de92e
100de924:	6a 00                	push   0x0
100de926:	50                   	push   eax
100de927:	8b cf                	mov    ecx,edi
100de929:	e8 62 f0 ff ff       	call   0x100dd990
100de92e:	80 7d ff 00          	cmp    BYTE PTR [ebp-0x1],0x0
100de932:	74 3a                	je     0x100de96e
100de934:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100de937:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100de93d:	6a 00                	push   0x0
100de93f:	ff 35 cc 64 22 10    	push   DWORD PTR ds:0x102264cc
100de945:	6a 01                	push   0x1
100de947:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100de94d:	6a 00                	push   0x0
100de94f:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100de955:	6a 00                	push   0x0
100de957:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100de95d:	6a 00                	push   0x0
100de95f:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100de965:	83 c4 1c             	add    esp,0x1c
100de968:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100de96e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100de971:	c7 80 c0 01 00 00 00 	mov    DWORD PTR [eax+0x1c0],0x44268000
100de978:	80 26 44 
100de97b:	5f                   	pop    edi
100de97c:	5e                   	pop    esi
100de97d:	5b                   	pop    ebx
100de97e:	8b e5                	mov    esp,ebp
100de980:	5d                   	pop    ebp
100de981:	c2 08 00             	ret    0x8
