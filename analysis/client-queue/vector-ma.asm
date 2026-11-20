10094770:	55                   	push   ebp
10094771:	8b ec                	mov    ebp,esp
10094773:	8b 55 10             	mov    edx,DWORD PTR [ebp+0x10]
10094776:	f3 0f 10 4d 0c       	movss  xmm1,DWORD PTR [ebp+0xc]
1009477b:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
1009477e:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
10094781:	f3 0f 10 02          	movss  xmm0,DWORD PTR [edx]
10094785:	f3 0f 59 c1          	mulss  xmm0,xmm1
10094789:	f3 0f 58 01          	addss  xmm0,DWORD PTR [ecx]
1009478d:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10094791:	f3 0f 10 42 04       	movss  xmm0,DWORD PTR [edx+0x4]
10094796:	f3 0f 59 c1          	mulss  xmm0,xmm1
1009479a:	f3 0f 58 41 04       	addss  xmm0,DWORD PTR [ecx+0x4]
1009479f:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100947a4:	f3 0f 10 42 08       	movss  xmm0,DWORD PTR [edx+0x8]
100947a9:	f3 0f 59 c1          	mulss  xmm0,xmm1
100947ad:	f3 0f 58 41 08       	addss  xmm0,DWORD PTR [ecx+0x8]
100947b2:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100947b7:	5d                   	pop    ebp
100947b8:	c3                   	ret
