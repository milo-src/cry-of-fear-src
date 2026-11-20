
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000d2f0 <.text+0xc2f0>:
1000d2f0:	55                   	push   ebp
1000d2f1:	8b ec                	mov    ebp,esp
1000d2f3:	56                   	push   esi
1000d2f4:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
1000d2f7:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000d2fa:	85 f6                	test   esi,esi
1000d2fc:	75 13                	jne    0x1000d311
1000d2fe:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
1000d304:	85 c0                	test   eax,eax
1000d306:	74 06                	je     0x1000d30e
1000d308:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1000d30e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1000d311:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1000d317:	85 c9                	test   ecx,ecx
1000d319:	74 07                	je     0x1000d322
1000d31b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1000d31e:	85 c0                	test   eax,eax
1000d320:	75 27                	jne    0x1000d349
1000d322:	68 6c 01 00 00       	push   0x16c
1000d327:	51                   	push   ecx
1000d328:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1000d32e:	83 c4 08             	add    esp,0x8
1000d331:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
1000d334:	85 c0                	test   eax,eax
1000d336:	74 0c                	je     0x1000d344
1000d338:	c7 00 30 28 1a 10    	mov    DWORD PTR [eax],0x101a2830
1000d33e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000d341:	5e                   	pop    esi
1000d342:	5d                   	pop    ebp
1000d343:	c3                   	ret
1000d344:	33 c0                	xor    eax,eax
1000d346:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
1000d349:	5e                   	pop    esi
1000d34a:	5d                   	pop    ebp
1000d34b:	c3                   	ret
