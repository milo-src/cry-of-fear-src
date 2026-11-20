
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100044b0 <.text+0x34b0>:
100044b0:	55                   	push   ebp
100044b1:	8b ec                	mov    ebp,esp
100044b3:	81 ec 80 00 00 00    	sub    esp,0x80
100044b9:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100044be:	33 c5                	xor    eax,ebp
100044c0:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100044c3:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
100044c9:	8d 45 ac             	lea    eax,[ebp-0x54]
100044cc:	53                   	push   ebx
100044cd:	50                   	push   eax
100044ce:	8d 41 38             	lea    eax,[ecx+0x38]
100044d1:	50                   	push   eax
100044d2:	8b 81 60 f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f560]
100044d8:	ff d0                	call   eax
100044da:	8b d8                	mov    ebx,eax
100044dc:	83 c4 08             	add    esp,0x8
100044df:	83 fb ff             	cmp    ebx,0xffffffff
100044e2:	75 23                	jne    0x10004507
100044e4:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100044e9:	ff 70 04             	push   DWORD PTR [eax+0x4]
100044ec:	ff 30                	push   DWORD PTR [eax]
100044ee:	e8 cd 4b 00 00       	call   0x100090c0
100044f3:	83 c4 08             	add    esp,0x8
100044f6:	33 c0                	xor    eax,eax
100044f8:	5b                   	pop    ebx
100044f9:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100044fc:	33 cd                	xor    ecx,ebp
100044fe:	e8 b0 96 13 00       	call   0x1013dbb3
10004503:	8b e5                	mov    esp,ebp
10004505:	5d                   	pop    ebp
10004506:	c3                   	ret
10004507:	56                   	push   esi
10004508:	57                   	push   edi
10004509:	8b 3d 50 0c 22 10    	mov    edi,DWORD PTR ds:0x10220c50
1000450f:	83 7f 04 00          	cmp    DWORD PTR [edi+0x4],0x0
10004513:	f3 0f 10 47 38       	movss  xmm0,DWORD PTR [edi+0x38]
10004518:	f3 0f 11 45 a0       	movss  DWORD PTR [ebp-0x60],xmm0
1000451d:	f3 0f 10 47 3c       	movss  xmm0,DWORD PTR [edi+0x3c]
10004522:	f3 0f 11 45 9c       	movss  DWORD PTR [ebp-0x64],xmm0
10004527:	f3 0f 10 47 40       	movss  xmm0,DWORD PTR [edi+0x40]
1000452c:	f3 0f 11 45 a4       	movss  DWORD PTR [ebp-0x5c],xmm0
10004531:	0f 85 84 00 00 00    	jne    0x100045bb
10004537:	85 db                	test   ebx,ebx
10004539:	74 10                	je     0x1000454b
1000453b:	69 c3 e0 00 00 00    	imul   eax,ebx,0xe0
10004541:	83 bc 38 80 02 00 00 	cmp    DWORD PTR [eax+edi*1+0x280],0x0
10004548:	00 
10004549:	74 70                	je     0x100045bb
1000454b:	33 f6                	xor    esi,esi
1000454d:	56                   	push   esi
1000454e:	ff 37                	push   DWORD PTR [edi]
10004550:	e8 6b 4b 00 00       	call   0x100090c0
10004555:	83 c4 08             	add    esp,0x8
10004558:	8d 45 84             	lea    eax,[ebp-0x7c]
1000455b:	50                   	push   eax
1000455c:	ff 77 04             	push   DWORD PTR [edi+0x4]
1000455f:	ff 37                	push   DWORD PTR [edi]
10004561:	e8 ba 1b 00 00       	call   0x10006120
10004566:	f3 0f 10 45 a0       	movss  xmm0,DWORD PTR [ebp-0x60]
1000456b:	8d 45 ac             	lea    eax,[ebp-0x54]
1000456e:	f3 0f 58 45 84       	addss  xmm0,DWORD PTR [ebp-0x7c]
10004573:	50                   	push   eax
10004574:	8d 45 f0             	lea    eax,[ebp-0x10]
10004577:	50                   	push   eax
10004578:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
1000457d:	f3 0f 10 45 9c       	movss  xmm0,DWORD PTR [ebp-0x64]
10004582:	f3 0f 58 45 88       	addss  xmm0,DWORD PTR [ebp-0x78]
10004587:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
1000458c:	f3 0f 10 45 a4       	movss  xmm0,DWORD PTR [ebp-0x5c]
10004591:	f3 0f 58 45 8c       	addss  xmm0,DWORD PTR [ebp-0x74]
10004596:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1000459b:	8b 87 60 f5 04 00    	mov    eax,DWORD PTR [edi+0x4f560]
100045a1:	ff d0                	call   eax
100045a3:	83 c4 14             	add    esp,0x14
100045a6:	83 f8 ff             	cmp    eax,0xffffffff
100045a9:	0f 84 1a 01 00 00    	je     0x100046c9
100045af:	8b 3d 50 0c 22 10    	mov    edi,DWORD PTR ds:0x10220c50
100045b5:	46                   	inc    esi
100045b6:	83 fe 36             	cmp    esi,0x36
100045b9:	7c 9d                	jl     0x10004558
100045bb:	8b 87 70 f5 04 00    	mov    eax,DWORD PTR [edi+0x4f570]
100045c1:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
100045c4:	ff d0                	call   eax
100045c6:	33 c0                	xor    eax,eax
100045c8:	b9 04 00 00 00       	mov    ecx,0x4
100045cd:	85 f6                	test   esi,esi
100045cf:	d9 5d a8             	fstp   DWORD PTR [ebp-0x58]
100045d2:	f3 0f 10 55 a8       	movss  xmm2,DWORD PTR [ebp-0x58]
100045d7:	0f 44 c1             	cmove  eax,ecx
100045da:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
100045e0:	0f 5a c2             	cvtps2pd xmm0,xmm2
100045e3:	8b 11                	mov    edx,DWORD PTR [ecx]
100045e5:	f3 0f 10 8c d0 70 2c 	movss  xmm1,DWORD PTR [eax+edx*8+0x10222c70]
100045ec:	22 10 
100045ee:	f2 0f 5c 05 f0 1d 1a 	subsd  xmm0,QWORD PTR ds:0x101a1df0
100045f5:	10 
100045f6:	0f 5a c9             	cvtps2pd xmm1,xmm1
100045f9:	66 0f 2f c8          	comisd xmm1,xmm0
100045fd:	0f 83 26 02 00 00    	jae    0x10004829
10004603:	f3 0f 11 94 d0 70 2c 	movss  DWORD PTR [eax+edx*8+0x10222c70],xmm2
1000460a:	22 10 
1000460c:	8d 45 ac             	lea    eax,[ebp-0x54]
1000460f:	50                   	push   eax
10004610:	8b 81 74 f5 04 00    	mov    eax,DWORD PTR [ecx+0x4f574]
10004616:	53                   	push   ebx
10004617:	ff d0                	call   eax
10004619:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
1000461f:	8d 45 84             	lea    eax,[ebp-0x7c]
10004622:	50                   	push   eax
10004623:	ff 76 04             	push   DWORD PTR [esi+0x4]
10004626:	ff 36                	push   DWORD PTR [esi]
10004628:	e8 f3 1a 00 00       	call   0x10006120
1000462d:	f3 0f 10 45 a0       	movss  xmm0,DWORD PTR [ebp-0x60]
10004632:	8b f8                	mov    edi,eax
10004634:	f3 0f 58 45 84       	addss  xmm0,DWORD PTR [ebp-0x7c]
10004639:	8d 45 f0             	lea    eax,[ebp-0x10]
1000463c:	6a 00                	push   0x0
1000463e:	50                   	push   eax
1000463f:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
10004644:	f3 0f 10 45 9c       	movss  xmm0,DWORD PTR [ebp-0x64]
10004649:	f3 0f 58 45 88       	addss  xmm0,DWORD PTR [ebp-0x78]
1000464e:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
10004653:	f3 0f 10 45 8c       	movss  xmm0,DWORD PTR [ebp-0x74]
10004658:	f3 0f 58 45 a4       	addss  xmm0,DWORD PTR [ebp-0x5c]
1000465d:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10004662:	8b 86 60 f5 04 00    	mov    eax,DWORD PTR [esi+0x4f560]
10004668:	ff d0                	call   eax
1000466a:	83 c4 1c             	add    esp,0x1c
1000466d:	83 f8 ff             	cmp    eax,0xffffffff
10004670:	0f 85 a1 00 00 00    	jne    0x10004717
10004676:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
1000467c:	ff 76 04             	push   DWORD PTR [esi+0x4]
1000467f:	ff 36                	push   DWORD PTR [esi]
10004681:	e8 3a 4a 00 00       	call   0x100090c0
10004686:	83 c4 08             	add    esp,0x8
10004689:	83 ff 1b             	cmp    edi,0x1b
1000468c:	7c 28                	jl     0x100046b6
1000468e:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
10004693:	f3 0f 11 46 38       	movss  DWORD PTR [esi+0x38],xmm0
10004698:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000469d:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
100046a2:	f3 0f 11 40 3c       	movss  DWORD PTR [eax+0x3c],xmm0
100046a7:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100046ac:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
100046b1:	f3 0f 11 40 40       	movss  DWORD PTR [eax+0x40],xmm0
100046b6:	5f                   	pop    edi
100046b7:	5e                   	pop    esi
100046b8:	33 c0                	xor    eax,eax
100046ba:	5b                   	pop    ebx
100046bb:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100046be:	33 cd                	xor    ecx,ebp
100046c0:	e8 ee 94 13 00       	call   0x1013dbb3
100046c5:	8b e5                	mov    esp,ebp
100046c7:	5d                   	pop    ebp
100046c8:	c3                   	ret
100046c9:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
100046cf:	ff 76 04             	push   DWORD PTR [esi+0x4]
100046d2:	ff 36                	push   DWORD PTR [esi]
100046d4:	e8 e7 49 00 00       	call   0x100090c0
100046d9:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
100046de:	83 c4 08             	add    esp,0x8
100046e1:	f3 0f 11 46 38       	movss  DWORD PTR [esi+0x38],xmm0
100046e6:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100046eb:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
100046f0:	5f                   	pop    edi
100046f1:	5e                   	pop    esi
100046f2:	f3 0f 11 40 3c       	movss  DWORD PTR [eax+0x3c],xmm0
100046f7:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100046fc:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
10004701:	5b                   	pop    ebx
10004702:	f3 0f 11 40 40       	movss  DWORD PTR [eax+0x40],xmm0
10004707:	33 c0                	xor    eax,eax
10004709:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000470c:	33 cd                	xor    ecx,ebp
1000470e:	e8 a0 94 13 00       	call   0x1013dbb3
10004713:	8b e5                	mov    esp,ebp
10004715:	5d                   	pop    ebp
10004716:	c3                   	ret
10004717:	8b 0d 50 0c 22 10    	mov    ecx,DWORD PTR ds:0x10220c50
1000471d:	f6 81 76 54 04 00 07 	test   BYTE PTR [ecx+0x45476],0x7
10004724:	0f 84 ff 00 00 00    	je     0x10004829
1000472a:	69 c0 e0 00 00 00    	imul   eax,eax,0xe0
10004730:	83 bc 08 70 02 00 00 	cmp    DWORD PTR [eax+ecx*1+0x270],0x0
10004737:	00 
10004738:	0f 84 eb 00 00 00    	je     0x10004829
1000473e:	f3 0f 10 0d 6c 1f 1a 	movss  xmm1,DWORD PTR ds:0x101a1f6c
10004745:	10 
10004746:	0f 57 c0             	xorps  xmm0,xmm0
10004749:	f3 0f 11 45 a8       	movss  DWORD PTR [ebp-0x58],xmm0
1000474e:	66 90                	xchg   ax,ax
10004750:	f3 0f 10 65 a4       	movss  xmm4,DWORD PTR [ebp-0x5c]
10004755:	0f 28 d1             	movaps xmm2,xmm1
10004758:	f3 0f 58 e0          	addss  xmm4,xmm0
1000475c:	f3 0f 11 55 94       	movss  DWORD PTR [ebp-0x6c],xmm2
10004761:	f3 0f 11 65 90       	movss  DWORD PTR [ebp-0x70],xmm4
10004766:	66 66 0f 1f 84 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
1000476d:	00 00 00 
10004770:	f3 0f 10 5d a0       	movss  xmm3,DWORD PTR [ebp-0x60]
10004775:	f3 0f 58 da          	addss  xmm3,xmm2
10004779:	f3 0f 11 4d 98       	movss  DWORD PTR [ebp-0x68],xmm1
1000477e:	f3 0f 11 5d 80       	movss  DWORD PTR [ebp-0x80],xmm3
10004783:	f3 0f 10 45 9c       	movss  xmm0,DWORD PTR [ebp-0x64]
10004788:	8d 45 f0             	lea    eax,[ebp-0x10]
1000478b:	f3 0f 58 c1          	addss  xmm0,xmm1
1000478f:	f3 0f 11 5d f0       	movss  DWORD PTR [ebp-0x10],xmm3
10004794:	6a 00                	push   0x0
10004796:	50                   	push   eax
10004797:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000479c:	f3 0f 11 65 f8       	movss  DWORD PTR [ebp-0x8],xmm4
100047a1:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100047a6:	8b 80 60 f5 04 00    	mov    eax,DWORD PTR [eax+0x4f560]
100047ac:	ff d0                	call   eax
100047ae:	83 c4 08             	add    esp,0x8
100047b1:	83 f8 ff             	cmp    eax,0xffffffff
100047b4:	0f 84 85 00 00 00    	je     0x1000483f
100047ba:	f3 0f 10 4d 98       	movss  xmm1,DWORD PTR [ebp-0x68]
100047bf:	f3 0f 10 05 d8 1e 1a 	movss  xmm0,DWORD PTR ds:0x101a1ed8
100047c6:	10 
100047c7:	f3 0f 10 5d 80       	movss  xmm3,DWORD PTR [ebp-0x80]
100047cc:	f3 0f 58 c8          	addss  xmm1,xmm0
100047d0:	f3 0f 10 65 90       	movss  xmm4,DWORD PTR [ebp-0x70]
100047d5:	0f 2f c1             	comiss xmm0,xmm1
100047d8:	f3 0f 11 4d 98       	movss  DWORD PTR [ebp-0x68],xmm1
100047dd:	73 a4                	jae    0x10004783
100047df:	f3 0f 10 55 94       	movss  xmm2,DWORD PTR [ebp-0x6c]
100047e4:	f3 0f 10 0d 6c 1f 1a 	movss  xmm1,DWORD PTR ds:0x101a1f6c
100047eb:	10 
100047ec:	f3 0f 58 d0          	addss  xmm2,xmm0
100047f0:	0f 2f c2             	comiss xmm0,xmm2
100047f3:	f3 0f 11 55 94       	movss  DWORD PTR [ebp-0x6c],xmm2
100047f8:	0f 83 72 ff ff ff    	jae    0x10004770
100047fe:	f3 0f 10 45 a8       	movss  xmm0,DWORD PTR [ebp-0x58]
10004803:	f3 0f 58 05 e8 1e 1a 	addss  xmm0,DWORD PTR ds:0x101a1ee8
1000480a:	10 
1000480b:	f3 0f 10 0d 10 1f 1a 	movss  xmm1,DWORD PTR ds:0x101a1f10
10004812:	10 
10004813:	0f 2f c8             	comiss xmm1,xmm0
10004816:	f3 0f 10 0d 6c 1f 1a 	movss  xmm1,DWORD PTR ds:0x101a1f6c
1000481d:	10 
1000481e:	f3 0f 11 45 a8       	movss  DWORD PTR [ebp-0x58],xmm0
10004823:	0f 83 27 ff ff ff    	jae    0x10004750
10004829:	5f                   	pop    edi
1000482a:	5e                   	pop    esi
1000482b:	b8 01 00 00 00       	mov    eax,0x1
10004830:	5b                   	pop    ebx
10004831:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
10004834:	33 cd                	xor    ecx,ebp
10004836:	e8 78 93 13 00       	call   0x1013dbb3
1000483b:	8b e5                	mov    esp,ebp
1000483d:	5d                   	pop    ebp
1000483e:	c3                   	ret
1000483f:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004844:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
10004849:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000484c:	5f                   	pop    edi
1000484d:	f3 0f 11 40 38       	movss  DWORD PTR [eax+0x38],xmm0
10004852:	33 cd                	xor    ecx,ebp
10004854:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10004859:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
1000485e:	5e                   	pop    esi
1000485f:	5b                   	pop    ebx
10004860:	f3 0f 11 40 3c       	movss  DWORD PTR [eax+0x3c],xmm0
10004865:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000486a:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
1000486f:	f3 0f 11 40 40       	movss  DWORD PTR [eax+0x40],xmm0
10004874:	33 c0                	xor    eax,eax
10004876:	e8 38 93 13 00       	call   0x1013dbb3
1000487b:	8b e5                	mov    esp,ebp
1000487d:	5d                   	pop    ebp
1000487e:	c3                   	ret
