
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011b470 <.text+0x11a470>:
1011b470:	55                   	push   ebp
1011b471:	8b ec                	mov    ebp,esp
1011b473:	56                   	push   esi
1011b474:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1011b477:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1011b47a:	85 f6                	test   esi,esi
1011b47c:	75 13                	jne    0x1011b491
1011b47e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1011b484:	85 c0                	test   eax,eax
1011b486:	74 06                	je     0x1011b48e
1011b488:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1011b48e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1011b491:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1011b497:	85 c9                	test   ecx,ecx
1011b499:	74 07                	je     0x1011b4a2
1011b49b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1011b49e:	85 c0                	test   eax,eax
1011b4a0:	75 27                	jne    0x1011b4c9
1011b4a2:	68 fc 01 00 00       	push   0x1fc
1011b4a7:	51                   	push   ecx
1011b4a8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1011b4ae:	83 c4 08             	add    esp,0x8
1011b4b1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1011b4b4:	85 c0                	test   eax,eax
1011b4b6:	74 0c                	je     0x1011b4c4
1011b4b8:	c7 00 4c 61 1e 10    	mov    DWORD PTR [eax],0x101e614c
1011b4be:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1011b4c1:	5e                   	pop    esi
1011b4c2:	5d                   	pop    ebp
1011b4c3:	c3                   	ret
1011b4c4:	33 c0                	xor    eax,eax
1011b4c6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1011b4c9:	5e                   	pop    esi
1011b4ca:	5d                   	pop    ebp
1011b4cb:	c3                   	ret
