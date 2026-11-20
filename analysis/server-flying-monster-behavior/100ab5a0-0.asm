
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ab5a0 <.text+0xaa5a0>:
100ab5a0:	55                   	push   ebp
100ab5a1:	8b ec                	mov    ebp,esp
100ab5a3:	83 e4 f8             	and    esp,0xfffffff8
100ab5a6:	83 ec 50             	sub    esp,0x50
100ab5a9:	56                   	push   esi
100ab5aa:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
100ab5ad:	57                   	push   edi
100ab5ae:	8b f9                	mov    edi,ecx
100ab5b0:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100ab5b3:	f6 80 a8 01 00 00 02 	test   BYTE PTR [eax+0x1a8],0x2
100ab5ba:	74 12                	je     0x100ab5ce
100ab5bc:	56                   	push   esi
100ab5bd:	e8 be e1 06 00       	call   0x10119780
100ab5c2:	83 c4 04             	add    esp,0x4
100ab5c5:	83 f8 fd             	cmp    eax,0xfffffffd
100ab5c8:	0f 85 35 01 00 00    	jne    0x100ab703
100ab5ce:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
100ab5d2:	8d 4c 24 20          	lea    ecx,[esp+0x20]
100ab5d6:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100ab5d9:	0f 57 c9             	xorps  xmm1,xmm1
100ab5dc:	f3 0f 58 c1          	addss  xmm0,xmm1
100ab5e0:	51                   	push   ecx
100ab5e1:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100ab5e7:	50                   	push   eax
100ab5e8:	f3 0f 11 44 24 10    	movss  DWORD PTR [esp+0x10],xmm0
100ab5ee:	8d 44 24 10          	lea    eax,[esp+0x10]
100ab5f2:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
100ab5f7:	f3 0f 58 c1          	addss  xmm0,xmm1
100ab5fb:	6a 02                	push   0x2
100ab5fd:	6a 00                	push   0x0
100ab5ff:	50                   	push   eax
100ab600:	8d 44 24 28          	lea    eax,[esp+0x28]
100ab604:	f3 0f 11 44 24 20    	movss  DWORD PTR [esp+0x20],xmm0
100ab60a:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
100ab60f:	f3 0f 58 05 28 97 1a 	addss  xmm0,DWORD PTR ds:0x101a9728
100ab616:	10 
100ab617:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100ab61a:	50                   	push   eax
100ab61b:	f3 0f 11 44 24 28    	movss  DWORD PTR [esp+0x28],xmm0
100ab621:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
100ab625:	f3 0f 58 c1          	addss  xmm0,xmm1
100ab629:	f3 0f 11 44 24 2c    	movss  DWORD PTR [esp+0x2c],xmm0
100ab62f:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
100ab634:	f3 0f 58 c1          	addss  xmm0,xmm1
100ab638:	f3 0f 11 44 24 30    	movss  DWORD PTR [esp+0x30],xmm0
100ab63e:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
100ab643:	f3 0f 58 05 28 97 1a 	addss  xmm0,DWORD PTR ds:0x101a9728
100ab64a:	10 
100ab64b:	f3 0f 11 44 24 34    	movss  DWORD PTR [esp+0x34],xmm0
100ab651:	e8 8a f1 06 00       	call   0x1011a7e0
100ab656:	8b 7d 14             	mov    edi,DWORD PTR [ebp+0x14]
100ab659:	83 c4 18             	add    esp,0x18
100ab65c:	85 ff                	test   edi,edi
100ab65e:	74 66                	je     0x100ab6c6
100ab660:	f3 0f 10 4c 24 38    	movss  xmm1,DWORD PTR [esp+0x38]
100ab666:	0f 57 c0             	xorps  xmm0,xmm0
100ab669:	f3 0f 10 54 24 34    	movss  xmm2,DWORD PTR [esp+0x34]
100ab66f:	f3 0f 5c c8          	subss  xmm1,xmm0
100ab673:	f3 0f 5c d0          	subss  xmm2,xmm0
100ab677:	f3 0f 10 44 24 3c    	movss  xmm0,DWORD PTR [esp+0x3c]
100ab67d:	f3 0f 5c 05 28 97 1a 	subss  xmm0,DWORD PTR ds:0x101a9728
100ab684:	10 
100ab685:	f3 0f 5c 4e 04       	subss  xmm1,DWORD PTR [esi+0x4]
100ab68a:	f3 0f 5c 16          	subss  xmm2,DWORD PTR [esi]
100ab68e:	f3 0f 5c 46 08       	subss  xmm0,DWORD PTR [esi+0x8]
100ab693:	f3 0f 59 c9          	mulss  xmm1,xmm1
100ab697:	f3 0f 59 d2          	mulss  xmm2,xmm2
100ab69b:	f3 0f 59 c0          	mulss  xmm0,xmm0
100ab69f:	f3 0f 58 ca          	addss  xmm1,xmm2
100ab6a3:	f3 0f 58 c8          	addss  xmm1,xmm0
100ab6a7:	0f 5a c1             	cvtps2pd xmm0,xmm1
100ab6aa:	0f 57 c9             	xorps  xmm1,xmm1
100ab6ad:	66 0f 2e c8          	ucomisd xmm1,xmm0
100ab6b1:	77 06                	ja     0x100ab6b9
100ab6b3:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100ab6b7:	eb 05                	jmp    0x100ab6be
100ab6b9:	e8 d2 07 0c 00       	call   0x1016be90
100ab6be:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100ab6c2:	f3 0f 11 07          	movss  DWORD PTR [edi],xmm0
100ab6c6:	83 7c 24 24 00       	cmp    DWORD PTR [esp+0x24],0x0
100ab6cb:	75 0f                	jne    0x100ab6dc
100ab6cd:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
100ab6d4:	10 
100ab6d5:	0f 2f 44 24 30       	comiss xmm0,DWORD PTR [esp+0x30]
100ab6da:	76 1a                	jbe    0x100ab6f6
100ab6dc:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
100ab6df:	85 c0                	test   eax,eax
100ab6e1:	74 20                	je     0x100ab703
100ab6e3:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100ab6e6:	8b 88 0c 02 00 00    	mov    ecx,DWORD PTR [eax+0x20c]
100ab6ec:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100ab6f1:	3b 48 74             	cmp    ecx,DWORD PTR [eax+0x74]
100ab6f4:	75 0d                	jne    0x100ab703
100ab6f6:	b8 02 00 00 00       	mov    eax,0x2
100ab6fb:	5f                   	pop    edi
100ab6fc:	5e                   	pop    esi
100ab6fd:	8b e5                	mov    esp,ebp
100ab6ff:	5d                   	pop    ebp
100ab700:	c2 10 00             	ret    0x10
100ab703:	5f                   	pop    edi
100ab704:	33 c0                	xor    eax,eax
100ab706:	5e                   	pop    esi
100ab707:	8b e5                	mov    esp,ebp
100ab709:	5d                   	pop    ebp
100ab70a:	c2 10 00             	ret    0x10
