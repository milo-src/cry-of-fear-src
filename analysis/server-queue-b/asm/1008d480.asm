
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008d480 <.text+0x8c480>:
1008d480:	55                   	push   ebp
1008d481:	8b ec                	mov    ebp,esp
1008d483:	83 ec 18             	sub    esp,0x18
1008d486:	f3 0f 10 1d 90 13 1a 	movss  xmm3,DWORD PTR ds:0x101a1390
1008d48d:	10 
1008d48e:	53                   	push   ebx
1008d48f:	56                   	push   esi
1008d490:	57                   	push   edi
1008d491:	8b f9                	mov    edi,ecx
1008d493:	f3 0f 11 5d fc       	movss  DWORD PTR [ebp-0x4],xmm3
1008d498:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1008d49b:	83 b9 a4 01 00 00 00 	cmp    DWORD PTR [ecx+0x1a4],0x0
1008d4a2:	7c 38                	jl     0x1008d4dc
1008d4a4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d4a9:	8b 91 f0 01 00 00    	mov    edx,DWORD PTR [ecx+0x1f0]
1008d4af:	6a 64                	push   0x64
1008d4b1:	6a 00                	push   0x0
1008d4b3:	03 90 98 00 00 00    	add    edx,DWORD PTR [eax+0x98]
1008d4b9:	83 ec 08             	sub    esp,0x8
1008d4bc:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1008d4c3:	3f 
1008d4c4:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1008d4cb:	52                   	push   edx
1008d4cc:	6a 06                	push   0x6
1008d4ce:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
1008d4d4:	e8 17 f5 06 00       	call   0x100fc9f0
1008d4d9:	83 c4 1c             	add    esp,0x1c
1008d4dc:	83 bf b0 01 00 00 00 	cmp    DWORD PTR [edi+0x1b0],0x0
1008d4e3:	c7 87 00 01 00 00 02 	mov    DWORD PTR [edi+0x100],0x2
1008d4ea:	00 00 00 
1008d4ed:	c7 87 54 01 00 00 70 	mov    DWORD PTR [edi+0x154],0x1008d870
1008d4f4:	d8 08 10 
1008d4f7:	74 2a                	je     0x1008d523
1008d4f9:	83 bf ac 01 00 00 00 	cmp    DWORD PTR [edi+0x1ac],0x0
1008d500:	8d 8f e4 00 00 00    	lea    ecx,[edi+0xe4]
1008d506:	51                   	push   ecx
1008d507:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1008d50e:	74 04                	je     0x1008d514
1008d510:	6a 01                	push   0x1
1008d512:	eb 02                	jmp    0x1008d516
1008d514:	6a 03                	push   0x3
1008d516:	e8 75 a2 f8 ff       	call   0x10017790
1008d51b:	50                   	push   eax
1008d51c:	8b cf                	mov    ecx,edi
1008d51e:	e8 0d 54 07 00       	call   0x10102930
1008d523:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d528:	b9 78 f5 1b 10       	mov    ecx,0x101bf578
1008d52d:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
1008d530:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1008d536:	03 06                	add    eax,DWORD PTR [esi]
1008d538:	8a 10                	mov    dl,BYTE PTR [eax]
1008d53a:	3a 11                	cmp    dl,BYTE PTR [ecx]
1008d53c:	75 1a                	jne    0x1008d558
1008d53e:	84 d2                	test   dl,dl
1008d540:	74 12                	je     0x1008d554
1008d542:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1008d545:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
1008d548:	75 0e                	jne    0x1008d558
1008d54a:	83 c0 02             	add    eax,0x2
1008d54d:	83 c1 02             	add    ecx,0x2
1008d550:	84 d2                	test   dl,dl
1008d552:	75 e4                	jne    0x1008d538
1008d554:	33 c0                	xor    eax,eax
1008d556:	eb 05                	jmp    0x1008d55d
1008d558:	1b c0                	sbb    eax,eax
1008d55a:	83 c8 01             	or     eax,0x1
1008d55d:	85 c0                	test   eax,eax
1008d55f:	0f 85 4c 01 00 00    	jne    0x1008d6b1
1008d565:	8d 8f e4 00 00 00    	lea    ecx,[edi+0xe4]
1008d56b:	e8 10 a2 f8 ff       	call   0x10017780
1008d570:	85 c0                	test   eax,eax
1008d572:	0f 84 e0 00 00 00    	je     0x1008d658
1008d578:	8d 8f e4 00 00 00    	lea    ecx,[edi+0xe4]
1008d57e:	e8 1d a2 f8 ff       	call   0x100177a0
1008d583:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1008d586:	8b 58 04             	mov    ebx,DWORD PTR [eax+0x4]
1008d589:	f6 81 a4 01 00 00 10 	test   BYTE PTR [ecx+0x1a4],0x10
1008d590:	0f 85 c2 00 00 00    	jne    0x1008d658
1008d596:	f3 0f 10 41 48       	movss  xmm0,DWORD PTR [ecx+0x48]
1008d59b:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1008d5a2:	9f                   	lahf
1008d5a3:	f6 c4 44             	test   ah,0x44
1008d5a6:	0f 8b ac 00 00 00    	jnp    0x1008d658
1008d5ac:	f3 0f 10 43 08       	movss  xmm0,DWORD PTR [ebx+0x8]
1008d5b1:	8d 73 50             	lea    esi,[ebx+0x50]
1008d5b4:	f3 0f 5c 41 08       	subss  xmm0,DWORD PTR [ecx+0x8]
1008d5b9:	8d 45 e8             	lea    eax,[ebp-0x18]
1008d5bc:	50                   	push   eax
1008d5bd:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1008d5c2:	f3 0f 10 43 0c       	movss  xmm0,DWORD PTR [ebx+0xc]
1008d5c7:	f3 0f 5c 41 0c       	subss  xmm0,DWORD PTR [ecx+0xc]
1008d5cc:	c7 45 e8 00 00 00 00 	mov    DWORD PTR [ebp-0x18],0x0
1008d5d3:	c7 45 f0 00 00 00 00 	mov    DWORD PTR [ebp-0x10],0x0
1008d5da:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1008d5df:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
1008d5e4:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
1008d5e9:	e8 32 bd 08 00       	call   0x10119320
1008d5ee:	56                   	push   esi
1008d5ef:	e8 2c bd 08 00       	call   0x10119320
1008d5f4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008d5f9:	83 c4 08             	add    esp,0x8
1008d5fc:	f3 0f 10 5b 08       	movss  xmm3,DWORD PTR [ebx+0x8]
1008d601:	f3 0f 10 43 0c       	movss  xmm0,DWORD PTR [ebx+0xc]
1008d606:	f3 0f 10 48 2c       	movss  xmm1,DWORD PTR [eax+0x2c]
1008d60b:	f3 0f 10 50 28       	movss  xmm2,DWORD PTR [eax+0x28]
1008d610:	f3 0f 59 0d e0 1e 1a 	mulss  xmm1,DWORD PTR ds:0x101a1ee0
1008d617:	10 
1008d618:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008d61b:	f3 0f 59 15 e0 1e 1a 	mulss  xmm2,DWORD PTR ds:0x101a1ee0
1008d622:	10 
1008d623:	f3 0f 58 c1          	addss  xmm0,xmm1
1008d627:	0f 57 c9             	xorps  xmm1,xmm1
1008d62a:	f3 0f 58 da          	addss  xmm3,xmm2
1008d62e:	f3 0f 5c 40 0c       	subss  xmm0,DWORD PTR [eax+0xc]
1008d633:	f3 0f 5c 58 08       	subss  xmm3,DWORD PTR [eax+0x8]
1008d638:	f3 0f 59 45 f8       	mulss  xmm0,DWORD PTR [ebp-0x8]
1008d63d:	f3 0f 59 5d f4       	mulss  xmm3,DWORD PTR [ebp-0xc]
1008d642:	f3 0f 5c c3          	subss  xmm0,xmm3
1008d646:	0f 2f c8             	comiss xmm1,xmm0
1008d649:	76 0d                	jbe    0x1008d658
1008d64b:	f3 0f 10 1d d0 13 1a 	movss  xmm3,DWORD PTR ds:0x101a13d0
1008d652:	10 
1008d653:	f3 0f 11 5d fc       	movss  DWORD PTR [ebp-0x4],xmm3
1008d658:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008d65b:	83 ec 10             	sub    esp,0x10
1008d65e:	f3 0f 10 97 44 01 00 	movss  xmm2,DWORD PTR [edi+0x144]
1008d665:	00 
1008d666:	8b cf                	mov    ecx,edi
1008d668:	f3 0f 10 8f 48 01 00 	movss  xmm1,DWORD PTR [edi+0x148]
1008d66f:	00 
1008d670:	f3 0f 59 55 fc       	mulss  xmm2,DWORD PTR [ebp-0x4]
1008d675:	f3 0f 10 80 fc 01 00 	movss  xmm0,DWORD PTR [eax+0x1fc]
1008d67c:	00 
1008d67d:	8b c4                	mov    eax,esp
1008d67f:	f3 0f 59 4d fc       	mulss  xmm1,DWORD PTR [ebp-0x4]
1008d684:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
1008d68a:	f3 0f 10 87 40 01 00 	movss  xmm0,DWORD PTR [edi+0x140]
1008d691:	00 
1008d692:	f3 0f 59 45 fc       	mulss  xmm0,DWORD PTR [ebp-0x4]
1008d697:	f3 0f 11 50 04       	movss  DWORD PTR [eax+0x4],xmm2
1008d69c:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
1008d6a1:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1008d6a5:	e8 a6 44 07 00       	call   0x10101b50
1008d6aa:	5f                   	pop    edi
1008d6ab:	5e                   	pop    esi
1008d6ac:	5b                   	pop    ebx
1008d6ad:	8b e5                	mov    esp,ebp
1008d6af:	5d                   	pop    ebp
1008d6b0:	c3                   	ret
1008d6b1:	f3 0f 10 86 fc 01 00 	movss  xmm0,DWORD PTR [esi+0x1fc]
1008d6b8:	00 
1008d6b9:	83 ec 10             	sub    esp,0x10
1008d6bc:	8b 87 28 01 00 00    	mov    eax,DWORD PTR [edi+0x128]
1008d6c2:	8b cc                	mov    ecx,esp
1008d6c4:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
1008d6ca:	89 01                	mov    DWORD PTR [ecx],eax
1008d6cc:	8b 87 2c 01 00 00    	mov    eax,DWORD PTR [edi+0x12c]
1008d6d2:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
1008d6d5:	8b 87 30 01 00 00    	mov    eax,DWORD PTR [edi+0x130]
1008d6db:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
1008d6de:	8b cf                	mov    ecx,edi
1008d6e0:	e8 db 4e 07 00       	call   0x101025c0
1008d6e5:	5f                   	pop    edi
1008d6e6:	5e                   	pop    esi
1008d6e7:	5b                   	pop    ebx
1008d6e8:	8b e5                	mov    esp,ebp
1008d6ea:	5d                   	pop    ebp
1008d6eb:	c3                   	ret
