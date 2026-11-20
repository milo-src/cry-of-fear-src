
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b1360 <.text+0xb0360>:
100b1360:	55                   	push   ebp
100b1361:	8b ec                	mov    ebp,esp
100b1363:	83 e4 f8             	and    esp,0xfffffff8
100b1366:	83 ec 0c             	sub    esp,0xc
100b1369:	56                   	push   esi
100b136a:	8b f1                	mov    esi,ecx
100b136c:	8b 06                	mov    eax,DWORD PTR [esi]
100b136e:	ff 90 cc 00 00 00    	call   DWORD PTR [eax+0xcc]
100b1374:	85 c0                	test   eax,eax
100b1376:	75 0e                	jne    0x100b1386
100b1378:	56                   	push   esi
100b1379:	e8 82 85 06 00       	call   0x10119900
100b137e:	83 c4 04             	add    esp,0x4
100b1381:	5e                   	pop    esi
100b1382:	8b e5                	mov    esp,ebp
100b1384:	5d                   	pop    ebp
100b1385:	c3                   	ret
100b1386:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1389:	f3 0f 10 35 d8 1d 1a 	movss  xmm6,DWORD PTR ds:0x101a1dd8
100b1390:	10 
100b1391:	51                   	push   ecx
100b1392:	c7 04 24 cd cc 4c 3e 	mov    DWORD PTR [esp],0x3e4ccccd
100b1399:	f3 0f 10 68 24       	movss  xmm5,DWORD PTR [eax+0x24]
100b139e:	f3 0f 10 60 20       	movss  xmm4,DWORD PTR [eax+0x20]
100b13a3:	0f 28 d5             	movaps xmm2,xmm5
100b13a6:	f3 0f 10 58 28       	movss  xmm3,DWORD PTR [eax+0x28]
100b13ab:	0f 28 c4             	movaps xmm0,xmm4
100b13ae:	f3 0f 59 e4          	mulss  xmm4,xmm4
100b13b2:	0f 28 cb             	movaps xmm1,xmm3
100b13b5:	f3 0f 59 ed          	mulss  xmm5,xmm5
100b13b9:	f3 0f 59 c6          	mulss  xmm0,xmm6
100b13bd:	f3 0f 58 e5          	addss  xmm4,xmm5
100b13c1:	f3 0f 59 db          	mulss  xmm3,xmm3
100b13c5:	f3 0f 58 40 08       	addss  xmm0,DWORD PTR [eax+0x8]
100b13ca:	f3 0f 59 ce          	mulss  xmm1,xmm6
100b13ce:	f3 0f 59 d6          	mulss  xmm2,xmm6
100b13d2:	f3 0f 58 e3          	addss  xmm4,xmm3
100b13d6:	f3 0f 58 48 10       	addss  xmm1,DWORD PTR [eax+0x10]
100b13db:	f3 0f 58 50 0c       	addss  xmm2,DWORD PTR [eax+0xc]
100b13e0:	f3 0f 11 44 24 08    	movss  DWORD PTR [esp+0x8],xmm0
100b13e6:	0f 5a c4             	cvtps2pd xmm0,xmm4
100b13e9:	f3 0f 11 4c 24 10    	movss  DWORD PTR [esp+0x10],xmm1
100b13ef:	0f 57 c9             	xorps  xmm1,xmm1
100b13f2:	66 0f 2e c8          	ucomisd xmm1,xmm0
100b13f6:	f3 0f 11 54 24 0c    	movss  DWORD PTR [esp+0xc],xmm2
100b13fc:	77 06                	ja     0x100b1404
100b13fe:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100b1402:	eb 05                	jmp    0x100b1409
100b1404:	e8 87 aa 0b 00       	call   0x1016be90
100b1409:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100b140d:	f3 0f 2c c0          	cvttss2si eax,xmm0
100b1411:	50                   	push   eax
100b1412:	8d 44 24 0c          	lea    eax,[esp+0xc]
100b1416:	50                   	push   eax
100b1417:	6a 20                	push   0x20
100b1419:	e8 02 f4 04 00       	call   0x10100820
100b141e:	8b 06                	mov    eax,DWORD PTR [esi]
100b1420:	83 c4 0c             	add    esp,0xc
100b1423:	8b ce                	mov    ecx,esi
100b1425:	c7 04 24 cd cc 4c 3e 	mov    DWORD PTR [esp],0x3e4ccccd
100b142c:	ff 50 08             	call   DWORD PTR [eax+0x8]
100b142f:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b1432:	83 b9 c4 01 00 00 00 	cmp    DWORD PTR [ecx+0x1c4],0x0
100b1439:	74 41                	je     0x100b147c
100b143b:	83 b9 c8 01 00 00 ef 	cmp    DWORD PTR [ecx+0x1c8],0xffffffef
100b1442:	7e 38                	jle    0x100b147c
100b1444:	f3 0f 10 51 20       	movss  xmm2,DWORD PTR [ecx+0x20]
100b1449:	f3 0f 10 1d d8 1d 1a 	movss  xmm3,DWORD PTR ds:0x101a1dd8
100b1450:	10 
100b1451:	f3 0f 10 49 24       	movss  xmm1,DWORD PTR [ecx+0x24]
100b1456:	f3 0f 10 41 28       	movss  xmm0,DWORD PTR [ecx+0x28]
100b145b:	f3 0f 59 d3          	mulss  xmm2,xmm3
100b145f:	f3 0f 59 cb          	mulss  xmm1,xmm3
100b1463:	f3 0f 59 c3          	mulss  xmm0,xmm3
100b1467:	0f 14 d1             	unpcklps xmm2,xmm1
100b146a:	66 0f d6 51 20       	movq   QWORD PTR [ecx+0x20],xmm2
100b146f:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
100b1475:	8b 44 24 0c          	mov    eax,DWORD PTR [esp+0xc]
100b1479:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
100b147c:	5e                   	pop    esi
100b147d:	8b e5                	mov    esp,ebp
100b147f:	5d                   	pop    ebp
100b1480:	c3                   	ret
