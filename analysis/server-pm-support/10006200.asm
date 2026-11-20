
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10006200 <.text+0x5200>:
10006200:	55                   	push   ebp
10006201:	8b ec                	mov    ebp,esp
10006203:	81 ec 10 02 00 00    	sub    esp,0x210
10006209:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1000620e:	33 c5                	xor    eax,ebp
10006210:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10006213:	83 3d 5c 0c 22 10 00 	cmp    DWORD PTR ds:0x10220c5c,0x0
1000621a:	0f 85 e8 02 00 00    	jne    0x10006508
10006220:	56                   	push   esi
10006221:	68 00 1a 00 00       	push   0x1a00
10006226:	6a 00                	push   0x0
10006228:	68 f0 0f 22 10       	push   0x10220ff0
1000622d:	e8 5e 92 13 00       	call   0x1013f490
10006232:	68 00 02 00 00       	push   0x200
10006237:	6a 00                	push   0x0
10006239:	68 f0 29 22 10       	push   0x102229f0
1000623e:	e8 4d 92 13 00       	call   0x1013f490
10006243:	68 00 02 00 00       	push   0x200
10006248:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
1000624e:	c7 05 e8 0f 22 10 00 	mov    DWORD PTR ds:0x10220fe8,0x0
10006255:	00 00 00 
10006258:	6a 00                	push   0x0
1000625a:	50                   	push   eax
1000625b:	e8 30 92 13 00       	call   0x1013f490
10006260:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10006266:	68 f0 13 1a 10       	push   0x101a13f0
1000626b:	8d 81 f4 f3 04 00    	lea    eax,[ecx+0x4f3f4]
10006271:	50                   	push   eax
10006272:	8b 81 58 f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f558]
10006278:	ff d0                	call   eax
1000627a:	8b f0                	mov    esi,eax
1000627c:	83 c4 2c             	add    esp,0x2c
1000627f:	85 f6                	test   esi,esi
10006281:	74 5f                	je     0x100062e2
10006283:	8b ce                	mov    ecx,esi
10006285:	8d 51 01             	lea    edx,[ecx+0x1]
10006288:	8a 01                	mov    al,BYTE PTR [ecx]
1000628a:	41                   	inc    ecx
1000628b:	84 c0                	test   al,al
1000628d:	75 f9                	jne    0x10006288
1000628f:	2b ca                	sub    ecx,edx
10006291:	83 f9 02             	cmp    ecx,0x2
10006294:	76 4c                	jbe    0x100062e2
10006296:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000629b:	56                   	push   esi
1000629c:	8b 80 a4 f5 04 00    	mov    eax,DWORD PTR [eax+0x4f5a4]
100062a2:	ff d0                	call   eax
100062a4:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
100062aa:	6a 00                	push   0x0
100062ac:	6a 05                	push   0x5
100062ae:	56                   	push   esi
100062af:	8b 89 a8 f5 04 00    	mov    ecx,DWORD PTR [ecx+0x4f5a8]
100062b5:	89 85 f8 fd ff ff    	mov    DWORD PTR [ebp-0x208],eax
100062bb:	ff d1                	call   ecx
100062bd:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
100062c3:	56                   	push   esi
100062c4:	68 f4 13 1a 10       	push   0x101a13f4
100062c9:	89 85 f4 fd ff ff    	mov    DWORD PTR [ebp-0x20c],eax
100062cf:	8b 89 6c f5 04 00    	mov    ecx,DWORD PTR [ecx+0x4f56c]
100062d5:	ff d1                	call   ecx
100062d7:	8b b5 f4 fd ff ff    	mov    esi,DWORD PTR [ebp-0x20c]
100062dd:	83 c4 18             	add    esp,0x18
100062e0:	eb 39                	jmp    0x1000631b
100062e2:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100062e7:	68 14 14 1a 10       	push   0x101a1414
100062ec:	8b 80 a4 f5 04 00    	mov    eax,DWORD PTR [eax+0x4f5a4]
100062f2:	ff d0                	call   eax
100062f4:	89 85 f8 fd ff ff    	mov    DWORD PTR [ebp-0x208],eax
100062fa:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100062ff:	6a 00                	push   0x0
10006301:	6a 05                	push   0x5
10006303:	68 14 14 1a 10       	push   0x101a1414
10006308:	8b 80 a8 f5 04 00    	mov    eax,DWORD PTR [eax+0x4f5a8]
1000630e:	ff d0                	call   eax
10006310:	8b f0                	mov    esi,eax
10006312:	83 c4 10             	add    esp,0x10
10006315:	89 b5 f4 fd ff ff    	mov    DWORD PTR [ebp-0x20c],esi
1000631b:	85 f6                	test   esi,esi
1000631d:	0f 84 e4 01 00 00    	je     0x10006507
10006323:	68 ff 01 00 00       	push   0x1ff
10006328:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
1000632e:	c7 85 f0 fd ff ff 00 	mov    DWORD PTR [ebp-0x210],0x0
10006335:	00 00 00 
10006338:	50                   	push   eax
10006339:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
1000633f:	50                   	push   eax
10006340:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10006345:	ff b5 f8 fd ff ff    	push   DWORD PTR [ebp-0x208]
1000634b:	56                   	push   esi
1000634c:	8b 80 b0 f5 04 00    	mov    eax,DWORD PTR [eax+0x4f5b0]
10006352:	ff d0                	call   eax
10006354:	83 c4 14             	add    esp,0x14
10006357:	85 c0                	test   eax,eax
10006359:	0f 84 88 01 00 00    	je     0x100064e7
1000635f:	53                   	push   ebx
10006360:	57                   	push   edi
10006361:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10006365:	66 66 66 0f 1f 84 00 	data16 data16 nop WORD PTR [eax+eax*1+0x0]
1000636c:	00 00 00 00 
10006370:	81 3d e8 0f 22 10 00 	cmp    DWORD PTR ds:0x10220fe8,0x200
10006377:	02 00 00 
1000637a:	0f 8d 65 01 00 00    	jge    0x100064e5
10006380:	33 f6                	xor    esi,esi
10006382:	80 bd fc fd ff ff 00 	cmp    BYTE PTR [ebp-0x204],0x0
10006389:	74 25                	je     0x100063b0
1000638b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
10006390:	0f be 84 35 fc fd ff 	movsx  eax,BYTE PTR [ebp+esi*1-0x204]
10006397:	ff 
10006398:	50                   	push   eax
10006399:	e8 b2 6e 16 00       	call   0x1016d250
1000639e:	83 c4 04             	add    esp,0x4
100063a1:	85 c0                	test   eax,eax
100063a3:	74 0b                	je     0x100063b0
100063a5:	46                   	inc    esi
100063a6:	80 bc 35 fc fd ff ff 	cmp    BYTE PTR [ebp+esi*1-0x204],0x0
100063ad:	00 
100063ae:	75 e0                	jne    0x10006390
100063b0:	8a 84 35 fc fd ff ff 	mov    al,BYTE PTR [ebp+esi*1-0x204]
100063b7:	84 c0                	test   al,al
100063b9:	0f 84 ee 00 00 00    	je     0x100064ad
100063bf:	3c 2f                	cmp    al,0x2f
100063c1:	0f 84 e6 00 00 00    	je     0x100064ad
100063c7:	0f be c0             	movsx  eax,al
100063ca:	50                   	push   eax
100063cb:	e8 f0 69 16 00       	call   0x1016cdc0
100063d0:	83 c4 04             	add    esp,0x4
100063d3:	85 c0                	test   eax,eax
100063d5:	0f 84 d2 00 00 00    	je     0x100064ad
100063db:	0f be 84 35 fc fd ff 	movsx  eax,BYTE PTR [ebp+esi*1-0x204]
100063e2:	ff 
100063e3:	50                   	push   eax
100063e4:	e8 12 75 16 00       	call   0x1016d8fb
100063e9:	8b 0d e8 0f 22 10    	mov    ecx,DWORD PTR ds:0x10220fe8
100063ef:	46                   	inc    esi
100063f0:	83 c4 04             	add    esp,0x4
100063f3:	88 81 f0 29 22 10    	mov    BYTE PTR [ecx+0x102229f0],al
100063f9:	8a 84 35 fc fd ff ff 	mov    al,BYTE PTR [ebp+esi*1-0x204]
10006400:	84 c0                	test   al,al
10006402:	74 1c                	je     0x10006420
10006404:	0f be c0             	movsx  eax,al
10006407:	50                   	push   eax
10006408:	e8 43 6e 16 00       	call   0x1016d250
1000640d:	83 c4 04             	add    esp,0x4
10006410:	85 c0                	test   eax,eax
10006412:	74 0c                	je     0x10006420
10006414:	8a 84 35 fd fd ff ff 	mov    al,BYTE PTR [ebp+esi*1-0x203]
1000641b:	46                   	inc    esi
1000641c:	84 c0                	test   al,al
1000641e:	75 e4                	jne    0x10006404
10006420:	8d 9d fc fd ff ff    	lea    ebx,[ebp-0x204]
10006426:	03 de                	add    ebx,esi
10006428:	80 3b 00             	cmp    BYTE PTR [ebx],0x0
1000642b:	0f 84 7c 00 00 00    	je     0x100064ad
10006431:	8b fe                	mov    edi,esi
10006433:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
10006437:	66 0f 1f 84 00 00 00 	nop    WORD PTR [eax+eax*1+0x0]
1000643e:	00 00 
10006440:	0f be 84 3d fc fd ff 	movsx  eax,BYTE PTR [ebp+edi*1-0x204]
10006447:	ff 
10006448:	50                   	push   eax
10006449:	e8 02 6e 16 00       	call   0x1016d250
1000644e:	83 c4 04             	add    esp,0x4
10006451:	85 c0                	test   eax,eax
10006453:	75 0a                	jne    0x1000645f
10006455:	47                   	inc    edi
10006456:	38 84 3d fc fd ff ff 	cmp    BYTE PTR [ebp+edi*1-0x204],al
1000645d:	75 e1                	jne    0x10006440
1000645f:	80 bc 3d fc fd ff ff 	cmp    BYTE PTR [ebp+edi*1-0x204],0x0
10006466:	00 
10006467:	74 44                	je     0x100064ad
10006469:	83 c6 0c             	add    esi,0xc
1000646c:	3b fe                	cmp    edi,esi
1000646e:	0f 4c f7             	cmovl  esi,edi
10006471:	81 fe 00 02 00 00    	cmp    esi,0x200
10006477:	0f 83 99 00 00 00    	jae    0x10006516
1000647d:	a1 e8 0f 22 10       	mov    eax,ds:0x10220fe8
10006482:	6b c8 0d             	imul   ecx,eax,0xd
10006485:	40                   	inc    eax
10006486:	c6 84 35 fc fd ff ff 	mov    BYTE PTR [ebp+esi*1-0x204],0x0
1000648d:	00 
1000648e:	a3 e8 0f 22 10       	mov    ds:0x10220fe8,eax
10006493:	81 c1 f0 0f 22 10    	add    ecx,0x10220ff0
10006499:	2b cb                	sub    ecx,ebx
1000649b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100064a0:	8a 03                	mov    al,BYTE PTR [ebx]
100064a2:	8d 5b 01             	lea    ebx,[ebx+0x1]
100064a5:	88 44 19 ff          	mov    BYTE PTR [ecx+ebx*1-0x1],al
100064a9:	84 c0                	test   al,al
100064ab:	75 f3                	jne    0x100064a0
100064ad:	8b b5 f4 fd ff ff    	mov    esi,DWORD PTR [ebp-0x20c]
100064b3:	8d 85 fc fd ff ff    	lea    eax,[ebp-0x204]
100064b9:	68 ff 01 00 00       	push   0x1ff
100064be:	50                   	push   eax
100064bf:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
100064c5:	50                   	push   eax
100064c6:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100064cb:	ff b5 f8 fd ff ff    	push   DWORD PTR [ebp-0x208]
100064d1:	56                   	push   esi
100064d2:	8b 80 b0 f5 04 00    	mov    eax,DWORD PTR [eax+0x4f5b0]
100064d8:	ff d0                	call   eax
100064da:	83 c4 14             	add    esp,0x14
100064dd:	85 c0                	test   eax,eax
100064df:	0f 85 8b fe ff ff    	jne    0x10006370
100064e5:	5f                   	pop    edi
100064e6:	5b                   	pop    ebx
100064e7:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100064ec:	56                   	push   esi
100064ed:	8b 80 ac f5 04 00    	mov    eax,DWORD PTR [eax+0x4f5ac]
100064f3:	ff d0                	call   eax
100064f5:	83 c4 04             	add    esp,0x4
100064f8:	e8 e3 2b 00 00       	call   0x100090e0
100064fd:	c7 05 5c 0c 22 10 01 	mov    DWORD PTR ds:0x10220c5c,0x1
10006504:	00 00 00 
10006507:	5e                   	pop    esi
10006508:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000650b:	33 cd                	xor    ecx,ebp
1000650d:	e8 a1 76 13 00       	call   0x1013dbb3
10006512:	8b e5                	mov    esp,ebp
10006514:	5d                   	pop    ebp
10006515:	c3                   	ret
10006516:	e8 2d 78 13 00       	call   0x1013dd48
