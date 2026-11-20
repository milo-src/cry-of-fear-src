
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c4590 <.text+0xc3590>:
100c4590:	55                   	push   ebp
100c4591:	8b ec                	mov    ebp,esp
100c4593:	83 e4 c0             	and    esp,0xffffffc0
100c4596:	83 ec 38             	sub    esp,0x38
100c4599:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100c459e:	f3 0f 10 55 10       	movss  xmm2,DWORD PTR [ebp+0x10]
100c45a3:	f3 0f 10 5d 14       	movss  xmm3,DWORD PTR [ebp+0x14]
100c45a8:	56                   	push   esi
100c45a9:	57                   	push   edi
100c45aa:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
100c45ad:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c45b0:	f3 0f 5c 40 08       	subss  xmm0,DWORD PTR [eax+0x8]
100c45b5:	f3 0f 5c 50 0c       	subss  xmm2,DWORD PTR [eax+0xc]
100c45ba:	f3 0f 5c 58 10       	subss  xmm3,DWORD PTR [eax+0x10]
100c45bf:	0f 28 c8             	movaps xmm1,xmm0
100c45c2:	f3 0f 11 44 24 28    	movss  DWORD PTR [esp+0x28],xmm0
100c45c8:	f3 0f 59 c8          	mulss  xmm1,xmm0
100c45cc:	0f 28 c2             	movaps xmm0,xmm2
100c45cf:	f3 0f 59 c2          	mulss  xmm0,xmm2
100c45d3:	f3 0f 11 54 24 2c    	movss  DWORD PTR [esp+0x2c],xmm2
100c45d9:	f3 0f 11 5c 24 30    	movss  DWORD PTR [esp+0x30],xmm3
100c45df:	f3 0f 58 c8          	addss  xmm1,xmm0
100c45e3:	0f 28 c3             	movaps xmm0,xmm3
100c45e6:	f3 0f 59 c3          	mulss  xmm0,xmm3
100c45ea:	f3 0f 58 c8          	addss  xmm1,xmm0
100c45ee:	0f 5a c1             	cvtps2pd xmm0,xmm1
100c45f1:	0f 57 c9             	xorps  xmm1,xmm1
100c45f4:	66 0f 2e c8          	ucomisd xmm1,xmm0
100c45f8:	77 06                	ja     0x100c4600
100c45fa:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100c45fe:	eb 05                	jmp    0x100c4605
100c4600:	e8 8b 78 0a 00       	call   0x1016be90
100c4605:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100c4609:	f3 0f 5a c0          	cvtss2sd xmm0,xmm0
100c460d:	66 0f 2f 05 f0 46 1a 	comisd xmm0,QWORD PTR ds:0x101a46f0
100c4614:	10 
100c4615:	0f 86 ab 00 00 00    	jbe    0x100c46c6
100c461b:	68 e8 b6 1c 10       	push   0x101cb6e8
100c4620:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100c4626:	d9 5c 24 28          	fstp   DWORD PTR [esp+0x28]
100c462a:	f3 0f 10 44 24 28    	movss  xmm0,DWORD PTR [esp+0x28]
100c4630:	83 c4 04             	add    esp,0x4
100c4633:	0f 2e 05 70 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1370
100c463a:	9f                   	lahf
100c463b:	f6 c4 44             	test   ah,0x44
100c463e:	0f 8b 82 00 00 00    	jnp    0x100c46c6
100c4644:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
100c4649:	83 ec 30             	sub    esp,0x30
100c464c:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
100c464f:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c4652:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c4657:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100c465d:	8b 82 d0 01 00 00    	mov    eax,DWORD PTR [edx+0x1d0]
100c4663:	f2 0f 11 44 24 28    	movsd  QWORD PTR [esp+0x28],xmm0
100c4669:	03 c1                	add    eax,ecx
100c466b:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100c4670:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c4673:	f2 0f 11 44 24 20    	movsd  QWORD PTR [esp+0x20],xmm0
100c4679:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
100c467e:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c4681:	f2 0f 11 44 24 18    	movsd  QWORD PTR [esp+0x18],xmm0
100c4687:	f3 0f 10 42 10       	movss  xmm0,DWORD PTR [edx+0x10]
100c468c:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c468f:	f2 0f 11 44 24 10    	movsd  QWORD PTR [esp+0x10],xmm0
100c4695:	f3 0f 10 42 0c       	movss  xmm0,DWORD PTR [edx+0xc]
100c469a:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c469d:	f2 0f 11 44 24 08    	movsd  QWORD PTR [esp+0x8],xmm0
100c46a3:	f3 0f 10 42 08       	movss  xmm0,DWORD PTR [edx+0x8]
100c46a8:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c46ab:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100c46b0:	50                   	push   eax
100c46b1:	8b 02                	mov    eax,DWORD PTR [edx]
100c46b3:	03 c1                	add    eax,ecx
100c46b5:	50                   	push   eax
100c46b6:	68 f0 5d 1d 10       	push   0x101d5df0
100c46bb:	6a 01                	push   0x1
100c46bd:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c46c3:	83 c4 40             	add    esp,0x40
100c46c6:	8d 45 0c             	lea    eax,[ebp+0xc]
100c46c9:	50                   	push   eax
100c46ca:	57                   	push   edi
100c46cb:	e8 10 59 05 00       	call   0x10119fe0
100c46d0:	83 c4 08             	add    esp,0x8
100c46d3:	83 7d 18 00          	cmp    DWORD PTR [ebp+0x18],0x0
100c46d7:	74 40                	je     0x100c4719
100c46d9:	8b 4f 14             	mov    ecx,DWORD PTR [edi+0x14]
100c46dc:	85 c9                	test   ecx,ecx
100c46de:	74 39                	je     0x100c4719
100c46e0:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100c46e3:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100c46e6:	f3 0f 10 50 08       	movss  xmm2,DWORD PTR [eax+0x8]
100c46eb:	f3 0f 10 48 0c       	movss  xmm1,DWORD PTR [eax+0xc]
100c46f0:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
100c46f5:	f3 0f 5c 51 08       	subss  xmm2,DWORD PTR [ecx+0x8]
100c46fa:	f3 0f 5c 49 0c       	subss  xmm1,DWORD PTR [ecx+0xc]
100c46ff:	f3 0f 5c 41 10       	subss  xmm0,DWORD PTR [ecx+0x10]
100c4704:	0f 14 d1             	unpcklps xmm2,xmm1
100c4707:	f3 0f 11 44 24 3c    	movss  DWORD PTR [esp+0x3c],xmm0
100c470d:	8b 44 24 3c          	mov    eax,DWORD PTR [esp+0x3c]
100c4711:	66 0f d6 57 24       	movq   QWORD PTR [edi+0x24],xmm2
100c4716:	89 47 2c             	mov    DWORD PTR [edi+0x2c],eax
100c4719:	8b 77 1c             	mov    esi,DWORD PTR [edi+0x1c]
100c471c:	85 f6                	test   esi,esi
100c471e:	0f 84 bb 00 00 00    	je     0x100c47df
100c4724:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100c4727:	83 b9 08 01 00 00 07 	cmp    DWORD PTR [ecx+0x108],0x7
100c472e:	75 68                	jne    0x100c4798
100c4730:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
100c4733:	f3 0f 10 41 20       	movss  xmm0,DWORD PTR [ecx+0x20]
100c4738:	0f 2e 42 20          	ucomiss xmm0,DWORD PTR [edx+0x20]
100c473c:	9f                   	lahf
100c473d:	f6 c4 44             	test   ah,0x44
100c4740:	7a 1e                	jp     0x100c4760
100c4742:	f3 0f 10 41 24       	movss  xmm0,DWORD PTR [ecx+0x24]
100c4747:	0f 2e 42 24          	ucomiss xmm0,DWORD PTR [edx+0x24]
100c474b:	9f                   	lahf
100c474c:	f6 c4 44             	test   ah,0x44
100c474f:	7a 0f                	jp     0x100c4760
100c4751:	f3 0f 10 41 28       	movss  xmm0,DWORD PTR [ecx+0x28]
100c4756:	0f 2e 42 28          	ucomiss xmm0,DWORD PTR [edx+0x28]
100c475a:	9f                   	lahf
100c475b:	f6 c4 44             	test   ah,0x44
100c475e:	7b 38                	jnp    0x100c4798
100c4760:	f3 0f 10 51 08       	movss  xmm2,DWORD PTR [ecx+0x8]
100c4765:	f3 0f 10 49 0c       	movss  xmm1,DWORD PTR [ecx+0xc]
100c476a:	f3 0f 10 41 10       	movss  xmm0,DWORD PTR [ecx+0x10]
100c476f:	f3 0f 58 54 24 28    	addss  xmm2,DWORD PTR [esp+0x28]
100c4775:	f3 0f 58 4c 24 2c    	addss  xmm1,DWORD PTR [esp+0x2c]
100c477b:	f3 0f 58 44 24 30    	addss  xmm0,DWORD PTR [esp+0x30]
100c4781:	6a 00                	push   0x0
100c4783:	83 ec 0c             	sub    esp,0xc
100c4786:	8b c4                	mov    eax,esp
100c4788:	f3 0f 11 10          	movss  DWORD PTR [eax],xmm2
100c478c:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
100c4791:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100c4796:	eb 33                	jmp    0x100c47cb
100c4798:	f3 0f 10 56 28       	movss  xmm2,DWORD PTR [esi+0x28]
100c479d:	f3 0f 10 4e 2c       	movss  xmm1,DWORD PTR [esi+0x2c]
100c47a2:	f3 0f 10 46 24       	movss  xmm0,DWORD PTR [esi+0x24]
100c47a7:	f3 0f 58 55 10       	addss  xmm2,DWORD PTR [ebp+0x10]
100c47ac:	f3 0f 58 4d 14       	addss  xmm1,DWORD PTR [ebp+0x14]
100c47b1:	f3 0f 58 45 0c       	addss  xmm0,DWORD PTR [ebp+0xc]
100c47b6:	6a 00                	push   0x0
100c47b8:	83 ec 0c             	sub    esp,0xc
100c47bb:	8b c4                	mov    eax,esp
100c47bd:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
100c47c1:	f3 0f 11 50 04       	movss  DWORD PTR [eax+0x4],xmm2
100c47c6:	f3 0f 11 48 08       	movss  DWORD PTR [eax+0x8],xmm1
100c47cb:	56                   	push   esi
100c47cc:	e8 bf fd ff ff       	call   0x100c4590
100c47d1:	8b 76 20             	mov    esi,DWORD PTR [esi+0x20]
100c47d4:	83 c4 14             	add    esp,0x14
100c47d7:	85 f6                	test   esi,esi
100c47d9:	0f 85 45 ff ff ff    	jne    0x100c4724
100c47df:	5f                   	pop    edi
100c47e0:	5e                   	pop    esi
100c47e1:	8b e5                	mov    esp,ebp
100c47e3:	5d                   	pop    ebp
100c47e4:	c3                   	ret
