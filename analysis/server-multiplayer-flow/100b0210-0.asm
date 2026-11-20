
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b0210 <.text+0xaf210>:
100b0210:	55                   	push   ebp
100b0211:	8b ec                	mov    ebp,esp
100b0213:	81 ec 10 01 00 00    	sub    esp,0x110
100b0219:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100b021e:	33 c5                	xor    eax,ebp
100b0220:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100b0223:	57                   	push   edi
100b0224:	8b f9                	mov    edi,ecx
100b0226:	89 bd f0 fe ff ff    	mov    DWORD PTR [ebp-0x110],edi
100b022c:	80 7f 08 00          	cmp    BYTE PTR [edi+0x8],0x0
100b0230:	0f 84 3a 03 00 00    	je     0x100b0570
100b0236:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b023b:	56                   	push   esi
100b023c:	33 f6                	xor    esi,esi
100b023e:	89 b5 f8 fe ff ff    	mov    DWORD PTR [ebp-0x108],esi
100b0244:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100b0248:	0f 2f 47 0c          	comiss xmm0,DWORD PTR [edi+0xc]
100b024c:	0f 86 1d 03 00 00    	jbe    0x100b056f
100b0252:	39 77 04             	cmp    DWORD PTR [edi+0x4],esi
100b0255:	0f 84 14 03 00 00    	je     0x100b056f
100b025b:	68 2c e2 1c 10       	push   0x101ce22c
100b0260:	e8 9b 8f 06 00       	call   0x10119200
100b0265:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b026a:	ba 01 00 00 00       	mov    edx,0x1
100b026f:	83 c4 04             	add    esp,0x4
100b0272:	89 95 f4 fe ff ff    	mov    DWORD PTR [ebp-0x10c],edx
100b0278:	39 90 90 00 00 00    	cmp    DWORD PTR [eax+0x90],edx
100b027e:	0f 8c a2 02 00 00    	jl     0x100b0526
100b0284:	53                   	push   ebx
100b0285:	52                   	push   edx
100b0286:	e8 f5 93 06 00       	call   0x10119680
100b028b:	8b d8                	mov    ebx,eax
100b028d:	83 c4 04             	add    esp,0x4
100b0290:	85 db                	test   ebx,ebx
100b0292:	0f 84 a3 00 00 00    	je     0x100b033b
100b0298:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100b029b:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100b029e:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100b02a4:	ff 15 84 31 22 10    	call   DWORD PTR ds:0x10223184
100b02aa:	83 c4 04             	add    esp,0x4
100b02ad:	0f 1f 00             	nop    DWORD PTR [eax]
100b02b0:	8a 08                	mov    cl,BYTE PTR [eax]
100b02b2:	3a 0e                	cmp    cl,BYTE PTR [esi]
100b02b4:	75 1a                	jne    0x100b02d0
100b02b6:	84 c9                	test   cl,cl
100b02b8:	74 12                	je     0x100b02cc
100b02ba:	8a 48 01             	mov    cl,BYTE PTR [eax+0x1]
100b02bd:	3a 4e 01             	cmp    cl,BYTE PTR [esi+0x1]
100b02c0:	75 0e                	jne    0x100b02d0
100b02c2:	83 c0 02             	add    eax,0x2
100b02c5:	83 c6 02             	add    esi,0x2
100b02c8:	84 c9                	test   cl,cl
100b02ca:	75 e4                	jne    0x100b02b0
100b02cc:	33 c0                	xor    eax,eax
100b02ce:	eb 05                	jmp    0x100b02d5
100b02d0:	1b c0                	sbb    eax,eax
100b02d2:	83 c8 01             	or     eax,0x1
100b02d5:	85 c0                	test   eax,eax
100b02d7:	75 5c                	jne    0x100b0335
100b02d9:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100b02dc:	ff 77 04             	push   DWORD PTR [edi+0x4]
100b02df:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100b02e5:	ff 15 84 31 22 10    	call   DWORD PTR ds:0x10223184
100b02eb:	83 c4 04             	add    esp,0x4
100b02ee:	50                   	push   eax
100b02ef:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100b02f2:	8b 88 d4 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d4]
100b02f8:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b02fd:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100b0303:	51                   	push   ecx
100b0304:	68 48 e2 1c 10       	push   0x101ce248
100b0309:	6a 01                	push   0x1
100b030b:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100b0311:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100b0314:	83 c4 14             	add    esp,0x14
100b0317:	8b f3                	mov    esi,ebx
100b0319:	89 b5 f8 fe ff ff    	mov    DWORD PTR [ebp-0x108],esi
100b031f:	8b 88 d4 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d4]
100b0325:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b032a:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100b0330:	89 4f 18             	mov    DWORD PTR [edi+0x18],ecx
100b0333:	eb 06                	jmp    0x100b033b
100b0335:	8b b5 f8 fe ff ff    	mov    esi,DWORD PTR [ebp-0x108]
100b033b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b0340:	8b 95 f4 fe ff ff    	mov    edx,DWORD PTR [ebp-0x10c]
100b0346:	42                   	inc    edx
100b0347:	89 95 f4 fe ff ff    	mov    DWORD PTR [ebp-0x10c],edx
100b034d:	8b 88 90 00 00 00    	mov    ecx,DWORD PTR [eax+0x90]
100b0353:	3b d1                	cmp    edx,ecx
100b0355:	0f 8e 2a ff ff ff    	jle    0x100b0285
100b035b:	85 f6                	test   esi,esi
100b035d:	0f 84 c2 01 00 00    	je     0x100b0525
100b0363:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
100b0366:	be 01 00 00 00       	mov    esi,0x1
100b036b:	3b 47 14             	cmp    eax,DWORD PTR [edi+0x14]
100b036e:	0f 8e 18 01 00 00    	jle    0x100b048c
100b0374:	3b ce                	cmp    ecx,esi
100b0376:	0f 8c 9e 00 00 00    	jl     0x100b041a
100b037c:	8b bd f8 fe ff ff    	mov    edi,DWORD PTR [ebp-0x108]
100b0382:	56                   	push   esi
100b0383:	e8 f8 92 06 00       	call   0x10119680
100b0388:	8b d8                	mov    ebx,eax
100b038a:	83 c4 04             	add    esp,0x4
100b038d:	85 db                	test   ebx,ebx
100b038f:	74 71                	je     0x100b0402
100b0391:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100b0394:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100b039a:	8b 91 d4 01 00 00    	mov    edx,DWORD PTR [ecx+0x1d4]
100b03a0:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100b03a6:	03 91 98 00 00 00    	add    edx,DWORD PTR [ecx+0x98]
100b03ac:	52                   	push   edx
100b03ad:	68 8c e2 1c 10       	push   0x101ce28c
100b03b2:	68 80 00 00 00       	push   0x80
100b03b7:	50                   	push   eax
100b03b8:	e8 a3 d7 f9 ff       	call   0x1004db60
100b03bd:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100b03c0:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100b03c6:	6a 00                	push   0x0
100b03c8:	ff 35 18 65 22 10    	push   DWORD PTR ds:0x10226518
100b03ce:	6a 01                	push   0x1
100b03d0:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100b03d6:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100b03d9:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100b03df:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100b03e5:	50                   	push   eax
100b03e6:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100b03ec:	8d 85 7c ff ff ff    	lea    eax,[ebp-0x84]
100b03f2:	50                   	push   eax
100b03f3:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100b03f9:	83 c4 2c             	add    esp,0x2c
100b03fc:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100b0402:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b0407:	46                   	inc    esi
100b0408:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
100b040e:	0f 8e 6e ff ff ff    	jle    0x100b0382
100b0414:	8b bd f0 fe ff ff    	mov    edi,DWORD PTR [ebp-0x110]
100b041a:	6a 64                	push   0x64
100b041c:	6a 00                	push   0x0
100b041e:	83 ec 08             	sub    esp,0x8
100b0421:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
100b0428:	00 
100b0429:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100b0430:	68 20 90 1a 10       	push   0x101a9020
100b0435:	68 34 2f 22 10       	push   0x10222f34
100b043a:	6a 00                	push   0x0
100b043c:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100b0442:	83 c4 04             	add    esp,0x4
100b0445:	50                   	push   eax
100b0446:	e8 65 7e 06 00       	call   0x101182b0
100b044b:	8b 85 f8 fe ff ff    	mov    eax,DWORD PTR [ebp-0x108]
100b0451:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100b0454:	8b 88 d4 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d4]
100b045a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b045f:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100b0465:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
100b046b:	51                   	push   ecx
100b046c:	68 a4 e2 1c 10       	push   0x101ce2a4
100b0471:	50                   	push   eax
100b0472:	e8 e9 ec f6 ff       	call   0x1001f160
100b0477:	8d 85 fc fe ff ff    	lea    eax,[ebp-0x104]
100b047d:	50                   	push   eax
100b047e:	ff 15 e4 2f 22 10    	call   DWORD PTR ds:0x10222fe4
100b0484:	83 c4 2c             	add    esp,0x2c
100b0487:	e9 99 00 00 00       	jmp    0x100b0525
100b048c:	83 f9 01             	cmp    ecx,0x1
100b048f:	7c 60                	jl     0x100b04f1
100b0491:	56                   	push   esi
100b0492:	e8 e9 91 06 00       	call   0x10119680
100b0497:	8b d8                	mov    ebx,eax
100b0499:	83 c4 04             	add    esp,0x4
100b049c:	85 db                	test   ebx,ebx
100b049e:	74 43                	je     0x100b04e3
100b04a0:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
100b04a3:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100b04a9:	6a 00                	push   0x0
100b04ab:	ff 35 18 65 22 10    	push   DWORD PTR ds:0x10226518
100b04b1:	6a 01                	push   0x1
100b04b3:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100b04b9:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
100b04bc:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100b04c2:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100b04c8:	50                   	push   eax
100b04c9:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100b04cf:	68 b0 e2 1c 10       	push   0x101ce2b0
100b04d4:	ff 15 20 30 22 10    	call   DWORD PTR ds:0x10223020
100b04da:	83 c4 1c             	add    esp,0x1c
100b04dd:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100b04e3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100b04e8:	46                   	inc    esi
100b04e9:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
100b04ef:	7e a0                	jle    0x100b0491
100b04f1:	6a 64                	push   0x64
100b04f3:	6a 00                	push   0x0
100b04f5:	83 ec 08             	sub    esp,0x8
100b04f8:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
100b04ff:	00 
100b0500:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100b0507:	68 d8 8f 1a 10       	push   0x101a8fd8
100b050c:	68 34 2f 22 10       	push   0x10222f34
100b0511:	6a 00                	push   0x0
100b0513:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100b0519:	83 c4 04             	add    esp,0x4
100b051c:	50                   	push   eax
100b051d:	e8 8e 7d 06 00       	call   0x101182b0
100b0522:	83 c4 1c             	add    esp,0x1c
100b0525:	5b                   	pop    ebx
100b0526:	0f 57 c0             	xorps  xmm0,xmm0
100b0529:	c6 47 08 00          	mov    BYTE PTR [edi+0x8],0x0
100b052d:	c7 47 04 00 00 00 00 	mov    DWORD PTR [edi+0x4],0x0
100b0534:	c7 47 18 00 00 00 00 	mov    DWORD PTR [edi+0x18],0x0
100b053b:	c7 47 14 00 00 00 00 	mov    DWORD PTR [edi+0x14],0x0
100b0542:	c7 47 10 00 00 00 00 	mov    DWORD PTR [edi+0x10],0x0
100b0549:	0f 11 47 20          	movups XMMWORD PTR [edi+0x20],xmm0
100b054d:	0f 11 47 30          	movups XMMWORD PTR [edi+0x30],xmm0
100b0551:	0f 11 47 40          	movups XMMWORD PTR [edi+0x40],xmm0
100b0555:	0f 11 47 50          	movups XMMWORD PTR [edi+0x50],xmm0
100b0559:	0f 11 47 60          	movups XMMWORD PTR [edi+0x60],xmm0
100b055d:	0f 11 47 70          	movups XMMWORD PTR [edi+0x70],xmm0
100b0561:	0f 11 87 80 00 00 00 	movups XMMWORD PTR [edi+0x80],xmm0
100b0568:	0f 11 87 90 00 00 00 	movups XMMWORD PTR [edi+0x90],xmm0
100b056f:	5e                   	pop    esi
100b0570:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100b0573:	33 cd                	xor    ecx,ebp
100b0575:	5f                   	pop    edi
100b0576:	e8 38 d6 08 00       	call   0x1013dbb3
100b057b:	8b e5                	mov    esp,ebp
100b057d:	5d                   	pop    ebp
100b057e:	c3                   	ret
