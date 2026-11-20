
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10018500 <.text+0x17500>:
10018500:	55                   	push   ebp
10018501:	8b ec                	mov    ebp,esp
10018503:	56                   	push   esi
10018504:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10018507:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1001850a:	85 f6                	test   esi,esi
1001850c:	75 13                	jne    0x10018521
1001850e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10018514:	85 c0                	test   eax,eax
10018516:	74 06                	je     0x1001851e
10018518:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1001851e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10018521:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10018527:	85 c9                	test   ecx,ecx
10018529:	74 07                	je     0x10018532
1001852b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1001852e:	85 c0                	test   eax,eax
10018530:	75 27                	jne    0x10018559
10018532:	68 18 02 00 00       	push   0x218
10018537:	51                   	push   ecx
10018538:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1001853e:	83 c4 08             	add    esp,0x8
10018541:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10018544:	85 c0                	test   eax,eax
10018546:	74 0c                	je     0x10018554
10018548:	c7 00 e0 79 1a 10    	mov    DWORD PTR [eax],0x101a79e0
1001854e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10018551:	5e                   	pop    esi
10018552:	5d                   	pop    ebp
10018553:	c3                   	ret
10018554:	33 c0                	xor    eax,eax
10018556:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10018559:	5e                   	pop    esi
1001855a:	5d                   	pop    ebp
1001855b:	c3                   	ret
