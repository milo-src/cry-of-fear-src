
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c1310 <.text+0xc0310>:
100c1310:	55                   	push   ebp
100c1311:	8b ec                	mov    ebp,esp
100c1313:	83 e4 f8             	and    esp,0xfffffff8
100c1316:	83 ec 0c             	sub    esp,0xc
100c1319:	f3 0f 10 05 b8 54 1d 	movss  xmm0,DWORD PTR ds:0x101d54b8
100c1320:	10 
100c1321:	8b c1                	mov    eax,ecx
100c1323:	53                   	push   ebx
100c1324:	56                   	push   esi
100c1325:	83 cb ff             	or     ebx,0xffffffff
100c1328:	89 44 24 10          	mov    DWORD PTR [esp+0x10],eax
100c132c:	8b b0 d4 02 00 00    	mov    esi,DWORD PTR [eax+0x2d4]
100c1332:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
100c1338:	57                   	push   edi
100c1339:	3b f3                	cmp    esi,ebx
100c133b:	75 19                	jne    0x100c1356
100c133d:	68 5c 4e 1d 10       	push   0x101d4e5c
100c1342:	6a 02                	push   0x2
100c1344:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c134a:	83 c4 08             	add    esp,0x8
100c134d:	33 c0                	xor    eax,eax
100c134f:	5f                   	pop    edi
100c1350:	5e                   	pop    esi
100c1351:	5b                   	pop    ebx
100c1352:	8b e5                	mov    esp,ebp
100c1354:	5d                   	pop    ebp
100c1355:	c3                   	ret
100c1356:	56                   	push   esi
100c1357:	e8 b4 f5 03 00       	call   0x10100910
100c135c:	83 c4 04             	add    esp,0x4
100c135f:	8b f8                	mov    edi,eax
100c1361:	8b cf                	mov    ecx,edi
100c1363:	e8 78 f2 03 00       	call   0x101005e0
100c1368:	85 c0                	test   eax,eax
100c136a:	74 66                	je     0x100c13d2
100c136c:	8b 44 24 14          	mov    eax,DWORD PTR [esp+0x14]
100c1370:	f3 0f 10 0f          	movss  xmm1,DWORD PTR [edi]
100c1374:	f3 0f 10 57 04       	movss  xmm2,DWORD PTR [edi+0x4]
100c1379:	f3 0f 10 47 08       	movss  xmm0,DWORD PTR [edi+0x8]
100c137e:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100c1381:	f3 0f 5c 51 0c       	subss  xmm2,DWORD PTR [ecx+0xc]
100c1386:	f3 0f 5c 49 08       	subss  xmm1,DWORD PTR [ecx+0x8]
100c138b:	f3 0f 5c 41 10       	subss  xmm0,DWORD PTR [ecx+0x10]
100c1390:	f3 0f 59 d2          	mulss  xmm2,xmm2
100c1394:	f3 0f 59 c9          	mulss  xmm1,xmm1
100c1398:	f3 0f 59 c0          	mulss  xmm0,xmm0
100c139c:	f3 0f 58 d1          	addss  xmm2,xmm1
100c13a0:	0f 57 c9             	xorps  xmm1,xmm1
100c13a3:	f3 0f 58 d0          	addss  xmm2,xmm0
100c13a7:	0f 5a c2             	cvtps2pd xmm0,xmm2
100c13aa:	66 0f 2e c8          	ucomisd xmm1,xmm0
100c13ae:	77 06                	ja     0x100c13b6
100c13b0:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100c13b4:	eb 05                	jmp    0x100c13bb
100c13b6:	e8 d5 aa 0a 00       	call   0x1016be90
100c13bb:	f3 0f 10 4c 24 10    	movss  xmm1,DWORD PTR [esp+0x10]
100c13c1:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100c13c5:	0f 2f c8             	comiss xmm1,xmm0
100c13c8:	76 08                	jbe    0x100c13d2
100c13ca:	8b de                	mov    ebx,esi
100c13cc:	f3 0f 11 44 24 10    	movss  DWORD PTR [esp+0x10],xmm0
100c13d2:	8b 77 1c             	mov    esi,DWORD PTR [edi+0x1c]
100c13d5:	83 fe ff             	cmp    esi,0xffffffff
100c13d8:	0f 85 78 ff ff ff    	jne    0x100c1356
100c13de:	85 db                	test   ebx,ebx
100c13e0:	0f 88 67 ff ff ff    	js     0x100c134d
100c13e6:	53                   	push   ebx
100c13e7:	e8 24 f5 03 00       	call   0x10100910
100c13ec:	83 c4 04             	add    esp,0x4
100c13ef:	5f                   	pop    edi
100c13f0:	5e                   	pop    esi
100c13f1:	5b                   	pop    ebx
100c13f2:	8b e5                	mov    esp,ebp
100c13f4:	5d                   	pop    ebp
100c13f5:	c3                   	ret
