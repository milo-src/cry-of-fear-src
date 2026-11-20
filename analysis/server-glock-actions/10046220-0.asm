
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10046220 <.text+0x45220>:
10046220:	55                   	push   ebp
10046221:	8b ec                	mov    ebp,esp
10046223:	83 e4 f8             	and    esp,0xfffffff8
10046226:	83 ec 20             	sub    esp,0x20
10046229:	56                   	push   esi
1004622a:	8b f1                	mov    esi,ecx
1004622c:	57                   	push   edi
1004622d:	83 be 28 01 00 00 00 	cmp    DWORD PTR [esi+0x128],0x0
10046234:	0f 85 8f 00 00 00    	jne    0x100462c9
1004623a:	83 be 40 01 00 00 00 	cmp    DWORD PTR [esi+0x140],0x0
10046241:	0f 85 82 00 00 00    	jne    0x100462c9
10046247:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004624c:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046250:	0f 2f 86 cc 01 00 00 	comiss xmm0,DWORD PTR [esi+0x1cc]
10046257:	76 70                	jbe    0x100462c9
10046259:	0f 2f 86 d0 01 00 00 	comiss xmm0,DWORD PTR [esi+0x1d0]
10046260:	76 67                	jbe    0x100462c9
10046262:	0f 2f 86 d4 01 00 00 	comiss xmm0,DWORD PTR [esi+0x1d4]
10046269:	76 5e                	jbe    0x100462c9
1004626b:	68 8c ec 1a 10       	push   0x101aec8c
10046270:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
10046276:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1004627a:	f3 0f 10 44 24 10    	movss  xmm0,DWORD PTR [esp+0x10]
10046280:	83 c4 04             	add    esp,0x4
10046283:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1004628a:	9f                   	lahf
1004628b:	f6 c4 44             	test   ah,0x44
1004628e:	7a 39                	jp     0x100462c9
10046290:	80 be 78 01 00 00 00 	cmp    BYTE PTR [esi+0x178],0x0
10046297:	74 30                	je     0x100462c9
10046299:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
1004629f:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100462a2:	8b 80 84 01 00 00    	mov    eax,DWORD PTR [eax+0x184]
100462a8:	0b 81 b4 22 00 00    	or     eax,DWORD PTR [ecx+0x22b4]
100462ae:	0b 81 b0 22 00 00    	or     eax,DWORD PTR [ecx+0x22b0]
100462b4:	a8 40                	test   al,0x40
100462b6:	75 11                	jne    0x100462c9
100462b8:	8b 06                	mov    eax,DWORD PTR [esi]
100462ba:	8b ce                	mov    ecx,esi
100462bc:	c6 86 78 01 00 00 00 	mov    BYTE PTR [esi+0x178],0x0
100462c3:	ff 90 30 01 00 00    	call   DWORD PTR [eax+0x130]
100462c9:	80 be a4 01 00 00 00 	cmp    BYTE PTR [esi+0x1a4],0x0
100462d0:	0f 84 87 00 00 00    	je     0x1004635d
100462d6:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
100462dc:	80 b9 e8 1e 00 00 00 	cmp    BYTE PTR [ecx+0x1ee8],0x0
100462e3:	75 78                	jne    0x1004635d
100462e5:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100462ea:	f3 0f 10 81 e4 1e 00 	movss  xmm0,DWORD PTR [ecx+0x1ee4]
100462f1:	00 
100462f2:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
100462f6:	0f 2f c1             	comiss xmm0,xmm1
100462f9:	77 62                	ja     0x1004635d
100462fb:	f3 0f 10 86 cc 01 00 	movss  xmm0,DWORD PTR [esi+0x1cc]
10046302:	00 
10046303:	0f 2f c1             	comiss xmm0,xmm1
10046306:	77 55                	ja     0x1004635d
10046308:	f3 0f 10 86 d0 01 00 	movss  xmm0,DWORD PTR [esi+0x1d0]
1004630f:	00 
10046310:	0f 2f c1             	comiss xmm0,xmm1
10046313:	77 48                	ja     0x1004635d
10046315:	f3 0f 10 86 d4 01 00 	movss  xmm0,DWORD PTR [esi+0x1d4]
1004631c:	00 
1004631d:	0f 2f c1             	comiss xmm0,xmm1
10046320:	77 3b                	ja     0x1004635d
10046322:	83 be 28 01 00 00 00 	cmp    DWORD PTR [esi+0x128],0x0
10046329:	75 32                	jne    0x1004635d
1004632b:	83 be 40 01 00 00 00 	cmp    DWORD PTR [esi+0x140],0x0
10046332:	75 29                	jne    0x1004635d
10046334:	80 be 78 01 00 00 00 	cmp    BYTE PTR [esi+0x178],0x0
1004633b:	8b ce                	mov    ecx,esi
1004633d:	8b 06                	mov    eax,DWORD PTR [esi]
1004633f:	74 0f                	je     0x10046350
10046341:	c6 86 78 01 00 00 00 	mov    BYTE PTR [esi+0x178],0x0
10046348:	ff 90 30 01 00 00    	call   DWORD PTR [eax+0x130]
1004634e:	eb 0d                	jmp    0x1004635d
10046350:	c6 86 a4 01 00 00 00 	mov    BYTE PTR [esi+0x1a4],0x0
10046357:	ff 90 c0 01 00 00    	call   DWORD PTR [eax+0x1c0]
1004635d:	80 be 00 02 00 00 00 	cmp    BYTE PTR [esi+0x200],0x0
10046364:	74 5a                	je     0x100463c0
10046366:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1004636c:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1004636f:	f6 80 d0 05 00 00 04 	test   BYTE PTR [eax+0x5d0],0x4
10046376:	8b 91 14 01 00 00    	mov    edx,DWORD PTR [ecx+0x114]
1004637c:	74 11                	je     0x1004638f
1004637e:	83 fa 02             	cmp    edx,0x2
10046381:	74 1b                	je     0x1004639e
10046383:	c7 81 14 01 00 00 02 	mov    DWORD PTR [ecx+0x114],0x2
1004638a:	00 00 00 
1004638d:	eb 0f                	jmp    0x1004639e
1004638f:	83 fa 01             	cmp    edx,0x1
10046392:	74 0a                	je     0x1004639e
10046394:	c7 81 14 01 00 00 01 	mov    DWORD PTR [ecx+0x114],0x1
1004639b:	00 00 00 
1004639e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100463a1:	8b ce                	mov    ecx,esi
100463a3:	8b 16                	mov    edx,DWORD PTR [esi]
100463a5:	ff b0 14 01 00 00    	push   DWORD PTR [eax+0x114]
100463ab:	ff b6 60 01 00 00    	push   DWORD PTR [esi+0x160]
100463b1:	ff 92 9c 01 00 00    	call   DWORD PTR [edx+0x19c]
100463b7:	80 be 00 02 00 00 00 	cmp    BYTE PTR [esi+0x200],0x0
100463be:	75 2f                	jne    0x100463ef
100463c0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100463c3:	83 b8 14 01 00 00 00 	cmp    DWORD PTR [eax+0x114],0x0
100463ca:	74 23                	je     0x100463ef
100463cc:	c7 80 14 01 00 00 00 	mov    DWORD PTR [eax+0x114],0x0
100463d3:	00 00 00 
100463d6:	8b ce                	mov    ecx,esi
100463d8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100463db:	8b 16                	mov    edx,DWORD PTR [esi]
100463dd:	ff b0 14 01 00 00    	push   DWORD PTR [eax+0x114]
100463e3:	ff b6 60 01 00 00    	push   DWORD PTR [esi+0x160]
100463e9:	ff 92 9c 01 00 00    	call   DWORD PTR [edx+0x19c]
100463ef:	80 be f8 01 00 00 00 	cmp    BYTE PTR [esi+0x1f8],0x0
100463f6:	f2 0f 10 05 48 1e 1a 	movsd  xmm0,QWORD PTR ds:0x101a1e48
100463fd:	10 
100463fe:	f2 0f 11 44 24 10    	movsd  QWORD PTR [esp+0x10],xmm0
10046404:	0f 84 52 01 00 00    	je     0x1004655c
1004640a:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10046410:	80 b9 e8 1e 00 00 00 	cmp    BYTE PTR [ecx+0x1ee8],0x0
10046417:	0f 85 3f 01 00 00    	jne    0x1004655c
1004641d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046422:	f3 0f 10 81 e4 1e 00 	movss  xmm0,DWORD PTR [ecx+0x1ee4]
10046429:	00 
1004642a:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
1004642e:	0f 2f c1             	comiss xmm0,xmm1
10046431:	0f 87 25 01 00 00    	ja     0x1004655c
10046437:	f3 0f 10 86 cc 01 00 	movss  xmm0,DWORD PTR [esi+0x1cc]
1004643e:	00 
1004643f:	0f 2f c1             	comiss xmm0,xmm1
10046442:	0f 87 14 01 00 00    	ja     0x1004655c
10046448:	f3 0f 10 86 d0 01 00 	movss  xmm0,DWORD PTR [esi+0x1d0]
1004644f:	00 
10046450:	0f 2f c1             	comiss xmm0,xmm1
10046453:	0f 87 03 01 00 00    	ja     0x1004655c
10046459:	f3 0f 10 86 d4 01 00 	movss  xmm0,DWORD PTR [esi+0x1d4]
10046460:	00 
10046461:	0f 2f c1             	comiss xmm0,xmm1
10046464:	0f 87 f2 00 00 00    	ja     0x1004655c
1004646a:	83 be 28 01 00 00 00 	cmp    DWORD PTR [esi+0x128],0x0
10046471:	0f 85 e5 00 00 00    	jne    0x1004655c
10046477:	83 be 40 01 00 00 00 	cmp    DWORD PTR [esi+0x140],0x0
1004647e:	0f 85 d8 00 00 00    	jne    0x1004655c
10046484:	80 be 78 01 00 00 00 	cmp    BYTE PTR [esi+0x178],0x0
1004648b:	74 11                	je     0x1004649e
1004648d:	8b 06                	mov    eax,DWORD PTR [esi]
1004648f:	8b ce                	mov    ecx,esi
10046491:	c6 86 78 01 00 00 00 	mov    BYTE PTR [esi+0x178],0x0
10046498:	ff 90 30 01 00 00    	call   DWORD PTR [eax+0x130]
1004649e:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
100464a5:	8b ce                	mov    ecx,esi
100464a7:	8b 06                	mov    eax,DWORD PTR [esi]
100464a9:	6a 00                	push   0x0
100464ab:	6a 01                	push   0x1
100464ad:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
100464b3:	74 04                	je     0x100464b9
100464b5:	6a 08                	push   0x8
100464b7:	eb 02                	jmp    0x100464bb
100464b9:	6a 09                	push   0x9
100464bb:	ff d0                	call   eax
100464bd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100464c2:	51                   	push   ecx
100464c3:	8b ce                	mov    ecx,esi
100464c5:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100464cc:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100464d0:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
100464d6:	0f 5a c0             	cvtps2pd xmm0,xmm0
100464d9:	f2 0f 58 44 24 14    	addsd  xmm0,QWORD PTR [esp+0x14]
100464df:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100464e3:	f3 0f 11 80 08 03 00 	movss  DWORD PTR [eax+0x308],xmm0
100464ea:	00 
100464eb:	8b 06                	mov    eax,DWORD PTR [esi]
100464ed:	ff 50 08             	call   DWORD PTR [eax+0x8]
100464f0:	6a 64                	push   0x64
100464f2:	6a 00                	push   0x0
100464f4:	83 ec 08             	sub    esp,0x8
100464f7:	c7 46 78 30 6c 04 10 	mov    DWORD PTR [esi+0x78],0x10046c30
100464fe:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10046501:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10046508:	3f 
10046509:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10046510:	68 b8 08 1b 10       	push   0x101b08b8
10046515:	6a 02                	push   0x2
10046517:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1004651d:	e8 ce 64 0b 00       	call   0x100fc9f0
10046522:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046527:	83 c4 1c             	add    esp,0x1c
1004652a:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
1004652e:	f3 0f 58 05 24 97 1a 	addss  xmm0,DWORD PTR ds:0x101a9724
10046535:	10 
10046536:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1004653c:	f3 0f 11 80 08 03 00 	movss  DWORD PTR [eax+0x308],xmm0
10046543:	00 
10046544:	f3 0f 11 86 d4 01 00 	movss  DWORD PTR [esi+0x1d4],xmm0
1004654b:	00 
1004654c:	f3 0f 11 86 d0 01 00 	movss  DWORD PTR [esi+0x1d0],xmm0
10046553:	00 
10046554:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
1004655b:	00 
1004655c:	83 be 28 01 00 00 02 	cmp    DWORD PTR [esi+0x128],0x2
10046563:	75 13                	jne    0x10046578
10046565:	83 be f0 01 00 00 00 	cmp    DWORD PTR [esi+0x1f0],0x0
1004656c:	75 0a                	jne    0x10046578
1004656e:	c7 86 28 01 00 00 00 	mov    DWORD PTR [esi+0x128],0x0
10046575:	00 00 00 
10046578:	83 be 40 01 00 00 02 	cmp    DWORD PTR [esi+0x140],0x2
1004657f:	0f 85 23 01 00 00    	jne    0x100466a8
10046585:	6a 00                	push   0x0
10046587:	68 80 00 00 00       	push   0x80
1004658c:	83 ec 08             	sub    esp,0x8
1004658f:	c7 44 24 2c 00 00 00 	mov    DWORD PTR [esp+0x2c],0x0
10046596:	00 
10046597:	8d 44 24 2c          	lea    eax,[esp+0x2c]
1004659b:	c7 44 24 30 00 00 00 	mov    DWORD PTR [esp+0x30],0x0
100465a2:	00 
100465a3:	c7 44 24 34 00 00 00 	mov    DWORD PTR [esp+0x34],0x0
100465aa:	00 
100465ab:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x3f000000
100465b2:	3f 
100465b3:	c7 04 24 00 00 00 3f 	mov    DWORD PTR [esp],0x3f000000
100465ba:	50                   	push   eax
100465bb:	ff b6 60 01 00 00    	push   DWORD PTR [esi+0x160]
100465c1:	e8 3a 36 0d 00       	call   0x10119c00
100465c6:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
100465cc:	83 c4 18             	add    esp,0x18
100465cf:	f7 80 b0 22 00 00 01 	test   DWORD PTR [eax+0x22b0],0x801
100465d6:	08 00 00 
100465d9:	0f 84 b1 00 00 00    	je     0x10046690
100465df:	ff 86 48 01 00 00    	inc    DWORD PTR [esi+0x148]
100465e5:	83 ec 08             	sub    esp,0x8
100465e8:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x40000000
100465ef:	40 
100465f0:	c7 04 24 9a 99 19 3e 	mov    DWORD PTR [esp],0x3e19999a
100465f7:	6a 09                	push   0x9
100465f9:	6a 05                	push   0x5
100465fb:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
10046601:	83 c4 04             	add    esp,0x4
10046604:	66 0f 6e c0          	movd   xmm0,eax
10046608:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1004660b:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10046610:	6a 09                	push   0x9
10046612:	6a 05                	push   0x5
10046614:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1004661a:	83 c4 04             	add    esp,0x4
1004661d:	66 0f 6e c0          	movd   xmm0,eax
10046621:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10046627:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1004662a:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004662d:	83 c0 08             	add    eax,0x8
10046630:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10046635:	50                   	push   eax
10046636:	e8 a5 37 0d 00       	call   0x10119de0
1004663b:	6a 02                	push   0x2
1004663d:	6a 00                	push   0x0
1004663f:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
10046645:	83 c4 1c             	add    esp,0x1c
10046648:	83 f8 02             	cmp    eax,0x2
1004664b:	75 43                	jne    0x10046690
1004664d:	6a 0f                	push   0xf
1004664f:	6a 00                	push   0x0
10046651:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
10046657:	83 c4 08             	add    esp,0x8
1004665a:	83 c0 5a             	add    eax,0x5a
1004665d:	50                   	push   eax
1004665e:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10046664:	6a 00                	push   0x0
10046666:	83 ec 08             	sub    esp,0x8
10046669:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004666c:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10046673:	3f 
10046674:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1004667b:	68 30 8b 1a 10       	push   0x101a8b30
10046680:	6a 00                	push   0x0
10046682:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10046688:	e8 63 63 0b 00       	call   0x100fc9f0
1004668d:	83 c4 1c             	add    esp,0x1c
10046690:	8b 86 48 01 00 00    	mov    eax,DWORD PTR [esi+0x148]
10046696:	3b 86 44 01 00 00    	cmp    eax,DWORD PTR [esi+0x144]
1004669c:	7c 0a                	jl     0x100466a8
1004669e:	8b 06                	mov    eax,DWORD PTR [esi]
100466a0:	8b ce                	mov    ecx,esi
100466a2:	ff 90 7c 01 00 00    	call   DWORD PTR [eax+0x17c]
100466a8:	83 be 40 01 00 00 01 	cmp    DWORD PTR [esi+0x140],0x1
100466af:	f2 0f 10 0d 00 99 1a 	movsd  xmm1,QWORD PTR ds:0x101a9900
100466b6:	10 
100466b7:	0f 85 c6 00 00 00    	jne    0x10046783
100466bd:	8b 8e 28 01 00 00    	mov    ecx,DWORD PTR [esi+0x128]
100466c3:	85 c9                	test   ecx,ecx
100466c5:	0f 84 8e 00 00 00    	je     0x10046759
100466cb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100466d0:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100466d4:	0f 2f 86 2c 01 00 00 	comiss xmm0,DWORD PTR [esi+0x12c]
100466db:	76 7c                	jbe    0x10046759
100466dd:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
100466e4:	8b ce                	mov    ecx,esi
100466e6:	0f 5a c0             	cvtps2pd xmm0,xmm0
100466e9:	6a 00                	push   0x0
100466eb:	6a 01                	push   0x1
100466ed:	f2 0f 58 c1          	addsd  xmm0,xmm1
100466f1:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100466f5:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
100466fc:	00 
100466fd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046702:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046706:	0f 5a c0             	cvtps2pd xmm0,xmm0
10046709:	f2 0f 58 05 28 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e28
10046710:	10 
10046711:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10046715:	f3 0f 11 86 d8 01 00 	movss  DWORD PTR [esi+0x1d8],xmm0
1004671c:	00 
1004671d:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046722:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046726:	8b 06                	mov    eax,DWORD PTR [esi]
10046728:	0f 5a c0             	cvtps2pd xmm0,xmm0
1004672b:	c7 86 28 01 00 00 00 	mov    DWORD PTR [esi+0x128],0x0
10046732:	00 00 00 
10046735:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
1004673b:	f2 0f 58 c1          	addsd  xmm0,xmm1
1004673f:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10046743:	f3 0f 11 86 2c 01 00 	movss  DWORD PTR [esi+0x12c],xmm0
1004674a:	00 
1004674b:	74 06                	je     0x10046753
1004674d:	6a 0e                	push   0xe
1004674f:	ff d0                	call   eax
10046751:	eb 30                	jmp    0x10046783
10046753:	6a 0f                	push   0xf
10046755:	ff d0                	call   eax
10046757:	eb 2a                	jmp    0x10046783
10046759:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004675e:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046762:	0f 2f 86 2c 01 00 00 	comiss xmm0,DWORD PTR [esi+0x12c]
10046769:	76 18                	jbe    0x10046783
1004676b:	85 c9                	test   ecx,ecx
1004676d:	75 14                	jne    0x10046783
1004676f:	8b 06                	mov    eax,DWORD PTR [esi]
10046771:	8b ce                	mov    ecx,esi
10046773:	c7 86 40 01 00 00 02 	mov    DWORD PTR [esi+0x140],0x2
1004677a:	00 00 00 
1004677d:	ff 90 78 01 00 00    	call   DWORD PTR [eax+0x178]
10046783:	8b be 60 01 00 00    	mov    edi,DWORD PTR [esi+0x160]
10046789:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1004678c:	f3 0f 10 48 24       	movss  xmm1,DWORD PTR [eax+0x24]
10046791:	f3 0f 10 40 20       	movss  xmm0,DWORD PTR [eax+0x20]
10046796:	f3 0f 59 c0          	mulss  xmm0,xmm0
1004679a:	f3 0f 59 c9          	mulss  xmm1,xmm1
1004679e:	f3 0f 58 c1          	addss  xmm0,xmm1
100467a2:	0f 57 c9             	xorps  xmm1,xmm1
100467a5:	0f 5a c0             	cvtps2pd xmm0,xmm0
100467a8:	66 0f 2e c8          	ucomisd xmm1,xmm0
100467ac:	77 06                	ja     0x100467b4
100467ae:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100467b2:	eb 05                	jmp    0x100467b9
100467b4:	e8 d7 56 12 00       	call   0x1016be90
100467b9:	83 be f0 01 00 00 00 	cmp    DWORD PTR [esi+0x1f0],0x0
100467c0:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100467c4:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
100467ca:	0f 85 4b 04 00 00    	jne    0x10046c1b
100467d0:	83 be 40 01 00 00 00 	cmp    DWORD PTR [esi+0x140],0x0
100467d7:	0f 85 3e 04 00 00    	jne    0x10046c1b
100467dd:	83 be 28 01 00 00 02 	cmp    DWORD PTR [esi+0x128],0x2
100467e4:	0f 84 31 04 00 00    	je     0x10046c1b
100467ea:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100467ef:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100467f3:	0f 2f 86 cc 01 00 00 	comiss xmm0,DWORD PTR [esi+0x1cc]
100467fa:	0f 86 1b 04 00 00    	jbe    0x10046c1b
10046800:	8b cf                	mov    ecx,edi
10046802:	e8 99 f5 0a 00       	call   0x100f5da0
10046807:	85 c0                	test   eax,eax
10046809:	0f 84 c5 00 00 00    	je     0x100468d4
1004680f:	80 be 78 01 00 00 00 	cmp    BYTE PTR [esi+0x178],0x0
10046816:	0f 85 b8 00 00 00    	jne    0x100468d4
1004681c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046821:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046825:	0f 2f 86 d4 01 00 00 	comiss xmm0,DWORD PTR [esi+0x1d4]
1004682c:	0f 86 a2 00 00 00    	jbe    0x100468d4
10046832:	83 be 28 01 00 00 00 	cmp    DWORD PTR [esi+0x128],0x0
10046839:	0f 85 24 01 00 00    	jne    0x10046963
1004683f:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
10046846:	8b ce                	mov    ecx,esi
10046848:	8b 06                	mov    eax,DWORD PTR [esi]
1004684a:	6a 00                	push   0x0
1004684c:	c7 86 28 01 00 00 05 	mov    DWORD PTR [esi+0x128],0x5
10046853:	00 00 00 
10046856:	6a 01                	push   0x1
10046858:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
1004685e:	74 04                	je     0x10046864
10046860:	6a 27                	push   0x27
10046862:	eb 02                	jmp    0x10046866
10046864:	6a 28                	push   0x28
10046866:	ff d0                	call   eax
10046868:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1004686e:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10046871:	ff b0 1c 02 00 00    	push   DWORD PTR [eax+0x21c]
10046877:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004687a:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10046880:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
10046886:	83 c4 04             	add    esp,0x4
10046889:	50                   	push   eax
1004688a:	e8 01 8b fc ff       	call   0x1000f390
1004688f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046894:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
10046898:	f3 0f 10 54 24 10    	movss  xmm2,DWORD PTR [esp+0x10]
1004689e:	0f 5a ca             	cvtps2pd xmm1,xmm2
100468a1:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100468a5:	f2 0f 59 4c 24 18    	mulsd  xmm1,QWORD PTR [esp+0x18]
100468ab:	0f 5a c0             	cvtps2pd xmm0,xmm0
100468ae:	f2 0f 58 c8          	addsd  xmm1,xmm0
100468b2:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
100468b6:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
100468bd:	00 
100468be:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100468c3:	f3 0f 58 10          	addss  xmm2,DWORD PTR [eax]
100468c7:	f3 0f 11 96 2c 01 00 	movss  DWORD PTR [esi+0x12c],xmm2
100468ce:	00 
100468cf:	e9 8c 00 00 00       	jmp    0x10046960
100468d4:	83 be 28 01 00 00 05 	cmp    DWORD PTR [esi+0x128],0x5
100468db:	0f 85 82 00 00 00    	jne    0x10046963
100468e1:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
100468e8:	8b ce                	mov    ecx,esi
100468ea:	8b 06                	mov    eax,DWORD PTR [esi]
100468ec:	6a 00                	push   0x0
100468ee:	6a 01                	push   0x1
100468f0:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
100468f6:	74 04                	je     0x100468fc
100468f8:	6a 29                	push   0x29
100468fa:	eb 02                	jmp    0x100468fe
100468fc:	6a 2a                	push   0x2a
100468fe:	ff d0                	call   eax
10046900:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10046906:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10046909:	ff b0 1c 02 00 00    	push   DWORD PTR [eax+0x21c]
1004690f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10046912:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10046918:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
1004691e:	83 c4 04             	add    esp,0x4
10046921:	50                   	push   eax
10046922:	e8 69 8a fc ff       	call   0x1000f390
10046927:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004692c:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
10046930:	f3 0f 10 4c 24 10    	movss  xmm1,DWORD PTR [esp+0x10]
10046936:	0f 28 c1             	movaps xmm0,xmm1
10046939:	f3 0f 58 00          	addss  xmm0,DWORD PTR [eax]
1004693d:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
10046944:	00 
10046945:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004694a:	f3 0f 58 08          	addss  xmm1,DWORD PTR [eax]
1004694e:	c7 86 28 01 00 00 00 	mov    DWORD PTR [esi+0x128],0x0
10046955:	00 00 00 
10046958:	f3 0f 11 8e d8 01 00 	movss  DWORD PTR [esi+0x1d8],xmm1
1004695f:	00 
10046960:	83 c4 08             	add    esp,0x8
10046963:	f3 0f 10 44 24 0c    	movss  xmm0,DWORD PTR [esp+0xc]
10046969:	0f 57 c9             	xorps  xmm1,xmm1
1004696c:	0f 2f c1             	comiss xmm0,xmm1
1004696f:	0f 86 cd 00 00 00    	jbe    0x10046a42
10046975:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1004697b:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004697e:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x40000
10046985:	00 04 00 
10046988:	0f 84 b4 00 00 00    	je     0x10046a42
1004698e:	8b 86 28 01 00 00    	mov    eax,DWORD PTR [esi+0x128]
10046994:	83 f8 05             	cmp    eax,0x5
10046997:	0f 84 a5 00 00 00    	je     0x10046a42
1004699d:	83 f8 01             	cmp    eax,0x1
100469a0:	0f 84 9c 00 00 00    	je     0x10046a42
100469a6:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
100469ad:	8b ce                	mov    ecx,esi
100469af:	8b 06                	mov    eax,DWORD PTR [esi]
100469b1:	6a 00                	push   0x0
100469b3:	c7 86 28 01 00 00 01 	mov    DWORD PTR [esi+0x128],0x1
100469ba:	00 00 00 
100469bd:	6a 01                	push   0x1
100469bf:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
100469c5:	74 04                	je     0x100469cb
100469c7:	6a 0a                	push   0xa
100469c9:	eb 02                	jmp    0x100469cd
100469cb:	6a 0b                	push   0xb
100469cd:	ff d0                	call   eax
100469cf:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
100469d5:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100469d8:	ff b0 1c 02 00 00    	push   DWORD PTR [eax+0x21c]
100469de:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100469e1:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100469e7:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
100469ed:	83 c4 04             	add    esp,0x4
100469f0:	50                   	push   eax
100469f1:	e8 9a 89 fc ff       	call   0x1000f390
100469f6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100469fb:	83 c4 08             	add    esp,0x8
100469fe:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
10046a02:	f3 0f 10 54 24 08    	movss  xmm2,DWORD PTR [esp+0x8]
10046a08:	0f 5a ca             	cvtps2pd xmm1,xmm2
10046a0b:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046a0f:	f2 0f 59 4c 24 10    	mulsd  xmm1,QWORD PTR [esp+0x10]
10046a15:	0f 5a c0             	cvtps2pd xmm0,xmm0
10046a18:	f2 0f 58 c8          	addsd  xmm1,xmm0
10046a1c:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
10046a20:	0f 57 c9             	xorps  xmm1,xmm1
10046a23:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
10046a2a:	00 
10046a2b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046a30:	f3 0f 10 44 24 0c    	movss  xmm0,DWORD PTR [esp+0xc]
10046a36:	f3 0f 58 10          	addss  xmm2,DWORD PTR [eax]
10046a3a:	f3 0f 11 96 2c 01 00 	movss  DWORD PTR [esi+0x12c],xmm2
10046a41:	00 
10046a42:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10046a48:	8b f9                	mov    edi,ecx
10046a4a:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
10046a4d:	f7 82 a8 01 00 00 00 	test   DWORD PTR [edx+0x1a8],0x40000
10046a54:	00 04 00 
10046a57:	0f 84 e1 00 00 00    	je     0x10046b3e
10046a5d:	0f 2f c1             	comiss xmm0,xmm1
10046a60:	0f 86 d8 00 00 00    	jbe    0x10046b3e
10046a66:	8b 86 28 01 00 00    	mov    eax,DWORD PTR [esi+0x128]
10046a6c:	83 f8 05             	cmp    eax,0x5
10046a6f:	0f 84 c9 00 00 00    	je     0x10046b3e
10046a75:	83 f8 01             	cmp    eax,0x1
10046a78:	0f 85 c0 00 00 00    	jne    0x10046b3e
10046a7e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046a83:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046a87:	0f 2f 86 2c 01 00 00 	comiss xmm0,DWORD PTR [esi+0x12c]
10046a8e:	0f 86 aa 00 00 00    	jbe    0x10046b3e
10046a94:	f3 0f 10 4a 24       	movss  xmm1,DWORD PTR [edx+0x24]
10046a99:	f3 0f 10 42 20       	movss  xmm0,DWORD PTR [edx+0x20]
10046a9e:	f3 0f 59 c0          	mulss  xmm0,xmm0
10046aa2:	f3 0f 59 c9          	mulss  xmm1,xmm1
10046aa6:	f3 0f 58 c1          	addss  xmm0,xmm1
10046aaa:	0f 57 c9             	xorps  xmm1,xmm1
10046aad:	0f 5a c0             	cvtps2pd xmm0,xmm0
10046ab0:	66 0f 2e c8          	ucomisd xmm1,xmm0
10046ab4:	77 06                	ja     0x10046abc
10046ab6:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10046aba:	eb 05                	jmp    0x10046ac1
10046abc:	e8 cf 53 12 00       	call   0x1016be90
10046ac1:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10046ac5:	0f 57 c9             	xorps  xmm1,xmm1
10046ac8:	0f 2e c1             	ucomiss xmm0,xmm1
10046acb:	9f                   	lahf
10046acc:	f6 c4 44             	test   ah,0x44
10046acf:	7b 6d                	jnp    0x10046b3e
10046ad1:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
10046ad8:	8b ce                	mov    ecx,esi
10046ada:	8b 06                	mov    eax,DWORD PTR [esi]
10046adc:	6a 00                	push   0x0
10046ade:	6a 01                	push   0x1
10046ae0:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
10046ae6:	74 04                	je     0x10046aec
10046ae8:	6a 0c                	push   0xc
10046aea:	eb 02                	jmp    0x10046aee
10046aec:	6a 0d                	push   0xd
10046aee:	ff d0                	call   eax
10046af0:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10046af6:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10046af9:	ff b0 1c 02 00 00    	push   DWORD PTR [eax+0x21c]
10046aff:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10046b02:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10046b08:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
10046b0e:	83 c4 04             	add    esp,0x4
10046b11:	50                   	push   eax
10046b12:	e8 79 88 fc ff       	call   0x1000f390
10046b17:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046b1c:	83 c4 08             	add    esp,0x8
10046b1f:	8b be 60 01 00 00    	mov    edi,DWORD PTR [esi+0x160]
10046b25:	0f 57 c9             	xorps  xmm1,xmm1
10046b28:	d9 5c 24 08          	fstp   DWORD PTR [esp+0x8]
10046b2c:	f3 0f 10 44 24 08    	movss  xmm0,DWORD PTR [esp+0x8]
10046b32:	f3 0f 58 00          	addss  xmm0,DWORD PTR [eax]
10046b36:	f3 0f 11 86 2c 01 00 	movss  DWORD PTR [esi+0x12c],xmm0
10046b3d:	00 
10046b3e:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10046b41:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x40000
10046b48:	00 04 00 
10046b4b:	74 0b                	je     0x10046b58
10046b4d:	0f 2f 4c 24 0c       	comiss xmm1,DWORD PTR [esp+0xc]
10046b52:	0f 82 c3 00 00 00    	jb     0x10046c1b
10046b58:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046b5d:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046b61:	0f 2f 86 2c 01 00 00 	comiss xmm0,DWORD PTR [esi+0x12c]
10046b68:	0f 86 ad 00 00 00    	jbe    0x10046c1b
10046b6e:	8b 86 28 01 00 00    	mov    eax,DWORD PTR [esi+0x128]
10046b74:	83 f8 05             	cmp    eax,0x5
10046b77:	0f 84 9e 00 00 00    	je     0x10046c1b
10046b7d:	83 f8 01             	cmp    eax,0x1
10046b80:	0f 85 95 00 00 00    	jne    0x10046c1b
10046b86:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
10046b8d:	8b ce                	mov    ecx,esi
10046b8f:	8b 06                	mov    eax,DWORD PTR [esi]
10046b91:	6a 00                	push   0x0
10046b93:	6a 01                	push   0x1
10046b95:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
10046b9b:	74 04                	je     0x10046ba1
10046b9d:	6a 0e                	push   0xe
10046b9f:	eb 02                	jmp    0x10046ba3
10046ba1:	6a 0f                	push   0xf
10046ba3:	ff d0                	call   eax
10046ba5:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10046bab:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10046bae:	ff b0 1c 02 00 00    	push   DWORD PTR [eax+0x21c]
10046bb4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10046bb7:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10046bbd:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
10046bc3:	83 c4 04             	add    esp,0x4
10046bc6:	50                   	push   eax
10046bc7:	e8 c4 87 fc ff       	call   0x1000f390
10046bcc:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046bd1:	dd d8                	fstp   st(0)
10046bd3:	83 c4 08             	add    esp,0x8
10046bd6:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046bda:	0f 5a c0             	cvtps2pd xmm0,xmm0
10046bdd:	f2 0f 58 05 00 99 1a 	addsd  xmm0,QWORD PTR ds:0x101a9900
10046be4:	10 
10046be5:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10046be9:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
10046bf0:	00 
10046bf1:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046bf6:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046bfa:	0f 5a c0             	cvtps2pd xmm0,xmm0
10046bfd:	c7 86 28 01 00 00 00 	mov    DWORD PTR [esi+0x128],0x0
10046c04:	00 00 00 
10046c07:	f2 0f 58 05 28 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e28
10046c0e:	10 
10046c0f:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10046c13:	f3 0f 11 86 d8 01 00 	movss  DWORD PTR [esi+0x1d8],xmm0
10046c1a:	00 
10046c1b:	8b ce                	mov    ecx,esi
10046c1d:	e8 3e 69 0d 00       	call   0x1011d560
10046c22:	5f                   	pop    edi
10046c23:	5e                   	pop    esi
10046c24:	8b e5                	mov    esp,ebp
10046c26:	5d                   	pop    ebp
10046c27:	c3                   	ret
