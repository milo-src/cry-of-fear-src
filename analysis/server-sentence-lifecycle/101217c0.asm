
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101217c0 <.text+0x1207c0>:
101217c0:	55                   	push   ebp
101217c1:	8b ec                	mov    ebp,esp
101217c3:	c7 05 04 2f 22 10 00 	mov    DWORD PTR ds:0x10222f04,0x0
101217ca:	00 00 00 
101217cd:	83 ec 0c             	sub    esp,0xc
101217d0:	8b 01                	mov    eax,DWORD PTR [ecx]
101217d2:	ff 50 30             	call   DWORD PTR [eax+0x30]
101217d5:	68 04 b6 1d 10       	push   0x101db604
101217da:	ff 15 2c 30 22 10    	call   DWORD PTR ds:0x1022302c
101217e0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101217e5:	d9 1d 64 1f 23 10    	fstp   DWORD PTR ds:0x10231f64
101217eb:	68 0c 6e 1e 10       	push   0x101e6e0c
101217f0:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
101217f6:	03 48 0c             	add    ecx,DWORD PTR [eax+0xc]
101217f9:	51                   	push   ecx
101217fa:	e8 f1 dd 01 00       	call   0x1013f5f0
101217ff:	83 c4 0c             	add    esp,0xc
10121802:	ba 1c 29 1e 10       	mov    edx,0x101e291c
10121807:	f7 d8                	neg    eax
10121809:	1b c0                	sbb    eax,eax
1012180b:	f7 d8                	neg    eax
1012180d:	a3 0c 2f 22 10       	mov    ds:0x10222f0c,eax
10121812:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10121817:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
1012181d:	03 48 0c             	add    ecx,DWORD PTR [eax+0xc]
10121820:	8a 01                	mov    al,BYTE PTR [ecx]
10121822:	3a 02                	cmp    al,BYTE PTR [edx]
10121824:	75 1a                	jne    0x10121840
10121826:	84 c0                	test   al,al
10121828:	74 12                	je     0x1012183c
1012182a:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1012182d:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
10121830:	75 0e                	jne    0x10121840
10121832:	83 c1 02             	add    ecx,0x2
10121835:	83 c2 02             	add    edx,0x2
10121838:	84 c0                	test   al,al
1012183a:	75 e4                	jne    0x10121820
1012183c:	33 c0                	xor    eax,eax
1012183e:	eb 05                	jmp    0x10121845
10121840:	1b c0                	sbb    eax,eax
10121842:	83 c8 01             	or     eax,0x1
10121845:	85 c0                	test   eax,eax
10121847:	75 50                	jne    0x10121899
10121849:	68 14 6e 1e 10       	push   0x101e6e14
1012184e:	50                   	push   eax
1012184f:	e8 0c 6c ff ff       	call   0x10118460
10121854:	83 c4 08             	add    esp,0x8
10121857:	85 c0                	test   eax,eax
10121859:	75 3e                	jne    0x10121899
1012185b:	50                   	push   eax
1012185c:	68 34 2f 22 10       	push   0x10222f34
10121861:	68 34 2f 22 10       	push   0x10222f34
10121866:	68 14 6e 1e 10       	push   0x101e6e14
1012186b:	e8 e0 60 ef ff       	call   0x10017950
10121870:	83 c4 10             	add    esp,0x10
10121873:	85 c0                	test   eax,eax
10121875:	74 22                	je     0x10121899
10121877:	8d 4d f4             	lea    ecx,[ebp-0xc]
1012187a:	c7 45 f4 00 40 19 44 	mov    DWORD PTR [ebp-0xc],0x44194000
10121881:	51                   	push   ecx
10121882:	50                   	push   eax
10121883:	c7 45 f8 00 40 45 c5 	mov    DWORD PTR [ebp-0x8],0xc5454000
1012188a:	c7 45 fc 00 80 2f c4 	mov    DWORD PTR [ebp-0x4],0xc42f8000
10121891:	e8 4a 87 ff ff       	call   0x10119fe0
10121896:	83 c4 08             	add    esp,0x8
10121899:	8b e5                	mov    esp,ebp
1012189b:	5d                   	pop    ebp
1012189c:	c3                   	ret
