
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10018440 <.text+0x17440>:
10018440:	55                   	push   ebp
10018441:	8b ec                	mov    ebp,esp
10018443:	56                   	push   esi
10018444:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10018447:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1001844a:	85 f6                	test   esi,esi
1001844c:	75 13                	jne    0x10018461
1001844e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10018454:	85 c0                	test   eax,eax
10018456:	74 06                	je     0x1001845e
10018458:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1001845e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10018461:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10018467:	85 c9                	test   ecx,ecx
10018469:	74 07                	je     0x10018472
1001846b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1001846e:	85 c0                	test   eax,eax
10018470:	75 27                	jne    0x10018499
10018472:	68 f8 01 00 00       	push   0x1f8
10018477:	51                   	push   ecx
10018478:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1001847e:	83 c4 08             	add    esp,0x8
10018481:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10018484:	85 c0                	test   eax,eax
10018486:	74 0c                	je     0x10018494
10018488:	c7 00 04 78 1a 10    	mov    DWORD PTR [eax],0x101a7804
1001848e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10018491:	5e                   	pop    esi
10018492:	5d                   	pop    ebp
10018493:	c3                   	ret
10018494:	33 c0                	xor    eax,eax
10018496:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10018499:	5e                   	pop    esi
1001849a:	5d                   	pop    ebp
1001849b:	c3                   	ret
