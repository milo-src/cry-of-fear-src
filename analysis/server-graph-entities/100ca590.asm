
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ca590 <.text+0xc9590>:
100ca590:	55                   	push   ebp
100ca591:	8b ec                	mov    ebp,esp
100ca593:	56                   	push   esi
100ca594:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100ca597:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100ca59a:	85 f6                	test   esi,esi
100ca59c:	75 13                	jne    0x100ca5b1
100ca59e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
100ca5a4:	85 c0                	test   eax,eax
100ca5a6:	74 06                	je     0x100ca5ae
100ca5a8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
100ca5ae:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100ca5b1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
100ca5b7:	85 c9                	test   ecx,ecx
100ca5b9:	74 07                	je     0x100ca5c2
100ca5bb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
100ca5be:	85 c0                	test   eax,eax
100ca5c0:	75 27                	jne    0x100ca5e9
100ca5c2:	68 e0 00 00 00       	push   0xe0
100ca5c7:	51                   	push   ecx
100ca5c8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
100ca5ce:	83 c4 08             	add    esp,0x8
100ca5d1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100ca5d4:	85 c0                	test   eax,eax
100ca5d6:	74 0c                	je     0x100ca5e4
100ca5d8:	c7 00 20 66 1d 10    	mov    DWORD PTR [eax],0x101d6620
100ca5de:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100ca5e1:	5e                   	pop    esi
100ca5e2:	5d                   	pop    ebp
100ca5e3:	c3                   	ret
100ca5e4:	33 c0                	xor    eax,eax
100ca5e6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100ca5e9:	5e                   	pop    esi
100ca5ea:	5d                   	pop    ebp
100ca5eb:	c3                   	ret
