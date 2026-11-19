
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10006520 <.text+0x5520>:
10006520:	55                   	push   ebp
10006521:	8b ec                	mov    ebp,esp
10006523:	83 e4 f8             	and    esp,0xfffffff8
10006526:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000652c:	83 ec 08             	sub    esp,0x8
1000652f:	f3 0f 10 81 14 02 00 	movss  xmm0,DWORD PTR [ecx+0x214]
10006536:	00 
10006537:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
1000653e:	53                   	push   ebx
1000653f:	56                   	push   esi
10006540:	9f                   	lahf
10006541:	f6 c4 44             	test   ah,0x44
10006544:	0f 8a dc 03 00 00    	jp     0x10006926
1000654a:	83 b9 d0 00 00 00 00 	cmp    DWORD PTR [ecx+0xd0],0x0
10006551:	74 0d                	je     0x10006560
10006553:	83 89 c8 00 00 00 02 	or     DWORD PTR [ecx+0xc8],0x2
1000655a:	5e                   	pop    esi
1000655b:	5b                   	pop    ebx
1000655c:	8b e5                	mov    esp,ebp
1000655e:	5d                   	pop    ebp
1000655f:	c3                   	ret
10006560:	8d 81 f4 f3 04 00    	lea    eax,[ecx+0x4f3f4]
10006566:	68 3c 1d 1a 10       	push   0x101a1d3c
1000656b:	50                   	push   eax
1000656c:	8b 81 58 f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f558]
10006572:	ff d0                	call   eax
10006574:	50                   	push   eax
10006575:	e8 e4 4f 16 00       	call   0x1016b55e
1000657a:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10006580:	33 db                	xor    ebx,ebx
10006582:	83 c4 0c             	add    esp,0xc
10006585:	83 f8 01             	cmp    eax,0x1
10006588:	0f 94 c3             	sete   bl
1000658b:	75 0d                	jne    0x1000659a
1000658d:	83 b9 d4 00 00 00 05 	cmp    DWORD PTR [ecx+0xd4],0x5
10006594:	0f 84 8c 03 00 00    	je     0x10006926
1000659a:	f3 0f 10 91 cc 00 00 	movss  xmm2,DWORD PTR [ecx+0xcc]
100065a1:	00 
100065a2:	0f 57 c9             	xorps  xmm1,xmm1
100065a5:	0f 2e d1             	ucomiss xmm2,xmm1
100065a8:	9f                   	lahf
100065a9:	f6 c4 44             	test   ah,0x44
100065ac:	7b 33                	jnp    0x100065e1
100065ae:	0f b6 81 5a 54 04 00 	movzx  eax,BYTE PTR [ecx+0x4545a]
100065b5:	66 0f 6e c0          	movd   xmm0,eax
100065b9:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100065bc:	f3 0f 5c d0          	subss  xmm2,xmm0
100065c0:	0f 2f ca             	comiss xmm1,xmm2
100065c3:	f3 0f 11 91 cc 00 00 	movss  DWORD PTR [ecx+0xcc],xmm2
100065ca:	00 
100065cb:	0f 86 55 03 00 00    	jbe    0x10006926
100065d1:	c7 81 cc 00 00 00 00 	mov    DWORD PTR [ecx+0xcc],0x0
100065d8:	00 00 00 
100065db:	5e                   	pop    esi
100065dc:	5b                   	pop    ebx
100065dd:	8b e5                	mov    esp,ebp
100065df:	5d                   	pop    ebp
100065e0:	c3                   	ret
100065e1:	83 b9 e4 00 00 00 02 	cmp    DWORD PTR [ecx+0xe4],0x2
100065e8:	0f 8c aa 00 00 00    	jl     0x10006698
100065ee:	83 b9 e8 00 00 00 ed 	cmp    DWORD PTR [ecx+0xe8],0xffffffed
100065f5:	0f 84 9d 00 00 00    	je     0x10006698
100065fb:	c7 81 e0 00 00 00 ff 	mov    DWORD PTR [ecx+0xe0],0xffffffff
10006602:	ff ff ff 
10006605:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000660a:	8b 88 e8 00 00 00    	mov    ecx,DWORD PTR [eax+0xe8]
10006610:	83 f9 fd             	cmp    ecx,0xfffffffd
10006613:	75 09                	jne    0x1000661e
10006615:	c7 40 64 00 00 c8 42 	mov    DWORD PTR [eax+0x64],0x42c80000
1000661c:	eb 15                	jmp    0x10006633
1000661e:	83 f9 fc             	cmp    ecx,0xfffffffc
10006621:	75 09                	jne    0x1000662c
10006623:	c7 40 64 00 00 a0 42 	mov    DWORD PTR [eax+0x64],0x42a00000
1000662a:	eb 07                	jmp    0x10006633
1000662c:	c7 40 64 00 00 48 42 	mov    DWORD PTR [eax+0x64],0x42480000
10006633:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10006638:	0f 2f 88 ac 00 00 00 	comiss xmm1,DWORD PTR [eax+0xac]
1000663f:	0f 82 e1 02 00 00    	jb     0x10006926
10006645:	c7 80 ac 00 00 00 00 	mov    DWORD PTR [eax+0xac],0x459c4000
1000664c:	40 9c 45 
1000664f:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10006654:	6a 0a                	push   0xa
10006656:	6a f6                	push   0xfffffff6
10006658:	8b 80 8c f5 04 00    	mov    eax,DWORD PTR [eax+0x4f58c]
1000665e:	ff d0                	call   eax
10006660:	83 c4 08             	add    esp,0x8
10006663:	83 c0 64             	add    eax,0x64
10006666:	50                   	push   eax
10006667:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000666c:	6a 00                	push   0x0
1000666e:	83 ec 08             	sub    esp,0x8
10006671:	8b 80 b8 f5 04 00    	mov    eax,DWORD PTR [eax+0x4f5b8]
10006677:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1000667e:	3f 
1000667f:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10006686:	68 40 1d 1a 10       	push   0x101a1d40
1000668b:	6a 04                	push   0x4
1000668d:	ff d0                	call   eax
1000668f:	83 c4 18             	add    esp,0x18
10006692:	5e                   	pop    esi
10006693:	5b                   	pop    ebx
10006694:	8b e5                	mov    esp,ebp
10006696:	5d                   	pop    ebp
10006697:	c3                   	ret
10006698:	83 b9 e0 00 00 00 ff 	cmp    DWORD PTR [ecx+0xe0],0xffffffff
1000669f:	0f 84 ae fe ff ff    	je     0x10006553
100066a5:	f6 81 c8 00 00 00 02 	test   BYTE PTR [ecx+0xc8],0x2
100066ac:	0f 85 74 02 00 00    	jne    0x10006926
100066b2:	c7 81 e0 00 00 00 ff 	mov    DWORD PTR [ecx+0xe0],0xffffffff
100066b9:	ff ff ff 
100066bc:	e8 af 27 00 00       	call   0x10008e70
100066c1:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100066c6:	85 db                	test   ebx,ebx
100066c8:	74 2a                	je     0x100066f4
100066ca:	8b 80 b8 f5 04 00    	mov    eax,DWORD PTR [eax+0x4f5b8]
100066d0:	6a 64                	push   0x64
100066d2:	6a 00                	push   0x0
100066d4:	83 ec 08             	sub    esp,0x8
100066d7:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100066de:	3f 
100066df:	c7 04 24 00 00 00 3f 	mov    DWORD PTR [esp],0x3f000000
100066e6:	68 60 1d 1a 10       	push   0x101a1d60
100066eb:	6a 04                	push   0x4
100066ed:	ff d0                	call   eax
100066ef:	83 c4 18             	add    esp,0x18
100066f2:	eb 21                	jmp    0x10006715
100066f4:	0f b6 80 f0 01 00 00 	movzx  eax,BYTE PTR [eax+0x1f0]
100066fb:	51                   	push   ecx
100066fc:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10006703:	50                   	push   eax
10006704:	e8 27 07 00 00       	call   0x10006e30
10006709:	83 c4 04             	add    esp,0x4
1000670c:	50                   	push   eax
1000670d:	e8 3e 0e 00 00       	call   0x10007550
10006712:	83 c4 08             	add    esp,0x8
10006715:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000671b:	83 b9 e4 00 00 00 03 	cmp    DWORD PTR [ecx+0xe4],0x3
10006722:	7d 52                	jge    0x10006776
10006724:	8b 81 8c f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f58c]
1000672a:	6a 1e                	push   0x1e
1000672c:	6a e2                	push   0xffffffe2
1000672e:	ff d0                	call   eax
10006730:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10006736:	83 c4 08             	add    esp,0x8
10006739:	83 c0 64             	add    eax,0x64
1000673c:	50                   	push   eax
1000673d:	8b 81 b8 f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f5b8]
10006743:	6a 00                	push   0x0
10006745:	83 ec 08             	sub    esp,0x8
10006748:	83 79 08 00          	cmp    DWORD PTR [ecx+0x8],0x0
1000674c:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10006753:	3f 
10006754:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1000675b:	74 07                	je     0x10006764
1000675d:	68 28 14 1a 10       	push   0x101a1428
10006762:	eb 05                	jmp    0x10006769
10006764:	68 50 14 1a 10       	push   0x101a1450
10006769:	6a 00                	push   0x0
1000676b:	ff d0                	call   eax
1000676d:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
10006773:	83 c4 18             	add    esp,0x18
10006776:	8d 81 f4 f3 04 00    	lea    eax,[ecx+0x4f3f4]
1000677c:	68 74 1d 1a 10       	push   0x101a1d74
10006781:	50                   	push   eax
10006782:	8b 81 58 f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f558]
10006788:	ff d0                	call   eax
1000678a:	50                   	push   eax
1000678b:	e8 ce 4d 16 00       	call   0x1016b55e
10006790:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
10006796:	48                   	dec    eax
10006797:	83 c4 0c             	add    esp,0xc
1000679a:	f7 d8                	neg    eax
1000679c:	1b c0                	sbb    eax,eax
1000679e:	40                   	inc    eax
1000679f:	83 be 90 00 00 00 00 	cmp    DWORD PTR [esi+0x90],0x0
100067a6:	75 60                	jne    0x10006808
100067a8:	f7 86 b8 00 00 00 00 	test   DWORD PTR [esi+0xb8],0x4000
100067af:	40 00 00 
100067b2:	75 54                	jne    0x10006808
100067b4:	8d 86 f4 f3 04 00    	lea    eax,[esi+0x4f3f4]
100067ba:	68 78 1d 1a 10       	push   0x101a1d78
100067bf:	50                   	push   eax
100067c0:	8b 86 58 f5 04 00    	mov    eax,DWORD PTR [esi+0x4f558]
100067c6:	ff d0                	call   eax
100067c8:	50                   	push   eax
100067c9:	e8 90 4d 16 00       	call   0x1016b55e
100067ce:	c1 e0 04             	shl    eax,0x4
100067d1:	0f 57 c9             	xorps  xmm1,xmm1
100067d4:	83 c4 0c             	add    esp,0xc
100067d7:	66 0f 6e c0          	movd   xmm0,eax
100067db:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
100067df:	f2 0f 59 05 a8 1e 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1ea8
100067e6:	10 
100067e7:	66 0f 2e c8          	ucomisd xmm1,xmm0
100067eb:	0f 87 e4 00 00 00    	ja     0x100068d5
100067f1:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100067f5:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100067fa:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100067fe:	f3 0f 11 40 64       	movss  DWORD PTR [eax+0x64],xmm0
10006803:	e9 0d 01 00 00       	jmp    0x10006915
10006808:	85 c0                	test   eax,eax
1000680a:	0f 84 e0 00 00 00    	je     0x100068f0
10006810:	f6 86 76 54 04 00 04 	test   BYTE PTR [esi+0x45476],0x4
10006817:	0f 84 d3 00 00 00    	je     0x100068f0
1000681d:	f3 0f 10 86 8c 00 00 	movss  xmm0,DWORD PTR [esi+0x8c]
10006824:	00 
10006825:	0f 2f 05 70 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1370
1000682c:	0f 86 be 00 00 00    	jbe    0x100068f0
10006832:	8d 46 5c             	lea    eax,[esi+0x5c]
10006835:	50                   	push   eax
10006836:	e8 95 c7 ff ff       	call   0x10002fd0
1000683b:	d9 5c 24 10          	fstp   DWORD PTR [esp+0x10]
1000683f:	f3 0f 10 44 24 10    	movss  xmm0,DWORD PTR [esp+0x10]
10006845:	83 c4 04             	add    esp,0x4
10006848:	0f 2f 05 fc 1e 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1efc
1000684f:	0f 86 95 00 00 00    	jbe    0x100068ea
10006855:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000685a:	0f 57 c9             	xorps  xmm1,xmm1
1000685d:	c7 80 a0 00 00 00 00 	mov    DWORD PTR [eax+0xa0],0xc0a00000
10006864:	00 a0 c0 
10006867:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000686c:	f3 0f 10 40 14       	movss  xmm0,DWORD PTR [eax+0x14]
10006871:	f3 0f 59 05 34 1f 1a 	mulss  xmm0,DWORD PTR ds:0x101a1f34
10006878:	10 
10006879:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000687c:	f2 0f 59 05 90 1e 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1e90
10006883:	10 
10006884:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10006888:	f3 0f 11 40 5c       	movss  DWORD PTR [eax+0x5c],xmm0
1000688d:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10006892:	f3 0f 10 40 18       	movss  xmm0,DWORD PTR [eax+0x18]
10006897:	f3 0f 59 05 34 1f 1a 	mulss  xmm0,DWORD PTR ds:0x101a1f34
1000689e:	10 
1000689f:	0f 5a c0             	cvtps2pd xmm0,xmm0
100068a2:	f2 0f 59 05 90 1e 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1e90
100068a9:	10 
100068aa:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100068ae:	f3 0f 11 40 60       	movss  DWORD PTR [eax+0x60],xmm0
100068b3:	f2 0f 10 05 d0 1e 1a 	movsd  xmm0,QWORD PTR ds:0x101a1ed0
100068ba:	10 
100068bb:	66 0f 2e c8          	ucomisd xmm1,xmm0
100068bf:	77 14                	ja     0x100068d5
100068c1:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100068c5:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100068ca:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100068ce:	f3 0f 11 40 64       	movss  DWORD PTR [eax+0x64],xmm0
100068d3:	eb 40                	jmp    0x10006915
100068d5:	e8 b6 55 16 00       	call   0x1016be90
100068da:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100068df:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100068e3:	f3 0f 11 40 64       	movss  DWORD PTR [eax+0x64],xmm0
100068e8:	eb 2b                	jmp    0x10006915
100068ea:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
100068f0:	f2 0f 10 05 c8 1e 1a 	movsd  xmm0,QWORD PTR ds:0x101a1ec8
100068f7:	10 
100068f8:	0f 57 c9             	xorps  xmm1,xmm1
100068fb:	66 0f 2e c8          	ucomisd xmm1,xmm0
100068ff:	77 06                	ja     0x10006907
10006901:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10006905:	eb 05                	jmp    0x1000690c
10006907:	e8 84 55 16 00       	call   0x1016be90
1000690c:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10006910:	f3 0f 11 46 64       	movss  DWORD PTR [esi+0x64],xmm0
10006915:	e8 f6 ee ff ff       	call   0x10005810
1000691a:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000691f:	83 88 c8 00 00 00 02 	or     DWORD PTR [eax+0xc8],0x2
10006926:	5e                   	pop    esi
10006927:	5b                   	pop    ebx
10006928:	8b e5                	mov    esp,ebp
1000692a:	5d                   	pop    ebp
1000692b:	c3                   	ret
1000692c:	cc                   	int3
1000692d:	cc                   	int3
1000692e:	cc                   	int3
1000692f:	cc                   	int3
