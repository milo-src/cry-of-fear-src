
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10090400 <.text+0x8f400>:
10090400:	55                   	push   ebp
10090401:	8b ec                	mov    ebp,esp
10090403:	56                   	push   esi
10090404:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10090407:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
1009040a:	85 f6                	test   esi,esi
1009040c:	75 13                	jne    0x10090421
1009040e:	ff 15 9c 2f 22 10    	call   DWORD PTR ds:0x10222f9c
10090414:	85 c0                	test   eax,eax
10090416:	74 06                	je     0x1009041e
10090418:	8d b0 80 00 00 00    	lea    esi,[eax+0x80]
1009041e:	89 75 08             	mov    DWORD PTR [ebp+0x8],esi
10090421:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
10090427:	85 c9                	test   ecx,ecx
10090429:	74 07                	je     0x10090432
1009042b:	8b 41 7c             	mov    eax,DWORD PTR [ecx+0x7c]
1009042e:	85 c0                	test   eax,eax
10090430:	75 27                	jne    0x10090459
10090432:	68 00 01 00 00       	push   0x100
10090437:	51                   	push   ecx
10090438:	ff 15 44 30 22 10    	call   DWORD PTR ds:0x10223044
1009043e:	83 c4 08             	add    esp,0x8
10090441:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
10090444:	85 c0                	test   eax,eax
10090446:	74 0c                	je     0x10090454
10090448:	c7 00 58 34 1c 10    	mov    DWORD PTR [eax],0x101c3458
1009044e:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10090451:	5e                   	pop    esi
10090452:	5d                   	pop    ebp
10090453:	c3                   	ret
10090454:	33 c0                	xor    eax,eax
10090456:	89 70 04             	mov    DWORD PTR [eax+0x4],esi
10090459:	5e                   	pop    esi
1009045a:	5d                   	pop    ebp
1009045b:	c3                   	ret
