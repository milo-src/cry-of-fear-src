
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1001f1a0 <.text+0x1e1a0>:
1001f1a0:	55                   	push   ebp
1001f1a1:	8b ec                	mov    ebp,esp
1001f1a3:	56                   	push   esi
1001f1a4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1001f1a7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1001f1aa:	85 f6                	test   esi,esi
1001f1ac:	75 13                	jne    0x1001f1c1
1001f1ae:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1001f1b4:	85 c0                	test   eax,eax
1001f1b6:	74 06                	je     0x1001f1be
1001f1b8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1001f1be:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1001f1c1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1001f1c7:	85 c9                	test   ecx,ecx
1001f1c9:	74 07                	je     0x1001f1d2
1001f1cb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1001f1ce:	85 c0                	test   eax,eax
1001f1d0:	75 27                	jne    0x1001f1f9
1001f1d2:	68 08 02 00 00       	push   0x208
1001f1d7:	51                   	push   ecx
1001f1d8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1001f1de:	83 c4 08             	add    esp,0x8
1001f1e1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1001f1e4:	85 c0                	test   eax,eax
1001f1e6:	74 0c                	je     0x1001f1f4
1001f1e8:	c7 00 48 97 1a 10    	mov    DWORD PTR [eax],0x101a9748
1001f1ee:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1001f1f1:	5e                   	pop    esi
1001f1f2:	5d                   	pop    ebp
1001f1f3:	c3                   	ret
1001f1f4:	33 c0                	xor    eax,eax
1001f1f6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1001f1f9:	5e                   	pop    esi
1001f1fa:	5d                   	pop    ebp
1001f1fb:	c3                   	ret
