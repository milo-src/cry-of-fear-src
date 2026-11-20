
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100be5e0 <.text+0xbd5e0>:
100be5e0:	55                   	push   ebp
100be5e1:	8b ec                	mov    ebp,esp
100be5e3:	83 e4 f8             	and    esp,0xfffffff8
100be5e6:	f3 0f 10 4d 24       	movss  xmm1,DWORD PTR [ebp+0x24]
100be5eb:	83 ec 74             	sub    esp,0x74
100be5ee:	0f 57 c0             	xorps  xmm0,xmm0
100be5f1:	0f 2e c8             	ucomiss xmm1,xmm0
100be5f4:	53                   	push   ebx
100be5f5:	56                   	push   esi
100be5f6:	57                   	push   edi
100be5f7:	8b f1                	mov    esi,ecx
100be5f9:	9f                   	lahf
100be5fa:	f6 c4 44             	test   ah,0x44
100be5fd:	7a 0f                	jp     0x100be60e
100be5ff:	f3 0f 10 05 20 5e 1a 	movss  xmm0,DWORD PTR ds:0x101a5e20
100be606:	10 
100be607:	f3 0f 11 45 24       	movss  DWORD PTR [ebp+0x24],xmm0
100be60c:	eb 05                	jmp    0x100be613
100be60e:	f3 0f 10 45 24       	movss  xmm0,DWORD PTR [ebp+0x24]
100be613:	0f 5a c8             	cvtps2pd xmm1,xmm0
100be616:	f3 0f 10 45 20       	movss  xmm0,DWORD PTR [ebp+0x20]
100be61b:	f2 0f 59 0d 48 1e 1a 	mulsd  xmm1,QWORD PTR ds:0x101a1e48
100be622:	10 
100be623:	0f 5a c0             	cvtps2pd xmm0,xmm0
100be626:	66 0f 2f c1          	comisd xmm0,xmm1
100be62a:	76 09                	jbe    0x100be635
100be62c:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
100be630:	f3 0f 11 45 20       	movss  DWORD PTR [ebp+0x20],xmm0
100be635:	83 3d b0 38 22 10 00 	cmp    DWORD PTR ds:0x102238b0,0x0
100be63c:	0f 84 79 02 00 00    	je     0x100be8bb
100be642:	83 3d b4 38 22 10 00 	cmp    DWORD PTR ds:0x102238b4,0x0
100be649:	0f 84 6c 02 00 00    	je     0x100be8bb
100be64f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100be652:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100be657:	56                   	push   esi
100be658:	83 c0 08             	add    eax,0x8
100be65b:	50                   	push   eax
100be65c:	e8 cf ee 00 00       	call   0x100cd530
100be661:	8b d8                	mov    ebx,eax
100be663:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100be668:	56                   	push   esi
100be669:	8d 45 08             	lea    eax,[ebp+0x8]
100be66c:	89 5c 24 2c          	mov    DWORD PTR [esp+0x2c],ebx
100be670:	50                   	push   eax
100be671:	e8 ba ee 00 00       	call   0x100cd530
100be676:	56                   	push   esi
100be677:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100be67c:	8b f8                	mov    edi,eax
100be67e:	e8 cd f7 00 00       	call   0x100cde50
100be683:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
100be687:	83 fb ff             	cmp    ebx,0xffffffff
100be68a:	75 2c                	jne    0x100be6b8
100be68c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100be691:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100be694:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100be69a:	03 01                	add    eax,DWORD PTR [ecx]
100be69c:	50                   	push   eax
100be69d:	68 a4 4f 1d 10       	push   0x101d4fa4
100be6a2:	6a 02                	push   0x2
100be6a4:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100be6aa:	83 c4 0c             	add    esp,0xc
100be6ad:	33 c0                	xor    eax,eax
100be6af:	5f                   	pop    edi
100be6b0:	5e                   	pop    esi
100be6b1:	5b                   	pop    ebx
100be6b2:	8b e5                	mov    esp,ebp
100be6b4:	5d                   	pop    ebp
100be6b5:	c2 20 00             	ret    0x20
100be6b8:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100be6bd:	83 ff ff             	cmp    edi,0xffffffff
100be6c0:	f3 0f 58 45 14       	addss  xmm0,DWORD PTR [ebp+0x14]
100be6c5:	0f 44 fb             	cmove  edi,ebx
100be6c8:	8b 1d c8 38 22 10    	mov    ebx,DWORD PTR ds:0x102238c8
100be6ce:	89 7c 24 24          	mov    DWORD PTR [esp+0x24],edi
100be6d2:	33 ff                	xor    edi,edi
100be6d4:	f3 0f 11 44 24 30    	movss  DWORD PTR [esp+0x30],xmm0
100be6da:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100be6df:	f3 0f 58 45 18       	addss  xmm0,DWORD PTR [ebp+0x18]
100be6e4:	f3 0f 11 44 24 34    	movss  DWORD PTR [esp+0x34],xmm0
100be6ea:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100be6ef:	f3 0f 58 45 1c       	addss  xmm0,DWORD PTR [ebp+0x1c]
100be6f4:	f3 0f 11 44 24 38    	movss  DWORD PTR [esp+0x38],xmm0
100be6fa:	85 db                	test   ebx,ebx
100be6fc:	0f 8e c9 01 00 00    	jle    0x100be8cb
100be702:	a1 78 59 22 10       	mov    eax,ds:0x10225978
100be707:	03 c7                	add    eax,edi
100be709:	99                   	cdq
100be70a:	f7 fb                	idiv   ebx
100be70c:	8b c2                	mov    eax,edx
100be70e:	6b c8 58             	imul   ecx,eax,0x58
100be711:	89 44 24 14          	mov    DWORD PTR [esp+0x14],eax
100be715:	40                   	inc    eax
100be716:	a3 78 59 22 10       	mov    ds:0x10225978,eax
100be71b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100be71e:	03 0d bc 38 22 10    	add    ecx,DWORD PTR ds:0x102238bc
100be724:	89 4c 24 2c          	mov    DWORD PTR [esp+0x2c],ecx
100be728:	f3 0f 10 50 08       	movss  xmm2,DWORD PTR [eax+0x8]
100be72d:	f3 0f 10 48 0c       	movss  xmm1,DWORD PTR [eax+0xc]
100be732:	f3 0f 10 01          	movss  xmm0,DWORD PTR [ecx]
100be736:	f3 0f 10 59 08       	movss  xmm3,DWORD PTR [ecx+0x8]
100be73b:	f3 0f 5c d0          	subss  xmm2,xmm0
100be73f:	f3 0f 11 44 24 18    	movss  DWORD PTR [esp+0x18],xmm0
100be745:	f3 0f 10 41 04       	movss  xmm0,DWORD PTR [ecx+0x4]
100be74a:	f3 0f 5c c8          	subss  xmm1,xmm0
100be74e:	f3 0f 11 44 24 1c    	movss  DWORD PTR [esp+0x1c],xmm0
100be754:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
100be759:	f3 0f 5c c3          	subss  xmm0,xmm3
100be75d:	f3 0f 59 d2          	mulss  xmm2,xmm2
100be761:	f3 0f 11 5c 24 20    	movss  DWORD PTR [esp+0x20],xmm3
100be767:	f3 0f 59 c9          	mulss  xmm1,xmm1
100be76b:	f3 0f 59 c0          	mulss  xmm0,xmm0
100be76f:	f3 0f 58 ca          	addss  xmm1,xmm2
100be773:	f3 0f 58 c8          	addss  xmm1,xmm0
100be777:	0f 5a c1             	cvtps2pd xmm0,xmm1
100be77a:	0f 57 c9             	xorps  xmm1,xmm1
100be77d:	66 0f 2e c8          	ucomisd xmm1,xmm0
100be781:	77 06                	ja     0x100be789
100be783:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100be787:	eb 05                	jmp    0x100be78e
100be789:	e8 02 d7 0a 00       	call   0x1016be90
100be78e:	0f 57 c9             	xorps  xmm1,xmm1
100be791:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
100be795:	0f 2f 4d 20          	comiss xmm1,DWORD PTR [ebp+0x20]
100be799:	0f 82 fa 00 00 00    	jb     0x100be899
100be79f:	f3 0f 10 45 24       	movss  xmm0,DWORD PTR [ebp+0x24]
100be7a4:	0f 2f c1             	comiss xmm0,xmm1
100be7a7:	0f 86 ec 00 00 00    	jbe    0x100be899
100be7ad:	f3 0f 10 44 24 18    	movss  xmm0,DWORD PTR [esp+0x18]
100be7b3:	8d 44 24 48          	lea    eax,[esp+0x48]
100be7b7:	f3 0f 58 45 14       	addss  xmm0,DWORD PTR [ebp+0x14]
100be7bc:	50                   	push   eax
100be7bd:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100be7c0:	f3 0f 11 44 24 40    	movss  DWORD PTR [esp+0x40],xmm0
100be7c6:	f3 0f 10 44 24 20    	movss  xmm0,DWORD PTR [esp+0x20]
100be7cc:	f3 0f 58 45 18       	addss  xmm0,DWORD PTR [ebp+0x18]
100be7d1:	f3 0f 11 44 24 44    	movss  DWORD PTR [esp+0x44],xmm0
100be7d7:	f3 0f 10 44 24 24    	movss  xmm0,DWORD PTR [esp+0x24]
100be7dd:	f3 0f 58 45 1c       	addss  xmm0,DWORD PTR [ebp+0x1c]
100be7e2:	f3 0f 11 44 24 48    	movss  DWORD PTR [esp+0x48],xmm0
100be7e8:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100be7ee:	8d 44 24 38          	lea    eax,[esp+0x38]
100be7f2:	6a 01                	push   0x1
100be7f4:	6a 01                	push   0x1
100be7f6:	50                   	push   eax
100be7f7:	8d 44 24 50          	lea    eax,[esp+0x50]
100be7fb:	50                   	push   eax
100be7fc:	e8 1f c0 05 00       	call   0x1011a820
100be801:	f3 0f 10 44 24 70    	movss  xmm0,DWORD PTR [esp+0x70]
100be807:	83 c4 18             	add    esp,0x18
100be80a:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
100be811:	9f                   	lahf
100be812:	f6 c4 44             	test   ah,0x44
100be815:	7b 7c                	jnp    0x100be893
100be817:	8b 5c 24 24          	mov    ebx,DWORD PTR [esp+0x24]
100be81b:	8b 44 24 28          	mov    eax,DWORD PTR [esp+0x28]
100be81f:	3b c3                	cmp    eax,ebx
100be821:	74 47                	je     0x100be86a
100be823:	ff b6 04 03 00 00    	push   DWORD PTR [esi+0x304]
100be829:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100be82e:	ff 74 24 14          	push   DWORD PTR [esp+0x14]
100be832:	ff 74 24 1c          	push   DWORD PTR [esp+0x1c]
100be836:	50                   	push   eax
100be837:	e8 64 02 01 00       	call   0x100ceaa0
100be83c:	ff b6 04 03 00 00    	push   DWORD PTR [esi+0x304]
100be842:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
100be846:	ff 74 24 14          	push   DWORD PTR [esp+0x14]
100be84a:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100be84f:	ff 74 24 1c          	push   DWORD PTR [esp+0x1c]
100be853:	53                   	push   ebx
100be854:	e8 47 02 01 00       	call   0x100ceaa0
100be859:	d9 5c 24 20          	fstp   DWORD PTR [esp+0x20]
100be85d:	f3 0f 10 44 24 20    	movss  xmm0,DWORD PTR [esp+0x20]
100be863:	0f 2f 44 24 1c       	comiss xmm0,DWORD PTR [esp+0x1c]
100be868:	72 29                	jb     0x100be893
100be86a:	8b 06                	mov    eax,DWORD PTR [esi]
100be86c:	8b ce                	mov    ecx,esi
100be86e:	8b 5c 24 2c          	mov    ebx,DWORD PTR [esp+0x2c]
100be872:	53                   	push   ebx
100be873:	ff 90 cc 01 00 00    	call   DWORD PTR [eax+0x1cc]
100be879:	85 c0                	test   eax,eax
100be87b:	74 16                	je     0x100be893
100be87d:	53                   	push   ebx
100be87e:	51                   	push   ecx
100be87f:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100be886:	8b ce                	mov    ecx,esi
100be888:	6a 04                	push   0x4
100be88a:	e8 f1 27 00 00       	call   0x100c1080
100be88f:	85 c0                	test   eax,eax
100be891:	75 1a                	jne    0x100be8ad
100be893:	8b 1d c8 38 22 10    	mov    ebx,DWORD PTR ds:0x102238c8
100be899:	47                   	inc    edi
100be89a:	3b fb                	cmp    edi,ebx
100be89c:	0f 8c 60 fe ff ff    	jl     0x100be702
100be8a2:	33 c0                	xor    eax,eax
100be8a4:	5f                   	pop    edi
100be8a5:	5e                   	pop    esi
100be8a6:	5b                   	pop    ebx
100be8a7:	8b e5                	mov    esp,ebp
100be8a9:	5d                   	pop    ebp
100be8aa:	c2 20 00             	ret    0x20
100be8ad:	b8 01 00 00 00       	mov    eax,0x1
100be8b2:	5f                   	pop    edi
100be8b3:	5e                   	pop    esi
100be8b4:	5b                   	pop    ebx
100be8b5:	8b e5                	mov    esp,ebp
100be8b7:	5d                   	pop    ebp
100be8b8:	c2 20 00             	ret    0x20
100be8bb:	68 84 4f 1d 10       	push   0x101d4f84
100be8c0:	6a 02                	push   0x2
100be8c2:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100be8c8:	83 c4 08             	add    esp,0x8
100be8cb:	5f                   	pop    edi
100be8cc:	5e                   	pop    esi
100be8cd:	33 c0                	xor    eax,eax
100be8cf:	5b                   	pop    ebx
100be8d0:	8b e5                	mov    esp,ebp
100be8d2:	5d                   	pop    ebp
100be8d3:	c2 20 00             	ret    0x20
