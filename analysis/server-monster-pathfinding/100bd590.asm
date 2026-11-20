
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bd590 <.text+0xbc590>:
100bd590:	55                   	push   ebp
100bd591:	8b ec                	mov    ebp,esp
100bd593:	83 e4 f8             	and    esp,0xfffffff8
100bd596:	83 ec 30             	sub    esp,0x30
100bd599:	56                   	push   esi
100bd59a:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100bd59d:	57                   	push   edi
100bd59e:	8b f9                	mov    edi,ecx
100bd5a0:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100bd5a3:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
100bd5a8:	66 0f d6 44 24 2c    	movq   QWORD PTR [esp+0x2c],xmm0
100bd5ae:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
100bd5b1:	89 44 24 34          	mov    DWORD PTR [esp+0x34],eax
100bd5b5:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100bd5b8:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100bd5bc:	f3 0f 5c 06          	subss  xmm0,DWORD PTR [esi]
100bd5c0:	f3 0f 11 44 24 20    	movss  DWORD PTR [esp+0x20],xmm0
100bd5c6:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
100bd5cb:	f3 0f 5c 46 04       	subss  xmm0,DWORD PTR [esi+0x4]
100bd5d0:	f3 0f 11 44 24 24    	movss  DWORD PTR [esp+0x24],xmm0
100bd5d6:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100bd5db:	8d 44 24 20          	lea    eax,[esp+0x20]
100bd5df:	f3 0f 5c 46 08       	subss  xmm0,DWORD PTR [esi+0x8]
100bd5e4:	50                   	push   eax
100bd5e5:	f3 0f 11 44 24 2c    	movss  DWORD PTR [esp+0x2c],xmm0
100bd5eb:	e8 40 d3 05 00       	call   0x1011a930
100bd5f0:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100bd5f3:	d9 5c 24 18          	fstp   DWORD PTR [esp+0x18]
100bd5f7:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
100bd5fb:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
100bd600:	f3 0f 5c 46 04       	subss  xmm0,DWORD PTR [esi+0x4]
100bd605:	f3 0f 5c 0e          	subss  xmm1,DWORD PTR [esi]
100bd609:	f3 0f 59 c0          	mulss  xmm0,xmm0
100bd60d:	f3 0f 59 c9          	mulss  xmm1,xmm1
100bd611:	f3 0f 58 c1          	addss  xmm0,xmm1
100bd615:	0f 57 c9             	xorps  xmm1,xmm1
100bd618:	0f 5a c0             	cvtps2pd xmm0,xmm0
100bd61b:	66 0f 2e c8          	ucomisd xmm1,xmm0
100bd61f:	77 06                	ja     0x100bd627
100bd621:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100bd625:	eb 05                	jmp    0x100bd62c
100bd627:	e8 64 e8 0a 00       	call   0x1016be90
100bd62c:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100bd630:	56                   	push   esi
100bd631:	57                   	push   edi
100bd632:	f3 0f 11 44 24 18    	movss  DWORD PTR [esp+0x18],xmm0
100bd638:	e8 a3 c9 05 00       	call   0x10119fe0
100bd63d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100bd640:	83 c4 0c             	add    esp,0xc
100bd643:	f6 80 a8 01 00 00 03 	test   BYTE PTR [eax+0x1a8],0x3
100bd64a:	75 0f                	jne    0x100bd65b
100bd64c:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100bd652:	ff 15 b0 2f 22 10    	call   DWORD PTR ds:0x10222fb0
100bd658:	83 c4 04             	add    esp,0x4
100bd65b:	f3 0f 10 5c 24 0c    	movss  xmm3,DWORD PTR [esp+0xc]
100bd661:	0f 57 c9             	xorps  xmm1,xmm1
100bd664:	0f 2f d9             	comiss xmm3,xmm1
100bd667:	f3 0f 11 4c 24 10    	movss  DWORD PTR [esp+0x10],xmm1
100bd66d:	0f 86 9a 00 00 00    	jbe    0x100bd70d
100bd673:	f3 0f 10 35 90 13 1a 	movss  xmm6,DWORD PTR ds:0x101a1390
100bd67a:	10 
100bd67b:	0f 28 eb             	movaps xmm5,xmm3
100bd67e:	f3 0f 10 25 e4 1e 1a 	movss  xmm4,DWORD PTR ds:0x101a1ee4
100bd685:	10 
100bd686:	f3 0f 5c ee          	subss  xmm5,xmm6
100bd68a:	f3 0f 11 6c 24 1c    	movss  DWORD PTR [esp+0x1c],xmm5
100bd690:	0f 28 d1             	movaps xmm2,xmm1
100bd693:	0f 28 c4             	movaps xmm0,xmm4
100bd696:	f3 0f 58 d4          	addss  xmm2,xmm4
100bd69a:	0f 2f d5             	comiss xmm2,xmm5
100bd69d:	f3 0f 11 54 24 18    	movss  DWORD PTR [esp+0x18],xmm2
100bd6a3:	72 0b                	jb     0x100bd6b0
100bd6a5:	0f 28 c3             	movaps xmm0,xmm3
100bd6a8:	f3 0f 5c c1          	subss  xmm0,xmm1
100bd6ac:	f3 0f 5c c6          	subss  xmm0,xmm6
100bd6b0:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100bd6b3:	6a 02                	push   0x2
100bd6b5:	83 ec 08             	sub    esp,0x8
100bd6b8:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100bd6be:	f3 0f 10 44 24 20    	movss  xmm0,DWORD PTR [esp+0x20]
100bd6c4:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100bd6c9:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100bd6cf:	ff 15 b4 2f 22 10    	call   DWORD PTR ds:0x10222fb4
100bd6d5:	83 c4 10             	add    esp,0x10
100bd6d8:	85 c0                	test   eax,eax
100bd6da:	0f 84 94 00 00 00    	je     0x100bd774
100bd6e0:	f3 0f 10 4c 24 18    	movss  xmm1,DWORD PTR [esp+0x18]
100bd6e6:	f3 0f 10 5c 24 0c    	movss  xmm3,DWORD PTR [esp+0xc]
100bd6ec:	0f 2f d9             	comiss xmm3,xmm1
100bd6ef:	f3 0f 10 25 e4 1e 1a 	movss  xmm4,DWORD PTR ds:0x101a1ee4
100bd6f6:	10 
100bd6f7:	f3 0f 10 6c 24 1c    	movss  xmm5,DWORD PTR [esp+0x1c]
100bd6fd:	f3 0f 10 35 90 13 1a 	movss  xmm6,DWORD PTR ds:0x101a1390
100bd704:	10 
100bd705:	f3 0f 11 4c 24 10    	movss  DWORD PTR [esp+0x10],xmm1
100bd70b:	77 83                	ja     0x100bd690
100bd70d:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
100bd710:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100bd713:	be 02 00 00 00       	mov    esi,0x2
100bd718:	f6 81 a8 01 00 00 03 	test   BYTE PTR [ecx+0x1a8],0x3
100bd71f:	75 3b                	jne    0x100bd75c
100bd721:	85 d2                	test   edx,edx
100bd723:	74 0f                	je     0x100bd734
100bd725:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
100bd728:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x200
100bd72f:	02 00 00 
100bd732:	74 28                	je     0x100bd75c
100bd734:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100bd737:	be 02 00 00 00       	mov    esi,0x2
100bd73c:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100bd741:	b8 01 00 00 00       	mov    eax,0x1
100bd746:	f3 0f 5c 41 10       	subss  xmm0,DWORD PTR [ecx+0x10]
100bd74b:	0f 54 05 80 1f 1a 10 	andps  xmm0,XMMWORD PTR ds:0x101a1f80
100bd752:	0f 2f 05 04 1f 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1f04
100bd759:	0f 47 f0             	cmova  esi,eax
100bd75c:	8d 44 24 2c          	lea    eax,[esp+0x2c]
100bd760:	50                   	push   eax
100bd761:	57                   	push   edi
100bd762:	e8 79 c8 05 00       	call   0x10119fe0
100bd767:	83 c4 08             	add    esp,0x8
100bd76a:	8b c6                	mov    eax,esi
100bd76c:	5f                   	pop    edi
100bd76d:	5e                   	pop    esi
100bd76e:	8b e5                	mov    esp,ebp
100bd770:	5d                   	pop    ebp
100bd771:	c2 10 00             	ret    0x10
100bd774:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
100bd777:	85 c0                	test   eax,eax
100bd779:	74 0a                	je     0x100bd785
100bd77b:	f3 0f 10 44 24 10    	movss  xmm0,DWORD PTR [esp+0x10]
100bd781:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100bd785:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
100bd788:	85 d2                	test   edx,edx
100bd78a:	74 17                	je     0x100bd7a3
100bd78c:	8b 42 04             	mov    eax,DWORD PTR [edx+0x4]
100bd78f:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
100bd795:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100bd79a:	3b 48 74             	cmp    ecx,DWORD PTR [eax+0x74]
100bd79d:	0f 84 6d ff ff ff    	je     0x100bd710
100bd7a3:	33 f6                	xor    esi,esi
100bd7a5:	eb b5                	jmp    0x100bd75c
