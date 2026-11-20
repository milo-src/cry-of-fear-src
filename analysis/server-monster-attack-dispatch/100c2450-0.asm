
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c2450 <.text+0xc1450>:
100c2450:	57                   	push   edi
100c2451:	6a 1c                	push   0x1c
100c2453:	8b f9                	mov    edi,ecx
100c2455:	e8 f6 c4 f4 ff       	call   0x1000e950
100c245a:	83 f8 ff             	cmp    eax,0xffffffff
100c245d:	74 0a                	je     0x100c2469
100c245f:	81 8f 04 03 00 00 00 	or     DWORD PTR [edi+0x304],0x800
100c2466:	08 00 00 
100c2469:	6a 1d                	push   0x1d
100c246b:	8b cf                	mov    ecx,edi
100c246d:	e8 de c4 f4 ff       	call   0x1000e950
100c2472:	83 f8 ff             	cmp    eax,0xffffffff
100c2475:	74 0a                	je     0x100c2481
100c2477:	81 8f 04 03 00 00 00 	or     DWORD PTR [edi+0x304],0x1000
100c247e:	10 00 00 
100c2481:	6a 1e                	push   0x1e
100c2483:	8b cf                	mov    ecx,edi
100c2485:	e8 c6 c4 f4 ff       	call   0x1000e950
100c248a:	83 f8 ff             	cmp    eax,0xffffffff
100c248d:	74 0a                	je     0x100c2499
100c248f:	81 8f 04 03 00 00 00 	or     DWORD PTR [edi+0x304],0x2000
100c2496:	20 00 00 
100c2499:	6a 1f                	push   0x1f
100c249b:	8b cf                	mov    ecx,edi
100c249d:	e8 ae c4 f4 ff       	call   0x1000e950
100c24a2:	83 f8 ff             	cmp    eax,0xffffffff
100c24a5:	74 0a                	je     0x100c24b1
100c24a7:	81 8f 04 03 00 00 00 	or     DWORD PTR [edi+0x304],0x4000
100c24ae:	40 00 00 
100c24b1:	6a 18                	push   0x18
100c24b3:	8b cf                	mov    ecx,edi
100c24b5:	e8 96 c4 f4 ff       	call   0x1000e950
100c24ba:	83 f8 ff             	cmp    eax,0xffffffff
100c24bd:	74 48                	je     0x100c2507
100c24bf:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c24c2:	ba 2c 4f 1d 10       	mov    edx,0x101d4f2c
100c24c7:	8b 08                	mov    ecx,DWORD PTR [eax]
100c24c9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c24ce:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100c24d4:	8a 01                	mov    al,BYTE PTR [ecx]
100c24d6:	3a 02                	cmp    al,BYTE PTR [edx]
100c24d8:	75 1a                	jne    0x100c24f4
100c24da:	84 c0                	test   al,al
100c24dc:	74 12                	je     0x100c24f0
100c24de:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100c24e1:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
100c24e4:	75 0e                	jne    0x100c24f4
100c24e6:	83 c1 02             	add    ecx,0x2
100c24e9:	83 c2 02             	add    edx,0x2
100c24ec:	84 c0                	test   al,al
100c24ee:	75 e4                	jne    0x100c24d4
100c24f0:	33 c0                	xor    eax,eax
100c24f2:	eb 05                	jmp    0x100c24f9
100c24f4:	1b c0                	sbb    eax,eax
100c24f6:	83 c8 01             	or     eax,0x1
100c24f9:	85 c0                	test   eax,eax
100c24fb:	74 0a                	je     0x100c2507
100c24fd:	81 8f 04 03 00 00 00 	or     DWORD PTR [edi+0x304],0x10000
100c2504:	00 01 00 
100c2507:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c250a:	83 b8 08 01 00 00 05 	cmp    DWORD PTR [eax+0x108],0x5
100c2511:	0f 84 92 00 00 00    	je     0x100c25a9
100c2517:	83 b8 a4 01 00 00 00 	cmp    DWORD PTR [eax+0x1a4],0x0
100c251e:	0f 8c 85 00 00 00    	jl     0x100c25a9
100c2524:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
100c2529:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
100c2530:	10 
100c2531:	f3 0f 11 40 10       	movss  DWORD PTR [eax+0x10],xmm0
100c2536:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c2539:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c253f:	ff 15 b0 2f 22 10    	call   DWORD PTR ds:0x10222fb0
100c2545:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c2548:	83 c4 04             	add    esp,0x4
100c254b:	6a 00                	push   0x0
100c254d:	83 ec 08             	sub    esp,0x8
100c2550:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
100c2557:	00 
100c2558:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100c255f:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100c2565:	ff 15 b4 2f 22 10    	call   DWORD PTR ds:0x10222fb4
100c256b:	83 c4 10             	add    esp,0x10
100c256e:	85 c0                	test   eax,eax
100c2570:	75 41                	jne    0x100c25b3
100c2572:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
100c2575:	f6 82 a4 01 00 00 80 	test   BYTE PTR [edx+0x1a4],0x80
100c257c:	75 35                	jne    0x100c25b3
100c257e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c2583:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100c2589:	8b 82 d0 01 00 00    	mov    eax,DWORD PTR [edx+0x1d0]
100c258f:	03 c1                	add    eax,ecx
100c2591:	50                   	push   eax
100c2592:	8b 02                	mov    eax,DWORD PTR [edx]
100c2594:	03 c1                	add    eax,ecx
100c2596:	50                   	push   eax
100c2597:	68 3c 4f 1d 10       	push   0x101d4f3c
100c259c:	6a 01                	push   0x1
100c259e:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c25a4:	83 c4 10             	add    esp,0x10
100c25a7:	eb 0a                	jmp    0x100c25b3
100c25a9:	81 a0 a8 01 00 00 ff 	and    DWORD PTR [eax+0x1a8],0xfffffdff
100c25b0:	fd ff ff 
100c25b3:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c25b6:	8b 88 cc 01 00 00    	mov    ecx,DWORD PTR [eax+0x1cc]
100c25bc:	85 c9                	test   ecx,ecx
100c25be:	74 20                	je     0x100c25e0
100c25c0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c25c5:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100c25cb:	03 c1                	add    eax,ecx
100c25cd:	50                   	push   eax
100c25ce:	6a 00                	push   0x0
100c25d0:	e8 bb 5f 05 00       	call   0x10118590
100c25d5:	83 c4 08             	add    esp,0x8
100c25d8:	8b cf                	mov    ecx,edi
100c25da:	50                   	push   eax
100c25db:	e8 70 00 00 00       	call   0x100c2650
100c25e0:	56                   	push   esi
100c25e1:	8b 37                	mov    esi,DWORD PTR [edi]
100c25e3:	83 ec 08             	sub    esp,0x8
100c25e6:	c7 47 78 60 11 00 10 	mov    DWORD PTR [edi+0x78],0x10001160
100c25ed:	c7 44 24 04 cd cc cc 	mov    DWORD PTR [esp+0x4],0x3ecccccd
100c25f4:	3e 
100c25f5:	c7 04 24 cd cc cc 3d 	mov    DWORD PTR [esp],0x3dcccccd
100c25fc:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
100c2602:	d8 47 58             	fadd   DWORD PTR [edi+0x58]
100c2605:	83 c4 04             	add    esp,0x4
100c2608:	8b cf                	mov    ecx,edi
100c260a:	d9 1c 24             	fstp   DWORD PTR [esp]
100c260d:	ff 56 10             	call   DWORD PTR [esi+0x10]
100c2610:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c2613:	5e                   	pop    esi
100c2614:	83 b8 d0 01 00 00 00 	cmp    DWORD PTR [eax+0x1d0],0x0
100c261b:	74 29                	je     0x100c2646
100c261d:	6a 01                	push   0x1
100c261f:	8b cf                	mov    ecx,edi
100c2621:	e8 4a 04 00 00       	call   0x100c2a70
100c2626:	8b 07                	mov    eax,DWORD PTR [edi]
100c2628:	8b cf                	mov    ecx,edi
100c262a:	6a 01                	push   0x1
100c262c:	ff 90 b0 01 00 00    	call   DWORD PTR [eax+0x1b0]
100c2632:	8b 07                	mov    eax,DWORD PTR [edi]
100c2634:	8b cf                	mov    ecx,edi
100c2636:	6a 22                	push   0x22
100c2638:	ff 90 8c 01 00 00    	call   DWORD PTR [eax+0x18c]
100c263e:	50                   	push   eax
100c263f:	8b cf                	mov    ecx,edi
100c2641:	e8 0a 84 f4 ff       	call   0x1000aa50
100c2646:	5f                   	pop    edi
100c2647:	c3                   	ret
