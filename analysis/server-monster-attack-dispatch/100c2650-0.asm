
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100c2650 <.text+0xc1650>:
100c2650:	55                   	push   ebp
100c2651:	8b ec                	mov    ebp,esp
100c2653:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100c2656:	56                   	push   esi
100c2657:	8b f1                	mov    esi,ecx
100c2659:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100c265c:	89 46 0c             	mov    DWORD PTR [esi+0xc],eax
100c265f:	85 c0                	test   eax,eax
100c2661:	75 2e                	jne    0x100c2691
100c2663:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100c2668:	8b 88 98 00 00 00    	mov    ecx,DWORD PTR [eax+0x98]
100c266e:	8b 82 cc 01 00 00    	mov    eax,DWORD PTR [edx+0x1cc]
100c2674:	03 c1                	add    eax,ecx
100c2676:	50                   	push   eax
100c2677:	8b 02                	mov    eax,DWORD PTR [edx]
100c2679:	03 c1                	add    eax,ecx
100c267b:	50                   	push   eax
100c267c:	68 e4 4e 1d 10       	push   0x101d4ee4
100c2681:	6a 04                	push   0x4
100c2683:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c2689:	83 c4 10             	add    esp,0x10
100c268c:	5e                   	pop    esi
100c268d:	5d                   	pop    ebp
100c268e:	c2 04 00             	ret    0x4
100c2691:	33 c0                	xor    eax,eax
100c2693:	c7 86 b8 02 00 00 10 	mov    DWORD PTR [esi+0x2b8],0x10
100c269a:	00 00 00 
100c269d:	83 ba 08 01 00 00 05 	cmp    DWORD PTR [edx+0x108],0x5
100c26a4:	0f 94 c0             	sete   al
100c26a7:	8d 04 45 03 00 00 00 	lea    eax,[eax*2+0x3]
100c26ae:	89 86 d0 02 00 00    	mov    DWORD PTR [esi+0x2d0],eax
100c26b4:	e8 f7 b6 ff ff       	call   0x100bddb0
100c26b9:	85 c0                	test   eax,eax
100c26bb:	75 10                	jne    0x100c26cd
100c26bd:	68 14 4f 1d 10       	push   0x101d4f14
100c26c2:	6a 02                	push   0x2
100c26c4:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100c26ca:	83 c4 08             	add    esp,0x8
100c26cd:	6a 01                	push   0x1
100c26cf:	8b ce                	mov    ecx,esi
100c26d1:	e8 9a 03 00 00       	call   0x100c2a70
100c26d6:	8b 06                	mov    eax,DWORD PTR [esi]
100c26d8:	8b ce                	mov    ecx,esi
100c26da:	6a 02                	push   0x2
100c26dc:	ff 90 8c 01 00 00    	call   DWORD PTR [eax+0x18c]
100c26e2:	50                   	push   eax
100c26e3:	8b ce                	mov    ecx,esi
100c26e5:	e8 66 83 f4 ff       	call   0x1000aa50
100c26ea:	5e                   	pop    esi
100c26eb:	5d                   	pop    ebp
100c26ec:	c2 04 00             	ret    0x4
