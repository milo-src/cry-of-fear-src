
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10045580 <.text+0x44580>:
10045580:	55                   	push   ebp
10045581:	8b ec                	mov    ebp,esp
10045583:	56                   	push   esi
10045584:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10045587:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1004558a:	85 f6                	test   esi,esi
1004558c:	75 13                	jne    0x100455a1
1004558e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10045594:	85 c0                	test   eax,eax
10045596:	74 06                	je     0x1004559e
10045598:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1004559e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100455a1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
100455a7:	85 c9                	test   ecx,ecx
100455a9:	74 07                	je     0x100455b2
100455ab:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
100455ae:	85 c0                	test   eax,eax
100455b0:	75 27                	jne    0x100455d9
100455b2:	68 04 02 00 00       	push   0x204
100455b7:	51                   	push   ecx
100455b8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
100455be:	83 c4 08             	add    esp,0x8
100455c1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100455c4:	85 c0                	test   eax,eax
100455c6:	74 0c                	je     0x100455d4
100455c8:	c7 00 24 05 1b 10    	mov    DWORD PTR [eax],0x101b0524
100455ce:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100455d1:	5e                   	pop    esi
100455d2:	5d                   	pop    ebp
100455d3:	c3                   	ret
100455d4:	33 c0                	xor    eax,eax
100455d6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100455d9:	5e                   	pop    esi
100455da:	5d                   	pop    ebp
100455db:	c3                   	ret
