
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ca650 <.text+0xc9650>:
100ca650:	55                   	push   ebp
100ca651:	8b ec                	mov    ebp,esp
100ca653:	56                   	push   esi
100ca654:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100ca657:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100ca65a:	85 f6                	test   esi,esi
100ca65c:	75 13                	jne    0x100ca671
100ca65e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
100ca664:	85 c0                	test   eax,eax
100ca666:	74 06                	je     0x100ca66e
100ca668:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
100ca66e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100ca671:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
100ca677:	85 c9                	test   ecx,ecx
100ca679:	74 07                	je     0x100ca682
100ca67b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
100ca67e:	85 c0                	test   eax,eax
100ca680:	75 27                	jne    0x100ca6a9
100ca682:	68 74 03 00 00       	push   0x374
100ca687:	51                   	push   ecx
100ca688:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
100ca68e:	83 c4 08             	add    esp,0x8
100ca691:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100ca694:	85 c0                	test   eax,eax
100ca696:	74 0c                	je     0x100ca6a4
100ca698:	c7 00 7c 6b 1d 10    	mov    DWORD PTR [eax],0x101d6b7c
100ca69e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100ca6a1:	5e                   	pop    esi
100ca6a2:	5d                   	pop    ebp
100ca6a3:	c3                   	ret
100ca6a4:	33 c0                	xor    eax,eax
100ca6a6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100ca6a9:	5e                   	pop    esi
100ca6aa:	5d                   	pop    ebp
100ca6ab:	c3                   	ret
