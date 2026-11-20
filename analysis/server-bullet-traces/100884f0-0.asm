
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100884f0 <.text+0x874f0>:
100884f0:	55                   	push   ebp
100884f1:	8b ec                	mov    ebp,esp
100884f3:	81 ec 80 00 00 00    	sub    esp,0x80
100884f9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100884fe:	53                   	push   ebx
100884ff:	56                   	push   esi
10088500:	57                   	push   edi
10088501:	f3 0f 10 40 40       	movss  xmm0,DWORD PTR [eax+0x40]
10088506:	8b f9                	mov    edi,ecx
10088508:	f3 0f 11 45 e0       	movss  DWORD PTR [ebp-0x20],xmm0
1008850d:	33 f6                	xor    esi,esi
1008850f:	f3 0f 10 40 44       	movss  xmm0,DWORD PTR [eax+0x44]
10088514:	f3 0f 11 45 dc       	movss  DWORD PTR [ebp-0x24],xmm0
10088519:	f3 0f 10 40 48       	movss  xmm0,DWORD PTR [eax+0x48]
1008851e:	f3 0f 11 45 d8       	movss  DWORD PTR [ebp-0x28],xmm0
10088523:	f3 0f 10 40 34       	movss  xmm0,DWORD PTR [eax+0x34]
10088528:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
1008852d:	f3 0f 10 40 38       	movss  xmm0,DWORD PTR [eax+0x38]
10088532:	f3 0f 11 45 e8       	movss  DWORD PTR [ebp-0x18],xmm0
10088537:	f3 0f 10 40 3c       	movss  xmm0,DWORD PTR [eax+0x3c]
1008853c:	8b 07                	mov    eax,DWORD PTR [edi]
1008853e:	89 7d d0             	mov    DWORD PTR [ebp-0x30],edi
10088541:	f3 0f 11 45 e4       	movss  DWORD PTR [ebp-0x1c],xmm0
10088546:	89 75 f0             	mov    DWORD PTR [ebp-0x10],esi
10088549:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1008854f:	85 c0                	test   eax,eax
10088551:	74 65                	je     0x100885b8
10088553:	ff 77 04             	push   DWORD PTR [edi+0x4]
10088556:	e8 85 a0 f8 ff       	call   0x100125e0
1008855b:	8b f0                	mov    esi,eax
1008855d:	83 c4 04             	add    esp,0x4
10088560:	89 75 f0             	mov    DWORD PTR [ebp-0x10],esi
10088563:	85 f6                	test   esi,esi
10088565:	74 51                	je     0x100885b8
10088567:	8b 86 2c 25 00 00    	mov    eax,DWORD PTR [esi+0x252c]
1008856d:	85 c0                	test   eax,eax
1008856f:	74 3b                	je     0x100885ac
10088571:	80 b8 78 01 00 00 00 	cmp    BYTE PTR [eax+0x178],0x0
10088578:	74 32                	je     0x100885ac
1008857a:	f3 0f 10 45 24       	movss  xmm0,DWORD PTR [ebp+0x24]
1008857f:	f3 0f 10 0d d8 1d 1a 	movss  xmm1,DWORD PTR ds:0x101a1dd8
10088586:	10 
10088587:	f3 0f 59 c1          	mulss  xmm0,xmm1
1008858b:	f3 0f 11 45 24       	movss  DWORD PTR [ebp+0x24],xmm0
10088590:	f3 0f 10 45 28       	movss  xmm0,DWORD PTR [ebp+0x28]
10088595:	f3 0f 59 c1          	mulss  xmm0,xmm1
10088599:	f3 0f 11 45 28       	movss  DWORD PTR [ebp+0x28],xmm0
1008859e:	f3 0f 10 45 2c       	movss  xmm0,DWORD PTR [ebp+0x2c]
100885a3:	f3 0f 59 c1          	mulss  xmm0,xmm1
100885a7:	f3 0f 11 45 2c       	movss  DWORD PTR [ebp+0x2c],xmm0
100885ac:	83 7d 34 32          	cmp    DWORD PTR [ebp+0x34],0x32
100885b0:	74 06                	je     0x100885b8
100885b2:	ff 86 3c 06 00 00    	inc    DWORD PTR [esi+0x63c]
100885b8:	8b 5d 40             	mov    ebx,DWORD PTR [ebp+0x40]
100885bb:	85 db                	test   ebx,ebx
100885bd:	75 06                	jne    0x100885c5
100885bf:	8b 5f 04             	mov    ebx,DWORD PTR [edi+0x4]
100885c2:	89 5d 40             	mov    DWORD PTR [ebp+0x40],ebx
100885c5:	e8 a6 3a 09 00       	call   0x1011c070
100885ca:	83 7d 34 06          	cmp    DWORD PTR [ebp+0x34],0x6
100885ce:	b8 02 10 00 00       	mov    eax,0x1002
100885d3:	b9 00 10 00 02       	mov    ecx,0x2001000
100885d8:	0f 44 c1             	cmove  eax,ecx
100885db:	83 7d 08 01          	cmp    DWORD PTR [ebp+0x8],0x1
100885df:	a3 3c 1f 23 10       	mov    ds:0x10231f3c,eax
100885e4:	0f 82 6b 04 00 00    	jb     0x10088a55
100885ea:	be 01 00 00 00       	mov    esi,0x1
100885ef:	90                   	nop
100885f0:	83 ec 08             	sub    esp,0x8
100885f3:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x3f000000
100885fa:	3f 
100885fb:	c7 04 24 00 00 00 bf 	mov    DWORD PTR [esp],0xbf000000
10088602:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
10088608:	d9 5d f4             	fstp   DWORD PTR [ebp-0xc]
1008860b:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x3f000000
10088612:	3f 
10088613:	c7 04 24 00 00 00 bf 	mov    DWORD PTR [esp],0xbf000000
1008861a:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
10088620:	d8 45 f4             	fadd   DWORD PTR [ebp-0xc]
10088623:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x3f000000
1008862a:	3f 
1008862b:	c7 04 24 00 00 00 bf 	mov    DWORD PTR [esp],0xbf000000
10088632:	d9 5d f8             	fstp   DWORD PTR [ebp-0x8]
10088635:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
1008863b:	d9 5d f4             	fstp   DWORD PTR [ebp-0xc]
1008863e:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x3f000000
10088645:	3f 
10088646:	c7 04 24 00 00 00 bf 	mov    DWORD PTR [esp],0xbf000000
1008864d:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
10088653:	d8 45 f4             	fadd   DWORD PTR [ebp-0xc]
10088656:	83 c4 08             	add    esp,0x8
10088659:	f3 0f 10 6d f8       	movss  xmm5,DWORD PTR [ebp-0x8]
1008865e:	d9 5d f4             	fstp   DWORD PTR [ebp-0xc]
10088661:	f3 0f 10 55 f4       	movss  xmm2,DWORD PTR [ebp-0xc]
10088666:	0f 28 c5             	movaps xmm0,xmm5
10088669:	0f 28 ca             	movaps xmm1,xmm2
1008866c:	f3 0f 59 c5          	mulss  xmm0,xmm5
10088670:	f3 0f 59 ca          	mulss  xmm1,xmm2
10088674:	f3 0f 58 c8          	addss  xmm1,xmm0
10088678:	0f 2f 0d 90 13 1a 10 	comiss xmm1,DWORD PTR ds:0x101a1390
1008867f:	0f 87 6b ff ff ff    	ja     0x100885f0
10088685:	f3 0f 59 55 28       	mulss  xmm2,DWORD PTR [ebp+0x28]
1008868a:	8d 45 80             	lea    eax,[ebp-0x80]
1008868d:	50                   	push   eax
1008868e:	f3 0f 59 6d 24       	mulss  xmm5,DWORD PTR [ebp+0x24]
10088693:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10088696:	f3 0f 10 5d ec       	movss  xmm3,DWORD PTR [ebp-0x14]
1008869b:	f3 0f 10 65 e8       	movss  xmm4,DWORD PTR [ebp-0x18]
100886a0:	f3 0f 10 7d e4       	movss  xmm7,DWORD PTR [ebp-0x1c]
100886a5:	f3 0f 10 45 e0       	movss  xmm0,DWORD PTR [ebp-0x20]
100886aa:	f3 0f 10 4d dc       	movss  xmm1,DWORD PTR [ebp-0x24]
100886af:	f3 0f 10 75 1c       	movss  xmm6,DWORD PTR [ebp+0x1c]
100886b4:	f3 0f 59 c5          	mulss  xmm0,xmm5
100886b8:	f3 0f 59 da          	mulss  xmm3,xmm2
100886bc:	f3 0f 59 e2          	mulss  xmm4,xmm2
100886c0:	f3 0f 59 fa          	mulss  xmm7,xmm2
100886c4:	f3 0f 10 55 d8       	movss  xmm2,DWORD PTR [ebp-0x28]
100886c9:	f3 0f 59 cd          	mulss  xmm1,xmm5
100886cd:	f3 0f 59 d5          	mulss  xmm2,xmm5
100886d1:	f3 0f 10 6d 18       	movss  xmm5,DWORD PTR [ebp+0x18]
100886d6:	f3 0f 58 f1          	addss  xmm6,xmm1
100886da:	f3 0f 10 4d 30       	movss  xmm1,DWORD PTR [ebp+0x30]
100886df:	f3 0f 58 e8          	addss  xmm5,xmm0
100886e3:	f3 0f 10 45 20       	movss  xmm0,DWORD PTR [ebp+0x20]
100886e8:	f3 0f 58 c2          	addss  xmm0,xmm2
100886ec:	f3 0f 58 f4          	addss  xmm6,xmm4
100886f0:	f3 0f 10 65 0c       	movss  xmm4,DWORD PTR [ebp+0xc]
100886f5:	f3 0f 58 eb          	addss  xmm5,xmm3
100886f9:	f3 0f 58 f8          	addss  xmm7,xmm0
100886fd:	0f 28 d6             	movaps xmm2,xmm6
10088700:	f3 0f 11 75 f8       	movss  DWORD PTR [ebp-0x8],xmm6
10088705:	0f 28 c5             	movaps xmm0,xmm5
10088708:	f3 0f 59 d1          	mulss  xmm2,xmm1
1008870c:	f3 0f 59 c1          	mulss  xmm0,xmm1
10088710:	0f 28 df             	movaps xmm3,xmm7
10088713:	f3 0f 59 d9          	mulss  xmm3,xmm1
10088717:	f3 0f 10 4d 10       	movss  xmm1,DWORD PTR [ebp+0x10]
1008871c:	f3 0f 58 e0          	addss  xmm4,xmm0
10088720:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
10088725:	f3 0f 58 ca          	addss  xmm1,xmm2
10088729:	f3 0f 58 c3          	addss  xmm0,xmm3
1008872d:	f3 0f 11 6d fc       	movss  DWORD PTR [ebp-0x4],xmm5
10088732:	f3 0f 11 7d f4       	movss  DWORD PTR [ebp-0xc],xmm7
10088737:	f3 0f 11 65 b8       	movss  DWORD PTR [ebp-0x48],xmm4
1008873c:	f3 0f 11 4d bc       	movss  DWORD PTR [ebp-0x44],xmm1
10088741:	f3 0f 11 45 c0       	movss  DWORD PTR [ebp-0x40],xmm0
10088746:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1008874c:	8d 45 b8             	lea    eax,[ebp-0x48]
1008874f:	6a 00                	push   0x0
10088751:	50                   	push   eax
10088752:	8d 45 0c             	lea    eax,[ebp+0xc]
10088755:	50                   	push   eax
10088756:	e8 a5 20 09 00       	call   0x1011a800
1008875b:	83 c4 14             	add    esp,0x14
1008875e:	83 7d 38 00          	cmp    DWORD PTR [ebp+0x38],0x0
10088762:	0f 84 55 01 00 00    	je     0x100888bd
10088768:	8b 0d 50 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222e50
1008876e:	8b c1                	mov    eax,ecx
10088770:	99                   	cdq
10088771:	41                   	inc    ecx
10088772:	f7 7d 38             	idiv   DWORD PTR [ebp+0x38]
10088775:	89 0d 50 2e 22 10    	mov    DWORD PTR ds:0x10222e50,ecx
1008877b:	85 d2                	test   edx,edx
1008877d:	0f 85 3a 01 00 00    	jne    0x100888bd
10088783:	8b 07                	mov    eax,DWORD PTR [edi]
10088785:	8b cf                	mov    ecx,edi
10088787:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
1008878d:	85 c0                	test   eax,eax
1008878f:	0f 84 94 00 00 00    	je     0x10088829
10088795:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008879a:	0f 57 db             	xorps  xmm3,xmm3
1008879d:	f3 0f 10 0d e4 1e 1a 	movss  xmm1,DWORD PTR ds:0x101a1ee4
100887a4:	10 
100887a5:	f3 0f 10 6d 0c       	movss  xmm5,DWORD PTR [ebp+0xc]
100887aa:	f3 0f 10 65 10       	movss  xmm4,DWORD PTR [ebp+0x10]
100887af:	f3 0f 58 eb          	addss  xmm5,xmm3
100887b3:	f3 0f 10 40 30       	movss  xmm0,DWORD PTR [eax+0x30]
100887b8:	f3 0f 58 e3          	addss  xmm4,xmm3
100887bc:	f3 0f 10 70 28       	movss  xmm6,DWORD PTR [eax+0x28]
100887c1:	f3 0f 10 78 2c       	movss  xmm7,DWORD PTR [eax+0x2c]
100887c6:	f3 0f 10 50 40       	movss  xmm2,DWORD PTR [eax+0x40]
100887cb:	f3 0f 10 5d 14       	movss  xmm3,DWORD PTR [ebp+0x14]
100887d0:	f3 0f 58 d2          	addss  xmm2,xmm2
100887d4:	f3 0f 5c 1d b8 1e 1a 	subss  xmm3,DWORD PTR ds:0x101a1eb8
100887db:	10 
100887dc:	f3 0f 59 c1          	mulss  xmm0,xmm1
100887e0:	f3 0f 59 f1          	mulss  xmm6,xmm1
100887e4:	f3 0f 59 f9          	mulss  xmm7,xmm1
100887e8:	f3 0f 58 ea          	addss  xmm5,xmm2
100887ec:	f3 0f 10 48 44       	movss  xmm1,DWORD PTR [eax+0x44]
100887f1:	f3 0f 11 45 d4       	movss  DWORD PTR [ebp-0x2c],xmm0
100887f6:	f3 0f 58 c9          	addss  xmm1,xmm1
100887fa:	f3 0f 10 40 48       	movss  xmm0,DWORD PTR [eax+0x48]
100887ff:	f3 0f 58 c0          	addss  xmm0,xmm0
10088803:	f3 0f 58 ee          	addss  xmm5,xmm6
10088807:	f3 0f 58 e1          	addss  xmm4,xmm1
1008880b:	f3 0f 58 d8          	addss  xmm3,xmm0
1008880f:	f3 0f 11 6d c4       	movss  DWORD PTR [ebp-0x3c],xmm5
10088814:	f3 0f 58 e7          	addss  xmm4,xmm7
10088818:	f3 0f 58 5d d4       	addss  xmm3,DWORD PTR [ebp-0x2c]
1008881d:	f3 0f 11 65 c8       	movss  DWORD PTR [ebp-0x38],xmm4
10088822:	f3 0f 11 5d cc       	movss  DWORD PTR [ebp-0x34],xmm3
10088827:	eb 10                	jmp    0x10088839
10088829:	f3 0f 7e 45 0c       	movq   xmm0,QWORD PTR [ebp+0xc]
1008882e:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
10088831:	66 0f d6 45 c4       	movq   QWORD PTR [ebp-0x3c],xmm0
10088836:	89 45 cc             	mov    DWORD PTR [ebp-0x34],eax
10088839:	6a 00                	push   0x0
1008883b:	8d 45 c4             	lea    eax,[ebp-0x3c]
1008883e:	50                   	push   eax
1008883f:	6a 17                	push   0x17
10088841:	6a 05                	push   0x5
10088843:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
10088849:	6a 06                	push   0x6
1008884b:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
10088851:	f3 0f 10 45 c4       	movss  xmm0,DWORD PTR [ebp-0x3c]
10088856:	83 c4 10             	add    esp,0x10
10088859:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008885e:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10088864:	f3 0f 10 45 c8       	movss  xmm0,DWORD PTR [ebp-0x38]
10088869:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008886e:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10088874:	f3 0f 10 45 cc       	movss  xmm0,DWORD PTR [ebp-0x34]
10088879:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008887e:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10088884:	f3 0f 10 45 94       	movss  xmm0,DWORD PTR [ebp-0x6c]
10088889:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008888e:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
10088894:	f3 0f 10 45 98       	movss  xmm0,DWORD PTR [ebp-0x68]
10088899:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008889e:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100888a4:	f3 0f 10 45 9c       	movss  xmm0,DWORD PTR [ebp-0x64]
100888a9:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100888ae:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100888b4:	83 c4 04             	add    esp,0x4
100888b7:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100888bd:	f3 0f 10 45 90       	movss  xmm0,DWORD PTR [ebp-0x70]
100888c2:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
100888c9:	9f                   	lahf
100888ca:	f6 c4 44             	test   ah,0x44
100888cd:	0f 8b 0f 01 00 00    	jnp    0x100889e2
100888d3:	8b 45 b0             	mov    eax,DWORD PTR [ebp-0x50]
100888d6:	85 c0                	test   eax,eax
100888d8:	75 12                	jne    0x100888ec
100888da:	50                   	push   eax
100888db:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
100888e1:	83 c4 04             	add    esp,0x4
100888e4:	85 c0                	test   eax,eax
100888e6:	75 04                	jne    0x100888ec
100888e8:	33 c9                	xor    ecx,ecx
100888ea:	eb 03                	jmp    0x100888ef
100888ec:	8b 48 7c             	mov    ecx,DWORD PTR [eax+0x7c]
100888ef:	8b 45 3c             	mov    eax,DWORD PTR [ebp+0x3c]
100888f2:	8b 11                	mov    edx,DWORD PTR [ecx]
100888f4:	f3 0f 10 4d fc       	movss  xmm1,DWORD PTR [ebp-0x4]
100888f9:	85 c0                	test   eax,eax
100888fb:	74 71                	je     0x1008896e
100888fd:	83 7d 34 06          	cmp    DWORD PTR [ebp+0x34],0x6
10088901:	66 0f 6e c0          	movd   xmm0,eax
10088905:	8d 45 80             	lea    eax,[ebp-0x80]
10088908:	0f 5b c0             	cvtdq2ps xmm0,xmm0
1008890b:	75 32                	jne    0x1008893f
1008890d:	68 00 10 00 02       	push   0x2001000
10088912:	50                   	push   eax
10088913:	83 ec 0c             	sub    esp,0xc
10088916:	8b c4                	mov    eax,esp
10088918:	51                   	push   ecx
10088919:	f3 0f 11 08          	movss  DWORD PTR [eax],xmm1
1008891d:	f3 0f 10 4d f8       	movss  xmm1,DWORD PTR [ebp-0x8]
10088922:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
10088927:	f3 0f 10 4d f4       	movss  xmm1,DWORD PTR [ebp-0xc]
1008892c:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10088931:	53                   	push   ebx
10088932:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
10088937:	ff 52 60             	call   DWORD PTR [edx+0x60]
1008893a:	e9 a3 00 00 00       	jmp    0x100889e2
1008893f:	68 02 10 00 00       	push   0x1002
10088944:	50                   	push   eax
10088945:	83 ec 0c             	sub    esp,0xc
10088948:	8b c4                	mov    eax,esp
1008894a:	51                   	push   ecx
1008894b:	f3 0f 11 08          	movss  DWORD PTR [eax],xmm1
1008894f:	f3 0f 10 4d f8       	movss  xmm1,DWORD PTR [ebp-0x8]
10088954:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
10088959:	f3 0f 10 4d f4       	movss  xmm1,DWORD PTR [ebp-0xc]
1008895e:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10088963:	53                   	push   ebx
10088964:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
10088969:	ff 52 60             	call   DWORD PTR [edx+0x60]
1008896c:	eb 74                	jmp    0x100889e2
1008896e:	68 80 00 00 00       	push   0x80
10088973:	8d 45 80             	lea    eax,[ebp-0x80]
10088976:	50                   	push   eax
10088977:	83 ec 0c             	sub    esp,0xc
1008897a:	8b c4                	mov    eax,esp
1008897c:	51                   	push   ecx
1008897d:	f3 0f 11 08          	movss  DWORD PTR [eax],xmm1
10088981:	f3 0f 10 4d f8       	movss  xmm1,DWORD PTR [ebp-0x8]
10088986:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
1008898b:	f3 0f 10 4d f4       	movss  xmm1,DWORD PTR [ebp-0xc]
10088990:	c7 04 24 00 00 48 42 	mov    DWORD PTR [esp],0x42480000
10088997:	53                   	push   ebx
10088998:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
1008899d:	ff 52 60             	call   DWORD PTR [edx+0x60]
100889a0:	8b 45 b0             	mov    eax,DWORD PTR [ebp-0x50]
100889a3:	85 c0                	test   eax,eax
100889a5:	74 3b                	je     0x100889e2
100889a7:	50                   	push   eax
100889a8:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
100889ae:	83 c4 04             	add    esp,0x4
100889b1:	85 c0                	test   eax,eax
100889b3:	74 2d                	je     0x100889e2
100889b5:	8b 45 b0             	mov    eax,DWORD PTR [ebp-0x50]
100889b8:	85 c0                	test   eax,eax
100889ba:	74 03                	je     0x100889bf
100889bc:	83 e8 80             	sub    eax,0xffffff80
100889bf:	83 b8 4c 01 00 00 00 	cmp    DWORD PTR [eax+0x14c],0x0
100889c6:	74 1a                	je     0x100889e2
100889c8:	6a 02                	push   0x2
100889ca:	6a 00                	push   0x0
100889cc:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100889d2:	83 c0 19             	add    eax,0x19
100889d5:	50                   	push   eax
100889d6:	8d 45 80             	lea    eax,[ebp-0x80]
100889d9:	50                   	push   eax
100889da:	e8 d1 f6 08 00       	call   0x101180b0
100889df:	83 c4 10             	add    esp,0x10
100889e2:	f3 0f 10 45 90       	movss  xmm0,DWORD PTR [ebp-0x70]
100889e7:	f3 0f 59 45 30       	mulss  xmm0,DWORD PTR [ebp+0x30]
100889ec:	0f 5a c0             	cvtps2pd xmm0,xmm0
100889ef:	f2 0f 59 05 40 ef 1b 	mulsd  xmm0,QWORD PTR ds:0x101bef40
100889f6:	10 
100889f7:	f2 0f 2c c0          	cvttsd2si eax,xmm0
100889fb:	f3 0f 10 45 94       	movss  xmm0,DWORD PTR [ebp-0x6c]
10088a00:	50                   	push   eax
10088a01:	83 ec 0c             	sub    esp,0xc
10088a04:	8b c4                	mov    eax,esp
10088a06:	83 ec 0c             	sub    esp,0xc
10088a09:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10088a0d:	f3 0f 10 45 98       	movss  xmm0,DWORD PTR [ebp-0x68]
10088a12:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
10088a17:	f3 0f 10 45 9c       	movss  xmm0,DWORD PTR [ebp-0x64]
10088a1c:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
10088a21:	8b c4                	mov    eax,esp
10088a23:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
10088a28:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10088a2c:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
10088a31:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
10088a36:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
10088a3b:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
10088a40:	e8 fb f0 08 00       	call   0x10117b40
10088a45:	46                   	inc    esi
10088a46:	83 c4 1c             	add    esp,0x1c
10088a49:	3b 75 08             	cmp    esi,DWORD PTR [ebp+0x8]
10088a4c:	0f 86 9e fb ff ff    	jbe    0x100885f0
10088a52:	8b 75 f0             	mov    esi,DWORD PTR [ebp-0x10]
10088a55:	8b 45 b0             	mov    eax,DWORD PTR [ebp-0x50]
10088a58:	85 c0                	test   eax,eax
10088a5a:	0f 85 82 00 00 00    	jne    0x10088ae2
10088a60:	50                   	push   eax
10088a61:	ff 15 5c 30 22 10    	call   DWORD PTR ds:0x1022305c
10088a67:	83 c4 04             	add    esp,0x4
10088a6a:	85 c0                	test   eax,eax
10088a6c:	75 74                	jne    0x10088ae2
10088a6e:	33 db                	xor    ebx,ebx
10088a70:	89 5d 38             	mov    DWORD PTR [ebp+0x38],ebx
10088a73:	8b 03                	mov    eax,DWORD PTR [ebx]
10088a75:	8b cb                	mov    ecx,ebx
10088a77:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10088a7d:	85 f6                	test   esi,esi
10088a7f:	0f 84 e2 01 00 00    	je     0x10088c67
10088a85:	85 c0                	test   eax,eax
10088a87:	0f 84 ce 01 00 00    	je     0x10088c5b
10088a8d:	83 7d 34 32          	cmp    DWORD PTR [ebp+0x34],0x32
10088a91:	0f 84 d0 01 00 00    	je     0x10088c67
10088a97:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
10088a9a:	ba 14 ef 1b 10       	mov    edx,0x101bef14
10088a9f:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
10088aa5:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
10088aab:	f7 d9                	neg    ecx
10088aad:	1b c9                	sbb    ecx,ecx
10088aaf:	23 c8                	and    ecx,eax
10088ab1:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10088ab6:	8b 09                	mov    ecx,DWORD PTR [ecx]
10088ab8:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
10088abe:	03 c1                	add    eax,ecx
10088ac0:	8b c8                	mov    ecx,eax
10088ac2:	8a 19                	mov    bl,BYTE PTR [ecx]
10088ac4:	3a 1a                	cmp    bl,BYTE PTR [edx]
10088ac6:	75 66                	jne    0x10088b2e
10088ac8:	84 db                	test   bl,bl
10088aca:	74 12                	je     0x10088ade
10088acc:	8a 59 01             	mov    bl,BYTE PTR [ecx+0x1]
10088acf:	3a 5a 01             	cmp    bl,BYTE PTR [edx+0x1]
10088ad2:	75 5a                	jne    0x10088b2e
10088ad4:	83 c1 02             	add    ecx,0x2
10088ad7:	83 c2 02             	add    edx,0x2
10088ada:	84 db                	test   bl,bl
10088adc:	75 e4                	jne    0x10088ac2
10088ade:	33 c9                	xor    ecx,ecx
10088ae0:	eb 51                	jmp    0x10088b33
10088ae2:	8b 58 7c             	mov    ebx,DWORD PTR [eax+0x7c]
10088ae5:	89 5d 38             	mov    DWORD PTR [ebp+0x38],ebx
10088ae8:	85 db                	test   ebx,ebx
10088aea:	74 87                	je     0x10088a73
10088aec:	8b 03                	mov    eax,DWORD PTR [ebx]
10088aee:	8b cb                	mov    ecx,ebx
10088af0:	ff 90 c0 00 00 00    	call   DWORD PTR [eax+0xc0]
10088af6:	85 c0                	test   eax,eax
10088af8:	0f 85 75 ff ff ff    	jne    0x10088a73
10088afe:	85 f6                	test   esi,esi
10088b00:	0f 84 61 01 00 00    	je     0x10088c67
10088b06:	83 7d 34 32          	cmp    DWORD PTR [ebp+0x34],0x32
10088b0a:	0f 84 57 01 00 00    	je     0x10088c67
10088b10:	8b 06                	mov    eax,DWORD PTR [esi]
10088b12:	8b ce                	mov    ecx,esi
10088b14:	53                   	push   ebx
10088b15:	ff 90 38 01 00 00    	call   DWORD PTR [eax+0x138]
10088b1b:	85 c0                	test   eax,eax
10088b1d:	0f 8e 3e 01 00 00    	jle    0x10088c61
10088b23:	ff 86 40 06 00 00    	inc    DWORD PTR [esi+0x640]
10088b29:	e9 39 01 00 00       	jmp    0x10088c67
10088b2e:	1b c9                	sbb    ecx,ecx
10088b30:	83 c9 01             	or     ecx,0x1
10088b33:	85 c9                	test   ecx,ecx
10088b35:	74 36                	je     0x10088b6d
10088b37:	ba 24 ef 1b 10       	mov    edx,0x101bef24
10088b3c:	8b c8                	mov    ecx,eax
10088b3e:	66 90                	xchg   ax,ax
10088b40:	8a 19                	mov    bl,BYTE PTR [ecx]
10088b42:	3a 1a                	cmp    bl,BYTE PTR [edx]
10088b44:	75 1a                	jne    0x10088b60
10088b46:	84 db                	test   bl,bl
10088b48:	74 12                	je     0x10088b5c
10088b4a:	8a 59 01             	mov    bl,BYTE PTR [ecx+0x1]
10088b4d:	3a 5a 01             	cmp    bl,BYTE PTR [edx+0x1]
10088b50:	75 0e                	jne    0x10088b60
10088b52:	83 c1 02             	add    ecx,0x2
10088b55:	83 c2 02             	add    edx,0x2
10088b58:	84 db                	test   bl,bl
10088b5a:	75 e4                	jne    0x10088b40
10088b5c:	33 c9                	xor    ecx,ecx
10088b5e:	eb 05                	jmp    0x10088b65
10088b60:	1b c9                	sbb    ecx,ecx
10088b62:	83 c9 01             	or     ecx,0x1
10088b65:	85 c9                	test   ecx,ecx
10088b67:	0f 85 f4 00 00 00    	jne    0x10088c61
10088b6d:	b9 24 ef 1b 10       	mov    ecx,0x101bef24
10088b72:	8a 10                	mov    dl,BYTE PTR [eax]
10088b74:	3a 11                	cmp    dl,BYTE PTR [ecx]
10088b76:	75 1a                	jne    0x10088b92
10088b78:	84 d2                	test   dl,dl
10088b7a:	74 12                	je     0x10088b8e
10088b7c:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
10088b7f:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10088b82:	75 0e                	jne    0x10088b92
10088b84:	83 c0 02             	add    eax,0x2
10088b87:	83 c1 02             	add    ecx,0x2
10088b8a:	84 d2                	test   dl,dl
10088b8c:	75 e4                	jne    0x10088b72
10088b8e:	33 c0                	xor    eax,eax
10088b90:	eb 05                	jmp    0x10088b97
10088b92:	1b c0                	sbb    eax,eax
10088b94:	83 c8 01             	or     eax,0x1
10088b97:	85 c0                	test   eax,eax
10088b99:	75 88                	jne    0x10088b23
10088b9b:	68 f8 21 1a 10       	push   0x101a21f8
10088ba0:	50                   	push   eax
10088ba1:	e8 ba f8 08 00       	call   0x10118460
10088ba6:	83 c4 08             	add    esp,0x8
10088ba9:	85 c0                	test   eax,eax
10088bab:	0f 84 b0 00 00 00    	je     0x10088c61
10088bb1:	ff 70 04             	push   DWORD PTR [eax+0x4]
10088bb4:	e8 97 3d fa ff       	call   0x1002c950
10088bb9:	8b f8                	mov    edi,eax
10088bbb:	83 c4 04             	add    esp,0x4
10088bbe:	85 ff                	test   edi,edi
10088bc0:	0f 84 9b 00 00 00    	je     0x10088c61
10088bc6:	8b 4d 38             	mov    ecx,DWORD PTR [ebp+0x38]
10088bc9:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
10088bcc:	8b 89 48 02 00 00    	mov    ecx,DWORD PTR [ecx+0x248]
10088bd2:	49                   	dec    ecx
10088bd3:	83 f9 03             	cmp    ecx,0x3
10088bd6:	0f 87 85 00 00 00    	ja     0x10088c61
10088bdc:	ff 24 8d 84 8c 08 10 	jmp    DWORD PTR [ecx*4+0x10088c84]
10088be3:	8b cf                	mov    ecx,edi
10088be5:	e8 a6 4a fa ff       	call   0x1002d690
10088bea:	83 f8 01             	cmp    eax,0x1
10088bed:	0f 84 30 ff ff ff    	je     0x10088b23
10088bf3:	8b cf                	mov    ecx,edi
10088bf5:	e8 96 4a fa ff       	call   0x1002d690
10088bfa:	83 f8 05             	cmp    eax,0x5
10088bfd:	eb 52                	jmp    0x10088c51
10088bff:	8b cf                	mov    ecx,edi
10088c01:	e8 8a 4a fa ff       	call   0x1002d690
10088c06:	83 f8 02             	cmp    eax,0x2
10088c09:	0f 84 14 ff ff ff    	je     0x10088b23
10088c0f:	8b cf                	mov    ecx,edi
10088c11:	e8 7a 4a fa ff       	call   0x1002d690
10088c16:	83 f8 06             	cmp    eax,0x6
10088c19:	eb 36                	jmp    0x10088c51
10088c1b:	8b cf                	mov    ecx,edi
10088c1d:	e8 6e 4a fa ff       	call   0x1002d690
10088c22:	83 f8 03             	cmp    eax,0x3
10088c25:	0f 84 f8 fe ff ff    	je     0x10088b23
10088c2b:	8b cf                	mov    ecx,edi
10088c2d:	e8 5e 4a fa ff       	call   0x1002d690
10088c32:	83 f8 07             	cmp    eax,0x7
10088c35:	eb 1a                	jmp    0x10088c51
10088c37:	8b cf                	mov    ecx,edi
10088c39:	e8 52 4a fa ff       	call   0x1002d690
10088c3e:	83 f8 04             	cmp    eax,0x4
10088c41:	0f 84 dc fe ff ff    	je     0x10088b23
10088c47:	8b cf                	mov    ecx,edi
10088c49:	e8 42 4a fa ff       	call   0x1002d690
10088c4e:	83 f8 08             	cmp    eax,0x8
10088c51:	75 0e                	jne    0x10088c61
10088c53:	ff 86 40 06 00 00    	inc    DWORD PTR [esi+0x640]
10088c59:	eb 0c                	jmp    0x10088c67
10088c5b:	83 7d 34 32          	cmp    DWORD PTR [ebp+0x34],0x32
10088c5f:	74 06                	je     0x10088c67
10088c61:	ff 86 48 06 00 00    	inc    DWORD PTR [esi+0x648]
10088c67:	8b 45 d0             	mov    eax,DWORD PTR [ebp-0x30]
10088c6a:	ff 75 40             	push   DWORD PTR [ebp+0x40]
10088c6d:	ff 70 04             	push   DWORD PTR [eax+0x4]
10088c70:	e8 7b 2c 09 00       	call   0x1011b8f0
10088c75:	83 c4 08             	add    esp,0x8
10088c78:	5f                   	pop    edi
10088c79:	5e                   	pop    esi
10088c7a:	5b                   	pop    ebx
10088c7b:	8b e5                	mov    esp,ebp
10088c7d:	5d                   	pop    ebp
10088c7e:	c2 3c 00             	ret    0x3c
