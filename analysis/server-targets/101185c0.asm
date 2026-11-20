
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101185c0 <.text+0x1175c0>:
101185c0:	55                   	push   ebp
101185c1:	8b ec                	mov    ebp,esp
101185c3:	83 e4 f8             	and    esp,0xfffffff8
101185c6:	51                   	push   ecx
101185c7:	53                   	push   ebx
101185c8:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
101185cb:	56                   	push   esi
101185cc:	57                   	push   edi
101185cd:	53                   	push   ebx
101185ce:	6a 00                	push   0x0
101185d0:	e8 bb ff ff ff       	call   0x10118590
101185d5:	8b f8                	mov    edi,eax
101185d7:	83 c4 08             	add    esp,0x8
101185da:	85 ff                	test   edi,edi
101185dc:	0f 85 b8 00 00 00    	jne    0x1011869a
101185e2:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
101185e7:	f3 0f 59 c0          	mulss  xmm0,xmm0
101185eb:	53                   	push   ebx
101185ec:	50                   	push   eax
101185ed:	f3 0f 11 45 10       	movss  DWORD PTR [ebp+0x10],xmm0
101185f2:	e8 69 fe ff ff       	call   0x10118460
101185f7:	8b f0                	mov    esi,eax
101185f9:	83 c4 08             	add    esp,0x8
101185fc:	85 f6                	test   esi,esi
101185fe:	0f 84 94 00 00 00    	je     0x10118698
10118604:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10118607:	8b 4d 0c             	mov    ecx,DWORD PTR [ebp+0xc]
1011860a:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
1011860f:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
10118615:	f3 0f 10 48 08       	movss  xmm1,DWORD PTR [eax+0x8]
1011861a:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
1011861f:	f3 0f 5c 51 04       	subss  xmm2,DWORD PTR [ecx+0x4]
10118624:	f3 0f 5c 09          	subss  xmm1,DWORD PTR [ecx]
10118628:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
1011862d:	f3 0f 5c 41 08       	subss  xmm0,DWORD PTR [ecx+0x8]
10118632:	f3 0f 59 d2          	mulss  xmm2,xmm2
10118636:	f3 0f 59 c9          	mulss  xmm1,xmm1
1011863a:	f3 0f 59 c0          	mulss  xmm0,xmm0
1011863e:	f3 0f 58 d1          	addss  xmm2,xmm1
10118642:	0f 57 c9             	xorps  xmm1,xmm1
10118645:	f3 0f 58 d0          	addss  xmm2,xmm0
10118649:	0f 5a c2             	cvtps2pd xmm0,xmm2
1011864c:	66 0f 2e c8          	ucomisd xmm1,xmm0
10118650:	77 06                	ja     0x10118658
10118652:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10118656:	eb 05                	jmp    0x1011865d
10118658:	e8 33 38 05 00       	call   0x1016be90
1011865d:	f3 0f 10 4d 10       	movss  xmm1,DWORD PTR [ebp+0x10]
10118662:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10118666:	f3 0f 59 c0          	mulss  xmm0,xmm0
1011866a:	0f 2f c8             	comiss xmm1,xmm0
1011866d:	76 05                	jbe    0x10118674
1011866f:	f3 0f 11 45 10       	movss  DWORD PTR [ebp+0x10],xmm0
10118674:	f3 0f 10 4c 24 0c    	movss  xmm1,DWORD PTR [esp+0xc]
1011867a:	8b c6                	mov    eax,esi
1011867c:	0f 2f c8             	comiss xmm1,xmm0
1011867f:	53                   	push   ebx
10118680:	56                   	push   esi
10118681:	0f 46 c7             	cmovbe eax,edi
10118684:	8b f8                	mov    edi,eax
10118686:	e8 d5 fd ff ff       	call   0x10118460
1011868b:	8b f0                	mov    esi,eax
1011868d:	83 c4 08             	add    esp,0x8
10118690:	85 f6                	test   esi,esi
10118692:	0f 85 6c ff ff ff    	jne    0x10118604
10118698:	8b c7                	mov    eax,edi
1011869a:	5f                   	pop    edi
1011869b:	5e                   	pop    esi
1011869c:	5b                   	pop    ebx
1011869d:	8b e5                	mov    esp,ebp
1011869f:	5d                   	pop    ebp
101186a0:	c3                   	ret
