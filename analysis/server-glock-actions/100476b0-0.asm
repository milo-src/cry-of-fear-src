
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100476b0 <.text+0x466b0>:
100476b0:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100476b5:	56                   	push   esi
100476b6:	8b f1                	mov    esi,ecx
100476b8:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
100476bc:	f3 0f 10 86 cc 01 00 	movss  xmm0,DWORD PTR [esi+0x1cc]
100476c3:	00 
100476c4:	0f 2f c1             	comiss xmm0,xmm1
100476c7:	0f 87 ac 00 00 00    	ja     0x10047779
100476cd:	f3 0f 10 86 d0 01 00 	movss  xmm0,DWORD PTR [esi+0x1d0]
100476d4:	00 
100476d5:	0f 2f c1             	comiss xmm0,xmm1
100476d8:	0f 87 9b 00 00 00    	ja     0x10047779
100476de:	83 be 28 01 00 00 00 	cmp    DWORD PTR [esi+0x128],0x0
100476e5:	0f 85 8e 00 00 00    	jne    0x10047779
100476eb:	83 be 40 01 00 00 00 	cmp    DWORD PTR [esi+0x140],0x0
100476f2:	0f 85 81 00 00 00    	jne    0x10047779
100476f8:	80 be 78 01 00 00 00 	cmp    BYTE PTR [esi+0x178],0x0
100476ff:	75 78                	jne    0x10047779
10047701:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10047707:	51                   	push   ecx
10047708:	c7 04 24 9a 99 99 3e 	mov    DWORD PTR [esp],0x3e99999a
1004770f:	8b 01                	mov    eax,DWORD PTR [ecx]
10047711:	ff 50 08             	call   DWORD PTR [eax+0x8]
10047714:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1004771a:	6a 00                	push   0x0
1004771c:	68 84 f1 1a 10       	push   0x101af184
10047721:	c7 40 78 90 97 0f 10 	mov    DWORD PTR [eax+0x78],0x100f9790
10047728:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
1004772e:	e8 0d 2b 0a 00       	call   0x100ea240
10047733:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
1004773a:	8b ce                	mov    ecx,esi
1004773c:	8b 06                	mov    eax,DWORD PTR [esi]
1004773e:	6a 00                	push   0x0
10047740:	6a 01                	push   0x1
10047742:	74 04                	je     0x10047748
10047744:	6a 1b                	push   0x1b
10047746:	eb 02                	jmp    0x1004774a
10047748:	6a 1c                	push   0x1c
1004774a:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
10047750:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10047755:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10047759:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
10047760:	10 
10047761:	f3 0f 11 86 d8 01 00 	movss  DWORD PTR [esi+0x1d8],xmm0
10047768:	00 
10047769:	f3 0f 11 86 d0 01 00 	movss  DWORD PTR [esi+0x1d0],xmm0
10047770:	00 
10047771:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
10047778:	00 
10047779:	5e                   	pop    esi
1004777a:	c3                   	ret
