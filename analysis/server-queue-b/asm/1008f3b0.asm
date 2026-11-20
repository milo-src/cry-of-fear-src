
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008f3b0 <.text+0x8e3b0>:
1008f3b0:	55                   	push   ebp
1008f3b1:	8b ec                	mov    ebp,esp
1008f3b3:	83 e4 f8             	and    esp,0xfffffff8
1008f3b6:	83 ec 18             	sub    esp,0x18
1008f3b9:	83 7d 10 02          	cmp    DWORD PTR [ebp+0x10],0x2
1008f3bd:	56                   	push   esi
1008f3be:	57                   	push   edi
1008f3bf:	8b f1                	mov    esi,ecx
1008f3c1:	0f 85 a9 01 00 00    	jne    0x1008f570
1008f3c7:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
1008f3ce:	10 
1008f3cf:	f3 0f 5d 45 14       	minss  xmm0,DWORD PTR [ebp+0x14]
1008f3d4:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
1008f3da:	e8 41 2f 07 00       	call   0x10102320
1008f3df:	85 c0                	test   eax,eax
1008f3e1:	0f 85 89 01 00 00    	jne    0x1008f570
1008f3e7:	f3 0f 10 ae 20 01 00 	movss  xmm5,DWORD PTR [esi+0x120]
1008f3ee:	00 
1008f3ef:	f3 0f 10 8e 2c 01 00 	movss  xmm1,DWORD PTR [esi+0x12c]
1008f3f6:	00 
1008f3f7:	f3 0f 10 b6 24 01 00 	movss  xmm6,DWORD PTR [esi+0x124]
1008f3fe:	00 
1008f3ff:	f3 0f 5c cd          	subss  xmm1,xmm5
1008f403:	f3 0f 10 86 30 01 00 	movss  xmm0,DWORD PTR [esi+0x130]
1008f40a:	00 
1008f40b:	f3 0f 10 5c 24 0c    	movss  xmm3,DWORD PTR [esp+0xc]
1008f411:	f3 0f 5c c6          	subss  xmm0,xmm6
1008f415:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
1008f418:	f3 0f 10 a6 1c 01 00 	movss  xmm4,DWORD PTR [esi+0x11c]
1008f41f:	00 
1008f420:	f3 0f 10 96 28 01 00 	movss  xmm2,DWORD PTR [esi+0x128]
1008f427:	00 
1008f428:	f3 0f 59 cb          	mulss  xmm1,xmm3
1008f42c:	f3 0f 5c d4          	subss  xmm2,xmm4
1008f430:	f3 0f 59 c3          	mulss  xmm0,xmm3
1008f434:	f3 0f 58 e9          	addss  xmm5,xmm1
1008f438:	0f 57 c9             	xorps  xmm1,xmm1
1008f43b:	f3 0f 59 d3          	mulss  xmm2,xmm3
1008f43f:	f3 0f 58 f0          	addss  xmm6,xmm0
1008f443:	f3 0f 10 87 fc 01 00 	movss  xmm0,DWORD PTR [edi+0x1fc]
1008f44a:	00 
1008f44b:	0f 2e c1             	ucomiss xmm0,xmm1
1008f44e:	f3 0f 58 e2          	addss  xmm4,xmm2
1008f452:	f3 0f 11 6c 24 18    	movss  DWORD PTR [esp+0x18],xmm5
1008f458:	f3 0f 11 74 24 1c    	movss  DWORD PTR [esp+0x1c],xmm6
1008f45e:	9f                   	lahf
1008f45f:	f3 0f 11 44 24 10    	movss  DWORD PTR [esp+0x10],xmm0
1008f465:	f3 0f 11 64 24 14    	movss  DWORD PTR [esp+0x14],xmm4
1008f46b:	f6 c4 44             	test   ah,0x44
1008f46e:	7a 58                	jp     0x1008f4c8
1008f470:	0f 28 cc             	movaps xmm1,xmm4
1008f473:	0f 28 d5             	movaps xmm2,xmm5
1008f476:	f3 0f 5c 57 0c       	subss  xmm2,DWORD PTR [edi+0xc]
1008f47b:	f3 0f 5c 4f 08       	subss  xmm1,DWORD PTR [edi+0x8]
1008f480:	0f 28 c6             	movaps xmm0,xmm6
1008f483:	f3 0f 5c 47 10       	subss  xmm0,DWORD PTR [edi+0x10]
1008f488:	f3 0f 59 d2          	mulss  xmm2,xmm2
1008f48c:	f3 0f 59 c9          	mulss  xmm1,xmm1
1008f490:	f3 0f 59 c0          	mulss  xmm0,xmm0
1008f494:	f3 0f 58 d1          	addss  xmm2,xmm1
1008f498:	0f 57 c9             	xorps  xmm1,xmm1
1008f49b:	f3 0f 58 d0          	addss  xmm2,xmm0
1008f49f:	0f 5a c2             	cvtps2pd xmm0,xmm2
1008f4a2:	66 0f 2e c8          	ucomisd xmm1,xmm0
1008f4a6:	77 06                	ja     0x1008f4ae
1008f4a8:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
1008f4ac:	eb 05                	jmp    0x1008f4b3
1008f4ae:	e8 dd c9 0d 00       	call   0x1016be90
1008f4b3:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
1008f4b7:	0f 57 c9             	xorps  xmm1,xmm1
1008f4ba:	f3 0f 59 05 e0 1e 1a 	mulss  xmm0,DWORD PTR ds:0x101a1ee0
1008f4c1:	10 
1008f4c2:	f3 0f 11 44 24 10    	movss  DWORD PTR [esp+0x10],xmm0
1008f4c8:	0f 2e c1             	ucomiss xmm0,xmm1
1008f4cb:	9f                   	lahf
1008f4cc:	f6 c4 44             	test   ah,0x44
1008f4cf:	0f 8b 9b 00 00 00    	jnp    0x1008f570
1008f4d5:	83 be 84 01 00 00 00 	cmp    DWORD PTR [esi+0x184],0x0
1008f4dc:	75 42                	jne    0x1008f520
1008f4de:	6a 64                	push   0x64
1008f4e0:	c7 86 84 01 00 00 02 	mov    DWORD PTR [esi+0x184],0x2
1008f4e7:	00 00 00 
1008f4ea:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008f4ef:	8b 8f f0 01 00 00    	mov    ecx,DWORD PTR [edi+0x1f0]
1008f4f5:	6a 00                	push   0x0
1008f4f7:	83 ec 08             	sub    esp,0x8
1008f4fa:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1008f500:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1008f507:	3f 
1008f508:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1008f50f:	51                   	push   ecx
1008f510:	6a 06                	push   0x6
1008f512:	ff b7 0c 02 00 00    	push   DWORD PTR [edi+0x20c]
1008f518:	e8 d3 d4 06 00       	call   0x100fc9f0
1008f51d:	83 c4 1c             	add    esp,0x1c
1008f520:	f3 0f 10 44 24 0c    	movss  xmm0,DWORD PTR [esp+0xc]
1008f526:	83 ec 10             	sub    esp,0x10
1008f529:	f3 0f 11 86 88 01 00 	movss  DWORD PTR [esi+0x188],xmm0
1008f530:	00 
1008f531:	8b c4                	mov    eax,esp
1008f533:	f3 0f 10 44 24 20    	movss  xmm0,DWORD PTR [esp+0x20]
1008f539:	8b ce                	mov    ecx,esi
1008f53b:	f3 0f 11 44 24 0c    	movss  DWORD PTR [esp+0xc],xmm0
1008f541:	f3 0f 10 44 24 24    	movss  xmm0,DWORD PTR [esp+0x24]
1008f547:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
1008f54b:	f3 0f 10 44 24 28    	movss  xmm0,DWORD PTR [esp+0x28]
1008f551:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
1008f556:	f3 0f 10 44 24 2c    	movss  xmm0,DWORD PTR [esp+0x2c]
1008f55c:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
1008f561:	e8 5a 30 07 00       	call   0x101025c0
1008f566:	c7 86 54 01 00 00 60 	mov    DWORD PTR [esi+0x154],0x1008df60
1008f56d:	df 08 10 
1008f570:	5f                   	pop    edi
1008f571:	5e                   	pop    esi
1008f572:	8b e5                	mov    esp,ebp
1008f574:	5d                   	pop    ebp
1008f575:	c2 10 00             	ret    0x10
