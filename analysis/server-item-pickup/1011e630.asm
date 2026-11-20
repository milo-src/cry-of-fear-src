
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011e630 <.text+0x11d630>:
1011e630:	55                   	push   ebp
1011e631:	8b ec                	mov    ebp,esp
1011e633:	83 ec 0c             	sub    esp,0xc
1011e636:	8d 55 f4             	lea    edx,[ebp-0xc]
1011e639:	53                   	push   ebx
1011e63a:	8b d9                	mov    ebx,ecx
1011e63c:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1011e642:	57                   	push   edi
1011e643:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1011e646:	ff b0 9c 01 00 00    	push   DWORD PTR [eax+0x19c]
1011e64c:	83 c0 50             	add    eax,0x50
1011e64f:	50                   	push   eax
1011e650:	8b 01                	mov    eax,DWORD PTR [ecx]
1011e652:	53                   	push   ebx
1011e653:	52                   	push   edx
1011e654:	ff 90 90 00 00 00    	call   DWORD PTR [eax+0x90]
1011e65a:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1011e65d:	50                   	push   eax
1011e65e:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011e663:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011e669:	03 01                	add    eax,DWORD PTR [ecx]
1011e66b:	50                   	push   eax
1011e66c:	e8 df 92 ef ff       	call   0x10017950
1011e671:	8b f8                	mov    edi,eax
1011e673:	83 c4 10             	add    esp,0x10
1011e676:	85 ff                	test   edi,edi
1011e678:	74 79                	je     0x1011e6f3
1011e67a:	8b 4f 04             	mov    ecx,DWORD PTR [edi+0x4]
1011e67d:	81 89 18 01 00 00 80 	or     DWORD PTR [ecx+0x118],0x80
1011e684:	00 00 00 
1011e687:	c7 87 80 00 00 00 00 	mov    DWORD PTR [edi+0x80],0x0
1011e68e:	00 00 00 
1011e691:	8b 4b 14             	mov    ecx,DWORD PTR [ebx+0x14]
1011e694:	85 c9                	test   ecx,ecx
1011e696:	74 0a                	je     0x1011e6a2
1011e698:	8b 01                	mov    eax,DWORD PTR [ecx]
1011e69a:	ff 50 40             	call   DWORD PTR [eax+0x40]
1011e69d:	83 e0 02             	and    eax,0x2
1011e6a0:	eb 05                	jmp    0x1011e6a7
1011e6a2:	b8 02 00 00 00       	mov    eax,0x2
1011e6a7:	89 83 08 01 00 00    	mov    DWORD PTR [ebx+0x108],eax
1011e6ad:	c7 47 7c 00 00 00 00 	mov    DWORD PTR [edi+0x7c],0x0
1011e6b4:	c7 47 78 00 bb 11 10 	mov    DWORD PTR [edi+0x78],0x1011bb00
1011e6bb:	8b 43 04             	mov    eax,DWORD PTR [ebx+0x4]
1011e6be:	56                   	push   esi
1011e6bf:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011e6c5:	ff 15 b0 2f 22 10    	call   DWORD PTR ds:0x10222fb0
1011e6cb:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1011e6d1:	83 c4 04             	add    esp,0x4
1011e6d4:	8b 37                	mov    esi,DWORD PTR [edi]
1011e6d6:	8b 01                	mov    eax,DWORD PTR [ecx]
1011e6d8:	53                   	push   ebx
1011e6d9:	8b 80 88 00 00 00    	mov    eax,DWORD PTR [eax+0x88]
1011e6df:	ff d0                	call   eax
1011e6e1:	51                   	push   ecx
1011e6e2:	8b cf                	mov    ecx,edi
1011e6e4:	d9 1c 24             	fstp   DWORD PTR [esp]
1011e6e7:	ff 56 10             	call   DWORD PTR [esi+0x10]
1011e6ea:	5e                   	pop    esi
1011e6eb:	8b c7                	mov    eax,edi
1011e6ed:	5f                   	pop    edi
1011e6ee:	5b                   	pop    ebx
1011e6ef:	8b e5                	mov    esp,ebp
1011e6f1:	5d                   	pop    ebp
1011e6f2:	c3                   	ret
1011e6f3:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011e6f8:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1011e6fb:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011e701:	03 01                	add    eax,DWORD PTR [ecx]
1011e703:	50                   	push   eax
1011e704:	68 bc 65 1e 10       	push   0x101e65bc
1011e709:	6a 01                	push   0x1
1011e70b:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1011e711:	83 c4 0c             	add    esp,0xc
1011e714:	8b c7                	mov    eax,edi
1011e716:	5f                   	pop    edi
1011e717:	5b                   	pop    ebx
1011e718:	8b e5                	mov    esp,ebp
1011e71a:	5d                   	pop    ebp
1011e71b:	c3                   	ret
