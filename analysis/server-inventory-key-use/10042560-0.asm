
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10042560 <.text+0x41560>:
10042560:	55                   	push   ebp
10042561:	8b ec                	mov    ebp,esp
10042563:	56                   	push   esi
10042564:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10042567:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1004256a:	85 f6                	test   esi,esi
1004256c:	75 13                	jne    0x10042581
1004256e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10042574:	85 c0                	test   eax,eax
10042576:	74 06                	je     0x1004257e
10042578:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1004257e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10042581:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10042587:	85 c9                	test   ecx,ecx
10042589:	74 07                	je     0x10042592
1004258b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1004258e:	85 c0                	test   eax,eax
10042590:	75 27                	jne    0x100425b9
10042592:	68 ac 01 00 00       	push   0x1ac
10042597:	51                   	push   ecx
10042598:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1004259e:	83 c4 08             	add    esp,0x8
100425a1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100425a4:	85 c0                	test   eax,eax
100425a6:	74 0c                	je     0x100425b4
100425a8:	c7 00 4c ff 1a 10    	mov    DWORD PTR [eax],0x101aff4c
100425ae:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100425b1:	5e                   	pop    esi
100425b2:	5d                   	pop    ebp
100425b3:	c3                   	ret
100425b4:	33 c0                	xor    eax,eax
100425b6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100425b9:	5e                   	pop    esi
100425ba:	5d                   	pop    ebp
100425bb:	c3                   	ret
