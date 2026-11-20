
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008f7a0 <.text+0x8e7a0>:
1008f7a0:	55                   	push   ebp
1008f7a1:	8b ec                	mov    ebp,esp
1008f7a3:	56                   	push   esi
1008f7a4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1008f7a7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1008f7aa:	85 f6                	test   esi,esi
1008f7ac:	75 13                	jne    0x1008f7c1
1008f7ae:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1008f7b4:	85 c0                	test   eax,eax
1008f7b6:	74 06                	je     0x1008f7be
1008f7b8:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1008f7be:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1008f7c1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1008f7c7:	85 c9                	test   ecx,ecx
1008f7c9:	74 07                	je     0x1008f7d2
1008f7cb:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1008f7ce:	85 c0                	test   eax,eax
1008f7d0:	75 27                	jne    0x1008f7f9
1008f7d2:	68 dc 00 00 00       	push   0xdc
1008f7d7:	51                   	push   ecx
1008f7d8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1008f7de:	83 c4 08             	add    esp,0x8
1008f7e1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1008f7e4:	85 c0                	test   eax,eax
1008f7e6:	74 0c                	je     0x1008f7f4
1008f7e8:	c7 00 e4 85 1c 10    	mov    DWORD PTR [eax],0x101c85e4
1008f7ee:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1008f7f1:	5e                   	pop    esi
1008f7f2:	5d                   	pop    ebp
1008f7f3:	c3                   	ret
1008f7f4:	33 c0                	xor    eax,eax
1008f7f6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1008f7f9:	5e                   	pop    esi
1008f7fa:	5d                   	pop    ebp
1008f7fb:	c3                   	ret
