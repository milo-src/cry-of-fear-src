
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100534d0 <.text+0x524d0>:
100534d0:	55                   	push   ebp
100534d1:	8b ec                	mov    ebp,esp
100534d3:	6a ff                	push   0xffffffff
100534d5:	68 46 dc 19 10       	push   0x1019dc46
100534da:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100534e0:	50                   	push   eax
100534e1:	81 ec f4 02 00 00    	sub    esp,0x2f4
100534e7:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100534ec:	33 c5                	xor    eax,ebp
100534ee:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100534f1:	53                   	push   ebx
100534f2:	56                   	push   esi
100534f3:	57                   	push   edi
100534f4:	50                   	push   eax
100534f5:	8d 45 f4             	lea    eax,[ebp-0xc]
100534f8:	64 a3 00 00 00 00    	mov    fs:0x0,eax
100534fe:	8b d9                	mov    ebx,ecx
10053500:	89 9d b8 fd ff ff    	mov    DWORD PTR [ebp-0x248],ebx
10053506:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
1005350c:	50                   	push   eax
1005350d:	ff 15 d4 30 22 10    	call   DWORD PTR ds:0x102230d4
10053513:	68 bc 8b 1a 10       	push   0x101a8bbc
10053518:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
1005351e:	d9 9d bc fd ff ff    	fstp   DWORD PTR [ebp-0x244]
10053524:	f3 0f 2c 85 bc fd ff 	cvttss2si eax,DWORD PTR [ebp-0x244]
1005352b:	ff 
1005352c:	83 c4 08             	add    esp,0x8
1005352f:	83 f8 07             	cmp    eax,0x7
10053532:	0f 87 c2 00 00 00    	ja     0x100535fa
10053538:	ff 24 85 d8 37 05 10 	jmp    DWORD PTR [eax*4+0x100537d8]
1005353f:	8d bd f0 fe ff ff    	lea    edi,[ebp-0x110]
10053545:	4f                   	dec    edi
10053546:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
10053549:	47                   	inc    edi
1005354a:	84 c0                	test   al,al
1005354c:	75 f8                	jne    0x10053546
1005354e:	b9 0b 00 00 00       	mov    ecx,0xb
10053553:	be 6c db 1a 10       	mov    esi,0x101adb6c
10053558:	e9 b6 00 00 00       	jmp    0x10053613
1005355d:	8d bd f0 fe ff ff    	lea    edi,[ebp-0x110]
10053563:	4f                   	dec    edi
10053564:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
10053567:	47                   	inc    edi
10053568:	84 c0                	test   al,al
1005356a:	75 f8                	jne    0x10053564
1005356c:	b9 0b 00 00 00       	mov    ecx,0xb
10053571:	be 9c db 1a 10       	mov    esi,0x101adb9c
10053576:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10053578:	66 a5                	movs   WORD PTR es:[edi],WORD PTR ds:[esi]
1005357a:	e9 97 00 00 00       	jmp    0x10053616
1005357f:	8d bd f0 fe ff ff    	lea    edi,[ebp-0x110]
10053585:	4f                   	dec    edi
10053586:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
10053589:	47                   	inc    edi
1005358a:	84 c0                	test   al,al
1005358c:	75 f8                	jne    0x10053586
1005358e:	b9 0b 00 00 00       	mov    ecx,0xb
10053593:	be cc db 1a 10       	mov    esi,0x101adbcc
10053598:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
1005359a:	66 a5                	movs   WORD PTR es:[edi],WORD PTR ds:[esi]
1005359c:	e9 75 00 00 00       	jmp    0x10053616
100535a1:	8d bd f0 fe ff ff    	lea    edi,[ebp-0x110]
100535a7:	4f                   	dec    edi
100535a8:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100535ab:	47                   	inc    edi
100535ac:	84 c0                	test   al,al
100535ae:	75 f8                	jne    0x100535a8
100535b0:	b9 0c 00 00 00       	mov    ecx,0xc
100535b5:	be fc db 1a 10       	mov    esi,0x101adbfc
100535ba:	eb 57                	jmp    0x10053613
100535bc:	8d bd f0 fe ff ff    	lea    edi,[ebp-0x110]
100535c2:	4f                   	dec    edi
100535c3:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100535c6:	47                   	inc    edi
100535c7:	84 c0                	test   al,al
100535c9:	75 f8                	jne    0x100535c3
100535cb:	b9 0b 00 00 00       	mov    ecx,0xb
100535d0:	be 30 dc 1a 10       	mov    esi,0x101adc30
100535d5:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100535d7:	66 a5                	movs   WORD PTR es:[edi],WORD PTR ds:[esi]
100535d9:	eb 3a                	jmp    0x10053615
100535db:	8d bd f0 fe ff ff    	lea    edi,[ebp-0x110]
100535e1:	4f                   	dec    edi
100535e2:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
100535e5:	47                   	inc    edi
100535e6:	84 c0                	test   al,al
100535e8:	75 f8                	jne    0x100535e2
100535ea:	b9 0b 00 00 00       	mov    ecx,0xb
100535ef:	be 60 dc 1a 10       	mov    esi,0x101adc60
100535f4:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
100535f6:	66 a5                	movs   WORD PTR es:[edi],WORD PTR ds:[esi]
100535f8:	eb 1b                	jmp    0x10053615
100535fa:	8d bd f0 fe ff ff    	lea    edi,[ebp-0x110]
10053600:	4f                   	dec    edi
10053601:	8a 47 01             	mov    al,BYTE PTR [edi+0x1]
10053604:	47                   	inc    edi
10053605:	84 c0                	test   al,al
10053607:	75 f8                	jne    0x10053601
10053609:	b9 07 00 00 00       	mov    ecx,0x7
1005360e:	be 4c db 1a 10       	mov    esi,0x101adb4c
10053613:	f3 a5                	rep movs DWORD PTR es:[edi],DWORD PTR ds:[esi]
10053615:	a4                   	movs   BYTE PTR es:[edi],BYTE PTR ds:[esi]
10053616:	6a 01                	push   0x1
10053618:	6a 40                	push   0x40
1005361a:	6a 01                	push   0x1
1005361c:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
10053622:	50                   	push   eax
10053623:	8d 8d 00 fd ff ff    	lea    ecx,[ebp-0x300]
10053629:	e8 a2 c2 fd ff       	call   0x1002f8d0
1005362e:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
10053635:	c7 85 ec fd ff ff 0f 	mov    DWORD PTR [ebp-0x214],0xf
1005363c:	00 00 00 
1005363f:	c7 85 d0 fd ff ff 00 	mov    DWORD PTR [ebp-0x230],0x0
10053646:	00 00 00 
10053649:	c7 85 d4 fd ff ff 0f 	mov    DWORD PTR [ebp-0x22c],0xf
10053650:	00 00 00 
10053653:	c6 85 c0 fd ff ff 00 	mov    BYTE PTR [ebp-0x240],0x0
1005365a:	8b 83 60 01 00 00    	mov    eax,DWORD PTR [ebx+0x160]
10053660:	bf 01 00 00 00       	mov    edi,0x1
10053665:	c6 45 fc 02          	mov    BYTE PTR [ebp-0x4],0x2
10053669:	c7 85 e8 fd ff ff 01 	mov    DWORD PTR [ebp-0x218],0x1
10053670:	00 00 00 
10053673:	c6 85 d9 fd ff ff 00 	mov    BYTE PTR [ebp-0x227],0x0
1005367a:	8b 98 cc 05 00 00    	mov    ebx,DWORD PTR [eax+0x5cc]
10053680:	8d 85 d8 fd ff ff    	lea    eax,[ebp-0x228]
10053686:	50                   	push   eax
10053687:	8d 85 00 fd ff ff    	lea    eax,[ebp-0x300]
1005368d:	43                   	inc    ebx
1005368e:	50                   	push   eax
1005368f:	88 9d d8 fd ff ff    	mov    BYTE PTR [ebp-0x228],bl
10053695:	e8 b6 be fd ff       	call   0x1002f550
1005369a:	83 c4 08             	add    esp,0x8
1005369d:	8b 08                	mov    ecx,DWORD PTR [eax]
1005369f:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100536a2:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
100536a7:	0f 85 91 00 00 00    	jne    0x1005373e
100536ad:	0f 1f 00             	nop    DWORD PTR [eax]
100536b0:	3b fb                	cmp    edi,ebx
100536b2:	75 63                	jne    0x10053717
100536b4:	8b b5 e8 fd ff ff    	mov    esi,DWORD PTR [ebp-0x218]
100536ba:	81 fe fe 00 00 00    	cmp    esi,0xfe
100536c0:	76 19                	jbe    0x100536db
100536c2:	6a 00                	push   0x0
100536c4:	6a 00                	push   0x0
100536c6:	6a 00                	push   0x0
100536c8:	6a 00                	push   0x0
100536ca:	68 90 dc 1a 10       	push   0x101adc90
100536cf:	6a 04                	push   0x4
100536d1:	e8 8a 48 0c 00       	call   0x10117f60
100536d6:	83 c4 18             	add    esp,0x18
100536d9:	eb 3d                	jmp    0x10053718
100536db:	83 bd ec fd ff ff 10 	cmp    DWORD PTR [ebp-0x214],0x10
100536e2:	8d 8d d8 fd ff ff    	lea    ecx,[ebp-0x228]
100536e8:	8d 95 f0 fd ff ff    	lea    edx,[ebp-0x210]
100536ee:	0f 43 8d d8 fd ff ff 	cmovae ecx,DWORD PTR [ebp-0x228]
100536f5:	2b d1                	sub    edx,ecx
100536f7:	8a 01                	mov    al,BYTE PTR [ecx]
100536f9:	8d 49 01             	lea    ecx,[ecx+0x1]
100536fc:	88 44 11 ff          	mov    BYTE PTR [ecx+edx*1-0x1],al
10053700:	84 c0                	test   al,al
10053702:	75 f3                	jne    0x100536f7
10053704:	81 fe 00 01 00 00    	cmp    esi,0x100
1005370a:	0f 83 c1 00 00 00    	jae    0x100537d1
10053710:	88 84 35 f0 fd ff ff 	mov    BYTE PTR [ebp+esi*1-0x210],al
10053717:	47                   	inc    edi
10053718:	8d 85 d8 fd ff ff    	lea    eax,[ebp-0x228]
1005371e:	50                   	push   eax
1005371f:	8d 85 00 fd ff ff    	lea    eax,[ebp-0x300]
10053725:	50                   	push   eax
10053726:	e8 25 be fd ff       	call   0x1002f550
1005372b:	83 c4 08             	add    esp,0x8
1005372e:	8b 08                	mov    ecx,DWORD PTR [eax]
10053730:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
10053733:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
10053738:	0f 84 72 ff ff ff    	je     0x100536b0
1005373e:	8b 85 b8 fd ff ff    	mov    eax,DWORD PTR [ebp-0x248]
10053744:	80 b8 f9 01 00 00 00 	cmp    BYTE PTR [eax+0x1f9],0x0
1005374b:	75 42                	jne    0x1005378f
1005374d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10053752:	be 01 00 00 00       	mov    esi,0x1
10053757:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
1005375d:	7c 30                	jl     0x1005378f
1005375f:	90                   	nop
10053760:	56                   	push   esi
10053761:	e8 1a 5f 0c 00       	call   0x10119680
10053766:	83 c4 04             	add    esp,0x4
10053769:	85 c0                	test   eax,eax
1005376b:	74 14                	je     0x10053781
1005376d:	6a 00                	push   0x0
1005376f:	6a 01                	push   0x1
10053771:	8d 8d f0 fd ff ff    	lea    ecx,[ebp-0x210]
10053777:	51                   	push   ecx
10053778:	50                   	push   eax
10053779:	e8 92 60 0c 00       	call   0x10119810
1005377e:	83 c4 10             	add    esp,0x10
10053781:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10053786:	46                   	inc    esi
10053787:	3b b0 90 00 00 00    	cmp    esi,DWORD PTR [eax+0x90]
1005378d:	7e d1                	jle    0x10053760
1005378f:	8b 85 ec fd ff ff    	mov    eax,DWORD PTR [ebp-0x214]
10053795:	83 f8 10             	cmp    eax,0x10
10053798:	72 10                	jb     0x100537aa
1005379a:	40                   	inc    eax
1005379b:	50                   	push   eax
1005379c:	ff b5 d8 fd ff ff    	push   DWORD PTR [ebp-0x228]
100537a2:	e8 e9 ba fd ff       	call   0x1002f290
100537a7:	83 c4 08             	add    esp,0x8
100537aa:	8d 8d 00 fd ff ff    	lea    ecx,[ebp-0x300]
100537b0:	e8 3b d1 fd ff       	call   0x100308f0
100537b5:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
100537b8:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100537bf:	59                   	pop    ecx
100537c0:	5f                   	pop    edi
100537c1:	5e                   	pop    esi
100537c2:	5b                   	pop    ebx
100537c3:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
100537c6:	33 cd                	xor    ecx,ebp
100537c8:	e8 e6 a3 0e 00       	call   0x1013dbb3
100537cd:	8b e5                	mov    esp,ebp
100537cf:	5d                   	pop    ebp
100537d0:	c3                   	ret
100537d1:	e8 72 a5 0e 00       	call   0x1013dd48
