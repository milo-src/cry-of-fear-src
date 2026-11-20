
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

101004f0 <.text+0xff4f0>:
101004f0:	55                   	push   ebp
101004f1:	8b ec                	mov    ebp,esp
101004f3:	56                   	push   esi
101004f4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
101004f7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
101004fa:	85 f6                	test   esi,esi
101004fc:	75 13                	jne    0x10100511
101004fe:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10100504:	85 c0                	test   eax,eax
10100506:	74 06                	je     0x1010050e
10100508:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1010050e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10100511:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10100517:	85 c9                	test   ecx,ecx
10100519:	74 07                	je     0x10100522
1010051b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1010051e:	85 c0                	test   eax,eax
10100520:	75 27                	jne    0x10100549
10100522:	68 ec 08 00 00       	push   0x8ec
10100527:	51                   	push   ecx
10100528:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1010052e:	83 c4 08             	add    esp,0x8
10100531:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10100534:	85 c0                	test   eax,eax
10100536:	74 0c                	je     0x10100544
10100538:	c7 00 8c ed 1d 10    	mov    DWORD PTR [eax],0x101ded8c
1010053e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10100541:	5e                   	pop    esi
10100542:	5d                   	pop    ebp
10100543:	c3                   	ret
10100544:	33 c0                	xor    eax,eax
10100546:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10100549:	5e                   	pop    esi
1010054a:	5d                   	pop    ebp
1010054b:	c3                   	ret
