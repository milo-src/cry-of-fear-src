
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c1700 <.text+0xc0700>:
100c1700:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c1705:	56                   	push   esi
100c1706:	8b f1                	mov    esi,ecx
100c1708:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100c170e:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100c1711:	03 02                	add    eax,DWORD PTR [edx]
100c1713:	50                   	push   eax
100c1714:	68 24 51 1d 10       	push   0x101d5124
100c1719:	6a 01                	push   0x1
100c171b:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c1721:	8b 86 24 02 00 00    	mov    eax,DWORD PTR [esi+0x224]
100c1727:	83 c4 0c             	add    esp,0xc
100c172a:	83 f8 08             	cmp    eax,0x8
100c172d:	73 17                	jae    0x100c1746
100c172f:	ff 34 85 bc 76 21 10 	push   DWORD PTR [eax*4+0x102176bc]
100c1736:	68 2c 51 1d 10       	push   0x101d512c
100c173b:	6a 01                	push   0x1
100c173d:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c1743:	83 c4 0c             	add    esp,0xc
100c1746:	a1 c8 11 21 10       	mov    eax,ds:0x102111c8
100c174b:	33 c9                	xor    ecx,ecx
100c174d:	85 c0                	test   eax,eax
100c174f:	74 2f                	je     0x100c1780
100c1751:	8b 96 14 02 00 00    	mov    edx,DWORD PTR [esi+0x214]
100c1757:	3b c2                	cmp    eax,edx
100c1759:	74 0e                	je     0x100c1769
100c175b:	8b 04 cd d0 11 21 10 	mov    eax,DWORD PTR [ecx*8+0x102111d0]
100c1762:	41                   	inc    ecx
100c1763:	85 c0                	test   eax,eax
100c1765:	75 f0                	jne    0x100c1757
100c1767:	eb 17                	jmp    0x100c1780
100c1769:	ff 34 cd cc 11 21 10 	push   DWORD PTR [ecx*8+0x102111cc]
100c1770:	68 38 51 1d 10       	push   0x101d5138
100c1775:	6a 01                	push   0x1
100c1777:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c177d:	83 c4 0c             	add    esp,0xc
100c1780:	8b 86 30 02 00 00    	mov    eax,DWORD PTR [esi+0x230]
100c1786:	85 c0                	test   eax,eax
100c1788:	74 43                	je     0x100c17cd
100c178a:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
100c178d:	b9 48 51 1d 10       	mov    ecx,0x101d5148
100c1792:	85 c0                	test   eax,eax
100c1794:	0f 45 c8             	cmovne ecx,eax
100c1797:	51                   	push   ecx
100c1798:	68 50 51 1d 10       	push   0x101d5150
100c179d:	6a 01                	push   0x1
100c179f:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c17a5:	83 c4 0c             	add    esp,0xc
100c17a8:	8b ce                	mov    ecx,esi
100c17aa:	e8 31 98 f4 ff       	call   0x1000afe0
100c17af:	85 c0                	test   eax,eax
100c17b1:	74 2a                	je     0x100c17dd
100c17b3:	ff b6 34 02 00 00    	push   DWORD PTR [esi+0x234]
100c17b9:	ff 30                	push   DWORD PTR [eax]
100c17bb:	68 60 51 1d 10       	push   0x101d5160
100c17c0:	6a 01                	push   0x1
100c17c2:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c17c8:	83 c4 10             	add    esp,0x10
100c17cb:	eb 10                	jmp    0x100c17dd
100c17cd:	68 70 51 1d 10       	push   0x101d5170
100c17d2:	6a 01                	push   0x1
100c17d4:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c17da:	83 c4 08             	add    esp,0x8
100c17dd:	57                   	push   edi
100c17de:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
100c17e4:	e8 97 5f f5 ff       	call   0x10017780
100c17e9:	85 c0                	test   eax,eax
100c17eb:	74 2e                	je     0x100c181b
100c17ed:	8d 8e 84 01 00 00    	lea    ecx,[esi+0x184]
100c17f3:	e8 a8 5f f5 ff       	call   0x100177a0
100c17f8:	8b 48 04             	mov    ecx,DWORD PTR [eax+0x4]
100c17fb:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c1800:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100c1806:	03 01                	add    eax,DWORD PTR [ecx]
100c1808:	50                   	push   eax
100c1809:	68 80 51 1d 10       	push   0x101d5180
100c180e:	6a 01                	push   0x1
100c1810:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c1816:	83 c4 0c             	add    esp,0xc
100c1819:	eb 10                	jmp    0x100c182b
100c181b:	68 90 51 1d 10       	push   0x101d5190
100c1820:	6a 01                	push   0x1
100c1822:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c1828:	83 c4 08             	add    esp,0x8
100c182b:	8b 06                	mov    eax,DWORD PTR [esi]
100c182d:	8b ce                	mov    ecx,esi
100c182f:	ff 90 9c 00 00 00    	call   DWORD PTR [eax+0x9c]
100c1835:	85 c0                	test   eax,eax
100c1837:	74 69                	je     0x100c18a2
100c1839:	68 9c 51 1d 10       	push   0x101d519c
100c183e:	6a 01                	push   0x1
100c1840:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c1846:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c184b:	83 c4 08             	add    esp,0x8
100c184e:	f3 0f 10 86 10 02 00 	movss  xmm0,DWORD PTR [esi+0x210]
100c1855:	00 
100c1856:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
100c185a:	0f 2f c1             	comiss xmm0,xmm1
100c185d:	76 21                	jbe    0x100c1880
100c185f:	f3 0f 5c c1          	subss  xmm0,xmm1
100c1863:	83 ec 08             	sub    esp,0x8
100c1866:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c1869:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100c186e:	68 a8 51 1d 10       	push   0x101d51a8
100c1873:	6a 01                	push   0x1
100c1875:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c187b:	83 c4 10             	add    esp,0x10
100c187e:	eb 22                	jmp    0x100c18a2
100c1880:	8b 06                	mov    eax,DWORD PTR [esi]
100c1882:	8b ce                	mov    ecx,esi
100c1884:	ff 90 68 01 00 00    	call   DWORD PTR [eax+0x168]
100c188a:	39 86 18 02 00 00    	cmp    DWORD PTR [esi+0x218],eax
100c1890:	75 10                	jne    0x100c18a2
100c1892:	68 c0 51 1d 10       	push   0x101d51c0
100c1897:	6a 01                	push   0x1
100c1899:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c189f:	83 c4 08             	add    esp,0x8
100c18a2:	8b 06                	mov    eax,DWORD PTR [esi]
100c18a4:	8b ce                	mov    ecx,esi
100c18a6:	ff 50 7c             	call   DWORD PTR [eax+0x7c]
100c18a9:	8b f8                	mov    edi,eax
100c18ab:	85 ff                	test   edi,edi
100c18ad:	74 60                	je     0x100c190f
100c18af:	53                   	push   ebx
100c18b0:	8d 8f 68 03 00 00    	lea    ecx,[edi+0x368]
100c18b6:	e8 c5 5e f5 ff       	call   0x10017780
100c18bb:	85 c0                	test   eax,eax
100c18bd:	75 10                	jne    0x100c18cf
100c18bf:	68 d4 51 1d 10       	push   0x101d51d4
100c18c4:	6a 01                	push   0x1
100c18c6:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c18cc:	83 c4 08             	add    esp,0x8
100c18cf:	68 dc 51 1d 10       	push   0x101d51dc
100c18d4:	6a 01                	push   0x1
100c18d6:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c18dc:	83 c4 08             	add    esp,0x8
100c18df:	8d 8f 68 03 00 00    	lea    ecx,[edi+0x368]
100c18e5:	e8 a6 5e f5 ff       	call   0x10017790
100c18ea:	5b                   	pop    ebx
100c18eb:	3b c7                	cmp    eax,edi
100c18ed:	74 10                	je     0x100c18ff
100c18ef:	68 d4 51 1d 10       	push   0x101d51d4
100c18f4:	6a 01                	push   0x1
100c18f6:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c18fc:	83 c4 08             	add    esp,0x8
100c18ff:	68 e8 51 1d 10       	push   0x101d51e8
100c1904:	6a 01                	push   0x1
100c1906:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c190c:	83 c4 08             	add    esp,0x8
100c190f:	68 c8 84 1a 10       	push   0x101a84c8
100c1914:	6a 01                	push   0x1
100c1916:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c191c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c191f:	f3 0f 10 80 64 01 00 	movss  xmm0,DWORD PTR [eax+0x164]
100c1926:	00 
100c1927:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c192a:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100c192f:	83 ec 08             	sub    esp,0x8
100c1932:	f3 0f 10 80 b0 00 00 	movss  xmm0,DWORD PTR [eax+0xb0]
100c1939:	00 
100c193a:	0f 5a c0             	cvtps2pd xmm0,xmm0
100c193d:	f2 0f 11 04 24       	movsd  QWORD PTR [esp],xmm0
100c1942:	68 f0 51 1d 10       	push   0x101d51f0
100c1947:	6a 01                	push   0x1
100c1949:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c194f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c1952:	83 c4 18             	add    esp,0x18
100c1955:	f6 80 a4 01 00 00 10 	test   BYTE PTR [eax+0x1a4],0x10
100c195c:	5f                   	pop    edi
100c195d:	74 13                	je     0x100c1972
100c195f:	68 10 52 1d 10       	push   0x101d5210
100c1964:	6a 01                	push   0x1
100c1966:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c196c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100c196f:	83 c4 08             	add    esp,0x8
100c1972:	f7 80 a4 01 00 00 00 	test   DWORD PTR [eax+0x1a4],0x100
100c1979:	01 00 00 
100c197c:	5e                   	pop    esi
100c197d:	74 10                	je     0x100c198f
100c197f:	68 1c 52 1d 10       	push   0x101d521c
100c1984:	6a 01                	push   0x1
100c1986:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c198c:	83 c4 08             	add    esp,0x8
100c198f:	68 c8 84 1a 10       	push   0x101a84c8
100c1994:	6a 01                	push   0x1
100c1996:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c199c:	83 c4 08             	add    esp,0x8
100c199f:	c3                   	ret
