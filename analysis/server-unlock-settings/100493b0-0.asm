
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100493b0 <.text+0x483b0>:
100493b0:	55                   	push   ebp
100493b1:	8b ec                	mov    ebp,esp
100493b3:	6a ff                	push   0xffffffff
100493b5:	68 fd d7 19 10       	push   0x1019d7fd
100493ba:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100493c0:	50                   	push   eax
100493c1:	83 ec 30             	sub    esp,0x30
100493c4:	53                   	push   ebx
100493c5:	56                   	push   esi
100493c6:	57                   	push   edi
100493c7:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100493cc:	33 c5                	xor    eax,ebp
100493ce:	50                   	push   eax
100493cf:	8d 45 f4             	lea    eax,[ebp-0xc]
100493d2:	64 a3 00 00 00 00    	mov    fs:0x0,eax
100493d8:	89 65 f0             	mov    DWORD PTR [ebp-0x10],esp
100493db:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
100493de:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100493e1:	c7 45 e4 00 00 00 00 	mov    DWORD PTR [ebp-0x1c],0x0
100493e8:	8d 51 01             	lea    edx,[ecx+0x1]
100493eb:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100493f0:	8a 01                	mov    al,BYTE PTR [ecx]
100493f2:	41                   	inc    ecx
100493f3:	84 c0                	test   al,al
100493f5:	75 f9                	jne    0x100493f0
100493f7:	8b 03                	mov    eax,DWORD PTR [ebx]
100493f9:	2b ca                	sub    ecx,edx
100493fb:	89 4d e8             	mov    DWORD PTR [ebp-0x18],ecx
100493fe:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10049401:	8b 7c 18 24          	mov    edi,DWORD PTR [eax+ebx*1+0x24]
10049405:	8b 74 18 20          	mov    esi,DWORD PTR [eax+ebx*1+0x20]
10049409:	85 ff                	test   edi,edi
1004940b:	7c 17                	jl     0x10049424
1004940d:	7f 0e                	jg     0x1004941d
1004940f:	85 f6                	test   esi,esi
10049411:	74 11                	je     0x10049424
10049413:	85 ff                	test   edi,edi
10049415:	7c 0d                	jl     0x10049424
10049417:	7f 04                	jg     0x1004941d
10049419:	3b f1                	cmp    esi,ecx
1004941b:	76 07                	jbe    0x10049424
1004941d:	2b f1                	sub    esi,ecx
1004941f:	83 df 00             	sbb    edi,0x0
10049422:	eb 0e                	jmp    0x10049432
10049424:	0f 57 c0             	xorps  xmm0,xmm0
10049427:	66 0f 13 45 d8       	movlpd QWORD PTR [ebp-0x28],xmm0
1004942c:	8b 7d dc             	mov    edi,DWORD PTR [ebp-0x24]
1004942f:	8b 75 d8             	mov    esi,DWORD PTR [ebp-0x28]
10049432:	53                   	push   ebx
10049433:	8d 4d d8             	lea    ecx,[ebp-0x28]
10049436:	e8 e5 0b 00 00       	call   0x1004a020
1004943b:	80 7d dc 00          	cmp    BYTE PTR [ebp-0x24],0x0
1004943f:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
10049446:	75 0a                	jne    0x10049452
10049448:	b9 04 00 00 00       	mov    ecx,0x4
1004944d:	e9 41 01 00 00       	jmp    0x10049593
10049452:	8b 0b                	mov    ecx,DWORD PTR [ebx]
10049454:	c6 45 fc 01          	mov    BYTE PTR [ebp-0x4],0x1
10049458:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1004945b:	8b 44 18 14          	mov    eax,DWORD PTR [eax+ebx*1+0x14]
1004945f:	25 c0 01 00 00       	and    eax,0x1c0
10049464:	83 f8 40             	cmp    eax,0x40
10049467:	74 6a                	je     0x100494d3
10049469:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
10049470:	85 ff                	test   edi,edi
10049472:	7c 5d                	jl     0x100494d1
10049474:	7f 04                	jg     0x1004947a
10049476:	85 f6                	test   esi,esi
10049478:	74 57                	je     0x100494d1
1004947a:	8b 03                	mov    eax,DWORD PTR [ebx]
1004947c:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004947f:	8a 4c 18 40          	mov    cl,BYTE PTR [eax+ebx*1+0x40]
10049483:	88 4d ef             	mov    BYTE PTR [ebp-0x11],cl
10049486:	8b 4c 18 38          	mov    ecx,DWORD PTR [eax+ebx*1+0x38]
1004948a:	8b 41 20             	mov    eax,DWORD PTR [ecx+0x20]
1004948d:	83 38 00             	cmp    DWORD PTR [eax],0x0
10049490:	74 20                	je     0x100494b2
10049492:	8b 51 30             	mov    edx,DWORD PTR [ecx+0x30]
10049495:	8b 02                	mov    eax,DWORD PTR [edx]
10049497:	85 c0                	test   eax,eax
10049499:	7e 17                	jle    0x100494b2
1004949b:	48                   	dec    eax
1004949c:	89 02                	mov    DWORD PTR [edx],eax
1004949e:	8b 49 20             	mov    ecx,DWORD PTR [ecx+0x20]
100494a1:	8b 11                	mov    edx,DWORD PTR [ecx]
100494a3:	8d 42 01             	lea    eax,[edx+0x1]
100494a6:	89 01                	mov    DWORD PTR [ecx],eax
100494a8:	8a 45 ef             	mov    al,BYTE PTR [ebp-0x11]
100494ab:	88 02                	mov    BYTE PTR [edx],al
100494ad:	0f b6 c0             	movzx  eax,al
100494b0:	eb 0a                	jmp    0x100494bc
100494b2:	0f b6 45 ef          	movzx  eax,BYTE PTR [ebp-0x11]
100494b6:	8b 11                	mov    edx,DWORD PTR [ecx]
100494b8:	50                   	push   eax
100494b9:	ff 52 0c             	call   DWORD PTR [edx+0xc]
100494bc:	83 f8 ff             	cmp    eax,0xffffffff
100494bf:	75 08                	jne    0x100494c9
100494c1:	8d 48 05             	lea    ecx,[eax+0x5]
100494c4:	e9 8d 00 00 00       	jmp    0x10049556
100494c9:	83 c6 ff             	add    esi,0xffffffff
100494cc:	83 d7 ff             	adc    edi,0xffffffff
100494cf:	eb 9f                	jmp    0x10049470
100494d1:	8b 0b                	mov    ecx,DWORD PTR [ebx]
100494d3:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100494d6:	6a 00                	push   0x0
100494d8:	ff 75 e8             	push   DWORD PTR [ebp-0x18]
100494db:	8b 4c 18 38          	mov    ecx,DWORD PTR [eax+ebx*1+0x38]
100494df:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100494e2:	8b 01                	mov    eax,DWORD PTR [ecx]
100494e4:	8b 40 24             	mov    eax,DWORD PTR [eax+0x24]
100494e7:	ff d0                	call   eax
100494e9:	3b 45 e8             	cmp    eax,DWORD PTR [ebp-0x18]
100494ec:	75 57                	jne    0x10049545
100494ee:	85 d2                	test   edx,edx
100494f0:	75 53                	jne    0x10049545
100494f2:	85 ff                	test   edi,edi
100494f4:	7c 5e                	jl     0x10049554
100494f6:	7f 04                	jg     0x100494fc
100494f8:	85 f6                	test   esi,esi
100494fa:	74 58                	je     0x10049554
100494fc:	8b 03                	mov    eax,DWORD PTR [ebx]
100494fe:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10049501:	8b 4c 18 38          	mov    ecx,DWORD PTR [eax+ebx*1+0x38]
10049505:	8a 54 18 40          	mov    dl,BYTE PTR [eax+ebx*1+0x40]
10049509:	88 55 ef             	mov    BYTE PTR [ebp-0x11],dl
1004950c:	8b 41 20             	mov    eax,DWORD PTR [ecx+0x20]
1004950f:	83 38 00             	cmp    DWORD PTR [eax],0x0
10049512:	74 23                	je     0x10049537
10049514:	8b 41 30             	mov    eax,DWORD PTR [ecx+0x30]
10049517:	8b 00                	mov    eax,DWORD PTR [eax]
10049519:	85 c0                	test   eax,eax
1004951b:	7e 1a                	jle    0x10049537
1004951d:	8b 51 30             	mov    edx,DWORD PTR [ecx+0x30]
10049520:	48                   	dec    eax
10049521:	89 02                	mov    DWORD PTR [edx],eax
10049523:	8b 49 20             	mov    ecx,DWORD PTR [ecx+0x20]
10049526:	8b 11                	mov    edx,DWORD PTR [ecx]
10049528:	8d 42 01             	lea    eax,[edx+0x1]
1004952b:	89 01                	mov    DWORD PTR [ecx],eax
1004952d:	8a 45 ef             	mov    al,BYTE PTR [ebp-0x11]
10049530:	88 02                	mov    BYTE PTR [edx],al
10049532:	0f b6 c0             	movzx  eax,al
10049535:	eb 09                	jmp    0x10049540
10049537:	0f b6 c2             	movzx  eax,dl
1004953a:	8b 11                	mov    edx,DWORD PTR [ecx]
1004953c:	50                   	push   eax
1004953d:	ff 52 0c             	call   DWORD PTR [edx+0xc]
10049540:	83 f8 ff             	cmp    eax,0xffffffff
10049543:	75 07                	jne    0x1004954c
10049545:	b9 04 00 00 00       	mov    ecx,0x4
1004954a:	eb 0a                	jmp    0x10049556
1004954c:	83 c6 ff             	add    esi,0xffffffff
1004954f:	83 d7 ff             	adc    edi,0xffffffff
10049552:	eb 9e                	jmp    0x100494f2
10049554:	33 c9                	xor    ecx,ecx
10049556:	8b 03                	mov    eax,DWORD PTR [ebx]
10049558:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004955b:	c7 44 18 20 00 00 00 	mov    DWORD PTR [eax+ebx*1+0x20],0x0
10049562:	00 
10049563:	c7 44 18 24 00 00 00 	mov    DWORD PTR [eax+ebx*1+0x24],0x0
1004956a:	00 
1004956b:	eb 1f                	jmp    0x1004958c
