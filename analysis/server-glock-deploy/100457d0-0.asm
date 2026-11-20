
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100457d0 <.text+0x447d0>:
100457d0:	56                   	push   esi
100457d1:	8b f1                	mov    esi,ecx
100457d3:	8a 86 00 02 00 00    	mov    al,BYTE PTR [esi+0x200]
100457d9:	84 c0                	test   al,al
100457db:	74 42                	je     0x1004581f
100457dd:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
100457e3:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100457e6:	f6 80 d0 05 00 00 04 	test   BYTE PTR [eax+0x5d0],0x4
100457ed:	b8 00 00 00 00       	mov    eax,0x0
100457f2:	0f 95 c0             	setne  al
100457f5:	40                   	inc    eax
100457f6:	89 81 14 01 00 00    	mov    DWORD PTR [ecx+0x114],eax
100457fc:	8b ce                	mov    ecx,esi
100457fe:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10045801:	8b 16                	mov    edx,DWORD PTR [esi]
10045803:	ff b0 14 01 00 00    	push   DWORD PTR [eax+0x114]
10045809:	ff b6 60 01 00 00    	push   DWORD PTR [esi+0x160]
1004580f:	ff 92 9c 01 00 00    	call   DWORD PTR [edx+0x19c]
10045815:	8a 86 00 02 00 00    	mov    al,BYTE PTR [esi+0x200]
1004581b:	84 c0                	test   al,al
1004581d:	75 2f                	jne    0x1004584e
1004581f:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10045822:	83 b8 14 01 00 00 00 	cmp    DWORD PTR [eax+0x114],0x0
10045829:	74 23                	je     0x1004584e
1004582b:	c7 80 14 01 00 00 00 	mov    DWORD PTR [eax+0x114],0x0
10045832:	00 00 00 
10045835:	8b ce                	mov    ecx,esi
10045837:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004583a:	8b 16                	mov    edx,DWORD PTR [esi]
1004583c:	ff b0 14 01 00 00    	push   DWORD PTR [eax+0x114]
10045842:	ff b6 60 01 00 00    	push   DWORD PTR [esi+0x160]
10045848:	ff 92 9c 01 00 00    	call   DWORD PTR [edx+0x19c]
1004584e:	8b 96 e4 01 00 00    	mov    edx,DWORD PTR [esi+0x1e4]
10045854:	33 c0                	xor    eax,eax
10045856:	81 be 40 01 00 00 9a 	cmp    DWORD PTR [esi+0x140],0x29a
1004585d:	02 00 00 
10045860:	c7 86 28 01 00 00 00 	mov    DWORD PTR [esi+0x128],0x0
10045867:	00 00 00 
1004586a:	0f 94 c0             	sete   al
1004586d:	89 86 40 01 00 00    	mov    DWORD PTR [esi+0x140],eax
10045873:	81 fa 66 fd ff ff    	cmp    edx,0xfffffd66
10045879:	75 0c                	jne    0x10045887
1004587b:	c7 86 e4 01 00 00 00 	mov    DWORD PTR [esi+0x1e4],0x0
10045882:	00 00 00 
10045885:	33 d2                	xor    edx,edx
10045887:	8b 8e 68 01 00 00    	mov    ecx,DWORD PTR [esi+0x168]
1004588d:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10045893:	80 bc 01 f4 03 00 00 	cmp    BYTE PTR [ecx+eax*1+0x3f4],0x0
1004589a:	00 
1004589b:	75 75                	jne    0x10045912
1004589d:	c6 84 01 f4 03 00 00 	mov    BYTE PTR [ecx+eax*1+0x3f4],0x1
100458a4:	01 
100458a5:	b9 48 08 1b 10       	mov    ecx,0x101b0848
100458aa:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100458af:	6a 00                	push   0x0
100458b1:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
100458b7:	51                   	push   ecx
100458b8:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
100458be:	e8 cd e4 0a 00       	call   0x100f3d90
100458c3:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100458c9:	85 c9                	test   ecx,ecx
100458cb:	74 27                	je     0x100458f4
100458cd:	8b 01                	mov    eax,DWORD PTR [ecx]
100458cf:	ff 50 20             	call   DWORD PTR [eax+0x20]
100458d2:	85 c0                	test   eax,eax
100458d4:	74 1e                	je     0x100458f4
100458d6:	6a 00                	push   0x0
100458d8:	6a 00                	push   0x0
100458da:	68 d8 b5 1a 10       	push   0x101ab5d8
100458df:	6a 1d                	push   0x1d
100458e1:	68 58 07 1b 10       	push   0x101b0758
100458e6:	68 20 dd 1a 10       	push   0x101add20
100458eb:	8b ce                	mov    ecx,esi
100458ed:	e8 ae 68 0d 00       	call   0x1011c1a0
100458f2:	5e                   	pop    esi
100458f3:	c3                   	ret
100458f4:	6a 00                	push   0x0
100458f6:	6a 00                	push   0x0
100458f8:	68 d8 b5 1a 10       	push   0x101ab5d8
100458fd:	6a 1d                	push   0x1d
100458ff:	68 f4 9a 1a 10       	push   0x101a9af4
10045904:	68 20 dd 1a 10       	push   0x101add20
10045909:	8b ce                	mov    ecx,esi
1004590b:	e8 90 68 0d 00       	call   0x1011c1a0
10045910:	5e                   	pop    esi
10045911:	c3                   	ret
10045912:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
10045918:	85 d2                	test   edx,edx
1004591a:	74 49                	je     0x10045965
1004591c:	85 c9                	test   ecx,ecx
1004591e:	74 27                	je     0x10045947
10045920:	8b 01                	mov    eax,DWORD PTR [ecx]
10045922:	ff 50 20             	call   DWORD PTR [eax+0x20]
10045925:	85 c0                	test   eax,eax
10045927:	74 1e                	je     0x10045947
10045929:	6a 00                	push   0x0
1004592b:	6a 00                	push   0x0
1004592d:	68 d8 b5 1a 10       	push   0x101ab5d8
10045932:	6a 06                	push   0x6
10045934:	68 58 07 1b 10       	push   0x101b0758
10045939:	68 20 dd 1a 10       	push   0x101add20
1004593e:	8b ce                	mov    ecx,esi
10045940:	e8 5b 68 0d 00       	call   0x1011c1a0
10045945:	5e                   	pop    esi
10045946:	c3                   	ret
10045947:	6a 00                	push   0x0
10045949:	6a 00                	push   0x0
1004594b:	68 d8 b5 1a 10       	push   0x101ab5d8
10045950:	6a 06                	push   0x6
10045952:	68 f4 9a 1a 10       	push   0x101a9af4
10045957:	68 20 dd 1a 10       	push   0x101add20
1004595c:	8b ce                	mov    ecx,esi
1004595e:	e8 3d 68 0d 00       	call   0x1011c1a0
10045963:	5e                   	pop    esi
10045964:	c3                   	ret
10045965:	85 c9                	test   ecx,ecx
10045967:	74 27                	je     0x10045990
10045969:	8b 01                	mov    eax,DWORD PTR [ecx]
1004596b:	ff 50 20             	call   DWORD PTR [eax+0x20]
1004596e:	85 c0                	test   eax,eax
10045970:	74 1e                	je     0x10045990
10045972:	6a 00                	push   0x0
10045974:	6a 00                	push   0x0
10045976:	68 d8 b5 1a 10       	push   0x101ab5d8
1004597b:	6a 07                	push   0x7
1004597d:	68 58 07 1b 10       	push   0x101b0758
10045982:	68 20 dd 1a 10       	push   0x101add20
10045987:	8b ce                	mov    ecx,esi
10045989:	e8 12 68 0d 00       	call   0x1011c1a0
1004598e:	5e                   	pop    esi
1004598f:	c3                   	ret
10045990:	6a 00                	push   0x0
10045992:	6a 00                	push   0x0
10045994:	68 d8 b5 1a 10       	push   0x101ab5d8
10045999:	6a 07                	push   0x7
1004599b:	68 f4 9a 1a 10       	push   0x101a9af4
100459a0:	68 20 dd 1a 10       	push   0x101add20
100459a5:	8b ce                	mov    ecx,esi
100459a7:	e8 f4 67 0d 00       	call   0x1011c1a0
100459ac:	5e                   	pop    esi
100459ad:	c3                   	ret
