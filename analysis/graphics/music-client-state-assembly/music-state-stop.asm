; Extracted from retained GNU objdump -d -Mintel listing; original DLL bytes verified.
10080780:	55                   	push   ebp
10080781:	8b ec                	mov    ebp,esp
10080783:	56                   	push   esi
10080784:	8b f1                	mov    esi,ecx
10080786:	80 3e 00             	cmp    BYTE PTR [esi],0x0
10080789:	75 07                	jne    0x10080792
1008078b:	33 c0                	xor    eax,eax
1008078d:	5e                   	pop    esi
1008078e:	5d                   	pop    ebp
1008078f:	c2 04 00             	ret    0x4
10080792:	83 3d a8 40 54 10 00 	cmp    DWORD PTR ds:0x105440a8,0x0
10080799:	0f 84 99 00 00 00    	je     0x10080838
1008079f:	6a 00                	push   0x0
100807a1:	68 a8 ec 14 10       	push   0x1014eca8
100807a6:	ff 15 c4 26 1b 10    	call   DWORD PTR ds:0x101b26c4
100807ac:	83 c4 08             	add    esp,0x8
100807af:	85 c0                	test   eax,eax
100807b1:	0f 85 81 00 00 00    	jne    0x10080838
100807b7:	c6 86 dd 00 00 00 01 	mov    BYTE PTR [esi+0xdd],0x1
100807be:	38 86 c4 00 00 00    	cmp    BYTE PTR [esi+0xc4],al
100807c4:	74 06                	je     0x100807cc
100807c6:	88 86 c4 00 00 00    	mov    BYTE PTR [esi+0xc4],al
100807cc:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
100807d1:	0f 57 c0             	xorps  xmm0,xmm0
100807d4:	0f 2e c8             	ucomiss xmm1,xmm0
100807d7:	c6 46 36 00          	mov    BYTE PTR [esi+0x36],0x0
100807db:	9f                   	lahf
100807dc:	f6 c4 44             	test   ah,0x44
100807df:	7a 3e                	jp     0x1008081f
100807e1:	8b 0d b0 40 54 10    	mov    ecx,DWORD PTR ds:0x105440b0
100807e7:	85 c9                	test   ecx,ecx
100807e9:	74 05                	je     0x100807f0
100807eb:	8b 01                	mov    eax,DWORD PTR [ecx]
100807ed:	ff 50 18             	call   DWORD PTR [eax+0x18]
100807f0:	c7 86 b8 00 00 00 00 	mov    DWORD PTR [esi+0xb8],0x0
100807f7:	00 00 00 
100807fa:	b8 01 00 00 00       	mov    eax,0x1
100807ff:	c7 86 cc 00 00 00 00 	mov    DWORD PTR [esi+0xcc],0x0
10080806:	00 00 00 
10080809:	c7 86 d0 00 00 00 00 	mov    DWORD PTR [esi+0xd0],0x0
10080810:	00 00 00 
10080813:	c6 86 dd 00 00 00 00 	mov    BYTE PTR [esi+0xdd],0x0
1008081a:	5e                   	pop    esi
1008081b:	5d                   	pop    ebp
1008081c:	c2 04 00             	ret    0x4
1008081f:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
10080825:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1008082a:	d9 9e cc 00 00 00    	fstp   DWORD PTR [esi+0xcc]
10080830:	f3 0f 11 86 d0 00 00 	movss  DWORD PTR [esi+0xd0],xmm0
10080837:	00 
10080838:	b8 01 00 00 00       	mov    eax,0x1
1008083d:	5e                   	pop    esi
1008083e:	5d                   	pop    ebp
1008083f:	c2 04 00             	ret    0x4
10080842:	cc                   	int3
10080843:	cc                   	int3
10080844:	cc                   	int3
10080845:	cc                   	int3
10080846:	cc                   	int3
10080847:	cc                   	int3
10080848:	cc                   	int3
10080849:	cc                   	int3
1008084a:	cc                   	int3
1008084b:	cc                   	int3
1008084c:	cc                   	int3
1008084d:	cc                   	int3
1008084e:	cc                   	int3
1008084f:	cc                   	int3
