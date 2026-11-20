
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100a24b0 <.text+0xa14b0>:
100a24b0:	55                   	push   ebp
100a24b1:	8b ec                	mov    ebp,esp
100a24b3:	51                   	push   ecx
100a24b4:	53                   	push   ebx
100a24b5:	56                   	push   esi
100a24b6:	57                   	push   edi
100a24b7:	8b f9                	mov    edi,ecx
100a24b9:	89 7d fc             	mov    DWORD PTR [ebp-0x4],edi
100a24bc:	51                   	push   ecx
100a24bd:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100a24c0:	8b 17                	mov    edx,DWORD PTR [edi]
100a24c2:	8b 80 a4 01 00 00    	mov    eax,DWORD PTR [eax+0x1a4]
100a24c8:	c7 47 78 90 a3 09 10 	mov    DWORD PTR [edi+0x78],0x1009a390
100a24cf:	83 e0 01             	and    eax,0x1
100a24d2:	74 09                	je     0x100a24dd
100a24d4:	c7 04 24 00 00 f0 41 	mov    DWORD PTR [esp],0x41f00000
100a24db:	eb 07                	jmp    0x100a24e4
100a24dd:	c7 04 24 00 00 82 43 	mov    DWORD PTR [esp],0x43820000
100a24e4:	ff 52 08             	call   DWORD PTR [edx+0x8]
100a24e7:	bb 01 00 00 00       	mov    ebx,0x1
100a24ec:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100a24f0:	53                   	push   ebx
100a24f1:	e8 8a 71 07 00       	call   0x10119680
100a24f6:	8b f0                	mov    esi,eax
100a24f8:	83 c4 04             	add    esp,0x4
100a24fb:	85 f6                	test   esi,esi
100a24fd:	0f 84 f3 01 00 00    	je     0x100a26f6
100a2503:	6a 01                	push   0x1
100a2505:	6a 00                	push   0x0
100a2507:	6a 00                	push   0x0
100a2509:	6a 00                	push   0x0
100a250b:	8b ce                	mov    ecx,esi
100a250d:	e8 be 09 05 00       	call   0x100f2ed0
100a2512:	6a 00                	push   0x0
100a2514:	6a 00                	push   0x0
100a2516:	ff 35 c0 66 22 10    	push   DWORD PTR ds:0x102266c0
100a251c:	6a 02                	push   0x2
100a251e:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100a2524:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100a252a:	6a 00                	push   0x0
100a252c:	6a 00                	push   0x0
100a252e:	ff 35 b8 66 22 10    	push   DWORD PTR ds:0x102266b8
100a2534:	6a 02                	push   0x2
100a2536:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100a253c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100a253f:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100a2545:	ff 15 64 30 22 10    	call   DWORD PTR ds:0x10223064
100a254b:	50                   	push   eax
100a254c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a2552:	ff b6 3c 06 00 00    	push   DWORD PTR [esi+0x63c]
100a2558:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a255e:	ff b6 40 06 00 00    	push   DWORD PTR [esi+0x640]
100a2564:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a256a:	ff b6 44 06 00 00    	push   DWORD PTR [esi+0x644]
100a2570:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a2576:	ff b6 48 06 00 00    	push   DWORD PTR [esi+0x648]
100a257c:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a2582:	83 c4 38             	add    esp,0x38
100a2585:	8b ce                	mov    ecx,esi
100a2587:	e8 24 9a 03 00       	call   0x100dbfb0
100a258c:	51                   	push   ecx
100a258d:	d9 1c 24             	fstp   DWORD PTR [esp]
100a2590:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100a2596:	ff b6 58 06 00 00    	push   DWORD PTR [esi+0x658]
100a259c:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a25a2:	ff b6 64 06 00 00    	push   DWORD PTR [esi+0x664]
100a25a8:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a25ae:	ff b6 68 06 00 00    	push   DWORD PTR [esi+0x668]
100a25b4:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a25ba:	ff b6 6c 06 00 00    	push   DWORD PTR [esi+0x66c]
100a25c0:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a25c6:	ff b6 70 06 00 00    	push   DWORD PTR [esi+0x670]
100a25cc:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a25d2:	ff b6 74 06 00 00    	push   DWORD PTR [esi+0x674]
100a25d8:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a25de:	6a 01                	push   0x1
100a25e0:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a25e6:	83 c4 20             	add    esp,0x20
100a25e9:	8b ce                	mov    ecx,esi
100a25eb:	e8 40 26 04 00       	call   0x100e4c30
100a25f0:	85 c0                	test   eax,eax
100a25f2:	74 04                	je     0x100a25f8
100a25f4:	6a 01                	push   0x1
100a25f6:	eb 02                	jmp    0x100a25fa
100a25f8:	6a 00                	push   0x0
100a25fa:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a2600:	83 c4 04             	add    esp,0x4
100a2603:	8b ce                	mov    ecx,esi
100a2605:	e8 56 27 04 00       	call   0x100e4d60
100a260a:	85 c0                	test   eax,eax
100a260c:	74 04                	je     0x100a2612
100a260e:	6a 01                	push   0x1
100a2610:	eb 02                	jmp    0x100a2614
100a2612:	6a 00                	push   0x0
100a2614:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a261a:	83 c4 04             	add    esp,0x4
100a261d:	8b ce                	mov    ecx,esi
100a261f:	6a 00                	push   0x0
100a2621:	6a 01                	push   0x1
100a2623:	6a 00                	push   0x0
100a2625:	e8 d6 a9 03 00       	call   0x100dd000
100a262a:	84 c0                	test   al,al
100a262c:	74 04                	je     0x100a2632
100a262e:	6a 01                	push   0x1
100a2630:	eb 02                	jmp    0x100a2634
100a2632:	6a 00                	push   0x0
100a2634:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a263a:	83 c4 04             	add    esp,0x4
100a263d:	8b ce                	mov    ecx,esi
100a263f:	6a 01                	push   0x1
100a2641:	6a 00                	push   0x0
100a2643:	6a 00                	push   0x0
100a2645:	e8 b6 a9 03 00       	call   0x100dd000
100a264a:	84 c0                	test   al,al
100a264c:	74 04                	je     0x100a2652
100a264e:	6a 01                	push   0x1
100a2650:	eb 02                	jmp    0x100a2654
100a2652:	6a 00                	push   0x0
100a2654:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a265a:	83 c4 04             	add    esp,0x4
100a265d:	83 3d 14 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f14,0x0
100a2664:	74 04                	je     0x100a266a
100a2666:	6a 01                	push   0x1
100a2668:	eb 02                	jmp    0x100a266c
100a266a:	6a 00                	push   0x0
100a266c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a2672:	83 c4 04             	add    esp,0x4
100a2675:	83 3d 14 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f14,0x0
100a267c:	74 08                	je     0x100a2686
100a267e:	ff b6 38 06 00 00    	push   DWORD PTR [esi+0x638]
100a2684:	eb 02                	jmp    0x100a2688
100a2686:	6a 00                	push   0x0
100a2688:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a268e:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100a2691:	83 c4 04             	add    esp,0x4
100a2694:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
100a269b:	74 04                	je     0x100a26a1
100a269d:	6a 01                	push   0x1
100a269f:	eb 02                	jmp    0x100a26a3
100a26a1:	6a 00                	push   0x0
100a26a3:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100a26a9:	83 c4 04             	add    esp,0x4
100a26ac:	83 3d 14 2f 22 10 00 	cmp    DWORD PTR ds:0x10222f14,0x0
100a26b3:	74 30                	je     0x100a26e5
100a26b5:	33 ff                	xor    edi,edi
100a26b7:	be 01 00 00 00       	mov    esi,0x1
100a26bc:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100a26c0:	56                   	push   esi
100a26c1:	e8 ba 6f 07 00       	call   0x10119680
100a26c6:	83 c4 04             	add    esp,0x4
100a26c9:	85 c0                	test   eax,eax
100a26cb:	74 06                	je     0x100a26d3
100a26cd:	03 b8 38 06 00 00    	add    edi,DWORD PTR [eax+0x638]
100a26d3:	46                   	inc    esi
100a26d4:	83 fe 04             	cmp    esi,0x4
100a26d7:	7e e7                	jle    0x100a26c0
100a26d9:	57                   	push   edi
100a26da:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a26e0:	8b 7d fc             	mov    edi,DWORD PTR [ebp-0x4]
100a26e3:	eb 08                	jmp    0x100a26ed
100a26e5:	6a 00                	push   0x0
100a26e7:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100a26ed:	83 c4 04             	add    esp,0x4
100a26f0:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100a26f6:	43                   	inc    ebx
100a26f7:	83 fb 04             	cmp    ebx,0x4
100a26fa:	0f 8e f0 fd ff ff    	jle    0x100a24f0
100a2700:	5f                   	pop    edi
100a2701:	5e                   	pop    esi
100a2702:	5b                   	pop    ebx
100a2703:	8b e5                	mov    esp,ebp
100a2705:	5d                   	pop    ebp
100a2706:	c2 10 00             	ret    0x10
