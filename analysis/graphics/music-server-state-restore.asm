
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f14c0 <.text+0xf04c0>:
100f14c0:	55                   	push   ebp
100f14c1:	8b ec                	mov    ebp,esp
100f14c3:	83 ec 18             	sub    esp,0x18
100f14c6:	56                   	push   esi
100f14c7:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100f14ca:	57                   	push   edi
100f14cb:	56                   	push   esi
100f14cc:	8b f9                	mov    edi,ecx
100f14ce:	e8 cd 04 fd ff       	call   0x100c19a0
100f14d3:	85 c0                	test   eax,eax
100f14d5:	75 08                	jne    0x100f14df
100f14d7:	5f                   	pop    edi
100f14d8:	5e                   	pop    esi
100f14d9:	8b e5                	mov    esp,ebp
100f14db:	5d                   	pop    ebp
100f14dc:	c2 04 00             	ret    0x4
100f14df:	53                   	push   ebx
100f14e0:	68 cf 00 00 00       	push   0xcf
100f14e5:	68 e8 7f 21 10       	push   0x10217fe8
100f14ea:	57                   	push   edi
100f14eb:	68 e4 b5 1d 10       	push   0x101db5e4
100f14f0:	8b ce                	mov    ecx,esi
100f14f2:	e8 19 5b 02 00       	call   0x10117010
100f14f7:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
100f14fd:	8b d8                	mov    ebx,eax
100f14ff:	8b 89 9c 00 00 00    	mov    ecx,DWORD PTR [ecx+0x9c]
100f1505:	83 b9 2c 05 00 00 00 	cmp    DWORD PTR [ecx+0x52c],0x0
100f150c:	0f 85 a1 00 00 00    	jne    0x100f15b3
100f1512:	81 c1 30 05 00 00    	add    ecx,0x530
100f1518:	51                   	push   ecx
100f1519:	68 f4 b5 1d 10       	push   0x101db5f4
100f151e:	6a 01                	push   0x1
100f1520:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100f1526:	57                   	push   edi
100f1527:	e8 54 dc fe ff       	call   0x100df180
100f152c:	8b d0                	mov    edx,eax
100f152e:	83 c4 10             	add    esp,0x10
100f1531:	85 d2                	test   edx,edx
100f1533:	75 09                	jne    0x100f153e
100f1535:	33 c9                	xor    ecx,ecx
100f1537:	be 80 00 00 00       	mov    esi,0x80
100f153c:	eb 08                	jmp    0x100f1546
100f153e:	8d 8a 80 00 00 00    	lea    ecx,[edx+0x80]
100f1544:	8b f1                	mov    esi,ecx
100f1546:	f3 0f 10 51 08       	movss  xmm2,DWORD PTR [ecx+0x8]
100f154b:	0f 57 c0             	xorps  xmm0,xmm0
100f154e:	f3 0f 10 49 0c       	movss  xmm1,DWORD PTR [ecx+0xc]
100f1553:	f3 0f 58 d0          	addss  xmm2,xmm0
100f1557:	f3 0f 58 c8          	addss  xmm1,xmm0
100f155b:	f3 0f 10 41 10       	movss  xmm0,DWORD PTR [ecx+0x10]
100f1560:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
100f1567:	10 
100f1568:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100f156b:	0f 14 d1             	unpcklps xmm2,xmm1
100f156e:	66 0f d6 51 08       	movq   QWORD PTR [ecx+0x8],xmm2
100f1573:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
100f1578:	8b 45 f0             	mov    eax,DWORD PTR [ebp-0x10]
100f157b:	89 41 10             	mov    DWORD PTR [ecx+0x10],eax
100f157e:	33 c0                	xor    eax,eax
100f1580:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100f1583:	85 d2                	test   edx,edx
100f1585:	0f 44 f0             	cmove  esi,eax
100f1588:	f3 0f 7e 46 50       	movq   xmm0,QWORD PTR [esi+0x50]
100f158d:	66 0f d6 41 50       	movq   QWORD PTR [ecx+0x50],xmm0
100f1592:	8b 46 58             	mov    eax,DWORD PTR [esi+0x58]
100f1595:	89 41 58             	mov    DWORD PTR [ecx+0x58],eax
100f1598:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100f159b:	f3 0f 7e 41 08       	movq   xmm0,QWORD PTR [ecx+0x8]
100f15a0:	66 0f d6 87 18 06 00 	movq   QWORD PTR [edi+0x618],xmm0
100f15a7:	00 
100f15a8:	8b 41 10             	mov    eax,DWORD PTR [ecx+0x10]
100f15ab:	89 87 20 06 00 00    	mov    DWORD PTR [edi+0x620],eax
100f15b1:	eb 03                	jmp    0x100f15b6
100f15b3:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100f15b6:	c7 41 7c 00 00 00 00 	mov    DWORD PTR [ecx+0x7c],0x0
100f15bd:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100f15c0:	f3 0f 7e 41 74       	movq   xmm0,QWORD PTR [ecx+0x74]
100f15c5:	66 0f d6 41 50       	movq   QWORD PTR [ecx+0x50],xmm0
100f15ca:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
100f15cd:	89 41 58             	mov    DWORD PTR [ecx+0x58],eax
100f15d0:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f15d3:	c7 80 a0 00 00 00 01 	mov    DWORD PTR [eax+0xa0],0x1
100f15da:	00 00 00 
100f15dd:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f15e0:	c7 87 1c 03 00 00 f7 	mov    DWORD PTR [edi+0x31c],0xf7
100f15e7:	00 00 00 
100f15ea:	8b 80 b4 00 00 00    	mov    eax,DWORD PTR [eax+0xb4]
100f15f0:	a3 f8 2e 22 10       	mov    ds:0x10222ef8,eax
100f15f5:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f15f8:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x4000
100f15ff:	40 00 00 
100f1602:	74 33                	je     0x100f1637
100f1604:	8d 4d f4             	lea    ecx,[ebp-0xc]
100f1607:	c7 45 f4 00 00 80 41 	mov    DWORD PTR [ebp-0xc],0x41800000
100f160e:	51                   	push   ecx
100f160f:	c7 45 f8 00 00 80 41 	mov    DWORD PTR [ebp-0x8],0x41800000
100f1616:	8d 4d e8             	lea    ecx,[ebp-0x18]
100f1619:	c7 45 fc 00 00 90 41 	mov    DWORD PTR [ebp-0x4],0x41900000
100f1620:	c7 45 e8 00 00 80 c1 	mov    DWORD PTR [ebp-0x18],0xc1800000
100f1627:	c7 45 ec 00 00 80 c1 	mov    DWORD PTR [ebp-0x14],0xc1800000
100f162e:	c7 45 f0 00 00 90 c1 	mov    DWORD PTR [ebp-0x10],0xc1900000
100f1635:	eb 31                	jmp    0x100f1668
100f1637:	8d 4d e8             	lea    ecx,[ebp-0x18]
100f163a:	c7 45 e8 00 00 80 41 	mov    DWORD PTR [ebp-0x18],0x41800000
100f1641:	51                   	push   ecx
100f1642:	c7 45 ec 00 00 80 41 	mov    DWORD PTR [ebp-0x14],0x41800000
100f1649:	8d 4d f4             	lea    ecx,[ebp-0xc]
100f164c:	c7 45 f0 00 00 10 42 	mov    DWORD PTR [ebp-0x10],0x42100000
100f1653:	c7 45 f4 00 00 80 c1 	mov    DWORD PTR [ebp-0xc],0xc1800000
100f165a:	c7 45 f8 00 00 80 c1 	mov    DWORD PTR [ebp-0x8],0xc1800000
100f1661:	c7 45 fc 00 00 10 c2 	mov    DWORD PTR [ebp-0x4],0xc2100000
100f1668:	51                   	push   ecx
100f1669:	50                   	push   eax
100f166a:	e8 c1 89 02 00       	call   0x1011a030
100f166f:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f1672:	83 c4 0c             	add    esp,0xc
100f1675:	68 f4 e9 1b 10       	push   0x101be9f4
100f167a:	68 84 b5 1d 10       	push   0x101db584
100f167f:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f1685:	ff 15 28 31 22 10    	call   DWORD PTR ds:0x10223128
100f168b:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f168e:	83 c4 0c             	add    esp,0xc
100f1691:	83 bf ec 24 00 00 00 	cmp    DWORD PTR [edi+0x24ec],0x0
100f1698:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100f169e:	74 07                	je     0x100f16a7
100f16a0:	68 f4 e9 1b 10       	push   0x101be9f4
100f16a5:	eb 05                	jmp    0x100f16ac
100f16a7:	68 34 12 1a 10       	push   0x101a1234
100f16ac:	68 74 1d 1a 10       	push   0x101a1d74
100f16b1:	50                   	push   eax
100f16b2:	ff 15 28 31 22 10    	call   DWORD PTR ds:0x10223128
100f16b8:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f16be:	83 c4 0c             	add    esp,0xc
100f16c1:	85 c9                	test   ecx,ecx
100f16c3:	74 36                	je     0x100f16fb
100f16c5:	8b 01                	mov    eax,DWORD PTR [ecx]
100f16c7:	ff 50 20             	call   DWORD PTR [eax+0x20]
100f16ca:	85 c0                	test   eax,eax
100f16cc:	75 2d                	jne    0x100f16fb
100f16ce:	80 bf 3c 04 00 00 00 	cmp    BYTE PTR [edi+0x43c],0x0
100f16d5:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f16d8:	8b 80 0c 02 00 00    	mov    eax,DWORD PTR [eax+0x20c]
100f16de:	75 07                	jne    0x100f16e7
100f16e0:	68 34 12 1a 10       	push   0x101a1234
100f16e5:	eb 05                	jmp    0x100f16ec
100f16e7:	68 f4 e9 1b 10       	push   0x101be9f4
100f16ec:	68 70 14 1a 10       	push   0x101a1470
100f16f1:	50                   	push   eax
100f16f2:	ff 15 28 31 22 10    	call   DWORD PTR ds:0x10223128
100f16f8:	83 c4 0c             	add    esp,0xc
100f16fb:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f16fe:	68 28 b7 1c 10       	push   0x101cb728
100f1703:	8b b0 0c 02 00 00    	mov    esi,DWORD PTR [eax+0x20c]
100f1709:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
100f170f:	50                   	push   eax
100f1710:	68 8c 1c 1a 10       	push   0x101a1c8c
100f1715:	56                   	push   esi
100f1716:	ff 15 28 31 22 10    	call   DWORD PTR ds:0x10223128
100f171c:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f171f:	68 40 b7 1c 10       	push   0x101cb740
100f1724:	8b b0 0c 02 00 00    	mov    esi,DWORD PTR [eax+0x20c]
100f172a:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
100f1730:	50                   	push   eax
100f1731:	68 90 1c 1a 10       	push   0x101a1c90
100f1736:	56                   	push   esi
100f1737:	ff 15 28 31 22 10    	call   DWORD PTR ds:0x10223128
100f173d:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
100f1740:	68 54 b7 1c 10       	push   0x101cb754
100f1745:	8b b0 0c 02 00 00    	mov    esi,DWORD PTR [eax+0x20c]
100f174b:	ff 15 30 30 22 10    	call   DWORD PTR ds:0x10223030
100f1751:	50                   	push   eax
100f1752:	68 94 1c 1a 10       	push   0x101a1c94
100f1757:	56                   	push   esi
100f1758:	ff 15 28 31 22 10    	call   DWORD PTR ds:0x10223128
100f175e:	83 c4 30             	add    esp,0x30
100f1761:	8b cf                	mov    ecx,edi
100f1763:	ff b7 34 23 00 00    	push   DWORD PTR [edi+0x2334]
100f1769:	e8 72 22 00 00       	call   0x100f39e0
100f176e:	8b 87 10 23 00 00    	mov    eax,DWORD PTR [edi+0x2310]
100f1774:	85 c0                	test   eax,eax
100f1776:	74 12                	je     0x100f178a
100f1778:	51                   	push   ecx
100f1779:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100f1780:	8b cf                	mov    ecx,edi
100f1782:	6a 01                	push   0x1
100f1784:	50                   	push   eax
100f1785:	e8 36 8e ff ff       	call   0x100ea5c0
100f178a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f178f:	68 04 b6 1d 10       	push   0x101db604
100f1794:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100f1798:	f3 0f 11 05 78 64 22 	movss  DWORD PTR ds:0x10226478,xmm0
100f179f:	10 
100f17a0:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
100f17a6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f17ab:	83 c4 04             	add    esp,0x4
100f17ae:	d9 1d 64 1f 23 10    	fstp   DWORD PTR ds:0x10231f64
100f17b4:	c6 05 76 64 22 10 01 	mov    BYTE PTR ds:0x10226476,0x1
100f17bb:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100f17bf:	8b c3                	mov    eax,ebx
100f17c1:	5b                   	pop    ebx
100f17c2:	f3 0f 11 87 14 06 00 	movss  DWORD PTR [edi+0x614],xmm0
100f17c9:	00 
100f17ca:	f3 0f 11 87 38 04 00 	movss  DWORD PTR [edi+0x438],xmm0
100f17d1:	00 
100f17d2:	5f                   	pop    edi
100f17d3:	5e                   	pop    esi
100f17d4:	8b e5                	mov    esp,ebp
100f17d6:	5d                   	pop    ebp
100f17d7:	c2 04 00             	ret    0x4
