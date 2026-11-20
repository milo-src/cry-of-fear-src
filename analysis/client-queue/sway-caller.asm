100b17fa:	6a 01                	push   0x1
100b17fc:	68 48 03 55 10       	push   0x10550348
100b1801:	f3 0f 11 05 1c 06 55 	movss  DWORD PTR ds:0x1055061c,xmm0
100b1808:	10 
100b1809:	ff 15 e0 26 1b 10    	call   DWORD PTR ds:0x101b26e0
100b180f:	f3 0f 10 46 3c       	movss  xmm0,DWORD PTR [esi+0x3c]
100b1814:	83 ec 08             	sub    esp,0x8
100b1817:	d9 5c 24 04          	fstp   DWORD PTR [esp+0x4]
100b181b:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100b1820:	68 9c 0e 55 10       	push   0x10550e9c
100b1825:	68 90 0e 55 10       	push   0x10550e90
100b182a:	56                   	push   esi
100b182b:	e8 a0 c1 ff ff       	call   0x100ad9d0
100b1830:	f3 0f 10 46 3c       	movss  xmm0,DWORD PTR [esi+0x3c]
100b1835:	83 c4 1c             	add    esp,0x1c
100b1838:	6a 01                	push   0x1
100b183a:	68 48 03 55 10       	push   0x10550348
100b183f:	68 9c 0e 55 10       	push   0x10550e9c
100b1844:	68 9c 0e 55 10       	push   0x10550e9c
100b1849:	68 90 0e 55 10       	push   0x10550e90
100b184e:	51                   	push   ecx
100b184f:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100b1854:	e8 67 c6 ff ff       	call   0x100adec0
100b1859:	83 c4 18             	add    esp,0x18
100b185c:	5f                   	pop    edi
100b185d:	5e                   	pop    esi
100b185e:	8b e5                	mov    esp,ebp
100b1860:	5d                   	pop    ebp
100b1861:	c3                   	ret
