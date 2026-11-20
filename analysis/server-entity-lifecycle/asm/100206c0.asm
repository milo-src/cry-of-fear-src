
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100206c0 <.text+0x1f6c0>:
100206c0:	55                   	push   ebp
100206c1:	8b ec                	mov    ebp,esp
100206c3:	56                   	push   esi
100206c4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100206c7:	57                   	push   edi
100206c8:	8b f9                	mov    edi,ecx
100206ca:	85 f6                	test   esi,esi
100206cc:	0f 84 be 00 00 00    	je     0x10020790
100206d2:	8b 06                	mov    eax,DWORD PTR [esi]
100206d4:	8b ce                	mov    ecx,esi
100206d6:	ff 90 d0 00 00 00    	call   DWORD PTR [eax+0xd0]
100206dc:	85 c0                	test   eax,eax
100206de:	0f 84 ac 00 00 00    	je     0x10020790
100206e4:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
100206e7:	83 b9 d8 01 00 00 00 	cmp    DWORD PTR [ecx+0x1d8],0x0
100206ee:	75 33                	jne    0x10020723
100206f0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100206f5:	8b 89 d0 01 00 00    	mov    ecx,DWORD PTR [ecx+0x1d0]
100206fb:	6a 00                	push   0x0
100206fd:	6a 02                	push   0x2
100206ff:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10020705:	51                   	push   ecx
10020706:	68 e0 9d 1a 10       	push   0x101a9de0
1002070b:	e8 90 a1 0f 00       	call   0x1011a8a0
10020710:	83 c4 08             	add    esp,0x8
10020713:	50                   	push   eax
10020714:	56                   	push   esi
10020715:	e8 f6 90 0f 00       	call   0x10119810
1002071a:	83 c4 10             	add    esp,0x10
1002071d:	5f                   	pop    edi
1002071e:	5e                   	pop    esi
1002071f:	5d                   	pop    ebp
10020720:	c2 10 00             	ret    0x10
10020723:	ff 76 04             	push   DWORD PTR [esi+0x4]
10020726:	e8 b5 1e ff ff       	call   0x100125e0
1002072b:	8b f0                	mov    esi,eax
1002072d:	83 c4 04             	add    esp,0x4
10020730:	85 f6                	test   esi,esi
10020732:	74 5c                	je     0x10020790
10020734:	57                   	push   edi
10020735:	8d 8e 48 23 00 00    	lea    ecx,[esi+0x2348]
1002073b:	e8 00 70 ff ff       	call   0x10017740
10020740:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
10020743:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10020746:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
1002074c:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10020752:	e8 29 6a 0f 00       	call   0x10117180
10020757:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1002075a:	8b 88 d8 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d8]
10020760:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10020765:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1002076b:	51                   	push   ecx
1002076c:	6a 00                	push   0x0
1002076e:	e8 1d 7e 0f 00       	call   0x10118590
10020773:	83 c4 10             	add    esp,0x10
10020776:	85 c0                	test   eax,eax
10020778:	74 16                	je     0x10020790
1002077a:	8b 10                	mov    edx,DWORD PTR [eax]
1002077c:	51                   	push   ecx
1002077d:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
10020784:	8b c8                	mov    ecx,eax
10020786:	6a 03                	push   0x3
10020788:	56                   	push   esi
10020789:	56                   	push   esi
1002078a:	ff 92 e8 00 00 00    	call   DWORD PTR [edx+0xe8]
10020790:	5f                   	pop    edi
10020791:	5e                   	pop    esi
10020792:	5d                   	pop    ebp
10020793:	c2 10 00             	ret    0x10
