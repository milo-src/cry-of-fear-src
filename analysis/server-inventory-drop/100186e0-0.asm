
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100186e0 <.text+0x176e0>:
100186e0:	55                   	push   ebp
100186e1:	8b ec                	mov    ebp,esp
100186e3:	56                   	push   esi
100186e4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100186e7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100186ea:	85 f6                	test   esi,esi
100186ec:	75 13                	jne    0x10018701
100186ee:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
100186f4:	85 c0                	test   eax,eax
100186f6:	74 06                	je     0x100186fe
100186f8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
100186fe:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10018701:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10018707:	85 c9                	test   ecx,ecx
10018709:	74 07                	je     0x10018712
1001870b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1001870e:	85 c0                	test   eax,eax
10018710:	75 27                	jne    0x10018739
10018712:	68 00 02 00 00       	push   0x200
10018717:	51                   	push   ecx
10018718:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1001871e:	83 c4 08             	add    esp,0x8
10018721:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10018724:	85 c0                	test   eax,eax
10018726:	74 0c                	je     0x10018734
10018728:	c7 00 bc 7b 1a 10    	mov    DWORD PTR [eax],0x101a7bbc
1001872e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10018731:	5e                   	pop    esi
10018732:	5d                   	pop    ebp
10018733:	c3                   	ret
10018734:	33 c0                	xor    eax,eax
10018736:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10018739:	5e                   	pop    esi
1001873a:	5d                   	pop    ebp
1001873b:	c3                   	ret
