
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c1400 <.text+0xc0400>:
100c1400:	55                   	push   ebp
100c1401:	8b ec                	mov    ebp,esp
100c1403:	83 e4 f8             	and    esp,0xfffffff8
100c1406:	83 ec 14             	sub    esp,0x14
100c1409:	f3 0f 10 05 b8 54 1d 	movss  xmm0,DWORD PTR ds:0x101d54b8
100c1410:	10 
100c1411:	53                   	push   ebx
100c1412:	56                   	push   esi
100c1413:	57                   	push   edi
100c1414:	8b b9 d4 02 00 00    	mov    edi,DWORD PTR [ecx+0x2d4]
100c141a:	83 cb ff             	or     ebx,0xffffffff
100c141d:	89 4c 24 10          	mov    DWORD PTR [esp+0x10],ecx
100c1421:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
100c1427:	3b fb                	cmp    edi,ebx
100c1429:	75 2a                	jne    0x100c1455
100c142b:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100c142e:	8b 08                	mov    ecx,DWORD PTR [eax]
100c1430:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c1435:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
100c143b:	51                   	push   ecx
100c143c:	68 30 4e 1d 10       	push   0x101d4e30
100c1441:	6a 02                	push   0x2
100c1443:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c1449:	83 c4 0c             	add    esp,0xc
100c144c:	33 c0                	xor    eax,eax
100c144e:	5f                   	pop    edi
100c144f:	5e                   	pop    esi
100c1450:	5b                   	pop    ebx
100c1451:	8b e5                	mov    esp,ebp
100c1453:	5d                   	pop    ebp
100c1454:	c3                   	ret
100c1455:	57                   	push   edi
100c1456:	e8 b5 f4 03 00       	call   0x10100910
100c145b:	8b f0                	mov    esi,eax
100c145d:	83 c4 04             	add    esp,0x4
100c1460:	85 f6                	test   esi,esi
100c1462:	74 7c                	je     0x100c14e0
100c1464:	8b ce                	mov    ecx,esi
100c1466:	e8 85 f1 03 00       	call   0x101005f0
100c146b:	85 c0                	test   eax,eax
100c146d:	74 71                	je     0x100c14e0
100c146f:	8b 44 24 10          	mov    eax,DWORD PTR [esp+0x10]
100c1473:	8d 4c 24 14          	lea    ecx,[esp+0x14]
100c1477:	51                   	push   ecx
100c1478:	8b c8                	mov    ecx,eax
100c147a:	8b 10                	mov    edx,DWORD PTR [eax]
100c147c:	ff 92 04 01 00 00    	call   DWORD PTR [edx+0x104]
100c1482:	f3 0f 10 0e          	movss  xmm1,DWORD PTR [esi]
100c1486:	f3 0f 10 56 04       	movss  xmm2,DWORD PTR [esi+0x4]
100c148b:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
100c1490:	f3 0f 5c 50 04       	subss  xmm2,DWORD PTR [eax+0x4]
100c1495:	f3 0f 5c 08          	subss  xmm1,DWORD PTR [eax]
100c1499:	f3 0f 5c 40 08       	subss  xmm0,DWORD PTR [eax+0x8]
100c149e:	f3 0f 59 d2          	mulss  xmm2,xmm2
100c14a2:	f3 0f 59 c9          	mulss  xmm1,xmm1
100c14a6:	f3 0f 59 c0          	mulss  xmm0,xmm0
100c14aa:	f3 0f 58 d1          	addss  xmm2,xmm1
100c14ae:	0f 57 c9             	xorps  xmm1,xmm1
100c14b1:	f3 0f 58 d0          	addss  xmm2,xmm0
100c14b5:	0f 5a c2             	cvtps2pd xmm0,xmm2
100c14b8:	66 0f 2e c8          	ucomisd xmm1,xmm0
100c14bc:	77 06                	ja     0x100c14c4
100c14be:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100c14c2:	eb 05                	jmp    0x100c14c9
100c14c4:	e8 c7 a9 0a 00       	call   0x1016be90
100c14c9:	f3 0f 10 4c 24 0c    	movss  xmm1,DWORD PTR [esp+0xc]
100c14cf:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100c14d3:	0f 2f c8             	comiss xmm1,xmm0
100c14d6:	76 08                	jbe    0x100c14e0
100c14d8:	8b df                	mov    ebx,edi
100c14da:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
100c14e0:	8b 7e 1c             	mov    edi,DWORD PTR [esi+0x1c]
100c14e3:	83 ff ff             	cmp    edi,0xffffffff
100c14e6:	0f 85 69 ff ff ff    	jne    0x100c1455
100c14ec:	85 db                	test   ebx,ebx
100c14ee:	0f 88 58 ff ff ff    	js     0x100c144c
100c14f4:	53                   	push   ebx
100c14f5:	e8 16 f4 03 00       	call   0x10100910
100c14fa:	83 c4 04             	add    esp,0x4
100c14fd:	5f                   	pop    edi
100c14fe:	5e                   	pop    esi
100c14ff:	5b                   	pop    ebx
100c1500:	8b e5                	mov    esp,ebp
100c1502:	5d                   	pop    ebp
100c1503:	c3                   	ret
