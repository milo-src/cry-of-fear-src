
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c0430 <.text+0xbf430>:
100c0430:	55                   	push   ebp
100c0431:	8b ec                	mov    ebp,esp
100c0433:	51                   	push   ecx
100c0434:	56                   	push   esi
100c0435:	8b f1                	mov    esi,ecx
100c0437:	80 7e 09 00          	cmp    BYTE PTR [esi+0x9],0x0
100c043b:	74 2c                	je     0x100c0469
100c043d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c0440:	51                   	push   ecx
100c0441:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
100c0448:	c7 80 3c 01 00 00 00 	mov    DWORD PTR [eax+0x13c],0x0
100c044f:	00 00 00 
100c0452:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c0455:	c7 80 3c 01 00 00 00 	mov    DWORD PTR [eax+0x13c],0x0
100c045c:	00 00 00 
100c045f:	8b 06                	mov    eax,DWORD PTR [esi]
100c0461:	ff 50 08             	call   DWORD PTR [eax+0x8]
100c0464:	5e                   	pop    esi
100c0465:	8b e5                	mov    esp,ebp
100c0467:	5d                   	pop    ebp
100c0468:	c3                   	ret
100c0469:	80 be f0 01 00 00 00 	cmp    BYTE PTR [esi+0x1f0],0x0
100c0470:	0f 57 d2             	xorps  xmm2,xmm2
100c0473:	0f 84 a5 00 00 00    	je     0x100c051e
100c0479:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c047e:	f3 0f 10 86 f4 01 00 	movss  xmm0,DWORD PTR [esi+0x1f4]
100c0485:	00 
100c0486:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
100c048a:	0f 2f c1             	comiss xmm0,xmm1
100c048d:	76 65                	jbe    0x100c04f4
100c048f:	0f 2f 8e f8 01 00 00 	comiss xmm1,DWORD PTR [esi+0x1f8]
100c0496:	0f 86 82 00 00 00    	jbe    0x100c051e
100c049c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c049f:	83 b8 4c 01 00 00 05 	cmp    DWORD PTR [eax+0x14c],0x5
100c04a6:	75 26                	jne    0x100c04ce
100c04a8:	c7 80 4c 01 00 00 00 	mov    DWORD PTR [eax+0x14c],0x0
100c04af:	00 00 00 
100c04b2:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c04b5:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x437f0000
100c04bc:	00 7f 43 
100c04bf:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c04c4:	8b 00                	mov    eax,DWORD PTR [eax]
100c04c6:	89 86 f8 01 00 00    	mov    DWORD PTR [esi+0x1f8],eax
100c04cc:	eb 50                	jmp    0x100c051e
100c04ce:	c7 80 4c 01 00 00 05 	mov    DWORD PTR [eax+0x14c],0x5
100c04d5:	00 00 00 
100c04d8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c04db:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x0
100c04e2:	00 00 00 
100c04e5:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c04ea:	8b 00                	mov    eax,DWORD PTR [eax]
100c04ec:	89 86 f8 01 00 00    	mov    DWORD PTR [esi+0x1f8],eax
100c04f2:	eb 2a                	jmp    0x100c051e
100c04f4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c04f7:	83 b8 4c 01 00 00 05 	cmp    DWORD PTR [eax+0x14c],0x5
100c04fe:	75 17                	jne    0x100c0517
100c0500:	c7 80 4c 01 00 00 00 	mov    DWORD PTR [eax+0x14c],0x0
100c0507:	00 00 00 
100c050a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c050d:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x437f0000
100c0514:	00 7f 43 
100c0517:	c6 86 f0 01 00 00 00 	mov    BYTE PTR [esi+0x1f0],0x0
100c051e:	57                   	push   edi
100c051f:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
100c0522:	53                   	push   ebx
100c0523:	8b 8f 0c 02 00 00    	mov    ecx,DWORD PTR [edi+0x20c]
100c0529:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
100c052f:	f7 d9                	neg    ecx
100c0531:	1b c9                	sbb    ecx,ecx
100c0533:	23 c8                	and    ecx,eax
100c0535:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c053a:	8b 11                	mov    edx,DWORD PTR [ecx]
100c053c:	b9 cc 21 1a 10       	mov    ecx,0x101a21cc
100c0541:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100c0547:	03 d0                	add    edx,eax
100c0549:	8b c2                	mov    eax,edx
100c054b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100c0550:	8a 18                	mov    bl,BYTE PTR [eax]
100c0552:	3a 19                	cmp    bl,BYTE PTR [ecx]
100c0554:	75 1a                	jne    0x100c0570
100c0556:	84 db                	test   bl,bl
100c0558:	74 12                	je     0x100c056c
100c055a:	8a 58 01             	mov    bl,BYTE PTR [eax+0x1]
100c055d:	3a 59 01             	cmp    bl,BYTE PTR [ecx+0x1]
100c0560:	75 0e                	jne    0x100c0570
100c0562:	83 c0 02             	add    eax,0x2
100c0565:	83 c1 02             	add    ecx,0x2
100c0568:	84 db                	test   bl,bl
100c056a:	75 e4                	jne    0x100c0550
100c056c:	33 c0                	xor    eax,eax
100c056e:	eb 05                	jmp    0x100c0575
100c0570:	1b c0                	sbb    eax,eax
100c0572:	83 c8 01             	or     eax,0x1
100c0575:	85 c0                	test   eax,eax
100c0577:	75 15                	jne    0x100c058e
100c0579:	83 be 14 02 00 00 19 	cmp    DWORD PTR [esi+0x214],0x19
100c0580:	75 0c                	jne    0x100c058e
100c0582:	39 86 f8 00 00 00    	cmp    DWORD PTR [esi+0xf8],eax
100c0588:	0f 84 a2 00 00 00    	je     0x100c0630
100c058e:	b9 88 4e 1d 10       	mov    ecx,0x101d4e88
100c0593:	8b c2                	mov    eax,edx
100c0595:	8a 18                	mov    bl,BYTE PTR [eax]
100c0597:	3a 19                	cmp    bl,BYTE PTR [ecx]
100c0599:	75 1a                	jne    0x100c05b5
100c059b:	84 db                	test   bl,bl
100c059d:	74 12                	je     0x100c05b1
100c059f:	8a 58 01             	mov    bl,BYTE PTR [eax+0x1]
100c05a2:	3a 59 01             	cmp    bl,BYTE PTR [ecx+0x1]
100c05a5:	75 0e                	jne    0x100c05b5
100c05a7:	83 c0 02             	add    eax,0x2
100c05aa:	83 c1 02             	add    ecx,0x2
100c05ad:	84 db                	test   bl,bl
100c05af:	75 e4                	jne    0x100c0595
100c05b1:	33 c0                	xor    eax,eax
100c05b3:	eb 05                	jmp    0x100c05ba
100c05b5:	1b c0                	sbb    eax,eax
100c05b7:	83 c8 01             	or     eax,0x1
100c05ba:	85 c0                	test   eax,eax
100c05bc:	75 22                	jne    0x100c05e0
100c05be:	83 be 14 02 00 00 15 	cmp    DWORD PTR [esi+0x214],0x15
100c05c5:	75 19                	jne    0x100c05e0
100c05c7:	39 86 f8 00 00 00    	cmp    DWORD PTR [esi+0xf8],eax
100c05cd:	75 11                	jne    0x100c05e0
100c05cf:	f3 0f 10 87 64 01 00 	movss  xmm0,DWORD PTR [edi+0x164]
100c05d6:	00 
100c05d7:	0f 2e c2             	ucomiss xmm0,xmm2
100c05da:	9f                   	lahf
100c05db:	f6 c4 44             	test   ah,0x44
100c05de:	7a 50                	jp     0x100c0630
100c05e0:	b8 88 4e 1d 10       	mov    eax,0x101d4e88
100c05e5:	8a 0a                	mov    cl,BYTE PTR [edx]
100c05e7:	3a 08                	cmp    cl,BYTE PTR [eax]
100c05e9:	75 1a                	jne    0x100c0605
100c05eb:	84 c9                	test   cl,cl
100c05ed:	74 12                	je     0x100c0601
100c05ef:	8a 4a 01             	mov    cl,BYTE PTR [edx+0x1]
100c05f2:	3a 48 01             	cmp    cl,BYTE PTR [eax+0x1]
100c05f5:	75 0e                	jne    0x100c0605
100c05f7:	83 c2 02             	add    edx,0x2
100c05fa:	83 c0 02             	add    eax,0x2
100c05fd:	84 c9                	test   cl,cl
100c05ff:	75 e4                	jne    0x100c05e5
100c0601:	33 c0                	xor    eax,eax
100c0603:	eb 05                	jmp    0x100c060a
100c0605:	1b c0                	sbb    eax,eax
100c0607:	83 c8 01             	or     eax,0x1
100c060a:	85 c0                	test   eax,eax
100c060c:	75 50                	jne    0x100c065e
100c060e:	83 be 14 02 00 00 16 	cmp    DWORD PTR [esi+0x214],0x16
100c0615:	75 47                	jne    0x100c065e
100c0617:	39 86 f8 00 00 00    	cmp    DWORD PTR [esi+0xf8],eax
100c061d:	75 3f                	jne    0x100c065e
100c061f:	f3 0f 10 87 64 01 00 	movss  xmm0,DWORD PTR [edi+0x164]
100c0626:	00 
100c0627:	0f 2e c2             	ucomiss xmm0,xmm2
100c062a:	9f                   	lahf
100c062b:	f6 c4 44             	test   ah,0x44
100c062e:	7b 2e                	jnp    0x100c065e
100c0630:	51                   	push   ecx
100c0631:	8b ce                	mov    ecx,esi
100c0633:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100c063a:	e8 61 e7 f4 ff       	call   0x1000eda0
100c063f:	8b 06                	mov    eax,DWORD PTR [esi]
100c0641:	dd d8                	fstp   st(0)
100c0643:	51                   	push   ecx
100c0644:	8b ce                	mov    ecx,esi
100c0646:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
100c064d:	ff 50 08             	call   DWORD PTR [eax+0x8]
100c0650:	8b ce                	mov    ecx,esi
100c0652:	e8 19 d4 ff ff       	call   0x100bda70
100c0657:	5b                   	pop    ebx
100c0658:	5f                   	pop    edi
100c0659:	5e                   	pop    esi
100c065a:	8b e5                	mov    esp,ebp
100c065c:	5d                   	pop    ebp
100c065d:	c3                   	ret
100c065e:	8b 06                	mov    eax,DWORD PTR [esi]
100c0660:	51                   	push   ecx
100c0661:	8b ce                	mov    ecx,esi
100c0663:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
100c066a:	ff 50 08             	call   DWORD PTR [eax+0x8]
100c066d:	8b 06                	mov    eax,DWORD PTR [esi]
100c066f:	8b ce                	mov    ecx,esi
100c0671:	ff 90 28 01 00 00    	call   DWORD PTR [eax+0x128]
100c0677:	80 7e 09 00          	cmp    BYTE PTR [esi+0x9],0x0
100c067b:	75 14                	jne    0x100c0691
100c067d:	51                   	push   ecx
100c067e:	8b ce                	mov    ecx,esi
100c0680:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100c0687:	e8 14 e7 f4 ff       	call   0x1000eda0
100c068c:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
100c068f:	eb 1a                	jmp    0x100c06ab
100c0691:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c0694:	c7 80 38 01 00 00 00 	mov    DWORD PTR [eax+0x138],0x0
100c069b:	00 00 00 
100c069e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c06a1:	c7 80 3c 01 00 00 00 	mov    DWORD PTR [eax+0x13c],0x0
100c06a8:	00 00 00 
100c06ab:	8b 86 24 02 00 00    	mov    eax,DWORD PTR [esi+0x224]
100c06b1:	83 f8 06             	cmp    eax,0x6
100c06b4:	74 47                	je     0x100c06fd
100c06b6:	83 f8 08             	cmp    eax,0x8
100c06b9:	74 42                	je     0x100c06fd
100c06bb:	83 be 14 02 00 00 01 	cmp    DWORD PTR [esi+0x214],0x1
100c06c2:	75 39                	jne    0x100c06fd
100c06c4:	83 be f8 00 00 00 00 	cmp    DWORD PTR [esi+0xf8],0x0
100c06cb:	74 30                	je     0x100c06fd
100c06cd:	83 be fc 00 00 00 00 	cmp    DWORD PTR [esi+0xfc],0x0
100c06d4:	8b ce                	mov    ecx,esi
100c06d6:	6a 01                	push   0x1
100c06d8:	74 07                	je     0x100c06e1
100c06da:	e8 71 e2 f4 ff       	call   0x1000e950
100c06df:	eb 05                	jmp    0x100c06e6
100c06e1:	e8 9a e2 f4 ff       	call   0x1000e980
100c06e6:	8b c8                	mov    ecx,eax
100c06e8:	83 f9 ff             	cmp    ecx,0xffffffff
100c06eb:	74 10                	je     0x100c06fd
100c06ed:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c06f0:	89 88 2c 01 00 00    	mov    DWORD PTR [eax+0x12c],ecx
100c06f6:	8b ce                	mov    ecx,esi
100c06f8:	e8 e3 e2 f4 ff       	call   0x1000e9e0
100c06fd:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100c0702:	51                   	push   ecx
100c0703:	8b ce                	mov    ecx,esi
100c0705:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100c070a:	e8 e1 de f4 ff       	call   0x1000e5f0
100c070f:	83 be b8 02 00 00 00 	cmp    DWORD PTR [esi+0x2b8],0x0
100c0716:	74 15                	je     0x100c072d
100c0718:	8b 06                	mov    eax,DWORD PTR [esi]
100c071a:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100c071f:	51                   	push   ecx
100c0720:	8b ce                	mov    ecx,esi
100c0722:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100c0727:	ff 90 5c 01 00 00    	call   DWORD PTR [eax+0x15c]
100c072d:	5b                   	pop    ebx
100c072e:	5f                   	pop    edi
100c072f:	5e                   	pop    esi
100c0730:	8b e5                	mov    esp,ebp
100c0732:	5d                   	pop    ebp
100c0733:	c3                   	ret
