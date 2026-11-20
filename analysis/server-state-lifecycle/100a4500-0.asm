
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100a4500 <.text+0xa3500>:
100a4500:	56                   	push   esi
100a4501:	8b f1                	mov    esi,ecx
100a4503:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100a4506:	83 b8 d8 01 00 00 00 	cmp    DWORD PTR [eax+0x1d8],0x0
100a450d:	74 67                	je     0x100a4576
100a450f:	a1 10 2e 22 10       	mov    eax,ds:0x10222e10
100a4514:	85 c0                	test   eax,eax
100a4516:	74 13                	je     0x100a452b
100a4518:	68 38 0f 01 00       	push   0x10f38
100a451d:	83 c0 04             	add    eax,0x4
100a4520:	6a 00                	push   0x0
100a4522:	50                   	push   eax
100a4523:	e8 68 af 09 00       	call   0x1013f490
100a4528:	83 c4 0c             	add    esp,0xc
100a452b:	68 30 21 1a 10       	push   0x101a2130
100a4530:	6a 00                	push   0x0
100a4532:	e8 29 3f 07 00       	call   0x10118460
100a4537:	83 c4 08             	add    esp,0x8
100a453a:	85 c0                	test   eax,eax
100a453c:	74 38                	je     0x100a4576
100a453e:	ff 70 04             	push   DWORD PTR [eax+0x4]
100a4541:	e8 9a e0 f6 ff       	call   0x100125e0
100a4546:	83 c4 04             	add    esp,0x4
100a4549:	85 c0                	test   eax,eax
100a454b:	74 29                	je     0x100a4576
100a454d:	51                   	push   ecx
100a454e:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100a4551:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100a4558:	6a 03                	push   0x3
100a455a:	56                   	push   esi
100a455b:	50                   	push   eax
100a455c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100a4561:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
100a4567:	03 81 d8 01 00 00    	add    eax,DWORD PTR [ecx+0x1d8]
100a456d:	50                   	push   eax
100a456e:	e8 7d da 05 00       	call   0x10101ff0
100a4573:	83 c4 14             	add    esp,0x14
100a4576:	5e                   	pop    esi
100a4577:	c2 10 00             	ret    0x10
