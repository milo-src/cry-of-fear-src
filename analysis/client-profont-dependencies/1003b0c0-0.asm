
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\client.dll:     file format pei-i386


Disassembly of section .text:

1003b0c0 <.text+0x3a0c0>:
1003b0c0:	55                   	push   ebp
1003b0c1:	8b ec                	mov    ebp,esp
1003b0c3:	83 ec 14             	sub    esp,0x14
1003b0c6:	53                   	push   ebx
1003b0c7:	56                   	push   esi
1003b0c8:	57                   	push   edi
1003b0c9:	8b f9                	mov    edi,ecx
1003b0cb:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003b0d1:	80 bf 48 08 00 00 00 	cmp    BYTE PTR [edi+0x848],0x0
1003b0d8:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1003b0db:	0f 84 00 03 00 00    	je     0x1003b3e1
1003b0e1:	f3 0f 10 87 50 08 00 	movss  xmm0,DWORD PTR [edi+0x850]
1003b0e8:	00 
1003b0e9:	0f 2f 45 fc          	comiss xmm0,DWORD PTR [ebp-0x4]
1003b0ed:	0f 86 10 01 00 00    	jbe    0x1003b203
1003b0f3:	8b 8f b0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3b0]
1003b0f9:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b0fb:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003b0fe:	ff d0                	call   eax
1003b100:	84 c0                	test   al,al
1003b102:	75 0d                	jne    0x1003b111
1003b104:	8b 8f b0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3b0]
1003b10a:	6a 01                	push   0x1
1003b10c:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b10e:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003b111:	8b 8f 74 0e 00 00    	mov    ecx,DWORD PTR [edi+0xe74]
1003b117:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b119:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003b11c:	ff d0                	call   eax
1003b11e:	84 c0                	test   al,al
1003b120:	75 0d                	jne    0x1003b12f
1003b122:	8b 8f 74 0e 00 00    	mov    ecx,DWORD PTR [edi+0xe74]
1003b128:	6a 01                	push   0x1
1003b12a:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b12c:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003b12f:	8b 87 4c 08 00 00    	mov    eax,DWORD PTR [edi+0x84c]
1003b135:	85 c0                	test   eax,eax
1003b137:	7e 0b                	jle    0x1003b144
1003b139:	83 c0 f6             	add    eax,0xfffffff6
1003b13c:	89 87 4c 08 00 00    	mov    DWORD PTR [edi+0x84c],eax
1003b142:	85 c0                	test   eax,eax
1003b144:	79 0a                	jns    0x1003b150
1003b146:	c7 87 4c 08 00 00 00 	mov    DWORD PTR [edi+0x84c],0x0
1003b14d:	00 00 00 
1003b150:	8b 8f b0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3b0]
1003b156:	8d 55 f8             	lea    edx,[ebp-0x8]
1003b159:	52                   	push   edx
1003b15a:	8d 55 ec             	lea    edx,[ebp-0x14]
1003b15d:	52                   	push   edx
1003b15e:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b160:	ff 50 04             	call   DWORD PTR [eax+0x4]
1003b163:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
1003b166:	85 c0                	test   eax,eax
1003b168:	79 03                	jns    0x1003b16d
1003b16a:	83 c0 02             	add    eax,0x2
1003b16d:	33 c9                	xor    ecx,ecx
1003b16f:	85 c0                	test   eax,eax
1003b171:	0f 4f c1             	cmovg  eax,ecx
1003b174:	8b 8f 74 0e 00 00    	mov    ecx,DWORD PTR [edi+0xe74]
1003b17a:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
1003b17d:	50                   	push   eax
1003b17e:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1003b183:	8b 31                	mov    esi,DWORD PTR [ecx]
1003b185:	99                   	cdq
1003b186:	2b c2                	sub    eax,edx
1003b188:	d1 f8                	sar    eax,1
1003b18a:	2d 90 01 00 00       	sub    eax,0x190
1003b18f:	50                   	push   eax
1003b190:	ff 16                	call   DWORD PTR [esi]
1003b192:	8b b7 78 0e 00 00    	mov    esi,DWORD PTR [edi+0xe78]
1003b198:	83 ec 0c             	sub    esp,0xc
1003b19b:	8b cc                	mov    ecx,esp
1003b19d:	ff b7 4c 08 00 00    	push   DWORD PTR [edi+0x84c]
1003b1a3:	68 ff 00 00 00       	push   0xff
1003b1a8:	68 ff 00 00 00       	push   0xff
1003b1ad:	68 ff 00 00 00       	push   0xff
1003b1b2:	e8 d9 86 07 00       	call   0x100b3890
1003b1b7:	8b 06                	mov    eax,DWORD PTR [esi]
1003b1b9:	8b ce                	mov    ecx,esi
1003b1bb:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003b1be:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1003b1c3:	8b 8f b0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3b0]
1003b1c9:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
1003b1cc:	99                   	cdq
1003b1cd:	2b c2                	sub    eax,edx
1003b1cf:	8b 31                	mov    esi,DWORD PTR [ecx]
1003b1d1:	d1 f8                	sar    eax,1
1003b1d3:	2d 90 01 00 00       	sub    eax,0x190
1003b1d8:	50                   	push   eax
1003b1d9:	ff 16                	call   DWORD PTR [esi]
1003b1db:	ff b7 4c 08 00 00    	push   DWORD PTR [edi+0x84c]
1003b1e1:	8b 8f b0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3b0]
1003b1e7:	68 ff 00 00 00       	push   0xff
1003b1ec:	68 ff 00 00 00       	push   0xff
1003b1f1:	68 ff 00 00 00       	push   0xff
1003b1f6:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b1f8:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003b1fe:	e9 1a 02 00 00       	jmp    0x1003b41d
1003b203:	8b 97 4c 08 00 00    	mov    edx,DWORD PTR [edi+0x84c]
1003b209:	81 fa ff 00 00 00    	cmp    edx,0xff
1003b20f:	7d 0f                	jge    0x1003b220
1003b211:	83 c2 0a             	add    edx,0xa
1003b214:	89 97 4c 08 00 00    	mov    DWORD PTR [edi+0x84c],edx
1003b21a:	81 fa ff 00 00 00    	cmp    edx,0xff
1003b220:	7e 0f                	jle    0x1003b231
1003b222:	c7 87 4c 08 00 00 ff 	mov    DWORD PTR [edi+0x84c],0xff
1003b229:	00 00 00 
1003b22c:	ba ff 00 00 00       	mov    edx,0xff
1003b231:	8b 8f b0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3b0]
1003b237:	52                   	push   edx
1003b238:	68 ff 00 00 00       	push   0xff
1003b23d:	68 ff 00 00 00       	push   0xff
1003b242:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b244:	68 ff 00 00 00       	push   0xff
1003b249:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003b24f:	8b 8f b0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3b0]
1003b255:	8d 55 f8             	lea    edx,[ebp-0x8]
1003b258:	52                   	push   edx
1003b259:	8d 55 ec             	lea    edx,[ebp-0x14]
1003b25c:	52                   	push   edx
1003b25d:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b25f:	ff 50 04             	call   DWORD PTR [eax+0x4]
1003b262:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
1003b265:	83 f8 d0             	cmp    eax,0xffffffd0
1003b268:	7e 03                	jle    0x1003b26d
1003b26a:	83 e8 02             	sub    eax,0x2
1003b26d:	b9 d0 ff ff ff       	mov    ecx,0xffffffd0
1003b272:	3b c1                	cmp    eax,ecx
1003b274:	0f 4c c1             	cmovl  eax,ecx
1003b277:	8b 8f b0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3b0]
1003b27d:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
1003b280:	50                   	push   eax
1003b281:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1003b286:	8b 31                	mov    esi,DWORD PTR [ecx]
1003b288:	99                   	cdq
1003b289:	2b c2                	sub    eax,edx
1003b28b:	d1 f8                	sar    eax,1
1003b28d:	2d 90 01 00 00       	sub    eax,0x190
1003b292:	50                   	push   eax
1003b293:	ff 16                	call   DWORD PTR [esi]
1003b295:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1003b29a:	8b 8f 74 0e 00 00    	mov    ecx,DWORD PTR [edi+0xe74]
1003b2a0:	ff 75 f8             	push   DWORD PTR [ebp-0x8]
1003b2a3:	99                   	cdq
1003b2a4:	2b c2                	sub    eax,edx
1003b2a6:	8b 31                	mov    esi,DWORD PTR [ecx]
1003b2a8:	d1 f8                	sar    eax,1
1003b2aa:	2d 90 01 00 00       	sub    eax,0x190
1003b2af:	50                   	push   eax
1003b2b0:	ff 16                	call   DWORD PTR [esi]
1003b2b2:	8b b7 78 0e 00 00    	mov    esi,DWORD PTR [edi+0xe78]
1003b2b8:	83 ec 0c             	sub    esp,0xc
1003b2bb:	8b cc                	mov    ecx,esp
1003b2bd:	ff b7 4c 08 00 00    	push   DWORD PTR [edi+0x84c]
1003b2c3:	68 ff 00 00 00       	push   0xff
1003b2c8:	68 ff 00 00 00       	push   0xff
1003b2cd:	68 ff 00 00 00       	push   0xff
1003b2d2:	e8 b9 85 07 00       	call   0x100b3890
1003b2d7:	8b 06                	mov    eax,DWORD PTR [esi]
1003b2d9:	8b ce                	mov    ecx,esi
1003b2db:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003b2de:	81 bf 4c 08 00 00 ff 	cmp    DWORD PTR [edi+0x84c],0xff
1003b2e5:	00 00 00 
1003b2e8:	0f 8c 2f 01 00 00    	jl     0x1003b41d
1003b2ee:	8b 87 44 08 00 00    	mov    eax,DWORD PTR [edi+0x844]
1003b2f4:	83 e8 01             	sub    eax,0x1
1003b2f7:	0f 84 c3 00 00 00    	je     0x1003b3c0
1003b2fd:	83 e8 01             	sub    eax,0x1
1003b300:	74 25                	je     0x1003b327
1003b302:	8b 8f b0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3b0]
1003b308:	83 e8 01             	sub    eax,0x1
1003b30b:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b30d:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003b310:	ff d0                	call   eax
1003b312:	84 c0                	test   al,al
1003b314:	0f 85 e5 00 00 00    	jne    0x1003b3ff
1003b31a:	88 87 48 08 00 00    	mov    BYTE PTR [edi+0x848],al
1003b320:	6a 01                	push   0x1
1003b322:	e9 cd 00 00 00       	jmp    0x1003b3f4
1003b327:	8d b7 04 06 00 00    	lea    esi,[edi+0x604]
1003b32d:	c7 87 44 08 00 00 03 	mov    DWORD PTR [edi+0x844],0x3
1003b334:	00 00 00 
1003b337:	8b ce                	mov    ecx,esi
1003b339:	8d 51 01             	lea    edx,[ecx+0x1]
1003b33c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
1003b340:	8a 01                	mov    al,BYTE PTR [ecx]
1003b342:	41                   	inc    ecx
1003b343:	84 c0                	test   al,al
1003b345:	75 f9                	jne    0x1003b340
1003b347:	8b 87 b0 03 00 00    	mov    eax,DWORD PTR [edi+0x3b0]
1003b34d:	2b ca                	sub    ecx,edx
1003b34f:	8b 10                	mov    edx,DWORD PTR [eax]
1003b351:	83 f9 02             	cmp    ecx,0x2
1003b354:	76 60                	jbe    0x1003b3b6
1003b356:	56                   	push   esi
1003b357:	50                   	push   eax
1003b358:	ff 92 00 02 00 00    	call   DWORD PTR [edx+0x200]
1003b35e:	8b 8f 54 0f 00 00    	mov    ecx,DWORD PTR [edi+0xf54]
1003b364:	8d 55 f0             	lea    edx,[ebp-0x10]
1003b367:	83 c4 08             	add    esp,0x8
1003b36a:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b36c:	52                   	push   edx
1003b36d:	8d 55 f4             	lea    edx,[ebp-0xc]
1003b370:	52                   	push   edx
1003b371:	56                   	push   esi
1003b372:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003b375:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1003b37a:	8b 8f b0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3b0]
1003b380:	99                   	cdq
1003b381:	2b c2                	sub    eax,edx
1003b383:	d1 f8                	sar    eax,1
1003b385:	8b 31                	mov    esi,DWORD PTR [ecx]
1003b387:	2d 90 01 00 00       	sub    eax,0x190
1003b38c:	6a d0                	push   0xffffffd0
1003b38e:	50                   	push   eax
1003b38f:	ff 16                	call   DWORD PTR [esi]
1003b391:	c6 87 48 08 00 00 01 	mov    BYTE PTR [edi+0x848],0x1
1003b398:	c7 87 4c 08 00 00 ff 	mov    DWORD PTR [edi+0x84c],0xff
1003b39f:	00 00 00 
1003b3a2:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
1003b3a8:	d8 05 30 f5 13 10    	fadd   DWORD PTR ds:0x1013f530
1003b3ae:	d9 9f 50 08 00 00    	fstp   DWORD PTR [edi+0x850]
1003b3b4:	eb 67                	jmp    0x1003b41d
1003b3b6:	8b c8                	mov    ecx,eax
1003b3b8:	8b 42 28             	mov    eax,DWORD PTR [edx+0x28]
1003b3bb:	e9 50 ff ff ff       	jmp    0x1003b310
1003b3c0:	8d b7 04 05 00 00    	lea    esi,[edi+0x504]
1003b3c6:	c7 87 44 08 00 00 02 	mov    DWORD PTR [edi+0x844],0x2
1003b3cd:	00 00 00 
1003b3d0:	8b ce                	mov    ecx,esi
1003b3d2:	8d 51 01             	lea    edx,[ecx+0x1]
1003b3d5:	8a 01                	mov    al,BYTE PTR [ecx]
1003b3d7:	41                   	inc    ecx
1003b3d8:	84 c0                	test   al,al
1003b3da:	75 f9                	jne    0x1003b3d5
1003b3dc:	e9 66 ff ff ff       	jmp    0x1003b347
1003b3e1:	8b 8f b0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3b0]
1003b3e7:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b3e9:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003b3ec:	ff d0                	call   eax
1003b3ee:	84 c0                	test   al,al
1003b3f0:	74 0d                	je     0x1003b3ff
1003b3f2:	6a 00                	push   0x0
1003b3f4:	8b 8f b0 03 00 00    	mov    ecx,DWORD PTR [edi+0x3b0]
1003b3fa:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b3fc:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003b3ff:	8b 8f 74 0e 00 00    	mov    ecx,DWORD PTR [edi+0xe74]
1003b405:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b407:	8b 40 28             	mov    eax,DWORD PTR [eax+0x28]
1003b40a:	ff d0                	call   eax
1003b40c:	3c 01                	cmp    al,0x1
1003b40e:	75 0d                	jne    0x1003b41d
1003b410:	8b 8f 74 0e 00 00    	mov    ecx,DWORD PTR [edi+0xe74]
1003b416:	6a 00                	push   0x0
1003b418:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b41a:	ff 50 24             	call   DWORD PTR [eax+0x24]
1003b41d:	80 bf 98 0e 00 00 00 	cmp    BYTE PTR [edi+0xe98],0x0
1003b424:	8d 9f 98 0e 00 00    	lea    ebx,[edi+0xe98]
1003b42a:	0f 84 14 03 00 00    	je     0x1003b744
1003b430:	8a 97 31 0f 00 00    	mov    dl,BYTE PTR [edi+0xf31]
1003b436:	f3 0f 10 4d fc       	movss  xmm1,DWORD PTR [ebp-0x4]
1003b43b:	84 d2                	test   dl,dl
1003b43d:	74 32                	je     0x1003b471
1003b43f:	0f 2f 8f 34 0f 00 00 	comiss xmm1,DWORD PTR [edi+0xf34]
1003b446:	76 29                	jbe    0x1003b471
1003b448:	8b cb                	mov    ecx,ebx
1003b44a:	66 c7 87 30 0f 00 00 	mov    WORD PTR [edi+0xf30],0x1
1003b451:	01 00 
1003b453:	c7 87 2c 0f 00 00 00 	mov    DWORD PTR [edi+0xf2c],0x0
1003b45a:	00 00 00 
1003b45d:	8d 51 01             	lea    edx,[ecx+0x1]
1003b460:	8a 01                	mov    al,BYTE PTR [ecx]
1003b462:	41                   	inc    ecx
1003b463:	84 c0                	test   al,al
1003b465:	75 f9                	jne    0x1003b460
1003b467:	2b ca                	sub    ecx,edx
1003b469:	32 d2                	xor    dl,dl
1003b46b:	89 8f 3c 0f 00 00    	mov    DWORD PTR [edi+0xf3c],ecx
1003b471:	0f 2f 8f 38 0f 00 00 	comiss xmm1,DWORD PTR [edi+0xf38]
1003b478:	76 43                	jbe    0x1003b4bd
1003b47a:	80 bf 1c 0f 00 00 00 	cmp    BYTE PTR [edi+0xf1c],0x0
1003b481:	0f 57 c0             	xorps  xmm0,xmm0
1003b484:	f3 0f 5a c1          	cvtss2sd xmm0,xmm1
1003b488:	f2 0f 58 05 b0 68 14 	addsd  xmm0,QWORD PTR ds:0x101468b0
1003b48f:	10 
1003b490:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1003b494:	f3 0f 11 87 38 0f 00 	movss  DWORD PTR [edi+0xf38],xmm0
1003b49b:	00 
1003b49c:	75 1f                	jne    0x1003b4bd
1003b49e:	8b cb                	mov    ecx,ebx
1003b4a0:	8d 71 01             	lea    esi,[ecx+0x1]
1003b4a3:	8a 01                	mov    al,BYTE PTR [ecx]
1003b4a5:	41                   	inc    ecx
1003b4a6:	84 c0                	test   al,al
1003b4a8:	75 f9                	jne    0x1003b4a3
1003b4aa:	8b 87 3c 0f 00 00    	mov    eax,DWORD PTR [edi+0xf3c]
1003b4b0:	2b ce                	sub    ecx,esi
1003b4b2:	3b c1                	cmp    eax,ecx
1003b4b4:	7d 07                	jge    0x1003b4bd
1003b4b6:	40                   	inc    eax
1003b4b7:	89 87 3c 0f 00 00    	mov    DWORD PTR [edi+0xf3c],eax
1003b4bd:	8a 87 30 0f 00 00    	mov    al,BYTE PTR [edi+0xf30]
1003b4c3:	84 c0                	test   al,al
1003b4c5:	75 77                	jne    0x1003b53e
1003b4c7:	84 d2                	test   dl,dl
1003b4c9:	0f 85 cd 00 00 00    	jne    0x1003b59c
1003b4cf:	f3 0f 10 87 2c 0f 00 	movss  xmm0,DWORD PTR [edi+0xf2c]
1003b4d6:	00 
1003b4d7:	0f 57 d2             	xorps  xmm2,xmm2
1003b4da:	0f 2f c2             	comiss xmm0,xmm2
1003b4dd:	76 28                	jbe    0x1003b507
1003b4df:	0f 5a c8             	cvtps2pd xmm1,xmm0
1003b4e2:	f2 0f 10 05 b8 d1 18 	movsd  xmm0,QWORD PTR ds:0x1018d1b8
1003b4e9:	10 
1003b4ea:	f2 0f 59 05 d8 68 14 	mulsd  xmm0,QWORD PTR ds:0x101468d8
1003b4f1:	10 
1003b4f2:	f2 0f 5c c8          	subsd  xmm1,xmm0
1003b4f6:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
1003b4fa:	f3 0f 10 4d fc       	movss  xmm1,DWORD PTR [ebp-0x4]
1003b4ff:	f3 0f 11 87 2c 0f 00 	movss  DWORD PTR [edi+0xf2c],xmm0
1003b506:	00 
1003b507:	0f 2f d0             	comiss xmm2,xmm0
1003b50a:	0f 86 8c 00 00 00    	jbe    0x1003b59c
1003b510:	0f 57 c0             	xorps  xmm0,xmm0
1003b513:	c6 87 31 0f 00 00 01 	mov    BYTE PTR [edi+0xf31],0x1
1003b51a:	f3 0f 5a c1          	cvtss2sd xmm0,xmm1
1003b51e:	c7 87 2c 0f 00 00 00 	mov    DWORD PTR [edi+0xf2c],0x0
1003b525:	00 00 00 
1003b528:	f2 0f 58 05 c0 68 14 	addsd  xmm0,QWORD PTR ds:0x101468c0
1003b52f:	10 
1003b530:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1003b534:	f3 0f 11 87 34 0f 00 	movss  DWORD PTR [edi+0xf34],xmm0
1003b53b:	00 
1003b53c:	eb 5e                	jmp    0x1003b59c
1003b53e:	3c 01                	cmp    al,0x1
1003b540:	75 5a                	jne    0x1003b59c
1003b542:	84 d2                	test   dl,dl
1003b544:	75 56                	jne    0x1003b59c
1003b546:	f3 0f 10 87 2c 0f 00 	movss  xmm0,DWORD PTR [edi+0xf2c]
1003b54d:	00 
1003b54e:	f2 0f 10 15 e0 68 14 	movsd  xmm2,QWORD PTR ds:0x101468e0
1003b555:	10 
1003b556:	0f 5a c8             	cvtps2pd xmm1,xmm0
1003b559:	66 0f 2f d1          	comisd xmm2,xmm1
1003b55d:	76 20                	jbe    0x1003b57f
1003b55f:	f2 0f 10 05 b8 d1 18 	movsd  xmm0,QWORD PTR ds:0x1018d1b8
1003b566:	10 
1003b567:	f2 0f 59 05 d0 68 14 	mulsd  xmm0,QWORD PTR ds:0x101468d0
1003b56e:	10 
1003b56f:	f2 0f 58 c1          	addsd  xmm0,xmm1
1003b573:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1003b577:	f3 0f 11 87 2c 0f 00 	movss  DWORD PTR [edi+0xf2c],xmm0
1003b57e:	00 
1003b57f:	0f 5a c0             	cvtps2pd xmm0,xmm0
1003b582:	66 0f 2f c2          	comisd xmm0,xmm2
1003b586:	76 14                	jbe    0x1003b59c
1003b588:	c6 87 30 0f 00 00 00 	mov    BYTE PTR [edi+0xf30],0x0
1003b58f:	c7 87 2c 0f 00 00 00 	mov    DWORD PTR [edi+0xf2c],0x437f0000
1003b596:	00 7f 43 
1003b599:	c6 03 00             	mov    BYTE PTR [ebx],0x0
1003b59c:	8b 07                	mov    eax,DWORD PTR [edi]
1003b59e:	8b cf                	mov    ecx,edi
1003b5a0:	ff b7 94 0e 00 00    	push   DWORD PTR [edi+0xe94]
1003b5a6:	ff 90 88 01 00 00    	call   DWORD PTR [eax+0x188]
1003b5ac:	83 bf 40 0f 00 00 05 	cmp    DWORD PTR [edi+0xf40],0x5
1003b5b3:	f3 0f 2c 8f 2c 0f 00 	cvttss2si ecx,DWORD PTR [edi+0xf2c]
1003b5ba:	00 
1003b5bb:	8b 07                	mov    eax,DWORD PTR [edi]
1003b5bd:	8b 80 90 01 00 00    	mov    eax,DWORD PTR [eax+0x190]
1003b5c3:	51                   	push   ecx
1003b5c4:	8b cf                	mov    ecx,edi
1003b5c6:	7f 0c                	jg     0x1003b5d4
1003b5c8:	68 ff 00 00 00       	push   0xff
1003b5cd:	68 ff 00 00 00       	push   0xff
1003b5d2:	eb 04                	jmp    0x1003b5d8
1003b5d4:	6a 00                	push   0x0
1003b5d6:	6a 00                	push   0x0
1003b5d8:	68 ff 00 00 00       	push   0xff
1003b5dd:	ff d0                	call   eax
1003b5df:	8b 8f 94 0e 00 00    	mov    ecx,DWORD PTR [edi+0xe94]
1003b5e5:	8d 55 f4             	lea    edx,[ebp-0xc]
1003b5e8:	52                   	push   edx
1003b5e9:	8d 55 f8             	lea    edx,[ebp-0x8]
1003b5ec:	52                   	push   edx
1003b5ed:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b5ef:	53                   	push   ebx
1003b5f0:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003b5f3:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1003b5f8:	99                   	cdq
1003b5f9:	2b c2                	sub    eax,edx
1003b5fb:	8b f0                	mov    esi,eax
1003b5fd:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
1003b600:	99                   	cdq
1003b601:	2b c2                	sub    eax,edx
1003b603:	d1 fe                	sar    esi,1
1003b605:	d1 f8                	sar    eax,1
1003b607:	2b f0                	sub    esi,eax
1003b609:	a1 34 f4 18 10       	mov    eax,ds:0x1018f434
1003b60e:	99                   	cdq
1003b60f:	2b c2                	sub    eax,edx
1003b611:	8b c8                	mov    ecx,eax
1003b613:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
1003b616:	99                   	cdq
1003b617:	2b c2                	sub    eax,edx
1003b619:	d1 f9                	sar    ecx,1
1003b61b:	d1 f8                	sar    eax,1
1003b61d:	2b c8                	sub    ecx,eax
1003b61f:	8b 07                	mov    eax,DWORD PTR [edi]
1003b621:	51                   	push   ecx
1003b622:	89 4d f0             	mov    DWORD PTR [ebp-0x10],ecx
1003b625:	8b cf                	mov    ecx,edi
1003b627:	56                   	push   esi
1003b628:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
1003b62e:	80 3b 00             	cmp    BYTE PTR [ebx],0x0
1003b631:	0f 84 86 00 00 00    	je     0x1003b6bd
1003b637:	83 bf 40 0f 00 00 05 	cmp    DWORD PTR [edi+0xf40],0x5
1003b63e:	7f 7d                	jg     0x1003b6bd
1003b640:	8b cb                	mov    ecx,ebx
1003b642:	8d 51 01             	lea    edx,[ecx+0x1]
1003b645:	8a 01                	mov    al,BYTE PTR [ecx]
1003b647:	41                   	inc    ecx
1003b648:	84 c0                	test   al,al
1003b64a:	75 f9                	jne    0x1003b645
1003b64c:	f3 0f 10 05 48 f5 13 	movss  xmm0,DWORD PTR ds:0x1013f548
1003b653:	10 
1003b654:	2b ca                	sub    ecx,edx
1003b656:	f3 0f 5c 87 2c 0f 00 	subss  xmm0,DWORD PTR [edi+0xf2c]
1003b65d:	00 
1003b65e:	66 0f 6e 8f 3c 0f 00 	movd   xmm1,DWORD PTR [edi+0xf3c]
1003b665:	00 
1003b666:	0f 5b c9             	cvtdq2ps xmm1,xmm1
1003b669:	f3 0f 2c c0          	cvttss2si eax,xmm0
1003b66d:	66 0f 6e c1          	movd   xmm0,ecx
1003b671:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
1003b675:	c1 e9 1f             	shr    ecx,0x1f
1003b678:	50                   	push   eax
1003b679:	68 ff 00 00 00       	push   0xff
1003b67e:	68 ff 00 00 00       	push   0xff
1003b683:	68 ff 00 00 00       	push   0xff
1003b688:	6a 02                	push   0x2
1003b68a:	f2 0f 58 04 cd b0 f5 	addsd  xmm0,QWORD PTR [ecx*8+0x1013f5b0]
1003b691:	13 10 
1003b693:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1003b697:	f3 0f 5e c8          	divss  xmm1,xmm0
1003b69b:	66 0f 6e 45 f8       	movd   xmm0,DWORD PTR [ebp-0x8]
1003b6a0:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1003b6a3:	f3 0f 59 c8          	mulss  xmm1,xmm0
1003b6a7:	f3 0f 2c c1          	cvttss2si eax,xmm1
1003b6ab:	50                   	push   eax
1003b6ac:	8b 45 f4             	mov    eax,DWORD PTR [ebp-0xc]
1003b6af:	03 45 f0             	add    eax,DWORD PTR [ebp-0x10]
1003b6b2:	50                   	push   eax
1003b6b3:	56                   	push   esi
1003b6b4:	ff 15 34 26 1b 10    	call   DWORD PTR ds:0x101b2634
1003b6ba:	83 c4 20             	add    esp,0x20
1003b6bd:	8b 8f ac 03 00 00    	mov    ecx,DWORD PTR [edi+0x3ac]
1003b6c3:	6a 40                	push   0x40
1003b6c5:	ff 35 30 f4 18 10    	push   DWORD PTR ds:0x1018f430
1003b6cb:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b6cd:	ff 50 08             	call   DWORD PTR [eax+0x8]
1003b6d0:	8b 87 ac 03 00 00    	mov    eax,DWORD PTR [edi+0x3ac]
1003b6d6:	53                   	push   ebx
1003b6d7:	50                   	push   eax
1003b6d8:	8b 08                	mov    ecx,DWORD PTR [eax]
1003b6da:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
1003b6e0:	a1 34 f4 18 10       	mov    eax,ds:0x1018f434
1003b6e5:	83 c4 08             	add    esp,0x8
1003b6e8:	8b 8f ac 03 00 00    	mov    ecx,DWORD PTR [edi+0x3ac]
1003b6ee:	99                   	cdq
1003b6ef:	2b c2                	sub    eax,edx
1003b6f1:	d1 f8                	sar    eax,1
1003b6f3:	8b 31                	mov    esi,DWORD PTR [ecx]
1003b6f5:	83 e8 20             	sub    eax,0x20
1003b6f8:	50                   	push   eax
1003b6f9:	6a 00                	push   0x0
1003b6fb:	ff 16                	call   DWORD PTR [esi]
1003b6fd:	8b 8f ac 03 00 00    	mov    ecx,DWORD PTR [edi+0x3ac]
1003b703:	6a 04                	push   0x4
1003b705:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b707:	ff 90 1c 02 00 00    	call   DWORD PTR [eax+0x21c]
1003b70d:	83 bf 40 0f 00 00 05 	cmp    DWORD PTR [edi+0xf40],0x5
1003b714:	8b 8f ac 03 00 00    	mov    ecx,DWORD PTR [edi+0x3ac]
1003b71a:	f3 0f 2c 97 2c 0f 00 	cvttss2si edx,DWORD PTR [edi+0xf2c]
1003b721:	00 
1003b722:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b724:	8b 80 20 01 00 00    	mov    eax,DWORD PTR [eax+0x120]
1003b72a:	52                   	push   edx
1003b72b:	7f 0c                	jg     0x1003b739
1003b72d:	68 ff 00 00 00       	push   0xff
1003b732:	68 ff 00 00 00       	push   0xff
1003b737:	eb 04                	jmp    0x1003b73d
1003b739:	6a 00                	push   0x0
1003b73b:	6a 00                	push   0x0
1003b73d:	68 ff 00 00 00       	push   0xff
1003b742:	ff d0                	call   eax
1003b744:	68 04 68 14 10       	push   0x10146804
1003b749:	ff 15 44 26 1b 10    	call   DWORD PTR ds:0x101b2644
1003b74f:	d9 5d f0             	fstp   DWORD PTR [ebp-0x10]
1003b752:	f3 0f 2c 45 f0       	cvttss2si eax,DWORD PTR [ebp-0x10]
1003b757:	83 c4 04             	add    esp,0x4
1003b75a:	85 c0                	test   eax,eax
1003b75c:	0f 84 17 04 00 00    	je     0x1003bb79
1003b762:	80 bf d4 00 00 00 00 	cmp    BYTE PTR [edi+0xd4],0x0
1003b769:	0f 84 9e 03 00 00    	je     0x1003bb0d
1003b76f:	8d b7 d5 01 00 00    	lea    esi,[edi+0x1d5]
1003b775:	8d 4e 01             	lea    ecx,[esi+0x1]
1003b778:	8a 06                	mov    al,BYTE PTR [esi]
1003b77a:	46                   	inc    esi
1003b77b:	84 c0                	test   al,al
1003b77d:	75 f9                	jne    0x1003b778
1003b77f:	2b f1                	sub    esi,ecx
1003b781:	8d 8f d4 00 00 00    	lea    ecx,[edi+0xd4]
1003b787:	8d 41 01             	lea    eax,[ecx+0x1]
1003b78a:	89 75 ec             	mov    DWORD PTR [ebp-0x14],esi
1003b78d:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
1003b790:	8a 01                	mov    al,BYTE PTR [ecx]
1003b792:	41                   	inc    ecx
1003b793:	84 c0                	test   al,al
1003b795:	75 f9                	jne    0x1003b790
1003b797:	2b 4d f0             	sub    ecx,DWORD PTR [ebp-0x10]
1003b79a:	83 f9 01             	cmp    ecx,0x1
1003b79d:	0f 86 d6 03 00 00    	jbe    0x1003bb79
1003b7a3:	8a 87 1d 0f 00 00    	mov    al,BYTE PTR [edi+0xf1d]
1003b7a9:	f3 0f 10 55 fc       	movss  xmm2,DWORD PTR [ebp-0x4]
1003b7ae:	84 c0                	test   al,al
1003b7b0:	74 3d                	je     0x1003b7ef
1003b7b2:	0f 2f 97 20 0f 00 00 	comiss xmm2,DWORD PTR [edi+0xf20]
1003b7b9:	76 34                	jbe    0x1003b7ef
1003b7bb:	66 c7 87 1c 0f 00 00 	mov    WORD PTR [edi+0xf1c],0x1
1003b7c2:	01 00 
1003b7c4:	8d 4b 01             	lea    ecx,[ebx+0x1]
1003b7c7:	c7 87 18 0f 00 00 00 	mov    DWORD PTR [edi+0xf18],0x0
1003b7ce:	00 00 00 
1003b7d1:	c7 87 c0 00 00 00 00 	mov    DWORD PTR [edi+0xc0],0x0
1003b7d8:	00 00 00 
1003b7db:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
1003b7e0:	8a 03                	mov    al,BYTE PTR [ebx]
1003b7e2:	43                   	inc    ebx
1003b7e3:	84 c0                	test   al,al
1003b7e5:	75 f9                	jne    0x1003b7e0
1003b7e7:	2b d9                	sub    ebx,ecx
1003b7e9:	89 9f 28 0f 00 00    	mov    DWORD PTR [edi+0xf28],ebx
1003b7ef:	8a 8f 1c 0f 00 00    	mov    cl,BYTE PTR [edi+0xf1c]
1003b7f5:	84 c9                	test   cl,cl
1003b7f7:	75 72                	jne    0x1003b86b
1003b7f9:	84 c0                	test   al,al
1003b7fb:	0f 85 cd 00 00 00    	jne    0x1003b8ce
1003b801:	f3 0f 10 87 18 0f 00 	movss  xmm0,DWORD PTR [edi+0xf18]
1003b808:	00 
1003b809:	0f 57 db             	xorps  xmm3,xmm3
1003b80c:	0f 2f c3             	comiss xmm0,xmm3
1003b80f:	76 23                	jbe    0x1003b834
1003b811:	0f 5a c8             	cvtps2pd xmm1,xmm0
1003b814:	f2 0f 10 05 b8 d1 18 	movsd  xmm0,QWORD PTR ds:0x1018d1b8
1003b81b:	10 
1003b81c:	f2 0f 59 05 e8 68 14 	mulsd  xmm0,QWORD PTR ds:0x101468e8
1003b823:	10 
1003b824:	f2 0f 5c c8          	subsd  xmm1,xmm0
1003b828:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
1003b82c:	f3 0f 11 87 18 0f 00 	movss  DWORD PTR [edi+0xf18],xmm0
1003b833:	00 
1003b834:	0f 2f d8             	comiss xmm3,xmm0
1003b837:	0f 86 91 00 00 00    	jbe    0x1003b8ce
1003b83d:	0f 57 c0             	xorps  xmm0,xmm0
1003b840:	c6 87 1d 0f 00 00 01 	mov    BYTE PTR [edi+0xf1d],0x1
1003b847:	f3 0f 5a c2          	cvtss2sd xmm0,xmm2
1003b84b:	c7 87 18 0f 00 00 00 	mov    DWORD PTR [edi+0xf18],0x0
1003b852:	00 00 00 
1003b855:	f2 0f 58 05 c8 68 14 	addsd  xmm0,QWORD PTR ds:0x101468c8
1003b85c:	10 
1003b85d:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1003b861:	f3 0f 11 87 20 0f 00 	movss  DWORD PTR [edi+0xf20],xmm0
1003b868:	00 
1003b869:	eb 63                	jmp    0x1003b8ce
1003b86b:	80 f9 01             	cmp    cl,0x1
1003b86e:	75 5e                	jne    0x1003b8ce
1003b870:	84 c0                	test   al,al
1003b872:	75 5a                	jne    0x1003b8ce
1003b874:	f3 0f 10 87 18 0f 00 	movss  xmm0,DWORD PTR [edi+0xf18]
1003b87b:	00 
1003b87c:	f2 0f 10 15 e0 68 14 	movsd  xmm2,QWORD PTR ds:0x101468e0
1003b883:	10 
1003b884:	0f 5a c8             	cvtps2pd xmm1,xmm0
1003b887:	66 0f 2f d1          	comisd xmm2,xmm1
1003b88b:	76 20                	jbe    0x1003b8ad
1003b88d:	f2 0f 10 05 b8 d1 18 	movsd  xmm0,QWORD PTR ds:0x1018d1b8
1003b894:	10 
1003b895:	f2 0f 59 05 e8 68 14 	mulsd  xmm0,QWORD PTR ds:0x101468e8
1003b89c:	10 
1003b89d:	f2 0f 58 c1          	addsd  xmm0,xmm1
1003b8a1:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1003b8a5:	f3 0f 11 87 18 0f 00 	movss  DWORD PTR [edi+0xf18],xmm0
1003b8ac:	00 
1003b8ad:	0f 5a c0             	cvtps2pd xmm0,xmm0
1003b8b0:	66 0f 2f c2          	comisd xmm0,xmm2
1003b8b4:	76 18                	jbe    0x1003b8ce
1003b8b6:	c6 87 1c 0f 00 00 00 	mov    BYTE PTR [edi+0xf1c],0x0
1003b8bd:	c7 87 18 0f 00 00 00 	mov    DWORD PTR [edi+0xf18],0x437f0000
1003b8c4:	00 7f 43 
1003b8c7:	c6 87 d4 00 00 00 00 	mov    BYTE PTR [edi+0xd4],0x0
1003b8ce:	8b 07                	mov    eax,DWORD PTR [edi]
1003b8d0:	8b cf                	mov    ecx,edi
1003b8d2:	ff b7 54 0f 00 00    	push   DWORD PTR [edi+0xf54]
1003b8d8:	f3 0f 2c 9f 18 0f 00 	cvttss2si ebx,DWORD PTR [edi+0xf18]
1003b8df:	00 
1003b8e0:	ff 90 88 01 00 00    	call   DWORD PTR [eax+0x188]
1003b8e6:	8b 87 bc 00 00 00    	mov    eax,DWORD PTR [edi+0xbc]
1003b8ec:	83 f8 06             	cmp    eax,0x6
1003b8ef:	77 52                	ja     0x1003b943
1003b8f1:	ff 24 85 80 bb 03 10 	jmp    DWORD PTR [eax*4+0x1003bb80]
1003b8f8:	53                   	push   ebx
1003b8f9:	6a 00                	push   0x0
1003b8fb:	68 ff 00 00 00       	push   0xff
1003b900:	eb 32                	jmp    0x1003b934
1003b902:	53                   	push   ebx
1003b903:	68 ff 00 00 00       	push   0xff
1003b908:	68 80 00 00 00       	push   0x80
1003b90d:	6a 00                	push   0x0
1003b90f:	eb 28                	jmp    0x1003b939
1003b911:	53                   	push   ebx
1003b912:	6a 00                	push   0x0
1003b914:	68 ff 00 00 00       	push   0xff
1003b919:	6a 00                	push   0x0
1003b91b:	eb 1c                	jmp    0x1003b939
1003b91d:	53                   	push   ebx
1003b91e:	68 c8 00 00 00       	push   0xc8
1003b923:	68 c8 00 00 00       	push   0xc8
1003b928:	68 c8 00 00 00       	push   0xc8
1003b92d:	eb 0a                	jmp    0x1003b939
1003b92f:	53                   	push   ebx
1003b930:	6a 00                	push   0x0
1003b932:	6a 00                	push   0x0
1003b934:	68 ff 00 00 00       	push   0xff
1003b939:	8b 07                	mov    eax,DWORD PTR [edi]
1003b93b:	8b cf                	mov    ecx,edi
1003b93d:	ff 90 90 01 00 00    	call   DWORD PTR [eax+0x190]
1003b943:	8b 8f 54 0f 00 00    	mov    ecx,DWORD PTR [edi+0xf54]
1003b949:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b94b:	8b 50 0c             	mov    edx,DWORD PTR [eax+0xc]
1003b94e:	8d 45 fc             	lea    eax,[ebp-0x4]
1003b951:	50                   	push   eax
1003b952:	8d 45 f8             	lea    eax,[ebp-0x8]
1003b955:	50                   	push   eax
1003b956:	8d 87 d4 00 00 00    	lea    eax,[edi+0xd4]
1003b95c:	50                   	push   eax
1003b95d:	ff d2                	call   edx
1003b95f:	83 fe 01             	cmp    esi,0x1
1003b962:	76 1a                	jbe    0x1003b97e
1003b964:	8b 8f 54 0f 00 00    	mov    ecx,DWORD PTR [edi+0xf54]
1003b96a:	8d 55 fc             	lea    edx,[ebp-0x4]
1003b96d:	52                   	push   edx
1003b96e:	8d 55 f0             	lea    edx,[ebp-0x10]
1003b971:	52                   	push   edx
1003b972:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b974:	8d 97 d5 01 00 00    	lea    edx,[edi+0x1d5]
1003b97a:	52                   	push   edx
1003b97b:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003b97e:	83 bf bc 00 00 00 05 	cmp    DWORD PTR [edi+0xbc],0x5
1003b985:	7f 27                	jg     0x1003b9ae
1003b987:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1003b98c:	99                   	cdq
1003b98d:	2b c2                	sub    eax,edx
1003b98f:	8b c8                	mov    ecx,eax
1003b991:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
1003b994:	99                   	cdq
1003b995:	2b c2                	sub    eax,edx
1003b997:	d1 f9                	sar    ecx,1
1003b999:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
1003b99c:	d1 f8                	sar    eax,1
1003b99e:	2b c8                	sub    ecx,eax
1003b9a0:	89 4d f4             	mov    DWORD PTR [ebp-0xc],ecx
1003b9a3:	8b 0d 34 f4 18 10    	mov    ecx,DWORD PTR ds:0x1018f434
1003b9a9:	8d 04 12             	lea    eax,[edx+edx*1]
1003b9ac:	eb 1e                	jmp    0x1003b9cc
1003b9ae:	a1 34 f4 18 10       	mov    eax,ds:0x1018f434
1003b9b3:	99                   	cdq
1003b9b4:	2b c2                	sub    eax,edx
1003b9b6:	c7 45 f4 0a 00 00 00 	mov    DWORD PTR [ebp-0xc],0xa
1003b9bd:	8b c8                	mov    ecx,eax
1003b9bf:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1003b9c2:	99                   	cdq
1003b9c3:	2b c2                	sub    eax,edx
1003b9c5:	d1 f9                	sar    ecx,1
1003b9c7:	8b 55 fc             	mov    edx,DWORD PTR [ebp-0x4]
1003b9ca:	d1 f8                	sar    eax,1
1003b9cc:	2b c8                	sub    ecx,eax
1003b9ce:	8b 07                	mov    eax,DWORD PTR [edi]
1003b9d0:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
1003b9d6:	83 fe 01             	cmp    esi,0x1
1003b9d9:	76 02                	jbe    0x1003b9dd
1003b9db:	2b ca                	sub    ecx,edx
1003b9dd:	51                   	push   ecx
1003b9de:	ff 75 f4             	push   DWORD PTR [ebp-0xc]
1003b9e1:	8b cf                	mov    ecx,edi
1003b9e3:	ff d0                	call   eax
1003b9e5:	8b 8f a8 03 00 00    	mov    ecx,DWORD PTR [edi+0x3a8]
1003b9eb:	6a 40                	push   0x40
1003b9ed:	ff 35 30 f4 18 10    	push   DWORD PTR ds:0x1018f430
1003b9f3:	8b 01                	mov    eax,DWORD PTR [ecx]
1003b9f5:	ff 50 08             	call   DWORD PTR [eax+0x8]
1003b9f8:	8b 87 a8 03 00 00    	mov    eax,DWORD PTR [edi+0x3a8]
1003b9fe:	8d b7 d4 00 00 00    	lea    esi,[edi+0xd4]
1003ba04:	56                   	push   esi
1003ba05:	50                   	push   eax
1003ba06:	8b 08                	mov    ecx,DWORD PTR [eax]
1003ba08:	ff 91 00 02 00 00    	call   DWORD PTR [ecx+0x200]
1003ba0e:	8b 8f 54 0f 00 00    	mov    ecx,DWORD PTR [edi+0xf54]
1003ba14:	8d 55 fc             	lea    edx,[ebp-0x4]
1003ba17:	83 c4 08             	add    esp,0x8
1003ba1a:	8b 01                	mov    eax,DWORD PTR [ecx]
1003ba1c:	52                   	push   edx
1003ba1d:	8d 55 f8             	lea    edx,[ebp-0x8]
1003ba20:	52                   	push   edx
1003ba21:	56                   	push   esi
1003ba22:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003ba25:	a1 d0 2b 1b 10       	mov    eax,ds:0x101b2bd0
1003ba2a:	8b 8f a8 03 00 00    	mov    ecx,DWORD PTR [edi+0x3a8]
1003ba30:	8b 15 34 f4 18 10    	mov    edx,DWORD PTR ds:0x1018f434
1003ba36:	8d 04 40             	lea    eax,[eax+eax*2]
1003ba39:	8b 31                	mov    esi,DWORD PTR [ecx]
1003ba3b:	2b d0                	sub    edx,eax
1003ba3d:	52                   	push   edx
1003ba3e:	6a 00                	push   0x0
1003ba40:	ff 16                	call   DWORD PTR [esi]
1003ba42:	8b 8f a8 03 00 00    	mov    ecx,DWORD PTR [edi+0x3a8]
1003ba48:	6a 04                	push   0x4
1003ba4a:	8b 01                	mov    eax,DWORD PTR [ecx]
1003ba4c:	ff 90 1c 02 00 00    	call   DWORD PTR [eax+0x21c]
1003ba52:	8b 87 bc 00 00 00    	mov    eax,DWORD PTR [edi+0xbc]
1003ba58:	83 f8 06             	cmp    eax,0x6
1003ba5b:	77 56                	ja     0x1003bab3
1003ba5d:	ff 24 85 9c bb 03 10 	jmp    DWORD PTR [eax*4+0x1003bb9c]
1003ba64:	53                   	push   ebx
1003ba65:	6a 00                	push   0x0
1003ba67:	68 ff 00 00 00       	push   0xff
1003ba6c:	eb 32                	jmp    0x1003baa0
1003ba6e:	53                   	push   ebx
1003ba6f:	68 ff 00 00 00       	push   0xff
1003ba74:	68 80 00 00 00       	push   0x80
1003ba79:	6a 00                	push   0x0
1003ba7b:	eb 28                	jmp    0x1003baa5
1003ba7d:	53                   	push   ebx
1003ba7e:	6a 00                	push   0x0
1003ba80:	68 ff 00 00 00       	push   0xff
1003ba85:	6a 00                	push   0x0
1003ba87:	eb 1c                	jmp    0x1003baa5
1003ba89:	53                   	push   ebx
1003ba8a:	68 c8 00 00 00       	push   0xc8
1003ba8f:	68 c8 00 00 00       	push   0xc8
1003ba94:	68 c8 00 00 00       	push   0xc8
1003ba99:	eb 0a                	jmp    0x1003baa5
1003ba9b:	53                   	push   ebx
1003ba9c:	6a 00                	push   0x0
1003ba9e:	6a 00                	push   0x0
1003baa0:	68 ff 00 00 00       	push   0xff
1003baa5:	8b 8f a8 03 00 00    	mov    ecx,DWORD PTR [edi+0x3a8]
1003baab:	8b 01                	mov    eax,DWORD PTR [ecx]
1003baad:	ff 90 20 01 00 00    	call   DWORD PTR [eax+0x120]
1003bab3:	83 7d ec 01          	cmp    DWORD PTR [ebp-0x14],0x1
1003bab7:	0f 86 bc 00 00 00    	jbe    0x1003bb79
1003babd:	8b 8f 54 0f 00 00    	mov    ecx,DWORD PTR [edi+0xf54]
1003bac3:	8d 55 fc             	lea    edx,[ebp-0x4]
1003bac6:	52                   	push   edx
1003bac7:	8d 55 f8             	lea    edx,[ebp-0x8]
1003baca:	52                   	push   edx
1003bacb:	8b 01                	mov    eax,DWORD PTR [ecx]
1003bacd:	8d 97 d5 01 00 00    	lea    edx,[edi+0x1d5]
1003bad3:	52                   	push   edx
1003bad4:	ff 50 0c             	call   DWORD PTR [eax+0xc]
1003bad7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1003bada:	8b 0d 34 f4 18 10    	mov    ecx,DWORD PTR ds:0x1018f434
1003bae0:	03 c0                	add    eax,eax
1003bae2:	8b 37                	mov    esi,DWORD PTR [edi]
1003bae4:	2b c8                	sub    ecx,eax
1003bae6:	a1 30 f4 18 10       	mov    eax,ds:0x1018f430
1003baeb:	99                   	cdq
1003baec:	2b c2                	sub    eax,edx
1003baee:	51                   	push   ecx
1003baef:	8b c8                	mov    ecx,eax
1003baf1:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
1003baf4:	99                   	cdq
1003baf5:	2b c2                	sub    eax,edx
1003baf7:	d1 f9                	sar    ecx,1
1003baf9:	d1 f8                	sar    eax,1
1003bafb:	2b c8                	sub    ecx,eax
1003bafd:	51                   	push   ecx
1003bafe:	8b cf                	mov    ecx,edi
1003bb00:	ff 96 98 01 00 00    	call   DWORD PTR [esi+0x198]
1003bb06:	5f                   	pop    edi
1003bb07:	5e                   	pop    esi
1003bb08:	5b                   	pop    ebx
1003bb09:	8b e5                	mov    esp,ebp
1003bb0b:	5d                   	pop    ebp
1003bb0c:	c3                   	ret
1003bb0d:	8d 8f d4 00 00 00    	lea    ecx,[edi+0xd4]
1003bb13:	c7 87 cc 00 00 00 00 	mov    DWORD PTR [edi+0xcc],0x0
1003bb1a:	00 00 00 
1003bb1d:	c7 87 d0 00 00 00 00 	mov    DWORD PTR [edi+0xd0],0x0
1003bb24:	00 00 00 
1003bb27:	8d 71 01             	lea    esi,[ecx+0x1]
1003bb2a:	c7 87 c4 00 00 00 00 	mov    DWORD PTR [edi+0xc4],0x0
1003bb31:	00 00 00 
1003bb34:	c7 87 c8 00 00 00 00 	mov    DWORD PTR [edi+0xc8],0x0
1003bb3b:	00 00 00 
1003bb3e:	c7 87 bc 00 00 00 05 	mov    DWORD PTR [edi+0xbc],0x5
1003bb45:	00 00 00 
1003bb48:	8a 01                	mov    al,BYTE PTR [ecx]
1003bb4a:	41                   	inc    ecx
1003bb4b:	84 c0                	test   al,al
1003bb4d:	75 f9                	jne    0x1003bb48
1003bb4f:	2b ce                	sub    ecx,esi
1003bb51:	83 f9 01             	cmp    ecx,0x1
1003bb54:	76 06                	jbe    0x1003bb5c
1003bb56:	88 87 d4 00 00 00    	mov    BYTE PTR [edi+0xd4],al
1003bb5c:	8d 8f d5 01 00 00    	lea    ecx,[edi+0x1d5]
1003bb62:	8d 51 01             	lea    edx,[ecx+0x1]
1003bb65:	8a 01                	mov    al,BYTE PTR [ecx]
1003bb67:	41                   	inc    ecx
1003bb68:	84 c0                	test   al,al
1003bb6a:	75 f9                	jne    0x1003bb65
1003bb6c:	2b ca                	sub    ecx,edx
1003bb6e:	83 f9 01             	cmp    ecx,0x1
1003bb71:	76 06                	jbe    0x1003bb79
1003bb73:	88 87 d5 01 00 00    	mov    BYTE PTR [edi+0x1d5],al
1003bb79:	5f                   	pop    edi
1003bb7a:	5e                   	pop    esi
1003bb7b:	5b                   	pop    ebx
1003bb7c:	8b e5                	mov    esp,ebp
1003bb7e:	5d                   	pop    ebp
1003bb7f:	c3                   	ret
