
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011d560 <.text+0x11c560>:
1011d560:	55                   	push   ebp
1011d561:	8b ec                	mov    ebp,esp
1011d563:	83 ec 08             	sub    esp,0x8
1011d566:	53                   	push   ebx
1011d567:	56                   	push   esi
1011d568:	57                   	push   edi
1011d569:	8b f9                	mov    edi,ecx
1011d56b:	83 bf b4 01 00 00 00 	cmp    DWORD PTR [edi+0x1b4],0x0
1011d572:	75 13                	jne    0x1011d587
1011d574:	83 bf e4 01 00 00 00 	cmp    DWORD PTR [edi+0x1e4],0x0
1011d57b:	7e 0a                	jle    0x1011d587
1011d57d:	c7 87 b4 01 00 00 01 	mov    DWORD PTR [edi+0x1b4],0x1
1011d584:	00 00 00 
1011d587:	8b 07                	mov    eax,DWORD PTR [edi]
1011d589:	ff 90 d4 01 00 00    	call   DWORD PTR [eax+0x1d4]
1011d58f:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
1011d592:	ba b8 dc 1a 10       	mov    edx,0x101adcb8
1011d597:	8b 8e 0c 02 00 00    	mov    ecx,DWORD PTR [esi+0x20c]
1011d59d:	8d 81 80 00 00 00    	lea    eax,[ecx+0x80]
1011d5a3:	f7 d9                	neg    ecx
1011d5a5:	1b c9                	sbb    ecx,ecx
1011d5a7:	23 c8                	and    ecx,eax
1011d5a9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d5ae:	8b 09                	mov    ecx,DWORD PTR [ecx]
1011d5b0:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1011d5b6:	8a 01                	mov    al,BYTE PTR [ecx]
1011d5b8:	3a 02                	cmp    al,BYTE PTR [edx]
1011d5ba:	75 1a                	jne    0x1011d5d6
1011d5bc:	84 c0                	test   al,al
1011d5be:	74 12                	je     0x1011d5d2
1011d5c0:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1011d5c3:	3a 42 01             	cmp    al,BYTE PTR [edx+0x1]
1011d5c6:	75 0e                	jne    0x1011d5d6
1011d5c8:	83 c1 02             	add    ecx,0x2
1011d5cb:	83 c2 02             	add    edx,0x2
1011d5ce:	84 c0                	test   al,al
1011d5d0:	75 e4                	jne    0x1011d5b6
1011d5d2:	33 c0                	xor    eax,eax
1011d5d4:	eb 05                	jmp    0x1011d5db
1011d5d6:	1b c0                	sbb    eax,eax
1011d5d8:	83 c8 01             	or     eax,0x1
1011d5db:	85 c0                	test   eax,eax
1011d5dd:	0f 85 d7 00 00 00    	jne    0x1011d6ba
1011d5e3:	56                   	push   esi
1011d5e4:	e8 97 1b f1 ff       	call   0x1002f180
1011d5e9:	83 c4 04             	add    esp,0x4
1011d5ec:	80 bf a5 01 00 00 00 	cmp    BYTE PTR [edi+0x1a5],0x0
1011d5f3:	0f 84 22 02 00 00    	je     0x1011d81b
1011d5f9:	85 c0                	test   eax,eax
1011d5fb:	0f 84 1a 02 00 00    	je     0x1011d81b
1011d601:	8b 80 00 02 00 00    	mov    eax,DWORD PTR [eax+0x200]
1011d607:	83 f8 0e             	cmp    eax,0xe
1011d60a:	74 0e                	je     0x1011d61a
1011d60c:	83 f8 17             	cmp    eax,0x17
1011d60f:	74 09                	je     0x1011d61a
1011d611:	83 f8 1b             	cmp    eax,0x1b
1011d614:	0f 85 01 02 00 00    	jne    0x1011d81b
1011d61a:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011d620:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011d623:	f7 80 84 01 00 00 00 	test   DWORD PTR [eax+0x184],0x800
1011d62a:	08 00 00 
1011d62d:	74 0d                	je     0x1011d63c
1011d62f:	83 bf 28 01 00 00 00 	cmp    DWORD PTR [edi+0x128],0x0
1011d636:	0f 84 df 01 00 00    	je     0x1011d81b
1011d63c:	83 bf a8 01 00 00 00 	cmp    DWORD PTR [edi+0x1a8],0x0
1011d643:	c6 87 a5 01 00 00 00 	mov    BYTE PTR [edi+0x1a5],0x0
1011d64a:	0f 84 39 01 00 00    	je     0x1011d789
1011d650:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1011d656:	8b 01                	mov    eax,DWORD PTR [ecx]
1011d658:	ff 50 20             	call   DWORD PTR [eax+0x20]
1011d65b:	85 c0                	test   eax,eax
1011d65d:	74 30                	je     0x1011d68f
1011d65f:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d664:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011d66a:	03 87 a8 01 00 00    	add    eax,DWORD PTR [edi+0x1a8]
1011d670:	50                   	push   eax
1011d671:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011d677:	6a 01                	push   0x1
1011d679:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011d67c:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011d682:	e8 09 13 f0 ff       	call   0x1001e990
1011d687:	83 c4 0c             	add    esp,0xc
1011d68a:	e9 fa 00 00 00       	jmp    0x1011d789
1011d68f:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011d695:	6a 01                	push   0x1
1011d697:	51                   	push   ecx
1011d698:	83 ec 0c             	sub    esp,0xc
1011d69b:	8b 01                	mov    eax,DWORD PTR [ecx]
1011d69d:	54                   	push   esp
1011d69e:	ff 90 04 01 00 00    	call   DWORD PTR [eax+0x104]
1011d6a4:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d6a9:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011d6af:	03 87 a8 01 00 00    	add    eax,DWORD PTR [edi+0x1a8]
1011d6b5:	e9 c2 00 00 00       	jmp    0x1011d77c
1011d6ba:	80 bf a5 01 00 00 00 	cmp    BYTE PTR [edi+0x1a5],0x0
1011d6c1:	0f 84 54 01 00 00    	je     0x1011d81b
1011d6c7:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011d6cd:	8b 01                	mov    eax,DWORD PTR [ecx]
1011d6cf:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
1011d6d5:	85 c0                	test   eax,eax
1011d6d7:	74 31                	je     0x1011d70a
1011d6d9:	83 bf e4 01 00 00 00 	cmp    DWORD PTR [edi+0x1e4],0x0
1011d6e0:	7e 28                	jle    0x1011d70a
1011d6e2:	83 bf f0 01 00 00 00 	cmp    DWORD PTR [edi+0x1f0],0x0
1011d6e9:	75 1f                	jne    0x1011d70a
1011d6eb:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011d6f1:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011d6f4:	f6 80 84 01 00 00 01 	test   BYTE PTR [eax+0x184],0x1
1011d6fb:	74 0d                	je     0x1011d70a
1011d6fd:	83 bf 28 01 00 00 00 	cmp    DWORD PTR [edi+0x128],0x0
1011d704:	0f 84 11 01 00 00    	je     0x1011d81b
1011d70a:	83 bf a8 01 00 00 00 	cmp    DWORD PTR [edi+0x1a8],0x0
1011d711:	c6 87 a5 01 00 00 00 	mov    BYTE PTR [edi+0x1a5],0x0
1011d718:	74 6f                	je     0x1011d789
1011d71a:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1011d720:	8b 01                	mov    eax,DWORD PTR [ecx]
1011d722:	ff 50 20             	call   DWORD PTR [eax+0x20]
1011d725:	85 c0                	test   eax,eax
1011d727:	74 2d                	je     0x1011d756
1011d729:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d72e:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011d734:	03 87 a8 01 00 00    	add    eax,DWORD PTR [edi+0x1a8]
1011d73a:	50                   	push   eax
1011d73b:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011d741:	6a 01                	push   0x1
1011d743:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011d746:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011d74c:	e8 3f 12 f0 ff       	call   0x1001e990
1011d751:	83 c4 0c             	add    esp,0xc
1011d754:	eb 33                	jmp    0x1011d789
1011d756:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011d75c:	6a 01                	push   0x1
1011d75e:	51                   	push   ecx
1011d75f:	83 ec 0c             	sub    esp,0xc
1011d762:	8b 01                	mov    eax,DWORD PTR [ecx]
1011d764:	54                   	push   esp
1011d765:	ff 90 04 01 00 00    	call   DWORD PTR [eax+0x104]
1011d76b:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d770:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011d776:	03 87 ac 01 00 00    	add    eax,DWORD PTR [edi+0x1ac]
1011d77c:	6a 01                	push   0x1
1011d77e:	6a 02                	push   0x2
1011d780:	50                   	push   eax
1011d781:	e8 ba 92 ff ff       	call   0x10116a40
1011d786:	83 c4 20             	add    esp,0x20
1011d789:	83 bf ac 01 00 00 00 	cmp    DWORD PTR [edi+0x1ac],0x0
1011d790:	0f 84 85 00 00 00    	je     0x1011d81b
1011d796:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1011d79c:	8b 01                	mov    eax,DWORD PTR [ecx]
1011d79e:	ff 50 20             	call   DWORD PTR [eax+0x20]
1011d7a1:	85 c0                	test   eax,eax
1011d7a3:	74 43                	je     0x1011d7e8
1011d7a5:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d7aa:	6a 64                	push   0x64
1011d7ac:	6a 00                	push   0x0
1011d7ae:	83 ec 08             	sub    esp,0x8
1011d7b1:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011d7b7:	03 87 ac 01 00 00    	add    eax,DWORD PTR [edi+0x1ac]
1011d7bd:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1011d7c4:	3f 
1011d7c5:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1011d7cc:	50                   	push   eax
1011d7cd:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011d7d3:	6a 01                	push   0x1
1011d7d5:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011d7d8:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011d7de:	e8 0d f2 fd ff       	call   0x100fc9f0
1011d7e3:	83 c4 1c             	add    esp,0x1c
1011d7e6:	eb 33                	jmp    0x1011d81b
1011d7e8:	8b 8f 60 01 00 00    	mov    ecx,DWORD PTR [edi+0x160]
1011d7ee:	6a 01                	push   0x1
1011d7f0:	51                   	push   ecx
1011d7f1:	83 ec 0c             	sub    esp,0xc
1011d7f4:	8b 01                	mov    eax,DWORD PTR [ecx]
1011d7f6:	54                   	push   esp
1011d7f7:	ff 90 04 01 00 00    	call   DWORD PTR [eax+0x104]
1011d7fd:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011d802:	6a 01                	push   0x1
1011d804:	6a 00                	push   0x0
1011d806:	8b 80 98 00 00 00    	mov    eax,DWORD PTR [eax+0x98]
1011d80c:	03 87 ac 01 00 00    	add    eax,DWORD PTR [edi+0x1ac]
1011d812:	50                   	push   eax
1011d813:	e8 28 92 ff ff       	call   0x10116a40
1011d818:	83 c4 20             	add    esp,0x20
