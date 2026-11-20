
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100e1690 <.text+0xe0690>:
100e1690:	55                   	push   ebp
100e1691:	8b ec                	mov    ebp,esp
100e1693:	6a ff                	push   0xffffffff
100e1695:	68 01 e0 19 10       	push   0x1019e001
100e169a:	64 a1 00 00 00 00    	mov    eax,fs:0x0
100e16a0:	50                   	push   eax
100e16a1:	81 ec a0 04 00 00    	sub    esp,0x4a0
100e16a7:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
100e16ac:	33 c5                	xor    eax,ebp
100e16ae:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
100e16b1:	53                   	push   ebx
100e16b2:	56                   	push   esi
100e16b3:	57                   	push   edi
100e16b4:	50                   	push   eax
100e16b5:	8d 45 f4             	lea    eax,[ebp-0xc]
100e16b8:	64 a3 00 00 00 00    	mov    fs:0x0,eax
100e16be:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
100e16c4:	50                   	push   eax
100e16c5:	ff 15 d4 30 22 10    	call   DWORD PTR ds:0x102230d4
100e16cb:	8d 8d f0 fd ff ff    	lea    ecx,[ebp-0x210]
100e16d1:	83 c4 04             	add    esp,0x4
100e16d4:	49                   	dec    ecx
100e16d5:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100e16d8:	8d 49 01             	lea    ecx,[ecx+0x1]
100e16db:	84 c0                	test   al,al
100e16dd:	75 f6                	jne    0x100e16d5
100e16df:	a1 84 d3 1d 10       	mov    eax,ds:0x101dd384
100e16e4:	89 01                	mov    DWORD PTR [ecx],eax
100e16e6:	a1 88 d3 1d 10       	mov    eax,ds:0x101dd388
100e16eb:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100e16ee:	a1 8c d3 1d 10       	mov    eax,ds:0x101dd38c
100e16f3:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
100e16f6:	a1 90 d3 1d 10       	mov    eax,ds:0x101dd390
100e16fb:	89 41 0c             	mov    DWORD PTR [ecx+0xc],eax
100e16fe:	a1 94 d3 1d 10       	mov    eax,ds:0x101dd394
100e1703:	89 41 10             	mov    DWORD PTR [ecx+0x10],eax
100e1706:	8d 85 f0 fc ff ff    	lea    eax,[ebp-0x310]
100e170c:	50                   	push   eax
100e170d:	ff 15 d4 30 22 10    	call   DWORD PTR ds:0x102230d4
100e1713:	8d 8d f0 fc ff ff    	lea    ecx,[ebp-0x310]
100e1719:	83 c4 04             	add    esp,0x4
100e171c:	49                   	dec    ecx
100e171d:	0f 1f 00             	nop    DWORD PTR [eax]
100e1720:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
100e1723:	8d 49 01             	lea    ecx,[ecx+0x1]
100e1726:	84 c0                	test   al,al
100e1728:	75 f6                	jne    0x100e1720
100e172a:	a1 98 d3 1d 10       	mov    eax,ds:0x101dd398
100e172f:	89 01                	mov    DWORD PTR [ecx],eax
100e1731:	a1 9c d3 1d 10       	mov    eax,ds:0x101dd39c
100e1736:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
100e1739:	a0 a0 d3 1d 10       	mov    al,ds:0x101dd3a0
100e173e:	6a 01                	push   0x1
100e1740:	6a 40                	push   0x40
100e1742:	88 41 08             	mov    BYTE PTR [ecx+0x8],al
100e1745:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
100e174b:	6a 01                	push   0x1
100e174d:	50                   	push   eax
100e174e:	8d 8d 54 fb ff ff    	lea    ecx,[ebp-0x4ac]
100e1754:	e8 77 e1 f4 ff       	call   0x1002f8d0
100e1759:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100e1760:	c7 85 e8 fc ff ff 00 	mov    DWORD PTR [ebp-0x318],0x0
100e1767:	00 00 00 
100e176a:	c7 85 ec fc ff ff 0f 	mov    DWORD PTR [ebp-0x314],0xf
100e1771:	00 00 00 
100e1774:	c6 85 d8 fc ff ff 00 	mov    BYTE PTR [ebp-0x328],0x0
100e177b:	6a 01                	push   0x1
100e177d:	6a 40                	push   0x40
100e177f:	6a 02                	push   0x2
100e1781:	8d 85 f0 fc ff ff    	lea    eax,[ebp-0x310]
100e1787:	c6 45 fc 01          	mov    BYTE PTR [ebp-0x4],0x1
100e178b:	50                   	push   eax
100e178c:	8d 8d 0c fc ff ff    	lea    ecx,[ebp-0x3f4]
100e1792:	e8 c9 83 f6 ff       	call   0x10049b60
100e1797:	c7 85 d0 fc ff ff 00 	mov    DWORD PTR [ebp-0x330],0x0
100e179e:	00 00 00 
100e17a1:	c7 85 d4 fc ff ff 0f 	mov    DWORD PTR [ebp-0x32c],0xf
100e17a8:	00 00 00 
100e17ab:	c6 85 c0 fc ff ff 00 	mov    BYTE PTR [ebp-0x340],0x0
100e17b2:	8b 85 54 fb ff ff    	mov    eax,DWORD PTR [ebp-0x4ac]
100e17b8:	c6 45 fc 03          	mov    BYTE PTR [ebp-0x4],0x3
100e17bc:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100e17bf:	f6 84 05 60 fb ff ff 	test   BYTE PTR [ebp+eax*1-0x4a0],0x6
100e17c6:	06 
100e17c7:	0f 85 90 08 00 00    	jne    0x100e205d
100e17cd:	8b 85 0c fc ff ff    	mov    eax,DWORD PTR [ebp-0x3f4]
100e17d3:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100e17d6:	f6 84 05 18 fc ff ff 	test   BYTE PTR [ebp+eax*1-0x3e8],0x6
100e17dd:	06 
100e17de:	0f 85 79 08 00 00    	jne    0x100e205d
100e17e4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100e17e7:	81 fe 00 80 00 00    	cmp    esi,0x8000
100e17ed:	0f 8f 39 01 00 00    	jg     0x100e192c
100e17f3:	0f 84 29 01 00 00    	je     0x100e1922
100e17f9:	81 fe 80 00 00 00    	cmp    esi,0x80
100e17ff:	0f 8f 95 00 00 00    	jg     0x100e189a
100e1805:	0f 84 85 00 00 00    	je     0x100e1890
100e180b:	83 fe 08             	cmp    esi,0x8
100e180e:	7f 51                	jg     0x100e1861
100e1810:	74 45                	je     0x100e1857
100e1812:	83 fe 02             	cmp    esi,0x2
100e1815:	7f 2f                	jg     0x100e1846
100e1817:	74 23                	je     0x100e183c
100e1819:	81 fe 00 00 00 80    	cmp    esi,0x80000000
100e181f:	74 11                	je     0x100e1832
100e1821:	83 fe 01             	cmp    esi,0x1
100e1824:	0f 85 33 08 00 00    	jne    0x100e205d
100e182a:	8d 7e 0e             	lea    edi,[esi+0xe]
100e182d:	e9 06 02 00 00       	jmp    0x100e1a38
100e1832:	bf 52 00 00 00       	mov    edi,0x52
100e1837:	e9 fc 01 00 00       	jmp    0x100e1a38
100e183c:	bf 07 00 00 00       	mov    edi,0x7
100e1841:	e9 f2 01 00 00       	jmp    0x100e1a38
100e1846:	83 fe 04             	cmp    esi,0x4
100e1849:	0f 85 0e 08 00 00    	jne    0x100e205d
100e184f:	8d 7e 29             	lea    edi,[esi+0x29]
100e1852:	e9 e1 01 00 00       	jmp    0x100e1a38
100e1857:	bf 16 00 00 00       	mov    edi,0x16
100e185c:	e9 d7 01 00 00       	jmp    0x100e1a38
100e1861:	83 fe 10             	cmp    esi,0x10
100e1864:	74 20                	je     0x100e1886
100e1866:	83 fe 20             	cmp    esi,0x20
100e1869:	74 11                	je     0x100e187c
100e186b:	83 fe 40             	cmp    esi,0x40
100e186e:	0f 85 e9 07 00 00    	jne    0x100e205d
100e1874:	8d 7e e7             	lea    edi,[esi-0x19]
100e1877:	e9 bc 01 00 00       	jmp    0x100e1a38
100e187c:	bf 53 00 00 00       	mov    edi,0x53
100e1881:	e9 b2 01 00 00       	jmp    0x100e1a38
100e1886:	bf 03 00 00 00       	mov    edi,0x3
100e188b:	e9 a8 01 00 00       	jmp    0x100e1a38
100e1890:	bf 33 00 00 00       	mov    edi,0x33
100e1895:	e9 9e 01 00 00       	jmp    0x100e1a38
100e189a:	81 fe 00 08 00 00    	cmp    esi,0x800
100e18a0:	7f 46                	jg     0x100e18e8
100e18a2:	74 3a                	je     0x100e18de
100e18a4:	81 fe 00 01 00 00    	cmp    esi,0x100
100e18aa:	74 28                	je     0x100e18d4
100e18ac:	81 fe 00 02 00 00    	cmp    esi,0x200
100e18b2:	74 16                	je     0x100e18ca
100e18b4:	81 fe 00 04 00 00    	cmp    esi,0x400
100e18ba:	0f 85 9d 07 00 00    	jne    0x100e205d
100e18c0:	bf 36 00 00 00       	mov    edi,0x36
100e18c5:	e9 6e 01 00 00       	jmp    0x100e1a38
100e18ca:	bf 35 00 00 00       	mov    edi,0x35
100e18cf:	e9 64 01 00 00       	jmp    0x100e1a38
100e18d4:	bf 34 00 00 00       	mov    edi,0x34
100e18d9:	e9 5a 01 00 00       	jmp    0x100e1a38
100e18de:	bf 37 00 00 00       	mov    edi,0x37
100e18e3:	e9 50 01 00 00       	jmp    0x100e1a38
100e18e8:	81 fe 00 10 00 00    	cmp    esi,0x1000
100e18ee:	74 28                	je     0x100e1918
100e18f0:	81 fe 00 20 00 00    	cmp    esi,0x2000
100e18f6:	74 16                	je     0x100e190e
100e18f8:	81 fe 00 40 00 00    	cmp    esi,0x4000
100e18fe:	0f 85 59 07 00 00    	jne    0x100e205d
100e1904:	bf 3a 00 00 00       	mov    edi,0x3a
100e1909:	e9 2a 01 00 00       	jmp    0x100e1a38
100e190e:	bf 39 00 00 00       	mov    edi,0x39
100e1913:	e9 20 01 00 00       	jmp    0x100e1a38
100e1918:	bf 38 00 00 00       	mov    edi,0x38
100e191d:	e9 16 01 00 00       	jmp    0x100e1a38
100e1922:	bf 3b 00 00 00       	mov    edi,0x3b
100e1927:	e9 0c 01 00 00       	jmp    0x100e1a38
100e192c:	81 fe 00 00 80 00    	cmp    esi,0x800000
100e1932:	0f 8f 8f 00 00 00    	jg     0x100e19c7
100e1938:	0f 84 82 00 00 00    	je     0x100e19c0
100e193e:	81 fe 00 00 08 00    	cmp    esi,0x80000
100e1944:	7f 46                	jg     0x100e198c
100e1946:	74 3a                	je     0x100e1982
100e1948:	81 fe 00 00 01 00    	cmp    esi,0x10000
100e194e:	74 28                	je     0x100e1978
100e1950:	81 fe 00 00 02 00    	cmp    esi,0x20000
100e1956:	74 16                	je     0x100e196e
100e1958:	81 fe 00 00 04 00    	cmp    esi,0x40000
100e195e:	0f 85 f9 06 00 00    	jne    0x100e205d
100e1964:	bf 3e 00 00 00       	mov    edi,0x3e
100e1969:	e9 ca 00 00 00       	jmp    0x100e1a38
100e196e:	bf 3d 00 00 00       	mov    edi,0x3d
100e1973:	e9 c0 00 00 00       	jmp    0x100e1a38
100e1978:	bf 3c 00 00 00       	mov    edi,0x3c
100e197d:	e9 b6 00 00 00       	jmp    0x100e1a38
100e1982:	bf 46 00 00 00       	mov    edi,0x46
100e1987:	e9 ac 00 00 00       	jmp    0x100e1a38
100e198c:	81 fe 00 00 10 00    	cmp    esi,0x100000
100e1992:	74 25                	je     0x100e19b9
100e1994:	81 fe 00 00 20 00    	cmp    esi,0x200000
100e199a:	74 16                	je     0x100e19b2
100e199c:	81 fe 00 00 40 00    	cmp    esi,0x400000
100e19a2:	0f 85 b5 06 00 00    	jne    0x100e205d
100e19a8:	bf 49 00 00 00       	mov    edi,0x49
100e19ad:	e9 86 00 00 00       	jmp    0x100e1a38
100e19b2:	bf 48 00 00 00       	mov    edi,0x48
100e19b7:	eb 7f                	jmp    0x100e1a38
100e19b9:	bf 47 00 00 00       	mov    edi,0x47
100e19be:	eb 78                	jmp    0x100e1a38
100e19c0:	bf 4a 00 00 00       	mov    edi,0x4a
100e19c5:	eb 71                	jmp    0x100e1a38
100e19c7:	81 fe 00 00 00 08    	cmp    esi,0x8000000
100e19cd:	7f 3a                	jg     0x100e1a09
100e19cf:	74 31                	je     0x100e1a02
100e19d1:	81 fe 00 00 00 01    	cmp    esi,0x1000000
100e19d7:	74 22                	je     0x100e19fb
100e19d9:	81 fe 00 00 00 02    	cmp    esi,0x2000000
100e19df:	74 13                	je     0x100e19f4
100e19e1:	81 fe 00 00 00 04    	cmp    esi,0x4000000
100e19e7:	0f 85 70 06 00 00    	jne    0x100e205d
100e19ed:	bf 4d 00 00 00       	mov    edi,0x4d
100e19f2:	eb 44                	jmp    0x100e1a38
100e19f4:	bf 4c 00 00 00       	mov    edi,0x4c
100e19f9:	eb 3d                	jmp    0x100e1a38
100e19fb:	bf 4b 00 00 00       	mov    edi,0x4b
100e1a00:	eb 36                	jmp    0x100e1a38
100e1a02:	bf 4e 00 00 00       	mov    edi,0x4e
100e1a07:	eb 2f                	jmp    0x100e1a38
100e1a09:	81 fe 00 00 00 10    	cmp    esi,0x10000000
100e1a0f:	74 22                	je     0x100e1a33
100e1a11:	81 fe 00 00 00 20    	cmp    esi,0x20000000
100e1a17:	74 13                	je     0x100e1a2c
100e1a19:	81 fe 00 00 00 40    	cmp    esi,0x40000000
100e1a1f:	0f 85 38 06 00 00    	jne    0x100e205d
100e1a25:	bf 51 00 00 00       	mov    edi,0x51
100e1a2a:	eb 0c                	jmp    0x100e1a38
100e1a2c:	bf 50 00 00 00       	mov    edi,0x50
100e1a31:	eb 05                	jmp    0x100e1a38
100e1a33:	bf 4f 00 00 00       	mov    edi,0x4f
100e1a38:	8d 85 d8 fc ff ff    	lea    eax,[ebp-0x328]
100e1a3e:	c7 85 bc fc ff ff 01 	mov    DWORD PTR [ebp-0x344],0x1
100e1a45:	00 00 00 
100e1a48:	50                   	push   eax
100e1a49:	8d 85 54 fb ff ff    	lea    eax,[ebp-0x4ac]
100e1a4f:	50                   	push   eax
100e1a50:	e8 fb da f4 ff       	call   0x1002f550
100e1a55:	83 c4 08             	add    esp,0x8
100e1a58:	8b 08                	mov    ecx,DWORD PTR [eax]
100e1a5a:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100e1a5d:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
100e1a62:	0f 85 8e 05 00 00    	jne    0x100e1ff6
100e1a68:	8a 5d 0c             	mov    bl,BYTE PTR [ebp+0xc]
100e1a6b:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
100e1a70:	8d 8d d8 fc ff ff    	lea    ecx,[ebp-0x328]
100e1a76:	8d 95 f0 fe ff ff    	lea    edx,[ebp-0x110]
100e1a7c:	39 bd bc fc ff ff    	cmp    DWORD PTR [ebp-0x344],edi
100e1a82:	0f 85 e6 04 00 00    	jne    0x100e1f6e
100e1a88:	83 bd ec fc ff ff 10 	cmp    DWORD PTR [ebp-0x314],0x10
100e1a8f:	0f 43 8d d8 fc ff ff 	cmovae ecx,DWORD PTR [ebp-0x328]
100e1a96:	2b d1                	sub    edx,ecx
100e1a98:	0f 1f 84 00 00 00 00 	nop    DWORD PTR [eax+eax*1+0x0]
100e1a9f:	00 
100e1aa0:	8a 01                	mov    al,BYTE PTR [ecx]
100e1aa2:	8d 49 01             	lea    ecx,[ecx+0x1]
100e1aa5:	88 44 11 ff          	mov    BYTE PTR [ecx+edx*1-0x1],al
100e1aa9:	84 c0                	test   al,al
100e1aab:	75 f3                	jne    0x100e1aa0
100e1aad:	8b 85 e8 fc ff ff    	mov    eax,DWORD PTR [ebp-0x318]
100e1ab3:	3d 00 01 00 00       	cmp    eax,0x100
100e1ab8:	0f 83 d1 05 00 00    	jae    0x100e208f
100e1abe:	c6 84 05 f0 fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100e1ac5:	00 
100e1ac6:	81 fe 00 80 00 00    	cmp    esi,0x8000
100e1acc:	0f 8f 6f 02 00 00    	jg     0x100e1d41
100e1ad2:	0f 84 4e 02 00 00    	je     0x100e1d26
100e1ad8:	81 fe 80 00 00 00    	cmp    esi,0x80
100e1ade:	0f 8f 3f 01 00 00    	jg     0x100e1c23
100e1ae4:	0f 84 1e 01 00 00    	je     0x100e1c08
100e1aea:	83 fe 08             	cmp    esi,0x8
100e1aed:	0f 8f ae 00 00 00    	jg     0x100e1ba1
100e1af3:	0f 84 8d 00 00 00    	je     0x100e1b86
100e1af9:	83 fe 02             	cmp    esi,0x2
100e1afc:	7f 64                	jg     0x100e1b62
100e1afe:	74 47                	je     0x100e1b47
100e1b00:	81 fe 00 00 00 80    	cmp    esi,0x80000000
100e1b06:	74 24                	je     0x100e1b2c
100e1b08:	83 fe 01             	cmp    esi,0x1
100e1b0b:	0f 85 b9 04 00 00    	jne    0x100e1fca
100e1b11:	84 db                	test   bl,bl
100e1b13:	b8 bc d3 1d 10       	mov    eax,0x101dd3bc
100e1b18:	b9 a4 d3 1d 10       	mov    ecx,0x101dd3a4
100e1b1d:	0f 45 c1             	cmovne eax,ecx
100e1b20:	50                   	push   eax
100e1b21:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1b27:	e9 95 04 00 00       	jmp    0x100e1fc1
100e1b2c:	84 db                	test   bl,bl
100e1b2e:	b8 5c d9 1d 10       	mov    eax,0x101dd95c
100e1b33:	b9 44 d9 1d 10       	mov    ecx,0x101dd944
100e1b38:	0f 45 c1             	cmovne eax,ecx
100e1b3b:	50                   	push   eax
100e1b3c:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1b42:	e9 7a 04 00 00       	jmp    0x100e1fc1
100e1b47:	84 db                	test   bl,bl
100e1b49:	b8 ec d3 1d 10       	mov    eax,0x101dd3ec
100e1b4e:	b9 d4 d3 1d 10       	mov    ecx,0x101dd3d4
100e1b53:	0f 45 c1             	cmovne eax,ecx
100e1b56:	50                   	push   eax
100e1b57:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1b5d:	e9 5f 04 00 00       	jmp    0x100e1fc1
100e1b62:	83 fe 04             	cmp    esi,0x4
100e1b65:	0f 85 5f 04 00 00    	jne    0x100e1fca
100e1b6b:	84 db                	test   bl,bl
100e1b6d:	b8 1c d4 1d 10       	mov    eax,0x101dd41c
100e1b72:	b9 04 d4 1d 10       	mov    ecx,0x101dd404
100e1b77:	0f 45 c1             	cmovne eax,ecx
100e1b7a:	50                   	push   eax
100e1b7b:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1b81:	e9 3b 04 00 00       	jmp    0x100e1fc1
100e1b86:	84 db                	test   bl,bl
100e1b88:	b8 4c d4 1d 10       	mov    eax,0x101dd44c
100e1b8d:	b9 34 d4 1d 10       	mov    ecx,0x101dd434
100e1b92:	0f 45 c1             	cmovne eax,ecx
100e1b95:	50                   	push   eax
100e1b96:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1b9c:	e9 20 04 00 00       	jmp    0x100e1fc1
100e1ba1:	83 fe 10             	cmp    esi,0x10
100e1ba4:	74 47                	je     0x100e1bed
100e1ba6:	83 fe 20             	cmp    esi,0x20
100e1ba9:	74 24                	je     0x100e1bcf
100e1bab:	83 fe 40             	cmp    esi,0x40
100e1bae:	0f 85 16 04 00 00    	jne    0x100e1fca
100e1bb4:	84 db                	test   bl,bl
100e1bb6:	b8 ac d4 1d 10       	mov    eax,0x101dd4ac
100e1bbb:	b9 94 d4 1d 10       	mov    ecx,0x101dd494
100e1bc0:	0f 45 c1             	cmovne eax,ecx
100e1bc3:	50                   	push   eax
100e1bc4:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1bca:	e9 f2 03 00 00       	jmp    0x100e1fc1
100e1bcf:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1bd5:	84 db                	test   bl,bl
100e1bd7:	74 0a                	je     0x100e1be3
100e1bd9:	68 74 d9 1d 10       	push   0x101dd974
100e1bde:	e9 de 03 00 00       	jmp    0x100e1fc1
100e1be3:	68 8c d9 1d 10       	push   0x101dd98c
100e1be8:	e9 d4 03 00 00       	jmp    0x100e1fc1
100e1bed:	84 db                	test   bl,bl
100e1bef:	b8 7c d4 1d 10       	mov    eax,0x101dd47c
100e1bf4:	b9 64 d4 1d 10       	mov    ecx,0x101dd464
100e1bf9:	0f 45 c1             	cmovne eax,ecx
100e1bfc:	50                   	push   eax
100e1bfd:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1c03:	e9 b9 03 00 00       	jmp    0x100e1fc1
100e1c08:	84 db                	test   bl,bl
100e1c0a:	b8 dc d4 1d 10       	mov    eax,0x101dd4dc
100e1c0f:	b9 c4 d4 1d 10       	mov    ecx,0x101dd4c4
100e1c14:	0f 45 c1             	cmovne eax,ecx
100e1c17:	50                   	push   eax
100e1c18:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1c1e:	e9 9e 03 00 00       	jmp    0x100e1fc1
100e1c23:	81 fe 00 08 00 00    	cmp    esi,0x800
100e1c29:	0f 8f 8a 00 00 00    	jg     0x100e1cb9
100e1c2f:	74 6d                	je     0x100e1c9e
100e1c31:	81 fe 00 01 00 00    	cmp    esi,0x100
100e1c37:	74 4a                	je     0x100e1c83
100e1c39:	81 fe 00 02 00 00    	cmp    esi,0x200
100e1c3f:	74 27                	je     0x100e1c68
100e1c41:	81 fe 00 04 00 00    	cmp    esi,0x400
100e1c47:	0f 85 7d 03 00 00    	jne    0x100e1fca
100e1c4d:	84 db                	test   bl,bl
100e1c4f:	b8 6c d5 1d 10       	mov    eax,0x101dd56c
100e1c54:	b9 54 d5 1d 10       	mov    ecx,0x101dd554
100e1c59:	0f 45 c1             	cmovne eax,ecx
100e1c5c:	50                   	push   eax
100e1c5d:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1c63:	e9 59 03 00 00       	jmp    0x100e1fc1
100e1c68:	84 db                	test   bl,bl
100e1c6a:	b8 3c d5 1d 10       	mov    eax,0x101dd53c
100e1c6f:	b9 24 d5 1d 10       	mov    ecx,0x101dd524
100e1c74:	0f 45 c1             	cmovne eax,ecx
100e1c77:	50                   	push   eax
100e1c78:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1c7e:	e9 3e 03 00 00       	jmp    0x100e1fc1
100e1c83:	84 db                	test   bl,bl
100e1c85:	b8 0c d5 1d 10       	mov    eax,0x101dd50c
100e1c8a:	b9 f4 d4 1d 10       	mov    ecx,0x101dd4f4
100e1c8f:	0f 45 c1             	cmovne eax,ecx
100e1c92:	50                   	push   eax
100e1c93:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1c99:	e9 23 03 00 00       	jmp    0x100e1fc1
100e1c9e:	84 db                	test   bl,bl
100e1ca0:	b8 9c d5 1d 10       	mov    eax,0x101dd59c
100e1ca5:	b9 84 d5 1d 10       	mov    ecx,0x101dd584
100e1caa:	0f 45 c1             	cmovne eax,ecx
100e1cad:	50                   	push   eax
100e1cae:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1cb4:	e9 08 03 00 00       	jmp    0x100e1fc1
100e1cb9:	81 fe 00 10 00 00    	cmp    esi,0x1000
100e1cbf:	74 4a                	je     0x100e1d0b
100e1cc1:	81 fe 00 20 00 00    	cmp    esi,0x2000
100e1cc7:	74 27                	je     0x100e1cf0
100e1cc9:	81 fe 00 40 00 00    	cmp    esi,0x4000
100e1ccf:	0f 85 f5 02 00 00    	jne    0x100e1fca
100e1cd5:	84 db                	test   bl,bl
100e1cd7:	b8 2c d6 1d 10       	mov    eax,0x101dd62c
100e1cdc:	b9 14 d6 1d 10       	mov    ecx,0x101dd614
100e1ce1:	0f 45 c1             	cmovne eax,ecx
100e1ce4:	50                   	push   eax
100e1ce5:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1ceb:	e9 d1 02 00 00       	jmp    0x100e1fc1
100e1cf0:	84 db                	test   bl,bl
100e1cf2:	b8 fc d5 1d 10       	mov    eax,0x101dd5fc
100e1cf7:	b9 e4 d5 1d 10       	mov    ecx,0x101dd5e4
100e1cfc:	0f 45 c1             	cmovne eax,ecx
100e1cff:	50                   	push   eax
100e1d00:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1d06:	e9 b6 02 00 00       	jmp    0x100e1fc1
100e1d0b:	84 db                	test   bl,bl
100e1d0d:	b8 cc d5 1d 10       	mov    eax,0x101dd5cc
100e1d12:	b9 b4 d5 1d 10       	mov    ecx,0x101dd5b4
100e1d17:	0f 45 c1             	cmovne eax,ecx
100e1d1a:	50                   	push   eax
100e1d1b:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1d21:	e9 9b 02 00 00       	jmp    0x100e1fc1
100e1d26:	84 db                	test   bl,bl
100e1d28:	b8 5c d6 1d 10       	mov    eax,0x101dd65c
100e1d2d:	b9 44 d6 1d 10       	mov    ecx,0x101dd644
100e1d32:	0f 45 c1             	cmovne eax,ecx
100e1d35:	50                   	push   eax
100e1d36:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1d3c:	e9 80 02 00 00       	jmp    0x100e1fc1
100e1d41:	81 fe 00 00 80 00    	cmp    esi,0x800000
100e1d47:	0f 8f 24 01 00 00    	jg     0x100e1e71
100e1d4d:	0f 84 03 01 00 00    	je     0x100e1e56
100e1d53:	81 fe 00 00 08 00    	cmp    esi,0x80000
100e1d59:	0f 8f 8a 00 00 00    	jg     0x100e1de9
100e1d5f:	74 6d                	je     0x100e1dce
100e1d61:	81 fe 00 00 01 00    	cmp    esi,0x10000
100e1d67:	74 4a                	je     0x100e1db3
100e1d69:	81 fe 00 00 02 00    	cmp    esi,0x20000
100e1d6f:	74 27                	je     0x100e1d98
100e1d71:	81 fe 00 00 04 00    	cmp    esi,0x40000
100e1d77:	0f 85 4d 02 00 00    	jne    0x100e1fca
100e1d7d:	84 db                	test   bl,bl
100e1d7f:	b8 ec d6 1d 10       	mov    eax,0x101dd6ec
100e1d84:	b9 d4 d6 1d 10       	mov    ecx,0x101dd6d4
100e1d89:	0f 45 c1             	cmovne eax,ecx
100e1d8c:	50                   	push   eax
100e1d8d:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1d93:	e9 29 02 00 00       	jmp    0x100e1fc1
100e1d98:	84 db                	test   bl,bl
100e1d9a:	b8 bc d6 1d 10       	mov    eax,0x101dd6bc
100e1d9f:	b9 a4 d6 1d 10       	mov    ecx,0x101dd6a4
100e1da4:	0f 45 c1             	cmovne eax,ecx
100e1da7:	50                   	push   eax
100e1da8:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1dae:	e9 0e 02 00 00       	jmp    0x100e1fc1
100e1db3:	84 db                	test   bl,bl
100e1db5:	b8 8c d6 1d 10       	mov    eax,0x101dd68c
100e1dba:	b9 74 d6 1d 10       	mov    ecx,0x101dd674
100e1dbf:	0f 45 c1             	cmovne eax,ecx
100e1dc2:	50                   	push   eax
100e1dc3:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1dc9:	e9 f3 01 00 00       	jmp    0x100e1fc1
100e1dce:	84 db                	test   bl,bl
100e1dd0:	b8 1c d7 1d 10       	mov    eax,0x101dd71c
100e1dd5:	b9 04 d7 1d 10       	mov    ecx,0x101dd704
100e1dda:	0f 45 c1             	cmovne eax,ecx
100e1ddd:	50                   	push   eax
100e1dde:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1de4:	e9 d8 01 00 00       	jmp    0x100e1fc1
100e1de9:	81 fe 00 00 10 00    	cmp    esi,0x100000
100e1def:	74 4a                	je     0x100e1e3b
100e1df1:	81 fe 00 00 20 00    	cmp    esi,0x200000
100e1df7:	74 27                	je     0x100e1e20
100e1df9:	81 fe 00 00 40 00    	cmp    esi,0x400000
100e1dff:	0f 85 c5 01 00 00    	jne    0x100e1fca
100e1e05:	84 db                	test   bl,bl
100e1e07:	b8 ac d7 1d 10       	mov    eax,0x101dd7ac
100e1e0c:	b9 94 d7 1d 10       	mov    ecx,0x101dd794
100e1e11:	0f 45 c1             	cmovne eax,ecx
100e1e14:	50                   	push   eax
100e1e15:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1e1b:	e9 a1 01 00 00       	jmp    0x100e1fc1
100e1e20:	84 db                	test   bl,bl
100e1e22:	b8 7c d7 1d 10       	mov    eax,0x101dd77c
100e1e27:	b9 64 d7 1d 10       	mov    ecx,0x101dd764
100e1e2c:	0f 45 c1             	cmovne eax,ecx
100e1e2f:	50                   	push   eax
100e1e30:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1e36:	e9 86 01 00 00       	jmp    0x100e1fc1
100e1e3b:	84 db                	test   bl,bl
100e1e3d:	b8 4c d7 1d 10       	mov    eax,0x101dd74c
100e1e42:	b9 34 d7 1d 10       	mov    ecx,0x101dd734
100e1e47:	0f 45 c1             	cmovne eax,ecx
100e1e4a:	50                   	push   eax
100e1e4b:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1e51:	e9 6b 01 00 00       	jmp    0x100e1fc1
100e1e56:	84 db                	test   bl,bl
100e1e58:	b8 dc d7 1d 10       	mov    eax,0x101dd7dc
100e1e5d:	b9 c4 d7 1d 10       	mov    ecx,0x101dd7c4
100e1e62:	0f 45 c1             	cmovne eax,ecx
100e1e65:	50                   	push   eax
100e1e66:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1e6c:	e9 50 01 00 00       	jmp    0x100e1fc1
100e1e71:	81 fe 00 00 00 08    	cmp    esi,0x8000000
100e1e77:	0f 8f 8a 00 00 00    	jg     0x100e1f07
100e1e7d:	74 6d                	je     0x100e1eec
100e1e7f:	81 fe 00 00 00 01    	cmp    esi,0x1000000
100e1e85:	74 4a                	je     0x100e1ed1
100e1e87:	81 fe 00 00 00 02    	cmp    esi,0x2000000
100e1e8d:	74 27                	je     0x100e1eb6
100e1e8f:	81 fe 00 00 00 04    	cmp    esi,0x4000000
100e1e95:	0f 85 2f 01 00 00    	jne    0x100e1fca
100e1e9b:	84 db                	test   bl,bl
100e1e9d:	b8 6c d8 1d 10       	mov    eax,0x101dd86c
100e1ea2:	b9 54 d8 1d 10       	mov    ecx,0x101dd854
100e1ea7:	0f 45 c1             	cmovne eax,ecx
100e1eaa:	50                   	push   eax
100e1eab:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1eb1:	e9 0b 01 00 00       	jmp    0x100e1fc1
100e1eb6:	84 db                	test   bl,bl
100e1eb8:	b8 3c d8 1d 10       	mov    eax,0x101dd83c
100e1ebd:	b9 24 d8 1d 10       	mov    ecx,0x101dd824
100e1ec2:	0f 45 c1             	cmovne eax,ecx
100e1ec5:	50                   	push   eax
100e1ec6:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1ecc:	e9 f0 00 00 00       	jmp    0x100e1fc1
100e1ed1:	84 db                	test   bl,bl
100e1ed3:	b8 0c d8 1d 10       	mov    eax,0x101dd80c
100e1ed8:	b9 f4 d7 1d 10       	mov    ecx,0x101dd7f4
100e1edd:	0f 45 c1             	cmovne eax,ecx
100e1ee0:	50                   	push   eax
100e1ee1:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1ee7:	e9 d5 00 00 00       	jmp    0x100e1fc1
100e1eec:	84 db                	test   bl,bl
100e1eee:	b8 9c d8 1d 10       	mov    eax,0x101dd89c
100e1ef3:	b9 84 d8 1d 10       	mov    ecx,0x101dd884
100e1ef8:	0f 45 c1             	cmovne eax,ecx
100e1efb:	50                   	push   eax
100e1efc:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1f02:	e9 ba 00 00 00       	jmp    0x100e1fc1
100e1f07:	81 fe 00 00 00 10    	cmp    esi,0x10000000
100e1f0d:	74 47                	je     0x100e1f56
100e1f0f:	81 fe 00 00 00 20    	cmp    esi,0x20000000
100e1f15:	74 27                	je     0x100e1f3e
100e1f17:	81 fe 00 00 00 40    	cmp    esi,0x40000000
100e1f1d:	0f 85 a7 00 00 00    	jne    0x100e1fca
100e1f23:	84 db                	test   bl,bl
100e1f25:	b8 2c d9 1d 10       	mov    eax,0x101dd92c
100e1f2a:	b9 14 d9 1d 10       	mov    ecx,0x101dd914
100e1f2f:	0f 45 c1             	cmovne eax,ecx
100e1f32:	50                   	push   eax
100e1f33:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1f39:	e9 83 00 00 00       	jmp    0x100e1fc1
100e1f3e:	84 db                	test   bl,bl
100e1f40:	b8 fc d8 1d 10       	mov    eax,0x101dd8fc
100e1f45:	b9 e4 d8 1d 10       	mov    ecx,0x101dd8e4
100e1f4a:	0f 45 c1             	cmovne eax,ecx
100e1f4d:	50                   	push   eax
100e1f4e:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1f54:	eb 6b                	jmp    0x100e1fc1
100e1f56:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1f5c:	84 db                	test   bl,bl
100e1f5e:	74 07                	je     0x100e1f67
100e1f60:	68 b4 d8 1d 10       	push   0x101dd8b4
100e1f65:	eb 5a                	jmp    0x100e1fc1
100e1f67:	68 cc d8 1d 10       	push   0x101dd8cc
100e1f6c:	eb 53                	jmp    0x100e1fc1
100e1f6e:	83 bd ec fc ff ff 10 	cmp    DWORD PTR [ebp-0x314],0x10
100e1f75:	0f 43 8d d8 fc ff ff 	cmovae ecx,DWORD PTR [ebp-0x328]
100e1f7c:	2b d1                	sub    edx,ecx
100e1f7e:	66 90                	xchg   ax,ax
100e1f80:	8a 01                	mov    al,BYTE PTR [ecx]
100e1f82:	8d 49 01             	lea    ecx,[ecx+0x1]
100e1f85:	88 44 11 ff          	mov    BYTE PTR [ecx+edx*1-0x1],al
100e1f89:	84 c0                	test   al,al
100e1f8b:	75 f3                	jne    0x100e1f80
100e1f8d:	8b 85 e8 fc ff ff    	mov    eax,DWORD PTR [ebp-0x318]
100e1f93:	3d 00 01 00 00       	cmp    eax,0x100
100e1f98:	0f 83 f1 00 00 00    	jae    0x100e208f
100e1f9e:	c6 84 05 f0 fe ff ff 	mov    BYTE PTR [ebp+eax*1-0x110],0x0
100e1fa5:	00 
100e1fa6:	8d 85 f0 fe ff ff    	lea    eax,[ebp-0x110]
100e1fac:	68 c8 84 1a 10       	push   0x101a84c8
100e1fb1:	50                   	push   eax
100e1fb2:	8d 85 0c fc ff ff    	lea    eax,[ebp-0x3f4]
100e1fb8:	50                   	push   eax
100e1fb9:	e8 f2 73 f6 ff       	call   0x100493b0
100e1fbe:	83 c4 08             	add    esp,0x8
100e1fc1:	50                   	push   eax
100e1fc2:	e8 e9 73 f6 ff       	call   0x100493b0
100e1fc7:	83 c4 08             	add    esp,0x8
100e1fca:	ff 85 bc fc ff ff    	inc    DWORD PTR [ebp-0x344]
100e1fd0:	8d 85 d8 fc ff ff    	lea    eax,[ebp-0x328]
100e1fd6:	50                   	push   eax
100e1fd7:	8d 85 54 fb ff ff    	lea    eax,[ebp-0x4ac]
100e1fdd:	50                   	push   eax
100e1fde:	e8 6d d5 f4 ff       	call   0x1002f550
100e1fe3:	83 c4 08             	add    esp,0x8
100e1fe6:	8b 08                	mov    ecx,DWORD PTR [eax]
100e1fe8:	8b 49 04             	mov    ecx,DWORD PTR [ecx+0x4]
100e1feb:	f6 44 01 0c 06       	test   BYTE PTR [ecx+eax*1+0xc],0x6
100e1ff0:	0f 84 7a fa ff ff    	je     0x100e1a70
100e1ff6:	8d 8d 54 fb ff ff    	lea    ecx,[ebp-0x4ac]
100e1ffc:	e8 1f 7d 01 00       	call   0x100f9d20
100e2001:	8d 8d 0c fc ff ff    	lea    ecx,[ebp-0x3f4]
100e2007:	e8 a4 7d 01 00       	call   0x100f9db0
100e200c:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
100e2012:	50                   	push   eax
100e2013:	e8 ee 26 09 00       	call   0x10174706
100e2018:	83 c4 04             	add    esp,0x4
100e201b:	85 c0                	test   eax,eax
100e201d:	75 16                	jne    0x100e2035
100e201f:	8d 85 f0 fd ff ff    	lea    eax,[ebp-0x210]
100e2025:	50                   	push   eax
100e2026:	8d 85 f0 fc ff ff    	lea    eax,[ebp-0x310]
100e202c:	50                   	push   eax
100e202d:	e8 11 28 09 00       	call   0x10174843
100e2032:	83 c4 08             	add    esp,0x8
100e2035:	8d 8d 0c fc ff ff    	lea    ecx,[ebp-0x3f4]
100e203b:	e8 d0 84 f6 ff       	call   0x1004a510
100e2040:	8b 85 ec fc ff ff    	mov    eax,DWORD PTR [ebp-0x314]
100e2046:	83 f8 10             	cmp    eax,0x10
100e2049:	72 1d                	jb     0x100e2068
100e204b:	40                   	inc    eax
100e204c:	50                   	push   eax
100e204d:	ff b5 d8 fc ff ff    	push   DWORD PTR [ebp-0x328]
100e2053:	e8 38 d2 f4 ff       	call   0x1002f290
100e2058:	83 c4 08             	add    esp,0x8
100e205b:	eb 0b                	jmp    0x100e2068
100e205d:	8d 8d 0c fc ff ff    	lea    ecx,[ebp-0x3f4]
100e2063:	e8 a8 84 f6 ff       	call   0x1004a510
100e2068:	8d 8d 54 fb ff ff    	lea    ecx,[ebp-0x4ac]
100e206e:	e8 7d e8 f4 ff       	call   0x100308f0
100e2073:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
100e2076:	64 89 0d 00 00 00 00 	mov    DWORD PTR fs:0x0,ecx
100e207d:	59                   	pop    ecx
100e207e:	5f                   	pop    edi
100e207f:	5e                   	pop    esi
100e2080:	5b                   	pop    ebx
100e2081:	8b 4d f0             	mov    ecx,DWORD PTR [ebp-0x10]
100e2084:	33 cd                	xor    ecx,ebp
100e2086:	e8 28 bb 05 00       	call   0x1013dbb3
100e208b:	8b e5                	mov    esp,ebp
100e208d:	5d                   	pop    ebp
100e208e:	c3                   	ret
100e208f:	e8 b4 bc 05 00       	call   0x1013dd48
