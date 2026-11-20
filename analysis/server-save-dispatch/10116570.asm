
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10116570 <.text+0x115570>:
10116570:	55                   	push   ebp
10116571:	8b ec                	mov    ebp,esp
10116573:	51                   	push   ecx
10116574:	53                   	push   ebx
10116575:	8b 5d 0c             	mov    ebx,DWORD PTR [ebp+0xc]
10116578:	56                   	push   esi
10116579:	57                   	push   edi
1011657a:	be e0 aa 21 10       	mov    esi,0x1021aae0
1011657f:	33 ff                	xor    edi,edi
10116581:	ff 73 04             	push   DWORD PTR [ebx+0x4]
10116584:	ff 76 04             	push   DWORD PTR [esi+0x4]
10116587:	e8 2f 57 06 00       	call   0x1017bcbb
1011658c:	83 c4 08             	add    esp,0x8
1011658f:	85 c0                	test   eax,eax
10116591:	74 15                	je     0x101165a8
10116593:	83 c7 10             	add    edi,0x10
10116596:	83 c6 10             	add    esi,0x10
10116599:	81 ff 60 06 00 00    	cmp    edi,0x660
1011659f:	72 e0                	jb     0x10116581
101165a1:	5f                   	pop    edi
101165a2:	5e                   	pop    esi
101165a3:	5b                   	pop    ebx
101165a4:	8b e5                	mov    esp,ebp
101165a6:	5d                   	pop    ebp
101165a7:	c3                   	ret
101165a8:	8b 06                	mov    eax,DWORD PTR [esi]
101165aa:	83 f8 11             	cmp    eax,0x11
101165ad:	0f 87 9f 00 00 00    	ja     0x10116652
101165b3:	0f b6 80 84 66 11 10 	movzx  eax,BYTE PTR [eax+0x10116684]
101165ba:	ff 24 85 70 66 11 10 	jmp    DWORD PTR [eax*4+0x10116670]
101165c1:	ff 73 08             	push   DWORD PTR [ebx+0x8]
101165c4:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
101165ca:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
101165cd:	83 c4 04             	add    esp,0x4
101165d0:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
101165d3:	5f                   	pop    edi
101165d4:	89 04 11             	mov    DWORD PTR [ecx+edx*1],eax
101165d7:	5e                   	pop    esi
101165d8:	c7 43 0c 01 00 00 00 	mov    DWORD PTR [ebx+0xc],0x1
101165df:	5b                   	pop    ebx
101165e0:	8b e5                	mov    esp,ebp
101165e2:	5d                   	pop    ebp
101165e3:	c3                   	ret
101165e4:	ff 73 08             	push   DWORD PTR [ebx+0x8]
101165e7:	e8 00 90 05 00       	call   0x1016f5ec
101165ec:	8b 4e 08             	mov    ecx,DWORD PTR [esi+0x8]
101165ef:	83 c4 04             	add    esp,0x4
101165f2:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
101165f5:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
101165f8:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
101165fd:	5f                   	pop    edi
101165fe:	f3 0f 11 04 08       	movss  DWORD PTR [eax+ecx*1],xmm0
10116603:	5e                   	pop    esi
10116604:	c7 43 0c 01 00 00 00 	mov    DWORD PTR [ebx+0xc],0x1
1011660b:	5b                   	pop    ebx
1011660c:	8b e5                	mov    esp,ebp
1011660e:	5d                   	pop    ebp
1011660f:	c3                   	ret
10116610:	ff 73 08             	push   DWORD PTR [ebx+0x8]
10116613:	e8 46 4f 05 00       	call   0x1016b55e
10116618:	8b 56 08             	mov    edx,DWORD PTR [esi+0x8]
1011661b:	83 c4 04             	add    esp,0x4
1011661e:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10116621:	5f                   	pop    edi
10116622:	89 04 11             	mov    DWORD PTR [ecx+edx*1],eax
10116625:	5e                   	pop    esi
10116626:	c7 43 0c 01 00 00 00 	mov    DWORD PTR [ebx+0xc],0x1
1011662d:	5b                   	pop    ebx
1011662e:	8b e5                	mov    esp,ebp
10116630:	5d                   	pop    ebp
10116631:	c3                   	ret
10116632:	8b 46 08             	mov    eax,DWORD PTR [esi+0x8]
10116635:	ff 73 08             	push   DWORD PTR [ebx+0x8]
10116638:	03 45 08             	add    eax,DWORD PTR [ebp+0x8]
1011663b:	50                   	push   eax
1011663c:	e8 7f 40 00 00       	call   0x1011a6c0
10116641:	83 c4 08             	add    esp,0x8
10116644:	c7 43 0c 01 00 00 00 	mov    DWORD PTR [ebx+0xc],0x1
1011664b:	5f                   	pop    edi
1011664c:	5e                   	pop    esi
1011664d:	5b                   	pop    ebx
1011664e:	8b e5                	mov    esp,ebp
10116650:	5d                   	pop    ebp
10116651:	c3                   	ret
10116652:	68 50 59 1e 10       	push   0x101e5950
10116657:	6a 04                	push   0x4
10116659:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1011665f:	83 c4 08             	add    esp,0x8
10116662:	c7 43 0c 01 00 00 00 	mov    DWORD PTR [ebx+0xc],0x1
10116669:	5f                   	pop    edi
1011666a:	5e                   	pop    esi
1011666b:	5b                   	pop    ebx
1011666c:	8b e5                	mov    esp,ebp
1011666e:	5d                   	pop    ebp
1011666f:	c3                   	ret
