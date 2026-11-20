
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100024c0 <.text+0x14c0>:
100024c0:	55                   	push   ebp
100024c1:	8b ec                	mov    ebp,esp
100024c3:	83 ec 24             	sub    esp,0x24
100024c6:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100024cb:	33 c5                	xor    eax,ebp
100024cd:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
100024d0:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100024d3:	56                   	push   esi
100024d4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100024d7:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100024db:	f3 0f 5c 06          	subss  xmm0,DWORD PTR [esi]
100024df:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
100024e4:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
100024e9:	f3 0f 5c 46 04       	subss  xmm0,DWORD PTR [esi+0x4]
100024ee:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100024f3:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100024f8:	8d 45 f0             	lea    eax,[ebp-0x10]
100024fb:	f3 0f 5c 46 08       	subss  xmm0,DWORD PTR [esi+0x8]
10002500:	50                   	push   eax
10002501:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
10002506:	e8 c5 0e 00 00       	call   0x100033d0
1000250b:	d9 5d dc             	fstp   DWORD PTR [ebp-0x24]
1000250e:	f3 0f 10 45 dc       	movss  xmm0,DWORD PTR [ebp-0x24]
10002513:	0f 57 c9             	xorps  xmm1,xmm1
10002516:	83 c4 04             	add    esp,0x4
10002519:	f3 0f 11 4d e0       	movss  DWORD PTR [ebp-0x20],xmm1
1000251e:	0f 2f c1             	comiss xmm0,xmm1
10002521:	0f 82 83 00 00 00    	jb     0x100025aa
10002527:	53                   	push   ebx
10002528:	8b 5d 10             	mov    ebx,DWORD PTR [ebp+0x10]
1000252b:	57                   	push   edi
1000252c:	f3 0f 2c 7d 18       	cvttss2si edi,DWORD PTR [ebp+0x18]
10002531:	f3 0f 10 45 f0       	movss  xmm0,DWORD PTR [ebp-0x10]
10002536:	8d 45 e4             	lea    eax,[ebp-0x1c]
10002539:	f3 0f 59 c1          	mulss  xmm0,xmm1
1000253d:	57                   	push   edi
1000253e:	6a 00                	push   0x0
10002540:	51                   	push   ecx
10002541:	f3 0f 58 06          	addss  xmm0,DWORD PTR [esi]
10002545:	f3 0f 11 45 e4       	movss  DWORD PTR [ebp-0x1c],xmm0
1000254a:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
1000254f:	f3 0f 59 c1          	mulss  xmm0,xmm1
10002553:	f3 0f 58 46 04       	addss  xmm0,DWORD PTR [esi+0x4]
10002558:	f3 0f 11 45 e8       	movss  DWORD PTR [ebp-0x18],xmm0
1000255d:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
10002562:	f3 0f 59 c1          	mulss  xmm0,xmm1
10002566:	f3 0f 58 46 08       	addss  xmm0,DWORD PTR [esi+0x8]
1000256b:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
10002570:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
10002575:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1000257a:	53                   	push   ebx
1000257b:	50                   	push   eax
1000257c:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10002581:	8b 80 5c f5 04 00    	mov    eax,DWORD PTR [eax+0x4f55c]
10002587:	ff d0                	call   eax
10002589:	f3 0f 10 4d e0       	movss  xmm1,DWORD PTR [ebp-0x20]
1000258e:	83 c4 14             	add    esp,0x14
10002591:	f3 0f 58 0d 80 13 1a 	addss  xmm1,DWORD PTR ds:0x101a1380
10002598:	10 
10002599:	f3 0f 10 45 dc       	movss  xmm0,DWORD PTR [ebp-0x24]
1000259e:	0f 2f c1             	comiss xmm0,xmm1
100025a1:	f3 0f 11 4d e0       	movss  DWORD PTR [ebp-0x20],xmm1
100025a6:	73 89                	jae    0x10002531
100025a8:	5f                   	pop    edi
100025a9:	5b                   	pop    ebx
100025aa:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100025ad:	33 cd                	xor    ecx,ebp
100025af:	5e                   	pop    esi
100025b0:	e8 fe b5 13 00       	call   0x1013dbb3
100025b5:	8b e5                	mov    esp,ebp
100025b7:	5d                   	pop    ebp
100025b8:	c3                   	ret
