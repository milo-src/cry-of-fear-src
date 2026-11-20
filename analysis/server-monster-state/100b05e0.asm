
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100b05e0 <.text+0xaf5e0>:
100b05e0:	55                   	push   ebp
100b05e1:	8b ec                	mov    ebp,esp
100b05e3:	56                   	push   esi
100b05e4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100b05e7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100b05ea:	85 f6                	test   esi,esi
100b05ec:	75 13                	jne    0x100b0601
100b05ee:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
100b05f4:	85 c0                	test   eax,eax
100b05f6:	74 06                	je     0x100b05fe
100b05f8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
100b05fe:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100b0601:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
100b0607:	85 c9                	test   ecx,ecx
100b0609:	74 07                	je     0x100b0612
100b060b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
100b060e:	85 c0                	test   eax,eax
100b0610:	75 27                	jne    0x100b0639
100b0612:	68 78 03 00 00       	push   0x378
100b0617:	51                   	push   ecx
100b0618:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
100b061e:	83 c4 08             	add    esp,0x8
100b0621:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100b0624:	85 c0                	test   eax,eax
100b0626:	74 0c                	je     0x100b0634
100b0628:	c7 00 6c e3 1c 10    	mov    DWORD PTR [eax],0x101ce36c
100b062e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100b0631:	5e                   	pop    esi
100b0632:	5d                   	pop    ebp
100b0633:	c3                   	ret
100b0634:	33 c0                	xor    eax,eax
100b0636:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100b0639:	5e                   	pop    esi
100b063a:	5d                   	pop    ebp
100b063b:	c3                   	ret
