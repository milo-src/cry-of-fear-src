
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f1860 <.text+0xf0860>:
100f1860:	56                   	push   esi
100f1861:	8b f1                	mov    esi,ecx
100f1863:	57                   	push   edi
100f1864:	c6 86 0c 05 00 00 00 	mov    BYTE PTR [esi+0x50c],0x0
100f186b:	c7 86 54 26 00 00 00 	mov    DWORD PTR [esi+0x2654],0x0
100f1872:	00 00 00 
100f1875:	e8 66 d1 f1 ff       	call   0x1000e9e0
100f187a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f187d:	b9 d8 b1 1d 10       	mov    ecx,0x101db1d8
100f1882:	f7 80 a8 01 00 00 00 	test   DWORD PTR [eax+0x1a8],0x4000
100f1889:	40 00 00 
100f188c:	b8 e8 b1 1d 10       	mov    eax,0x101db1e8
100f1891:	0f 45 c1             	cmovne eax,ecx
100f1894:	8b ce                	mov    ecx,esi
100f1896:	50                   	push   eax
100f1897:	e8 14 d1 f1 ff       	call   0x1000e9b0
100f189c:	8b f8                	mov    edi,eax
100f189e:	33 c0                	xor    eax,eax
100f18a0:	83 ff ff             	cmp    edi,0xffffffff
100f18a3:	0f 44 f8             	cmove  edi,eax
100f18a6:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f18a9:	39 b8 2c 01 00 00    	cmp    DWORD PTR [eax+0x12c],edi
100f18af:	75 09                	jne    0x100f18ba
100f18b1:	83 be fc 00 00 00 00 	cmp    DWORD PTR [esi+0xfc],0x0
100f18b8:	75 0d                	jne    0x100f18c7
100f18ba:	c7 80 34 01 00 00 00 	mov    DWORD PTR [eax+0x134],0x0
100f18c1:	00 00 00 
100f18c4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f18c7:	c7 80 30 01 00 00 00 	mov    DWORD PTR [eax+0x130],0x0
100f18ce:	00 00 00 
100f18d1:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f18d4:	57                   	push   edi
100f18d5:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f18db:	ff 15 70 30 22 10    	call   DWORD PTR ds:0x10223070
100f18e1:	83 c4 04             	add    esp,0x4
100f18e4:	50                   	push   eax
100f18e5:	e8 a6 da f1 ff       	call   0x1000f390
100f18ea:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f18ef:	83 c4 08             	add    esp,0x8
100f18f2:	d8 00                	fadd   DWORD PTR [eax]
100f18f4:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f18f7:	d9 9e f4 04 00 00    	fstp   DWORD PTR [esi+0x4f4]
100f18fd:	c7 80 60 02 00 00 00 	mov    DWORD PTR [eax+0x260],0x40400000
100f1904:	00 40 40 
100f1907:	8b 86 f4 04 00 00    	mov    eax,DWORD PTR [esi+0x4f4]
100f190d:	89 86 fc 04 00 00    	mov    DWORD PTR [esi+0x4fc],eax
100f1913:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f1916:	39 b8 2c 01 00 00    	cmp    DWORD PTR [eax+0x12c],edi
100f191c:	74 1c                	je     0x100f193a
100f191e:	89 b8 2c 01 00 00    	mov    DWORD PTR [eax+0x12c],edi
100f1924:	8b ce                	mov    ecx,esi
100f1926:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f1929:	5f                   	pop    edi
100f192a:	5e                   	pop    esi
100f192b:	c7 80 34 01 00 00 00 	mov    DWORD PTR [eax+0x134],0x0
100f1932:	00 00 00 
100f1935:	e9 a6 d0 f1 ff       	jmp    0x1000e9e0
100f193a:	5f                   	pop    edi
100f193b:	5e                   	pop    esi
100f193c:	c3                   	ret
