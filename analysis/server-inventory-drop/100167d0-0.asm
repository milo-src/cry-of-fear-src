
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100167d0 <.text+0x157d0>:
100167d0:	55                   	push   ebp
100167d1:	8b ec                	mov    ebp,esp
100167d3:	83 ec 0c             	sub    esp,0xc
100167d6:	56                   	push   esi
100167d7:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100167da:	57                   	push   edi
100167db:	85 f6                	test   esi,esi
100167dd:	0f 84 25 01 00 00    	je     0x10016908
100167e3:	8b 7e 7c             	mov    edi,DWORD PTR [esi+0x7c]
100167e6:	85 ff                	test   edi,edi
100167e8:	0f 84 1a 01 00 00    	je     0x10016908
100167ee:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100167f1:	f3 0f 10 1d 90 13 1a 	movss  xmm3,DWORD PTR ds:0x101a1390
100167f8:	10 
100167f9:	f3 0f 10 51 08       	movss  xmm2,DWORD PTR [ecx+0x8]
100167fe:	f3 0f 10 49 0c       	movss  xmm1,DWORD PTR [ecx+0xc]
10016803:	f3 0f 5c d3          	subss  xmm2,xmm3
10016807:	f3 0f 10 41 10       	movss  xmm0,DWORD PTR [ecx+0x10]
1001680c:	f3 0f 5c cb          	subss  xmm1,xmm3
10016810:	f3 0f 5c c3          	subss  xmm0,xmm3
10016814:	0f 14 d1             	unpcklps xmm2,xmm1
10016817:	66 0f d6 91 c4 00 00 	movq   QWORD PTR [ecx+0xc4],xmm2
1001681e:	00 
1001681f:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10016824:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10016827:	89 81 cc 00 00 00    	mov    DWORD PTR [ecx+0xcc],eax
1001682d:	8b cf                	mov    ecx,edi
1001682f:	8b 57 04             	mov    edx,DWORD PTR [edi+0x4]
10016832:	f3 0f 10 52 08       	movss  xmm2,DWORD PTR [edx+0x8]
10016837:	f3 0f 10 4a 0c       	movss  xmm1,DWORD PTR [edx+0xc]
1001683c:	f3 0f 58 d3          	addss  xmm2,xmm3
10016840:	f3 0f 10 42 10       	movss  xmm0,DWORD PTR [edx+0x10]
10016845:	f3 0f 58 cb          	addss  xmm1,xmm3
10016849:	f3 0f 58 c3          	addss  xmm0,xmm3
1001684d:	0f 14 d1             	unpcklps xmm2,xmm1
10016850:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
10016855:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
10016858:	66 0f d6 92 d0 00 00 	movq   QWORD PTR [edx+0xd0],xmm2
1001685f:	00 
10016860:	89 82 d8 00 00 00    	mov    DWORD PTR [edx+0xd8],eax
10016866:	8b 07                	mov    eax,DWORD PTR [edi]
10016868:	ff 50 2c             	call   DWORD PTR [eax+0x2c]
1001686b:	8b 76 7c             	mov    esi,DWORD PTR [esi+0x7c]
1001686e:	85 f6                	test   esi,esi
10016870:	0f 84 92 00 00 00    	je     0x10016908
10016876:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1001687c:	85 c9                	test   ecx,ecx
1001687e:	74 0a                	je     0x1001688a
10016880:	8b 01                	mov    eax,DWORD PTR [ecx]
10016882:	56                   	push   esi
10016883:	ff 50 08             	call   DWORD PTR [eax+0x8]
10016886:	85 c0                	test   eax,eax
10016888:	74 1e                	je     0x100168a8
1001688a:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1001688d:	f7 81 a8 01 00 00 00 	test   DWORD PTR [ecx+0x1a8],0x40000000
10016894:	00 00 40 
10016897:	75 0f                	jne    0x100168a8
10016899:	a1 fc 2e 22 10       	mov    eax,ds:0x10222efc
1001689e:	83 f8 01             	cmp    eax,0x1
100168a1:	75 0e                	jne    0x100168b1
100168a3:	84 46 60             	test   BYTE PTR [esi+0x60],al
100168a6:	74 1e                	je     0x100168c6
100168a8:	5f                   	pop    edi
100168a9:	83 c8 ff             	or     eax,0xffffffff
100168ac:	5e                   	pop    esi
100168ad:	8b e5                	mov    esp,ebp
100168af:	5d                   	pop    ebp
100168b0:	c3                   	ret
100168b1:	83 f8 02             	cmp    eax,0x2
100168b4:	75 05                	jne    0x100168bb
100168b6:	84 46 60             	test   BYTE PTR [esi+0x60],al
100168b9:	eb eb                	jmp    0x100168a6
100168bb:	83 f8 03             	cmp    eax,0x3
100168be:	75 06                	jne    0x100168c6
100168c0:	f6 46 60 04          	test   BYTE PTR [esi+0x60],0x4
100168c4:	75 e2                	jne    0x100168a8
100168c6:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100168c9:	85 c0                	test   eax,eax
100168cb:	74 3b                	je     0x10016908
100168cd:	50                   	push   eax
100168ce:	b9 78 22 23 10       	mov    ecx,0x10232278
100168d3:	e8 08 9e 10 00       	call   0x101206e0
100168d8:	85 c0                	test   eax,eax
100168da:	74 34                	je     0x10016910
100168dc:	83 78 60 02          	cmp    DWORD PTR [eax+0x60],0x2
100168e0:	74 c6                	je     0x100168a8
100168e2:	83 c0 40             	add    eax,0x40
100168e5:	50                   	push   eax
100168e6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100168eb:	8b 90 98 00 00 00    	mov    edx,DWORD PTR [eax+0x98]
100168f1:	03 50 0c             	add    edx,DWORD PTR [eax+0xc]
100168f4:	52                   	push   edx
100168f5:	e8 a6 42 ff ff       	call   0x1000aba0
100168fa:	83 c4 08             	add    esp,0x8
100168fd:	85 c0                	test   eax,eax
100168ff:	75 07                	jne    0x10016908
10016901:	8b ce                	mov    ecx,esi
10016903:	e8 18 15 00 00       	call   0x10017e20
10016908:	5f                   	pop    edi
10016909:	33 c0                	xor    eax,eax
1001690b:	5e                   	pop    esi
1001690c:	8b e5                	mov    esp,ebp
1001690e:	5d                   	pop    ebp
1001690f:	c3                   	ret
10016910:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10016915:	b9 78 22 23 10       	mov    ecx,0x10232278
1001691a:	6a 01                	push   0x1
1001691c:	ff 70 0c             	push   DWORD PTR [eax+0xc]
1001691f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10016922:	ff 70 04             	push   DWORD PTR [eax+0x4]
10016925:	e8 46 9d 10 00       	call   0x10120670
1001692a:	5f                   	pop    edi
1001692b:	33 c0                	xor    eax,eax
1001692d:	5e                   	pop    esi
1001692e:	8b e5                	mov    esp,ebp
10016930:	5d                   	pop    ebp
10016931:	c3                   	ret
