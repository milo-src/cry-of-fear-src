
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10104670 <.text+0x103670>:
10104670:	55                   	push   ebp
10104671:	8b ec                	mov    ebp,esp
10104673:	83 e4 f8             	and    esp,0xfffffff8
10104676:	83 ec 5c             	sub    esp,0x5c
10104679:	f3 0f 10 05 38 fa 1d 	movss  xmm0,DWORD PTR ds:0x101dfa38
10104680:	10 
10104681:	33 c0                	xor    eax,eax
10104683:	53                   	push   ebx
10104684:	56                   	push   esi
10104685:	57                   	push   edi
10104686:	8b f9                	mov    edi,ecx
10104688:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
1010468c:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
10104692:	33 c9                	xor    ecx,ecx
10104694:	33 f6                	xor    esi,esi
10104696:	ba 05 00 00 00       	mov    edx,0x5
1010469b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1010469e:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
101046a3:	f3 0f 11 44 24 18    	movss  DWORD PTR [esp+0x18],xmm0
101046a9:	f3 0f 10 40 0c       	movss  xmm0,DWORD PTR [eax+0xc]
101046ae:	f3 0f 11 44 24 1c    	movss  DWORD PTR [esp+0x1c],xmm0
101046b4:	f3 0f 10 80 d8 00 00 	movss  xmm0,DWORD PTR [eax+0xd8]
101046bb:	00 
101046bc:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
101046bf:	85 c0                	test   eax,eax
101046c1:	f3 0f 11 44 24 20    	movss  DWORD PTR [esp+0x20],xmm0
101046c7:	0f 44 ca             	cmove  ecx,edx
101046ca:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
101046ce:	66 90                	xchg   ax,ax
101046d0:	85 c0                	test   eax,eax
101046d2:	74 07                	je     0x101046db
101046d4:	bb 30 21 1a 10       	mov    ebx,0x101a2130
101046d9:	eb 1a                	jmp    0x101046f5
101046db:	8b 07                	mov    eax,DWORD PTR [edi]
101046dd:	51                   	push   ecx
101046de:	8b cf                	mov    ecx,edi
101046e0:	ff 90 50 02 00 00    	call   DWORD PTR [eax+0x250]
101046e6:	8b 1c 85 c8 9c 21 10 	mov    ebx,DWORD PTR [eax*4+0x10219cc8]
101046ed:	85 db                	test   ebx,ebx
101046ef:	0f 84 9c 01 00 00    	je     0x10104891
101046f5:	53                   	push   ebx
101046f6:	56                   	push   esi
101046f7:	e8 64 3d 01 00       	call   0x10118460
101046fc:	8b f0                	mov    esi,eax
101046fe:	83 c4 08             	add    esp,0x8
10104701:	85 f6                	test   esi,esi
10104703:	0f 84 88 01 00 00    	je     0x10104891
10104709:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
10104710:	3b f7                	cmp    esi,edi
10104712:	0f 84 65 01 00 00    	je     0x1010487d
10104718:	8b 16                	mov    edx,DWORD PTR [esi]
1010471a:	8b ce                	mov    ecx,esi
1010471c:	ff 92 bc 00 00 00    	call   DWORD PTR [edx+0xbc]
10104722:	85 c0                	test   eax,eax
10104724:	0f 84 53 01 00 00    	je     0x1010487d
1010472a:	8b 06                	mov    eax,DWORD PTR [esi]
1010472c:	8b ce                	mov    ecx,esi
1010472e:	ff 50 78             	call   DWORD PTR [eax+0x78]
10104731:	85 c0                	test   eax,eax
10104733:	0f 84 44 01 00 00    	je     0x1010487d
10104739:	8b 80 24 02 00 00    	mov    eax,DWORD PTR [eax+0x224]
1010473f:	83 f8 06             	cmp    eax,0x6
10104742:	0f 84 35 01 00 00    	je     0x1010487d
10104748:	83 f8 05             	cmp    eax,0x5
1010474b:	0f 84 2c 01 00 00    	je     0x1010487d
10104751:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10104754:	f3 0f 10 54 24 18    	movss  xmm2,DWORD PTR [esp+0x18]
1010475a:	f3 0f 10 5c 24 1c    	movss  xmm3,DWORD PTR [esp+0x1c]
10104760:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
10104765:	66 0f d6 44 24 24    	movq   QWORD PTR [esp+0x24],xmm0
1010476b:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
1010476e:	f3 0f 5c 5c 24 28    	subss  xmm3,DWORD PTR [esp+0x28]
10104774:	f3 0f 5c 54 24 24    	subss  xmm2,DWORD PTR [esp+0x24]
1010477a:	f3 0f 10 44 24 20    	movss  xmm0,DWORD PTR [esp+0x20]
10104780:	89 44 24 2c          	mov    DWORD PTR [esp+0x2c],eax
10104784:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10104787:	f3 0f 59 db          	mulss  xmm3,xmm3
1010478b:	f3 0f 59 d2          	mulss  xmm2,xmm2
1010478f:	f3 0f 10 88 d8 00 00 	movss  xmm1,DWORD PTR [eax+0xd8]
10104796:	00 
10104797:	f3 0f 5c c1          	subss  xmm0,xmm1
1010479b:	f3 0f 11 4c 24 2c    	movss  DWORD PTR [esp+0x2c],xmm1
101047a1:	f3 0f 58 da          	addss  xmm3,xmm2
101047a5:	0f 57 c9             	xorps  xmm1,xmm1
101047a8:	f3 0f 59 c0          	mulss  xmm0,xmm0
101047ac:	f3 0f 58 d8          	addss  xmm3,xmm0
101047b0:	0f 5a c3             	cvtps2pd xmm0,xmm3
101047b3:	66 0f 2e c8          	ucomisd xmm1,xmm0
101047b7:	77 06                	ja     0x101047bf
101047b9:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
101047bd:	eb 05                	jmp    0x101047c4
101047bf:	e8 cc 76 06 00       	call   0x1016be90
101047c4:	f3 0f 10 4c 24 0c    	movss  xmm1,DWORD PTR [esp+0xc]
101047ca:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
101047ce:	0f 2f c8             	comiss xmm1,xmm0
101047d1:	0f 86 a6 00 00 00    	jbe    0x1010487d
101047d7:	8d 44 24 30          	lea    eax,[esp+0x30]
101047db:	50                   	push   eax
101047dc:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
101047df:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
101047e5:	8d 44 24 2c          	lea    eax,[esp+0x2c]
101047e9:	6a 01                	push   0x1
101047eb:	50                   	push   eax
101047ec:	8d 44 24 28          	lea    eax,[esp+0x28]
101047f0:	50                   	push   eax
101047f1:	e8 0a 60 01 00       	call   0x1011a800
101047f6:	f3 0f 10 44 24 54    	movss  xmm0,DWORD PTR [esp+0x54]
101047fc:	83 c4 14             	add    esp,0x14
101047ff:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
10104806:	9f                   	lahf
10104807:	f6 c4 44             	test   ah,0x44
1010480a:	7a 71                	jp     0x1010487d
1010480c:	f3 0f 10 4c 24 18    	movss  xmm1,DWORD PTR [esp+0x18]
10104812:	f3 0f 10 54 24 1c    	movss  xmm2,DWORD PTR [esp+0x1c]
10104818:	f3 0f 5c 54 24 28    	subss  xmm2,DWORD PTR [esp+0x28]
1010481e:	f3 0f 5c 4c 24 24    	subss  xmm1,DWORD PTR [esp+0x24]
10104824:	f3 0f 10 44 24 20    	movss  xmm0,DWORD PTR [esp+0x20]
1010482a:	f3 0f 5c 44 24 2c    	subss  xmm0,DWORD PTR [esp+0x2c]
10104830:	f3 0f 59 d2          	mulss  xmm2,xmm2
10104834:	f3 0f 59 c9          	mulss  xmm1,xmm1
10104838:	f3 0f 59 c0          	mulss  xmm0,xmm0
1010483c:	f3 0f 58 d1          	addss  xmm2,xmm1
10104840:	0f 57 c9             	xorps  xmm1,xmm1
10104843:	f3 0f 58 d0          	addss  xmm2,xmm0
10104847:	0f 5a c2             	cvtps2pd xmm0,xmm2
1010484a:	66 0f 2e c8          	ucomisd xmm1,xmm0
1010484e:	77 06                	ja     0x10104856
10104850:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10104854:	eb 05                	jmp    0x1010485b
10104856:	e8 35 76 06 00       	call   0x1016be90
1010485b:	f2 0f 10 15 30 fa 1d 	movsd  xmm2,QWORD PTR ds:0x101dfa30
10104862:	10 
10104863:	0f 57 c9             	xorps  xmm1,xmm1
10104866:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
1010486a:	0f 5a c1             	cvtps2pd xmm0,xmm1
1010486d:	66 0f 2f d0          	comisd xmm2,xmm0
10104871:	76 0a                	jbe    0x1010487d
10104873:	89 74 24 14          	mov    DWORD PTR [esp+0x14],esi
10104877:	f3 0f 11 4c 24 0c    	movss  DWORD PTR [esp+0xc],xmm1
1010487d:	53                   	push   ebx
1010487e:	56                   	push   esi
1010487f:	e8 dc 3b 01 00       	call   0x10118460
10104884:	8b f0                	mov    esi,eax
10104886:	83 c4 08             	add    esp,0x8
10104889:	85 f6                	test   esi,esi
1010488b:	0f 85 7f fe ff ff    	jne    0x10104710
10104891:	8b 4c 24 10          	mov    ecx,DWORD PTR [esp+0x10]
10104895:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10104898:	49                   	dec    ecx
10104899:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
1010489d:	83 f9 ff             	cmp    ecx,0xffffffff
101048a0:	0f 8f 2a fe ff ff    	jg     0x101046d0
101048a6:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
101048aa:	5f                   	pop    edi
101048ab:	5e                   	pop    esi
101048ac:	5b                   	pop    ebx
101048ad:	8b e5                	mov    esp,ebp
101048af:	5d                   	pop    ebp
101048b0:	c2 04 00             	ret    0x4
