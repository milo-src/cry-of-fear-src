
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100114a0 <.text+0x104a0>:
100114a0:	55                   	push   ebp
100114a1:	8b ec                	mov    ebp,esp
100114a3:	f3 0f 10 15 90 13 1a 	movss  xmm2,DWORD PTR ds:0x101a1390
100114aa:	10 
100114ab:	83 ec 0c             	sub    esp,0xc
100114ae:	0f 57 c9             	xorps  xmm1,xmm1
100114b1:	56                   	push   esi
100114b2:	8b f1                	mov    esi,ecx
100114b4:	f3 0f 10 86 e4 00 00 	movss  xmm0,DWORD PTR [esi+0xe4]
100114bb:	00 
100114bc:	0f 2e c1             	ucomiss xmm0,xmm1
100114bf:	c7 86 f4 00 00 00 00 	mov    DWORD PTR [esi+0xf4],0x0
100114c6:	00 00 00 
100114c9:	c7 86 f0 00 00 00 00 	mov    DWORD PTR [esi+0xf0],0x0
100114d0:	00 00 00 
100114d3:	c7 86 e8 00 00 00 00 	mov    DWORD PTR [esi+0xe8],0x42c60000
100114da:	00 c6 42 
100114dd:	9f                   	lahf
100114de:	f6 c4 44             	test   ah,0x44
100114e1:	7a 0a                	jp     0x100114ed
100114e3:	c7 86 e4 00 00 00 00 	mov    DWORD PTR [esi+0xe4],0x3f800000
100114ea:	00 80 3f 
100114ed:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100114f0:	c7 86 e0 00 00 00 cd 	mov    DWORD PTR [esi+0xe0],0x3f4ccccd
100114f7:	cc 4c 3f 
100114fa:	8b 81 a4 01 00 00    	mov    eax,DWORD PTR [ecx+0x1a4]
10011500:	84 c0                	test   al,al
10011502:	79 0c                	jns    0x10011510
10011504:	c7 86 e0 00 00 00 00 	mov    DWORD PTR [esi+0xe0],0x40000000
1001150b:	00 00 40 
1001150e:	eb 11                	jmp    0x10011521
10011510:	a9 00 01 00 00       	test   eax,0x100
10011515:	74 0a                	je     0x10011521
10011517:	c7 86 e0 00 00 00 00 	mov    DWORD PTR [esi+0xe0],0x3fa00000
1001151e:	00 a0 3f 
10011521:	0f 2f 8e dc 00 00 00 	comiss xmm1,DWORD PTR [esi+0xdc]
10011528:	72 0a                	jb     0x10011534
1001152a:	c7 86 dc 00 00 00 00 	mov    DWORD PTR [esi+0xdc],0x3f800000
10011531:	00 80 3f 
10011534:	f3 0f 10 41 44       	movss  xmm0,DWORD PTR [ecx+0x44]
10011539:	0f 2e 05 34 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f34
10011540:	9f                   	lahf
10011541:	f6 c4 44             	test   ah,0x44
10011544:	7a 63                	jp     0x100115a9
10011546:	f3 0f 10 41 48       	movss  xmm0,DWORD PTR [ecx+0x48]
1001154b:	0f 2e 05 38 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f38
10011552:	9f                   	lahf
10011553:	f6 c4 44             	test   ah,0x44
10011556:	7a 51                	jp     0x100115a9
10011558:	f3 0f 10 41 4c       	movss  xmm0,DWORD PTR [ecx+0x4c]
1001155d:	0f 2e 05 3c 2f 22 10 	ucomiss xmm0,DWORD PTR ds:0x10222f3c
10011564:	9f                   	lahf
10011565:	f6 c4 44             	test   ah,0x44
10011568:	7a 3f                	jp     0x100115a9
1001156a:	8b 81 a4 01 00 00    	mov    eax,DWORD PTR [ecx+0x1a4]
10011570:	a8 04                	test   al,0x4
10011572:	74 0f                	je     0x10011583
10011574:	0f 57 c0             	xorps  xmm0,xmm0
10011577:	c7 45 fc 00 00 80 3f 	mov    DWORD PTR [ebp-0x4],0x3f800000
1001157e:	0f 14 c1             	unpcklps xmm0,xmm1
10011581:	eb 1b                	jmp    0x1001159e
10011583:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
1001158a:	a8 08                	test   al,0x8
1001158c:	74 0a                	je     0x10011598
1001158e:	0f 14 d1             	unpcklps xmm2,xmm1
10011591:	66 0f d6 51 44       	movq   QWORD PTR [ecx+0x44],xmm2
10011596:	eb 0b                	jmp    0x100115a3
10011598:	0f 57 c0             	xorps  xmm0,xmm0
1001159b:	0f 14 c2             	unpcklps xmm0,xmm2
1001159e:	66 0f d6 41 44       	movq   QWORD PTR [ecx+0x44],xmm0
100115a3:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100115a6:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
100115a9:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100115ac:	f6 81 a4 01 00 00 02 	test   BYTE PTR [ecx+0x1a4],0x2
100115b3:	74 39                	je     0x100115ee
100115b5:	f3 0f 10 59 44       	movss  xmm3,DWORD PTR [ecx+0x44]
100115ba:	f3 0f 10 51 48       	movss  xmm2,DWORD PTR [ecx+0x48]
100115bf:	f3 0f 10 0d d0 13 1a 	movss  xmm1,DWORD PTR ds:0x101a13d0
100115c6:	10 
100115c7:	f3 0f 10 41 4c       	movss  xmm0,DWORD PTR [ecx+0x4c]
100115cc:	f3 0f 59 d9          	mulss  xmm3,xmm1
100115d0:	f3 0f 59 d1          	mulss  xmm2,xmm1
100115d4:	f3 0f 59 c1          	mulss  xmm0,xmm1
100115d8:	0f 14 da             	unpcklps xmm3,xmm2
100115db:	66 0f d6 59 44       	movq   QWORD PTR [ecx+0x44],xmm3
100115e0:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100115e5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100115e8:	89 41 4c             	mov    DWORD PTR [ecx+0x4c],eax
100115eb:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100115ee:	f6 81 a4 01 00 00 40 	test   BYTE PTR [ecx+0x1a4],0x40
100115f5:	74 19                	je     0x10011610
100115f7:	c7 81 0c 01 00 00 00 	mov    DWORD PTR [ecx+0x10c],0x0
100115fe:	00 00 00 
10011601:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10011604:	c7 80 10 01 00 00 ff 	mov    DWORD PTR [eax+0x110],0xffffffff
1001160b:	ff ff ff 
1001160e:	eb 0a                	jmp    0x1001161a
10011610:	c7 81 0c 01 00 00 04 	mov    DWORD PTR [ecx+0x10c],0x4
10011617:	00 00 00 
1001161a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001161d:	c7 80 08 01 00 00 07 	mov    DWORD PTR [eax+0x108],0x7
10011624:	00 00 00 
10011627:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001162a:	83 c0 08             	add    eax,0x8
1001162d:	50                   	push   eax
1001162e:	56                   	push   esi
1001162f:	e8 ac 89 10 00       	call   0x10119fe0
10011634:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10011637:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1001163c:	8b 8a b8 00 00 00    	mov    ecx,DWORD PTR [edx+0xb8]
10011642:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10011648:	51                   	push   ecx
10011649:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
1001164f:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
10011655:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10011658:	0f 57 c0             	xorps  xmm0,xmm0
1001165b:	83 c4 10             	add    esp,0x10
1001165e:	c7 86 80 00 00 00 90 	mov    DWORD PTR [esi+0x80],0x10010f90
10011665:	0f 01 10 
10011668:	0f 2f 80 fc 01 00 00 	comiss xmm0,DWORD PTR [eax+0x1fc]
1001166f:	72 0d                	jb     0x1001167e
10011671:	c7 80 fc 01 00 00 00 	mov    DWORD PTR [eax+0x1fc],0x0
10011678:	00 00 00 
1001167b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1001167e:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
10011685:	75 09                	jne    0x10011690
10011687:	83 b8 d0 01 00 00 00 	cmp    DWORD PTR [eax+0x1d0],0x0
1001168e:	75 19                	jne    0x100116a9
10011690:	8b 06                	mov    eax,DWORD PTR [esi]
10011692:	51                   	push   ecx
10011693:	8b ce                	mov    ecx,esi
10011695:	c7 46 78 80 24 01 10 	mov    DWORD PTR [esi+0x78],0x10012480
1001169c:	c7 04 24 00 00 c0 3f 	mov    DWORD PTR [esp],0x3fc00000
100116a3:	ff 50 08             	call   DWORD PTR [eax+0x8]
100116a6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100116a9:	f6 80 a4 01 00 00 20 	test   BYTE PTR [eax+0x1a4],0x20
100116b0:	74 07                	je     0x100116b9
100116b2:	c7 46 7c e0 02 01 10 	mov    DWORD PTR [esi+0x7c],0x100102e0
100116b9:	8b 06                	mov    eax,DWORD PTR [esi]
100116bb:	8b ce                	mov    ecx,esi
100116bd:	ff 50 30             	call   DWORD PTR [eax+0x30]
100116c0:	5e                   	pop    esi
100116c1:	8b e5                	mov    esp,ebp
100116c3:	5d                   	pop    ebp
100116c4:	c3                   	ret
