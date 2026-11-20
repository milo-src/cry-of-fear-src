
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1009f400 <.text+0x9e400>:
1009f400:	55                   	push   ebp
1009f401:	8b ec                	mov    ebp,esp
1009f403:	56                   	push   esi
1009f404:	6a 00                	push   0x0
1009f406:	e8 f5 2d ff ff       	call   0x10092200
1009f40b:	83 c4 04             	add    esp,0x4
1009f40e:	8b f0                	mov    esi,eax
1009f410:	8b ce                	mov    ecx,esi
1009f412:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1009f415:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1009f418:	e8 43 00 00 00       	call   0x1009f460
1009f41d:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1009f423:	ba 30 0f 1c 10       	mov    edx,0x101c0f30
1009f428:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009f42b:	2b 91 98 00 00 00    	sub    edx,DWORD PTR [ecx+0x98]
1009f431:	83 7d 10 00          	cmp    DWORD PTR [ebp+0x10],0x0
1009f435:	89 10                	mov    DWORD PTR [eax],edx
1009f437:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009f43a:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
1009f441:	00 00 00 
1009f444:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009f447:	c7 80 08 01 00 00 08 	mov    DWORD PTR [eax+0x108],0x8
1009f44e:	00 00 00 
1009f451:	74 07                	je     0x1009f45a
1009f453:	8b ce                	mov    ecx,esi
1009f455:	e8 c6 26 00 00       	call   0x100a1b20
1009f45a:	8b c6                	mov    eax,esi
1009f45c:	5e                   	pop    esi
1009f45d:	5d                   	pop    ebp
1009f45e:	c3                   	ret
