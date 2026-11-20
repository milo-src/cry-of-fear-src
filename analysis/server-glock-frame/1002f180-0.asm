
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1002f180 <.text+0x2e180>:
1002f180:	55                   	push   ebp
1002f181:	8b ec                	mov    ebp,esp
1002f183:	56                   	push   esi
1002f184:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1002f187:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1002f18a:	85 f6                	test   esi,esi
1002f18c:	75 13                	jne    0x1002f1a1
1002f18e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1002f194:	85 c0                	test   eax,eax
1002f196:	74 06                	je     0x1002f19e
1002f198:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1002f19e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1002f1a1:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1002f1a7:	85 c9                	test   ecx,ecx
1002f1a9:	74 07                	je     0x1002f1b2
1002f1ab:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1002f1ae:	85 c0                	test   eax,eax
1002f1b0:	75 27                	jne    0x1002f1d9
1002f1b2:	68 20 02 00 00       	push   0x220
1002f1b7:	51                   	push   ecx
1002f1b8:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1002f1be:	83 c4 08             	add    esp,0x8
1002f1c1:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1002f1c4:	85 c0                	test   eax,eax
1002f1c6:	74 0c                	je     0x1002f1d4
1002f1c8:	c7 00 04 d7 1a 10    	mov    DWORD PTR [eax],0x101ad704
1002f1ce:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1002f1d1:	5e                   	pop    esi
1002f1d2:	5d                   	pop    ebp
1002f1d3:	c3                   	ret
1002f1d4:	33 c0                	xor    eax,eax
1002f1d6:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1002f1d9:	5e                   	pop    esi
1002f1da:	5d                   	pop    ebp
1002f1db:	c3                   	ret
