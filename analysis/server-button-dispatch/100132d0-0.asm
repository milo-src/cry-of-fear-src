
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100132d0 <.text+0x122d0>:
100132d0:	55                   	push   ebp
100132d1:	8b ec                	mov    ebp,esp
100132d3:	83 ec 0c             	sub    esp,0xc
100132d6:	f3 0f 10 0d d8 1d 1a 	movss  xmm1,DWORD PTR ds:0x101a1dd8
100132dd:	10 
100132de:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100132e1:	56                   	push   esi
100132e2:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100132e5:	f3 0f 10 86 f4 00 00 	movss  xmm0,DWORD PTR [esi+0xf4]
100132ec:	00 
100132ed:	f3 0f 59 c1          	mulss  xmm0,xmm1
100132f1:	f3 0f 58 00          	addss  xmm0,DWORD PTR [eax]
100132f5:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100132fa:	f3 0f 10 86 f8 00 00 	movss  xmm0,DWORD PTR [esi+0xf8]
10013301:	00 
10013302:	f3 0f 59 c1          	mulss  xmm0,xmm1
10013306:	f3 0f 58 40 04       	addss  xmm0,DWORD PTR [eax+0x4]
1001330b:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10013310:	f3 0f 10 86 fc 00 00 	movss  xmm0,DWORD PTR [esi+0xfc]
10013317:	00 
10013318:	f3 0f 59 c1          	mulss  xmm0,xmm1
1001331c:	f3 0f 58 40 08       	addss  xmm0,DWORD PTR [eax+0x8]
10013321:	8d 45 f4             	lea    eax,[ebp-0xc]
10013324:	50                   	push   eax
10013325:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1001332a:	e8 61 6f 10 00       	call   0x1011a290
1001332f:	c7 04 24 00 00 40 3f 	mov    DWORD PTR [esp],0x3f400000
10013336:	51                   	push   ecx
10013337:	c7 04 24 00 00 80 3e 	mov    DWORD PTR [esp],0x3e800000
1001333e:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
10013344:	dc 0d 30 1e 1a 10    	fmul   QWORD PTR ds:0x101a1e30
1001334a:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3f800000
10013351:	3f 
10013352:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10013359:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
1001335c:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
10013362:	d8 0d 1c 5e 1a 10    	fmul   DWORD PTR ds:0x101a5e1c
10013368:	83 c4 08             	add    esp,0x8
1001336b:	d9 5d 0c             	fstp   DWORD PTR [ebp+0xc]
1001336e:	f3 0f 2c 45 0c       	cvttss2si eax,DWORD PTR [ebp+0xc]
10013373:	83 f8 05             	cmp    eax,0x5
10013376:	0f 87 d8 00 00 00    	ja     0x10013454
1001337c:	ff 24 85 5c 34 01 10 	jmp    DWORD PTR [eax*4+0x1001345c]
10013383:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
10013388:	6a 64                	push   0x64
1001338a:	6a 00                	push   0x0
1001338c:	83 ec 08             	sub    esp,0x8
1001338f:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10013396:	3f 
10013397:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1001339c:	68 00 56 1a 10       	push   0x101a5600
100133a1:	e9 9e 00 00 00       	jmp    0x10013444
100133a6:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100133ab:	6a 64                	push   0x64
100133ad:	6a 00                	push   0x0
100133af:	83 ec 08             	sub    esp,0x8
100133b2:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100133b9:	3f 
100133ba:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100133bf:	68 14 56 1a 10       	push   0x101a5614
100133c4:	eb 7e                	jmp    0x10013444
100133c6:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100133cb:	6a 64                	push   0x64
100133cd:	6a 00                	push   0x0
100133cf:	83 ec 08             	sub    esp,0x8
100133d2:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100133d9:	3f 
100133da:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100133df:	68 28 56 1a 10       	push   0x101a5628
100133e4:	eb 5e                	jmp    0x10013444
100133e6:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
100133eb:	6a 64                	push   0x64
100133ed:	6a 00                	push   0x0
100133ef:	83 ec 08             	sub    esp,0x8
100133f2:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100133f9:	3f 
100133fa:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100133ff:	68 3c 56 1a 10       	push   0x101a563c
10013404:	eb 3e                	jmp    0x10013444
10013406:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1001340b:	6a 64                	push   0x64
1001340d:	6a 00                	push   0x0
1001340f:	83 ec 08             	sub    esp,0x8
10013412:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10013419:	3f 
1001341a:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1001341f:	68 50 56 1a 10       	push   0x101a5650
10013424:	eb 1e                	jmp    0x10013444
10013426:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1001342b:	6a 64                	push   0x64
1001342d:	6a 00                	push   0x0
1001342f:	83 ec 08             	sub    esp,0x8
10013432:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10013439:	3f 
1001343a:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1001343f:	68 64 56 1a 10       	push   0x101a5664
10013444:	6a 02                	push   0x2
10013446:	ff b6 0c 02 00 00    	push   DWORD PTR [esi+0x20c]
1001344c:	e8 9f 95 0e 00       	call   0x100fc9f0
10013451:	83 c4 1c             	add    esp,0x1c
10013454:	5e                   	pop    esi
10013455:	8b e5                	mov    esp,ebp
10013457:	5d                   	pop    ebp
10013458:	c3                   	ret
