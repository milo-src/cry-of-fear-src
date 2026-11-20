
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10020660 <.text+0x1f660>:
10020660:	55                   	push   ebp
10020661:	8b ec                	mov    ebp,esp
10020663:	56                   	push   esi
10020664:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10020667:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1002066a:	85 f6                	test   esi,esi
1002066c:	75 13                	jne    0x10020681
1002066e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10020674:	85 c0                	test   eax,eax
10020676:	74 06                	je     0x1002067e
10020678:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1002067e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10020681:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10020687:	85 c9                	test   ecx,ecx
10020689:	74 07                	je     0x10020692
1002068b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1002068e:	85 c0                	test   eax,eax
10020690:	75 27                	jne    0x100206b9
10020692:	68 f4 03 00 00       	push   0x3f4
10020697:	51                   	push   ecx
10020698:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1002069e:	83 c4 08             	add    esp,0x8
100206a1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100206a4:	85 c0                	test   eax,eax
100206a6:	74 0c                	je     0x100206b4
100206a8:	c7 00 04 9e 1a 10    	mov    DWORD PTR [eax],0x101a9e04
100206ae:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100206b1:	5e                   	pop    esi
100206b2:	5d                   	pop    ebp
100206b3:	c3                   	ret
100206b4:	33 c0                	xor    eax,eax
100206b6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100206b9:	5e                   	pop    esi
100206ba:	5d                   	pop    ebp
100206bb:	c3                   	ret
