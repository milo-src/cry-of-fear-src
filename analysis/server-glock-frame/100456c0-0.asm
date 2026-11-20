
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100456c0 <.text+0x446c0>:
100456c0:	56                   	push   esi
100456c1:	6a 64                	push   0x64
100456c3:	6a 00                	push   0x0
100456c5:	83 ec 08             	sub    esp,0x8
100456c8:	8b f1                	mov    esi,ecx
100456ca:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100456cd:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
100456d4:	3f 
100456d5:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
100456dc:	68 88 08 1b 10       	push   0x101b0888
100456e1:	6a 02                	push   0x2
100456e3:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100456e9:	e8 02 73 0b 00       	call   0x100fc9f0
100456ee:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
100456f4:	83 c4 1c             	add    esp,0x1c
100456f7:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100456fa:	c6 86 00 02 00 00 01 	mov    BYTE PTR [esi+0x200],0x1
10045701:	f6 80 d0 05 00 00 04 	test   BYTE PTR [eax+0x5d0],0x4
10045708:	b8 00 00 00 00       	mov    eax,0x0
1004570d:	0f 95 c0             	setne  al
10045710:	40                   	inc    eax
10045711:	89 81 14 01 00 00    	mov    DWORD PTR [ecx+0x114],eax
10045717:	8b ce                	mov    ecx,esi
10045719:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1004571c:	8b 16                	mov    edx,DWORD PTR [esi]
1004571e:	ff b0 14 01 00 00    	push   DWORD PTR [eax+0x114]
10045724:	ff b6 60 01 00 00    	push   DWORD PTR [esi+0x160]
1004572a:	ff 92 9c 01 00 00    	call   DWORD PTR [edx+0x19c]
10045730:	c6 86 f8 01 00 00 00 	mov    BYTE PTR [esi+0x1f8],0x0
10045737:	b9 a4 08 1b 10       	mov    ecx,0x101b08a4
1004573c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10045741:	6a 00                	push   0x0
10045743:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
10045749:	51                   	push   ecx
1004574a:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10045750:	e8 3b e6 0a 00       	call   0x100f3d90
10045755:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
1004575c:	8b ce                	mov    ecx,esi
1004575e:	8b 06                	mov    eax,DWORD PTR [esi]
10045760:	6a 00                	push   0x0
10045762:	6a 01                	push   0x1
10045764:	8b 80 98 01 00 00    	mov    eax,DWORD PTR [eax+0x198]
1004576a:	74 04                	je     0x10045770
1004576c:	6a 06                	push   0x6
1004576e:	eb 02                	jmp    0x10045772
10045770:	6a 07                	push   0x7
10045772:	ff d0                	call   eax
10045774:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10045779:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
10045780:	10 
10045781:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10045785:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1004578b:	f3 0f 58 c1          	addss  xmm0,xmm1
1004578f:	f3 0f 11 80 08 03 00 	movss  DWORD PTR [eax+0x308],xmm0
10045796:	00 
10045797:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1004579c:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100457a0:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
100457a6:	f3 0f 58 c1          	addss  xmm0,xmm1
100457aa:	f3 0f 11 80 08 03 00 	movss  DWORD PTR [eax+0x308],xmm0
100457b1:	00 
100457b2:	f3 0f 11 86 d4 01 00 	movss  DWORD PTR [esi+0x1d4],xmm0
100457b9:	00 
100457ba:	f3 0f 11 86 d0 01 00 	movss  DWORD PTR [esi+0x1d0],xmm0
100457c1:	00 
100457c2:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
100457c9:	00 
100457ca:	5e                   	pop    esi
100457cb:	c3                   	ret
