
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10118500 <.text+0x117500>:
10118500:	55                   	push   ebp
10118501:	8b ec                	mov    ebp,esp
10118503:	56                   	push   esi
10118504:	8b 75 0c             	mov    esi,DWORD PTR [ebp+0xc]
10118507:	b9 8c 2d 1a 10       	mov    ecx,0x101a2d8c
1011850c:	8b c6                	mov    eax,esi
1011850e:	66 90                	xchg   ax,ax
10118510:	8a 10                	mov    dl,BYTE PTR [eax]
10118512:	3a 11                	cmp    dl,BYTE PTR [ecx]
10118514:	75 1a                	jne    0x10118530
10118516:	84 d2                	test   dl,dl
10118518:	74 12                	je     0x1011852c
1011851a:	8a 50 01             	mov    dl,BYTE PTR [eax+0x1]
1011851d:	3a 51 01             	cmp    dl,BYTE PTR [ecx+0x1]
10118520:	75 0e                	jne    0x10118530
10118522:	83 c0 02             	add    eax,0x2
10118525:	83 c1 02             	add    ecx,0x2
10118528:	84 d2                	test   dl,dl
1011852a:	75 e4                	jne    0x10118510
1011852c:	33 c0                	xor    eax,eax
1011852e:	eb 05                	jmp    0x10118535
10118530:	1b c0                	sbb    eax,eax
10118532:	83 c8 01             	or     eax,0x1
10118535:	85 c0                	test   eax,eax
10118537:	75 45                	jne    0x1011857e
10118539:	53                   	push   ebx
1011853a:	57                   	push   edi
1011853b:	8b 7d 10             	mov    edi,DWORD PTR [ebp+0x10]
1011853e:	85 ff                	test   edi,edi
10118540:	74 35                	je     0x10118577
10118542:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
10118545:	85 db                	test   ebx,ebx
10118547:	74 27                	je     0x10118570
10118549:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011854c:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10118552:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
10118558:	8b 4b 04             	mov    ecx,DWORD PTR [ebx+0x4]
1011855b:	8b f0                	mov    esi,eax
1011855d:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
10118563:	ff 15 60 30 22 10    	call   DWORD PTR ds:0x10223060
10118569:	83 c4 08             	add    esp,0x8
1011856c:	3b f0                	cmp    esi,eax
1011856e:	7e 07                	jle    0x10118577
10118570:	8b c7                	mov    eax,edi
10118572:	5f                   	pop    edi
10118573:	5b                   	pop    ebx
10118574:	5e                   	pop    esi
10118575:	5d                   	pop    ebp
10118576:	c3                   	ret
10118577:	5f                   	pop    edi
10118578:	5b                   	pop    ebx
10118579:	33 c0                	xor    eax,eax
1011857b:	5e                   	pop    esi
1011857c:	5d                   	pop    ebp
1011857d:	c3                   	ret
1011857e:	56                   	push   esi
1011857f:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10118582:	e8 09 00 00 00       	call   0x10118590
10118587:	83 c4 08             	add    esp,0x8
1011858a:	5e                   	pop    esi
1011858b:	5d                   	pop    ebp
1011858c:	c3                   	ret
