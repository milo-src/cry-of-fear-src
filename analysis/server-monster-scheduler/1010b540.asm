
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1010b540 <.text+0x10a540>:
1010b540:	56                   	push   esi
1010b541:	8b f1                	mov    esi,ecx
1010b543:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1010b546:	8b 88 d8 01 00 00    	mov    ecx,DWORD PTR [eax+0x1d8]
1010b54c:	85 c9                	test   ecx,ecx
1010b54e:	74 41                	je     0x1010b591
1010b550:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1010b555:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1010b55b:	03 c1                	add    eax,ecx
1010b55d:	50                   	push   eax
1010b55e:	6a 00                	push   0x0
1010b560:	e8 2b d0 00 00       	call   0x10118590
1010b565:	83 c4 08             	add    esp,0x8
1010b568:	85 c0                	test   eax,eax
1010b56a:	75 27                	jne    0x1010b593
1010b56c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1010b571:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
1010b574:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1010b57a:	03 81 d8 01 00 00    	add    eax,DWORD PTR [ecx+0x1d8]
1010b580:	50                   	push   eax
1010b581:	68 b8 46 1e 10       	push   0x101e46b8
1010b586:	6a 01                	push   0x1
1010b588:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1010b58e:	83 c4 0c             	add    esp,0xc
1010b591:	8b c6                	mov    eax,esi
1010b593:	5e                   	pop    esi
1010b594:	c3                   	ret
