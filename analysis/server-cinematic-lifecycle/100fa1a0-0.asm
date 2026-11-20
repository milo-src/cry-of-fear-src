
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fa1a0 <.text+0xf91a0>:
100fa1a0:	55                   	push   ebp
100fa1a1:	8b ec                	mov    ebp,esp
100fa1a3:	56                   	push   esi
100fa1a4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100fa1a7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100fa1aa:	85 f6                	test   esi,esi
100fa1ac:	75 13                	jne    0x100fa1c1
100fa1ae:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
100fa1b4:	85 c0                	test   eax,eax
100fa1b6:	74 06                	je     0x100fa1be
100fa1b8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
100fa1be:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
100fa1c1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
100fa1c7:	85 c9                	test   ecx,ecx
100fa1c9:	74 07                	je     0x100fa1d2
100fa1cb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
100fa1ce:	85 c0                	test   eax,eax
100fa1d0:	75 27                	jne    0x100fa1f9
100fa1d2:	68 c0 03 00 00       	push   0x3c0
100fa1d7:	51                   	push   ecx
100fa1d8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
100fa1de:	83 c4 08             	add    esp,0x8
100fa1e1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100fa1e4:	85 c0                	test   eax,eax
100fa1e6:	74 0c                	je     0x100fa1f4
100fa1e8:	c7 00 68 db 1d 10    	mov    DWORD PTR [eax],0x101ddb68
100fa1ee:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100fa1f1:	5e                   	pop    esi
100fa1f2:	5d                   	pop    ebp
100fa1f3:	c3                   	ret
100fa1f4:	33 c0                	xor    eax,eax
100fa1f6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
100fa1f9:	5e                   	pop    esi
100fa1fa:	5d                   	pop    ebp
100fa1fb:	c3                   	ret
