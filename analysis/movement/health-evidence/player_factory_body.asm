
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100125e0 <.text+0x115e0>:
100125e0:	55                   	push   ebp
100125e1:	8b ec                	mov    ebp,esp
100125e3:	56                   	push   esi
100125e4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100125e7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100125ea:	85 f6                	test   esi,esi
100125ec:	75 13                	jne    0x10012601
100125ee:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
100125f4:	85 c0                	test   eax,eax
100125f6:	74 06                	je     0x100125fe
100125f8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
100125fe:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10012601:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10012607:	85 c9                	test   ecx,ecx
10012609:	74 07                	je     0x10012612
1001260b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1001260e:	85 c0                	test   eax,eax
10012610:	75 27                	jne    0x10012639
10012612:	68 1c 28 00 00       	push   0x281c
10012617:	51                   	push   ecx
10012618:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1001261e:	83 c4 08             	add    esp,0x8
10012621:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10012624:	85 c0                	test   eax,eax
10012626:	74 0c                	je     0x10012634
10012628:	c7 00 a8 4d 1a 10    	mov    DWORD PTR [eax],0x101a4da8
1001262e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10012631:	5e                   	pop    esi
10012632:	5d                   	pop    ebp
10012633:	c3                   	ret
10012634:	33 c0                	xor    eax,eax
10012636:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10012639:	5e                   	pop    esi
1001263a:	5d                   	pop    ebp
1001263b:	c3                   	ret
1001263c:	cc                   	int3
1001263d:	cc                   	int3
1001263e:	cc                   	int3
1001263f:	cc                   	int3
10012640:	55                   	push   ebp
10012641:	8b ec                	mov    ebp,esp
10012643:	56                   	push   esi
10012644:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10012647:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1001264a:	85 f6                	test   esi,esi
1001264c:	75 13                	jne    0x10012661
1001264e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10012654:	85 c0                	test   eax,eax
10012656:	74 06                	je     0x1001265e
10012658:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1001265e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10012661:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10012667:	85 c9                	test   ecx,ecx
10012669:	74 07                	je     0x10012672
1001266b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1001266e:	85 c0                	test   eax,eax
