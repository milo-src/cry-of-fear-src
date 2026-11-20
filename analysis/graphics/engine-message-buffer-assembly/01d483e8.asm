
D:\Steam\steamapps\common\Cry of Fear\hw.dll:     file format pei-i386


Disassembly of section .text:

01d483e8 <.text+0x473e8>:
 1d483e8:	55                   	push   ebp
 1d483e9:	8b ec                	mov    ebp,esp
 1d483eb:	83 ec 18             	sub    esp,0x18
 1d483ee:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d483f1:	8b 48 10             	mov    ecx,DWORD PTR [eax+0x10]
 1d483f4:	03 4d 0c             	add    ecx,DWORD PTR [ebp+0xc]
 1d483f7:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d483fa:	3b 4a 0c             	cmp    ecx,DWORD PTR [edx+0xc]
 1d483fd:	0f 8e 2f 01 00 00    	jle    0x1d48532
 1d48403:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d48406:	33 c9                	xor    ecx,ecx
 1d48408:	66 8b 48 04          	mov    cx,WORD PTR [eax+0x4]
 1d4840c:	83 e1 01             	and    ecx,0x1
 1d4840f:	85 c9                	test   ecx,ecx
 1d48411:	75 5f                	jne    0x1d48472
 1d48413:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d48416:	83 7a 0c 00          	cmp    DWORD PTR [edx+0xc],0x0
 1d4841a:	75 2c                	jne    0x1d48448
 1d4841c:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d4841f:	83 38 00             	cmp    DWORD PTR [eax],0x0
 1d48422:	74 0a                	je     0x1d4842e
 1d48424:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1d48427:	8b 11                	mov    edx,DWORD PTR [ecx]
 1d48429:	89 55 f8             	mov    DWORD PTR [ebp-0x8],edx
 1d4842c:	eb 07                	jmp    0x1d48435
 1d4842e:	c7 45 f8 8c 12 eb 01 	mov    DWORD PTR [ebp-0x8],0x1eb128c
 1d48435:	8b 45 f8             	mov    eax,DWORD PTR [ebp-0x8]
 1d48438:	50                   	push   eax
 1d48439:	68 90 12 eb 01       	push   0x1eb1290
 1d4843e:	e8 13 a2 0a 00       	call   0x1df2656
 1d48443:	83 c4 08             	add    esp,0x8
 1d48446:	eb 2a                	jmp    0x1d48472
 1d48448:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1d4844b:	83 39 00             	cmp    DWORD PTR [ecx],0x0
 1d4844e:	74 0a                	je     0x1d4845a
 1d48450:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d48453:	8b 02                	mov    eax,DWORD PTR [edx]
 1d48455:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
 1d48458:	eb 07                	jmp    0x1d48461
 1d4845a:	c7 45 f4 d0 12 eb 01 	mov    DWORD PTR [ebp-0xc],0x1eb12d0
 1d48461:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
 1d48464:	51                   	push   ecx
 1d48465:	68 d4 12 eb 01       	push   0x1eb12d4
 1d4846a:	e8 e7 a1 0a 00       	call   0x1df2656
 1d4846f:	83 c4 08             	add    esp,0x8
 1d48472:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d48475:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
 1d48478:	3b 42 0c             	cmp    eax,DWORD PTR [edx+0xc]
 1d4847b:	7e 6e                	jle    0x1d484eb
 1d4847d:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1d48480:	33 d2                	xor    edx,edx
 1d48482:	66 8b 51 04          	mov    dx,WORD PTR [ecx+0x4]
 1d48486:	83 e2 01             	and    edx,0x1
 1d48489:	85 d2                	test   edx,edx
 1d4848b:	75 30                	jne    0x1d484bd
 1d4848d:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d48490:	83 38 00             	cmp    DWORD PTR [eax],0x0
 1d48493:	74 0a                	je     0x1d4849f
 1d48495:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1d48498:	8b 11                	mov    edx,DWORD PTR [ecx]
 1d4849a:	89 55 f0             	mov    DWORD PTR [ebp-0x10],edx
 1d4849d:	eb 07                	jmp    0x1d484a6
 1d4849f:	c7 45 f0 10 13 eb 01 	mov    DWORD PTR [ebp-0x10],0x1eb1310
 1d484a6:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
 1d484a9:	50                   	push   eax
 1d484aa:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
 1d484ad:	51                   	push   ecx
 1d484ae:	68 14 13 eb 01       	push   0x1eb1314
 1d484b3:	e8 9e a1 0a 00       	call   0x1df2656
 1d484b8:	83 c4 0c             	add    esp,0xc
 1d484bb:	eb 2e                	jmp    0x1d484eb
 1d484bd:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d484c0:	83 3a 00             	cmp    DWORD PTR [edx],0x0
 1d484c3:	74 0a                	je     0x1d484cf
 1d484c5:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d484c8:	8b 08                	mov    ecx,DWORD PTR [eax]
 1d484ca:	89 4d ec             	mov    DWORD PTR [ebp-0x14],ecx
 1d484cd:	eb 07                	jmp    0x1d484d6
 1d484cf:	c7 45 ec 40 13 eb 01 	mov    DWORD PTR [ebp-0x14],0x1eb1340
 1d484d6:	8b 55 ec             	mov    edx,DWORD PTR [ebp-0x14]
 1d484d9:	52                   	push   edx
 1d484da:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
 1d484dd:	50                   	push   eax
 1d484de:	68 44 13 eb 01       	push   0x1eb1344
 1d484e3:	e8 f0 26 00 00       	call   0x1d4abd8
 1d484e8:	83 c4 0c             	add    esp,0xc
 1d484eb:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1d484ee:	83 39 00             	cmp    DWORD PTR [ecx],0x0
 1d484f1:	74 0a                	je     0x1d484fd
 1d484f3:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d484f6:	8b 02                	mov    eax,DWORD PTR [edx]
 1d484f8:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
 1d484fb:	eb 07                	jmp    0x1d48504
 1d484fd:	c7 45 e8 7c 13 eb 01 	mov    DWORD PTR [ebp-0x18],0x1eb137c
 1d48504:	8b 4d e8             	mov    ecx,DWORD PTR [ebp-0x18]
 1d48507:	51                   	push   ecx
 1d48508:	68 80 13 eb 01       	push   0x1eb1380
 1d4850d:	e8 87 25 00 00       	call   0x1d4aa99
 1d48512:	83 c4 08             	add    esp,0x8
 1d48515:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d48518:	52                   	push   edx
 1d48519:	e8 a8 fe ff ff       	call   0x1d483c6
 1d4851e:	83 c4 04             	add    esp,0x4
 1d48521:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d48524:	66 8b 48 04          	mov    cx,WORD PTR [eax+0x4]
 1d48528:	80 c9 02             	or     cl,0x2
 1d4852b:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d4852e:	66 89 4a 04          	mov    WORD PTR [edx+0x4],cx
 1d48532:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d48535:	8b 48 08             	mov    ecx,DWORD PTR [eax+0x8]
 1d48538:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d4853b:	03 4a 10             	add    ecx,DWORD PTR [edx+0x10]
 1d4853e:	89 4d fc             	mov    DWORD PTR [ebp-0x4],ecx
 1d48541:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
 1d48544:	8b 48 10             	mov    ecx,DWORD PTR [eax+0x10]
 1d48547:	03 4d 0c             	add    ecx,DWORD PTR [ebp+0xc]
 1d4854a:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d4854d:	89 4a 10             	mov    DWORD PTR [edx+0x10],ecx
 1d48550:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
 1d48553:	8b e5                	mov    esp,ebp
 1d48555:	5d                   	pop    ebp
 1d48556:	c3                   	ret
 1d48557:	55                   	push   ebp
 1d48558:	8b ec                	mov    ebp,esp
 1d4855a:	51                   	push   ecx
 1d4855b:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
 1d4855e:	50                   	push   eax
 1d4855f:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
 1d48562:	51                   	push   ecx
 1d48563:	e8 80 fe ff ff       	call   0x1d483e8
 1d48568:	83 c4 08             	add    esp,0x8
 1d4856b:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
 1d4856e:	8b 55 08             	mov    edx,DWORD PTR [ebp+0x8]
 1d48571:	33 c0                	xor    eax,eax
 1d48573:	66 8b 42 04          	mov    ax,WORD PTR [edx+0x4]
 1d48577:	83 e0 02             	and    eax,0x2
 1d4857a:	85 c0                	test   eax,eax
 1d4857c:	74 02                	je     0x1d48580
 1d4857e:	eb 14                	jmp    0x1d48594
 1d48580:	8b 4d 10             	mov    ecx,DWORD PTR [ebp+0x10]
 1d48583:	51                   	push   ecx
 1d48584:	8b 55 0c             	mov    edx,DWORD PTR [ebp+0xc]
 1d48587:	52                   	push   edx
 1d48588:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
 1d4858b:	50                   	push   eax
 1d4858c:	e8 86 df ff ff       	call   0x1d46517
 1d48591:	83 c4 0c             	add    esp,0xc
 1d48594:	8b e5                	mov    esp,ebp
 1d48596:	5d                   	pop    ebp
 1d48597:	c3                   	ret
