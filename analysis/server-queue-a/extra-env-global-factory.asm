
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100126a0 <.text+0x116a0>:
100126a0:	55                   	push   ebp
100126a1:	8b ec                	mov    ebp,esp
100126a3:	56                   	push   esi
100126a4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100126a7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100126aa:	85 f6                	test   esi,esi
100126ac:	75 13                	jne    0x100126c1
100126ae:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
100126b4:	85 c0                	test   eax,eax
100126b6:	74 06                	je     0x100126be
100126b8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
100126be:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100126c1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
100126c7:	85 c9                	test   ecx,ecx
100126c9:	74 07                	je     0x100126d2
100126cb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
100126ce:	85 c0                	test   eax,eax
100126d0:	75 27                	jne    0x100126f9
100126d2:	68 e8 00 00 00       	push   0xe8
100126d7:	51                   	push   ecx
100126d8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
100126de:	83 c4 08             	add    esp,0x8
100126e1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100126e4:	85 c0                	test   eax,eax
100126e6:	74 0c                	je     0x100126f4
100126e8:	c7 00 0c 50 1a 10    	mov    DWORD PTR [eax],0x101a500c
100126ee:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100126f1:	5e                   	pop    esi
100126f2:	5d                   	pop    ebp
100126f3:	c3                   	ret
100126f4:	33 c0                	xor    eax,eax
100126f6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100126f9:	5e                   	pop    esi
100126fa:	5d                   	pop    ebp
100126fb:	c3                   	ret
