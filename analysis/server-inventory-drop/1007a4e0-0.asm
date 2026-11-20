
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1007a4e0 <.text+0x794e0>:
1007a4e0:	55                   	push   ebp
1007a4e1:	8b ec                	mov    ebp,esp
1007a4e3:	56                   	push   esi
1007a4e4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1007a4e7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1007a4ea:	85 f6                	test   esi,esi
1007a4ec:	75 13                	jne    0x1007a501
1007a4ee:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1007a4f4:	85 c0                	test   eax,eax
1007a4f6:	74 06                	je     0x1007a4fe
1007a4f8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1007a4fe:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1007a501:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1007a507:	85 c9                	test   ecx,ecx
1007a509:	74 07                	je     0x1007a512
1007a50b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1007a50e:	85 c0                	test   eax,eax
1007a510:	75 27                	jne    0x1007a539
1007a512:	68 00 02 00 00       	push   0x200
1007a517:	51                   	push   ecx
1007a518:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1007a51e:	83 c4 08             	add    esp,0x8
1007a521:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1007a524:	85 c0                	test   eax,eax
1007a526:	74 0c                	je     0x1007a534
1007a528:	c7 00 70 bb 1b 10    	mov    DWORD PTR [eax],0x101bbb70
1007a52e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1007a531:	5e                   	pop    esi
1007a532:	5d                   	pop    ebp
1007a533:	c3                   	ret
1007a534:	33 c0                	xor    eax,eax
1007a536:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1007a539:	5e                   	pop    esi
1007a53a:	5d                   	pop    ebp
1007a53b:	c3                   	ret
