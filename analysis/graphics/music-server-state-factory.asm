
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101084f0 <.text+0x1074f0>:
101084f0:	55                   	push   ebp
101084f1:	8b ec                	mov    ebp,esp
101084f3:	56                   	push   esi
101084f4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
101084f7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
101084fa:	85 f6                	test   esi,esi
101084fc:	75 13                	jne    0x10108511
101084fe:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10108504:	85 c0                	test   eax,eax
10108506:	74 06                	je     0x1010850e
10108508:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1010850e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10108511:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10108517:	85 c9                	test   ecx,ecx
10108519:	74 07                	je     0x10108522
1010851b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1010851e:	85 c0                	test   eax,eax
10108520:	75 27                	jne    0x10108549
10108522:	68 dc 00 00 00       	push   0xdc
10108527:	51                   	push   ecx
10108528:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1010852e:	83 c4 08             	add    esp,0x8
10108531:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10108534:	85 c0                	test   eax,eax
10108536:	74 0c                	je     0x10108544
10108538:	c7 00 38 44 1e 10    	mov    DWORD PTR [eax],0x101e4438
1010853e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10108541:	5e                   	pop    esi
10108542:	5d                   	pop    ebp
10108543:	c3                   	ret
10108544:	33 c0                	xor    eax,eax
10108546:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10108549:	5e                   	pop    esi
1010854a:	5d                   	pop    ebp
1010854b:	c3                   	ret
