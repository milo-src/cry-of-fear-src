
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b1540 <.text+0xb0540>:
100b1540:	55                   	push   ebp
100b1541:	8b ec                	mov    ebp,esp
100b1543:	83 ec 0c             	sub    esp,0xc
100b1546:	53                   	push   ebx
100b1547:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
100b154a:	56                   	push   esi
100b154b:	8b f1                	mov    esi,ecx
100b154d:	57                   	push   edi
100b154e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1551:	c7 80 b8 00 00 00 00 	mov    DWORD PTR [eax+0xb8],0x0
100b1558:	00 00 00 
100b155b:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b155e:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
100b1565:	00 00 00 
100b1568:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b156b:	c7 80 70 01 00 00 00 	mov    DWORD PTR [eax+0x170],0x0
100b1572:	00 00 00 
100b1575:	f3 0f 10 43 10       	movss  xmm0,DWORD PTR [ebx+0x10]
100b157a:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
100b1581:	9f                   	lahf
100b1582:	f6 c4 44             	test   ah,0x44
100b1585:	7b 64                	jnp    0x100b15eb
100b1587:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b158a:	f3 0f 10 63 24       	movss  xmm4,DWORD PTR [ebx+0x24]
100b158f:	f3 0f 10 53 28       	movss  xmm2,DWORD PTR [ebx+0x28]
100b1594:	f3 0f 10 43 2c       	movss  xmm0,DWORD PTR [ebx+0x2c]
100b1599:	f3 0f 10 99 e4 01 00 	movss  xmm3,DWORD PTR [ecx+0x1e4]
100b15a0:	00 
100b15a1:	f3 0f 5c 1d 50 ef 1b 	subss  xmm3,DWORD PTR ds:0x101bef50
100b15a8:	10 
100b15a9:	f3 0f 10 0d 24 ac 1c 	movss  xmm1,DWORD PTR ds:0x101cac24
100b15b0:	10 
100b15b1:	f3 0f 59 e3          	mulss  xmm4,xmm3
100b15b5:	f3 0f 59 d3          	mulss  xmm2,xmm3
100b15b9:	f3 0f 59 c3          	mulss  xmm0,xmm3
100b15bd:	f3 0f 59 e1          	mulss  xmm4,xmm1
100b15c1:	f3 0f 59 d1          	mulss  xmm2,xmm1
100b15c5:	f3 0f 58 63 14       	addss  xmm4,DWORD PTR [ebx+0x14]
100b15ca:	f3 0f 59 c1          	mulss  xmm0,xmm1
100b15ce:	f3 0f 58 53 18       	addss  xmm2,DWORD PTR [ebx+0x18]
100b15d3:	f3 0f 58 43 1c       	addss  xmm0,DWORD PTR [ebx+0x1c]
100b15d8:	0f 14 e2             	unpcklps xmm4,xmm2
100b15db:	66 0f d6 61 08       	movq   QWORD PTR [ecx+0x8],xmm4
100b15e0:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100b15e5:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100b15e8:	89 41 10             	mov    DWORD PTR [ecx+0x10],eax
100b15eb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b15ee:	83 c0 08             	add    eax,0x8
100b15f1:	50                   	push   eax
100b15f2:	e8 89 81 06 00       	call   0x10119780
100b15f7:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b15fa:	8b f8                	mov    edi,eax
100b15fc:	6a 00                	push   0x0
100b15fe:	83 c1 08             	add    ecx,0x8
100b1601:	51                   	push   ecx
100b1602:	6a 17                	push   0x17
100b1604:	6a 05                	push   0x5
100b1606:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100b160c:	6a 03                	push   0x3
100b160e:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100b1614:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1617:	83 c4 14             	add    esp,0x14
100b161a:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100b161f:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100b1624:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100b162a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b162d:	f3 0f 10 40 0c       	movss  xmm0,DWORD PTR [eax+0xc]
100b1632:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100b1637:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100b163d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1640:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
100b1645:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100b164a:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100b1650:	0f bf 05 10 1f 23 10 	movsx  eax,WORD PTR ds:0x10231f10
100b1657:	83 c4 04             	add    esp,0x4
100b165a:	83 ff fd             	cmp    edi,0xfffffffd
100b165d:	75 07                	jne    0x100b1666
100b165f:	0f bf 05 18 1f 23 10 	movsx  eax,WORD PTR ds:0x10231f18
100b1666:	50                   	push   eax
100b1667:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100b166d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1670:	83 c4 04             	add    esp,0x4
100b1673:	f3 0f 10 80 e4 01 00 	movss  xmm0,DWORD PTR [eax+0x1e4]
100b167a:	00 
100b167b:	f3 0f 5c 05 fc 1e 1a 	subss  xmm0,DWORD PTR ds:0x101a1efc
100b1682:	10 
100b1683:	0f 5a c0             	cvtps2pd xmm0,xmm0
100b1686:	f2 0f 59 05 00 94 1b 	mulsd  xmm0,QWORD PTR ds:0x101b9400
100b168d:	10 
100b168e:	f2 0f 2c c0          	cvttsd2si eax,xmm0
100b1692:	50                   	push   eax
100b1693:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100b1699:	6a 0f                	push   0xf
100b169b:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100b16a1:	6a 00                	push   0x0
100b16a3:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100b16a9:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100b16af:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b16b2:	6a 00                	push   0x0
100b16b4:	83 c0 08             	add    eax,0x8
100b16b7:	50                   	push   eax
100b16b8:	ff 35 5c 65 22 10    	push   DWORD PTR ds:0x1022655c
100b16be:	6a 05                	push   0x5
100b16c0:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100b16c6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b16c9:	83 c4 18             	add    esp,0x18
100b16cc:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100b16d1:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100b16d6:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100b16dc:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b16df:	f3 0f 10 40 0c       	movss  xmm0,DWORD PTR [eax+0xc]
100b16e4:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100b16e9:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100b16ef:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b16f2:	f3 0f 10 40 10       	movss  xmm0,DWORD PTR [eax+0x10]
100b16f7:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100b16fc:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100b1702:	6a 23                	push   0x23
100b1704:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100b170a:	6a 0f                	push   0xf
100b170c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100b1712:	6a 1e                	push   0x1e
100b1714:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100b171a:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100b1720:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1723:	83 c4 0c             	add    esp,0xc
100b1726:	83 c0 08             	add    eax,0x8
100b1729:	c7 04 24 00 00 40 40 	mov    DWORD PTR [esp],0x40400000
100b1730:	68 00 04 00 00       	push   0x400
100b1735:	50                   	push   eax
100b1736:	6a 01                	push   0x1
100b1738:	e8 e3 f0 04 00       	call   0x10100820
100b173d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1740:	83 c4 10             	add    esp,0x10
100b1743:	8b 90 9c 01 00 00    	mov    edx,DWORD PTR [eax+0x19c]
100b1749:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100b174c:	c7 80 9c 01 00 00 00 	mov    DWORD PTR [eax+0x19c],0x0
100b1753:	00 00 00 
100b1756:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b1759:	8d 82 80 00 00 00    	lea    eax,[edx+0x80]
100b175f:	f7 da                	neg    edx
100b1761:	6a 00                	push   0x0
100b1763:	51                   	push   ecx
100b1764:	f3 0f 10 81 e4 01 00 	movss  xmm0,DWORD PTR [ecx+0x1e4]
100b176b:	00 
100b176c:	1b d2                	sbb    edx,edx
100b176e:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100b1773:	23 d0                	and    edx,eax
100b1775:	52                   	push   edx
100b1776:	51                   	push   ecx
100b1777:	8b ce                	mov    ecx,esi
100b1779:	e8 62 92 fd ff       	call   0x1008a9e0
100b177e:	83 ec 08             	sub    esp,0x8
100b1781:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3f800000
100b1788:	3f 
100b1789:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100b1790:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
100b1796:	f3 0f 10 05 d8 1d 1a 	movss  xmm0,DWORD PTR ds:0x101a1dd8
100b179d:	10 
100b179e:	33 c0                	xor    eax,eax
100b17a0:	d9 5d 08             	fstp   DWORD PTR [ebp+0x8]
100b17a3:	0f 2f 45 08          	comiss xmm0,DWORD PTR [ebp+0x8]
100b17a7:	0f 96 c0             	setbe  al
100b17aa:	83 c0 0b             	add    eax,0xb
100b17ad:	50                   	push   eax
100b17ae:	53                   	push   ebx
100b17af:	e8 fc 68 06 00       	call   0x101180b0
100b17b4:	83 c4 08             	add    esp,0x8
100b17b7:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3f800000
100b17be:	3f 
100b17bf:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100b17c6:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
100b17cc:	6a 02                	push   0x2
100b17ce:	6a 00                	push   0x0
100b17d0:	dd d8                	fstp   st(0)
100b17d2:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100b17d8:	83 c4 10             	add    esp,0x10
100b17db:	83 e8 00             	sub    eax,0x0
100b17de:	74 43                	je     0x100b1823
100b17e0:	83 e8 01             	sub    eax,0x1
100b17e3:	74 21                	je     0x100b1806
100b17e5:	83 e8 01             	sub    eax,0x1
100b17e8:	75 67                	jne    0x100b1851
100b17ea:	6a 64                	push   0x64
100b17ec:	50                   	push   eax
100b17ed:	83 ec 08             	sub    esp,0x8
100b17f0:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100b17f7:	3f 
100b17f8:	c7 04 24 cd cc 0c 3f 	mov    DWORD PTR [esp],0x3f0ccccd
100b17ff:	68 50 eb 1c 10       	push   0x101ceb50
100b1804:	eb 38                	jmp    0x100b183e
100b1806:	6a 64                	push   0x64
100b1808:	6a 00                	push   0x0
100b180a:	83 ec 08             	sub    esp,0x8
100b180d:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100b1814:	3f 
100b1815:	c7 04 24 cd cc 0c 3f 	mov    DWORD PTR [esp],0x3f0ccccd
100b181c:	68 3c eb 1c 10       	push   0x101ceb3c
100b1821:	eb 1b                	jmp    0x100b183e
100b1823:	6a 64                	push   0x64
100b1825:	6a 00                	push   0x0
100b1827:	83 ec 08             	sub    esp,0x8
100b182a:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100b1831:	3f 
100b1832:	c7 04 24 cd cc 0c 3f 	mov    DWORD PTR [esp],0x3f0ccccd
100b1839:	68 28 eb 1c 10       	push   0x101ceb28
100b183e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1841:	6a 02                	push   0x2
100b1843:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100b1849:	e8 a2 b1 04 00       	call   0x100fc9f0
100b184e:	83 c4 1c             	add    esp,0x1c
100b1851:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b1854:	81 88 18 01 00 00 80 	or     DWORD PTR [eax+0x118],0x80
100b185b:	00 00 00 
100b185e:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100b1861:	83 c1 20             	add    ecx,0x20
100b1864:	c7 46 78 b0 1f 0b 10 	mov    DWORD PTR [esi+0x78],0x100b1fb0
100b186b:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
100b1872:	10 
100b1873:	51                   	push   ecx
100b1874:	c7 04 24 9a 99 99 3e 	mov    DWORD PTR [esp],0x3e99999a
100b187b:	66 0f d6 01          	movq   QWORD PTR [ecx],xmm0
100b187f:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
100b1884:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100b1887:	8b ce                	mov    ecx,esi
100b1889:	8b 06                	mov    eax,DWORD PTR [esi]
100b188b:	ff 50 08             	call   DWORD PTR [eax+0x8]
100b188e:	83 ff fd             	cmp    edi,0xfffffffd
100b1891:	74 39                	je     0x100b18cc
100b1893:	6a 03                	push   0x3
100b1895:	6a 00                	push   0x0
100b1897:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100b189d:	8b f8                	mov    edi,eax
100b189f:	83 c4 08             	add    esp,0x8
100b18a2:	85 ff                	test   edi,edi
100b18a4:	7e 26                	jle    0x100b18cc
100b18a6:	83 c3 24             	add    ebx,0x24
100b18a9:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100b18b0:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100b18b3:	6a 00                	push   0x0
100b18b5:	53                   	push   ebx
100b18b6:	83 c0 08             	add    eax,0x8
100b18b9:	50                   	push   eax
100b18ba:	68 00 ac 1c 10       	push   0x101cac00
100b18bf:	e8 8c 60 f6 ff       	call   0x10017950
100b18c4:	83 c4 10             	add    esp,0x10
100b18c7:	83 ef 01             	sub    edi,0x1
100b18ca:	75 e4                	jne    0x100b18b0
100b18cc:	5f                   	pop    edi
100b18cd:	5e                   	pop    esi
100b18ce:	5b                   	pop    ebx
100b18cf:	8b e5                	mov    esp,ebp
100b18d1:	5d                   	pop    ebp
100b18d2:	c2 08 00             	ret    0x8
