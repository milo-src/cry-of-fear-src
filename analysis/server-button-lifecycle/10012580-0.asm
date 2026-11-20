
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10012580 <.text+0x11580>:
10012580:	55                   	push   ebp
10012581:	8b ec                	mov    ebp,esp
10012583:	56                   	push   esi
10012584:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10012587:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1001258a:	85 f6                	test   esi,esi
1001258c:	75 13                	jne    0x100125a1
1001258e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10012594:	85 c0                	test   eax,eax
10012596:	74 06                	je     0x1001259e
10012598:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1001259e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100125a1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
100125a7:	85 c9                	test   ecx,ecx
100125a9:	74 07                	je     0x100125b2
100125ab:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
100125ae:	85 c0                	test   eax,eax
100125b0:	75 27                	jne    0x100125d9
100125b2:	68 e4 01 00 00       	push   0x1e4
100125b7:	51                   	push   ecx
100125b8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
100125be:	83 c4 08             	add    esp,0x8
100125c1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100125c4:	85 c0                	test   eax,eax
100125c6:	74 0c                	je     0x100125d4
100125c8:	c7 00 84 4c 1a 10    	mov    DWORD PTR [eax],0x101a4c84
100125ce:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100125d1:	5e                   	pop    esi
100125d2:	5d                   	pop    ebp
100125d3:	c3                   	ret
100125d4:	33 c0                	xor    eax,eax
100125d6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100125d9:	5e                   	pop    esi
100125da:	5d                   	pop    ebp
100125db:	c3                   	ret
