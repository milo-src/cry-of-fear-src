
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f0520 <.text+0xef520>:
100f0520:	83 3d b0 38 22 10 00 	cmp    DWORD PTR ds:0x102238b0,0x0
100f0527:	56                   	push   esi
100f0528:	8b f1                	mov    esi,ecx
100f052a:	74 2e                	je     0x100f055a
100f052c:	83 3d b4 38 22 10 00 	cmp    DWORD PTR ds:0x102238b4,0x0
100f0533:	75 25                	jne    0x100f055a
100f0535:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100f053a:	e8 a1 c8 fd ff       	call   0x100ccde0
100f053f:	85 c0                	test   eax,eax
100f0541:	75 07                	jne    0x100f054a
100f0543:	68 ac b5 1d 10       	push   0x101db5ac
100f0548:	eb 05                	jmp    0x100f054f
100f054a:	68 cc b5 1d 10       	push   0x101db5cc
100f054f:	6a 01                	push   0x1
100f0551:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100f0557:	83 c4 08             	add    esp,0x8
100f055a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f055d:	c7 86 a0 24 00 00 00 	mov    DWORD PTR [esi+0x24a0],0x447a0000
100f0564:	00 7a 44 
100f0567:	c7 86 a8 24 00 00 e8 	mov    DWORD PTR [esi+0x24a8],0x3e8
100f056e:	03 00 00 
100f0571:	c7 86 0c 03 00 00 00 	mov    DWORD PTR [esi+0x30c],0x0
100f0578:	00 00 00 
100f057b:	c7 86 c8 24 00 00 ff 	mov    DWORD PTR [esi+0x24c8],0xffffffff
100f0582:	ff ff ff 
100f0585:	c7 86 18 1f 00 00 ff 	mov    DWORD PTR [esi+0x1f18],0xffffffff
100f058c:	ff ff ff 
100f058f:	c7 86 fc 24 00 00 ff 	mov    DWORD PTR [esi+0x24fc],0xffffffff
100f0596:	ff ff ff 
100f0599:	c7 86 d4 24 00 00 c0 	mov    DWORD PTR [esi+0x24d4],0xc0
100f05a0:	00 00 00 
100f05a3:	c7 86 18 23 00 00 00 	mov    DWORD PTR [esi+0x2318],0x40a00000
100f05aa:	00 a0 40 
100f05ad:	c7 86 20 23 00 00 00 	mov    DWORD PTR [esi+0x2320],0x40a00000
100f05b4:	00 a0 40 
100f05b7:	c7 86 30 23 00 00 02 	mov    DWORD PTR [esi+0x2330],0x2
100f05be:	00 00 00 
100f05c1:	c7 86 10 28 00 00 00 	mov    DWORD PTR [esi+0x2810],0x0
100f05c8:	00 00 00 
100f05cb:	f3 0f 10 05 b0 68 22 	movss  xmm0,DWORD PTR ds:0x102268b0
100f05d2:	10 
100f05d3:	f3 0f 11 80 14 02 00 	movss  DWORD PTR [eax+0x214],xmm0
100f05da:	00 
100f05db:	e8 e0 59 ff ff       	call   0x100e5fc0
100f05e0:	8b ce                	mov    ecx,esi
100f05e2:	c7 86 f4 24 00 00 05 	mov    DWORD PTR [esi+0x24f4],0x5
100f05e9:	00 00 00 
100f05ec:	e8 bf 58 00 00       	call   0x100f5eb0
100f05f1:	c7 86 0c 28 00 00 01 	mov    DWORD PTR [esi+0x280c],0x1
100f05f8:	00 00 00 
100f05fb:	83 3d e4 7f 21 10 00 	cmp    DWORD PTR ds:0x10217fe4,0x0
100f0602:	74 0a                	je     0x100f060e
100f0604:	c7 86 cc 24 00 00 01 	mov    DWORD PTR [esi+0x24cc],0x1
100f060b:	00 00 00 
100f060e:	5e                   	pop    esi
100f060f:	c3                   	ret
