
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10102610 <.text+0x101610>:
10102610:	55                   	push   ebp
10102611:	8b ec                	mov    ebp,esp
10102613:	f3 0f 10 05 34 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f34
1010261a:	10 
1010261b:	83 ec 0c             	sub    esp,0xc
1010261e:	56                   	push   esi
1010261f:	83 ec 0c             	sub    esp,0xc
10102622:	8b f1                	mov    esi,ecx
10102624:	8b c4                	mov    eax,esp
10102626:	56                   	push   esi
10102627:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1010262b:	f3 0f 10 05 38 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f38
10102632:	10 
10102633:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
10102638:	f3 0f 10 05 3c 2f 22 	movss  xmm0,DWORD PTR ds:0x10222f3c
1010263f:	10 
10102640:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
10102645:	e8 86 28 fc ff       	call   0x100c4ed0
1010264a:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
1010264d:	83 c4 10             	add    esp,0x10
10102650:	85 c0                	test   eax,eax
10102652:	74 2c                	je     0x10102680
10102654:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10102657:	f3 0f 10 86 58 01 00 	movss  xmm0,DWORD PTR [esi+0x158]
1010265e:	00 
1010265f:	f3 0f 10 48 0c       	movss  xmm1,DWORD PTR [eax+0xc]
10102664:	f3 0f 10 50 10       	movss  xmm2,DWORD PTR [eax+0x10]
10102669:	f3 0f 58 40 08       	addss  xmm0,DWORD PTR [eax+0x8]
1010266e:	f3 0f 58 8e 5c 01 00 	addss  xmm1,DWORD PTR [esi+0x15c]
10102675:	00 
10102676:	f3 0f 58 96 60 01 00 	addss  xmm2,DWORD PTR [esi+0x160]
1010267d:	00 
1010267e:	eb 25                	jmp    0x101026a5
10102680:	f3 0f 7e 86 58 01 00 	movq   xmm0,QWORD PTR [esi+0x158]
10102687:	00 
10102688:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1010268e:	66 0f d6 45 f4       	movq   QWORD PTR [ebp-0xc],xmm0
10102693:	f3 0f 10 4d f8       	movss  xmm1,DWORD PTR [ebp-0x8]
10102698:	f3 0f 10 45 f4       	movss  xmm0,DWORD PTR [ebp-0xc]
1010269d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
101026a0:	f3 0f 10 55 fc       	movss  xmm2,DWORD PTR [ebp-0x4]
101026a5:	83 ec 0c             	sub    esp,0xc
101026a8:	8b c4                	mov    eax,esp
101026aa:	56                   	push   esi
101026ab:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
101026af:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
101026b4:	f3 0f 11 50 08       	movss  DWORD PTR [eax+0x8],xmm2
101026b9:	e8 92 1e fc ff       	call   0x100c4550
101026be:	83 c4 10             	add    esp,0x10
101026c1:	8b ce                	mov    ecx,esi
101026c3:	e8 08 54 f1 ff       	call   0x10017ad0
101026c8:	8b 86 54 01 00 00    	mov    eax,DWORD PTR [esi+0x154]
101026ce:	85 c0                	test   eax,eax
101026d0:	74 04                	je     0x101026d6
101026d2:	8b ce                	mov    ecx,esi
101026d4:	ff d0                	call   eax
101026d6:	5e                   	pop    esi
101026d7:	8b e5                	mov    esp,ebp
101026d9:	5d                   	pop    ebp
101026da:	c3                   	ret
