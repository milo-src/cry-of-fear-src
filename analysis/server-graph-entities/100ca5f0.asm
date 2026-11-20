
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ca5f0 <.text+0xc95f0>:
100ca5f0:	55                   	push   ebp
100ca5f1:	8b ec                	mov    ebp,esp
100ca5f3:	56                   	push   esi
100ca5f4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100ca5f7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100ca5fa:	85 f6                	test   esi,esi
100ca5fc:	75 13                	jne    0x100ca611
100ca5fe:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
100ca604:	85 c0                	test   eax,eax
100ca606:	74 06                	je     0x100ca60e
100ca608:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
100ca60e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100ca611:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
100ca617:	85 c9                	test   ecx,ecx
100ca619:	74 07                	je     0x100ca622
100ca61b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
100ca61e:	85 c0                	test   eax,eax
100ca620:	75 27                	jne    0x100ca649
100ca622:	68 fc 04 00 00       	push   0x4fc
100ca627:	51                   	push   ecx
100ca628:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
100ca62e:	83 c4 08             	add    esp,0x8
100ca631:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100ca634:	85 c0                	test   eax,eax
100ca636:	74 0c                	je     0x100ca644
100ca638:	c7 00 c8 74 1d 10    	mov    DWORD PTR [eax],0x101d74c8
100ca63e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100ca641:	5e                   	pop    esi
100ca642:	5d                   	pop    ebp
100ca643:	c3                   	ret
100ca644:	33 c0                	xor    eax,eax
100ca646:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100ca649:	5e                   	pop    esi
100ca64a:	5d                   	pop    ebp
100ca64b:	c3                   	ret
