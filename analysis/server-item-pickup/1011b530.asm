
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011b530 <.text+0x11a530>:
1011b530:	55                   	push   ebp
1011b531:	8b ec                	mov    ebp,esp
1011b533:	53                   	push   ebx
1011b534:	56                   	push   esi
1011b535:	57                   	push   edi
1011b536:	8b f9                	mov    edi,ecx
1011b538:	be b8 8a 1a 10       	mov    esi,0x101a8ab8
1011b53d:	8b 5f 04             	mov    ebx,DWORD PTR [edi+0x4]
1011b540:	8b 93 0c 02 00 00    	mov    edx,DWORD PTR [ebx+0x20c]
1011b546:	8d 82 80 00 00 00    	lea    eax,[edx+0x80]
1011b54c:	f7 da                	neg    edx
1011b54e:	1b d2                	sbb    edx,edx
1011b550:	23 d0                	and    edx,eax
1011b552:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1011b557:	8b 0a                	mov    ecx,DWORD PTR [edx]
1011b559:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
1011b55f:	90                   	nop
1011b560:	8a 01                	mov    al,BYTE PTR [ecx]
1011b562:	3a 06                	cmp    al,BYTE PTR [esi]
1011b564:	75 1a                	jne    0x1011b580
1011b566:	84 c0                	test   al,al
1011b568:	74 12                	je     0x1011b57c
1011b56a:	8a 41 01             	mov    al,BYTE PTR [ecx+0x1]
1011b56d:	3a 46 01             	cmp    al,BYTE PTR [esi+0x1]
1011b570:	75 0e                	jne    0x1011b580
1011b572:	83 c1 02             	add    ecx,0x2
1011b575:	83 c6 02             	add    esi,0x2
1011b578:	84 c0                	test   al,al
1011b57a:	75 e4                	jne    0x1011b560
1011b57c:	33 c0                	xor    eax,eax
1011b57e:	eb 05                	jmp    0x1011b585
1011b580:	1b c0                	sbb    eax,eax
1011b582:	83 c8 01             	or     eax,0x1
1011b585:	85 c0                	test   eax,eax
1011b587:	75 77                	jne    0x1011b600
1011b589:	83 bb 48 02 00 00 01 	cmp    DWORD PTR [ebx+0x248],0x1
1011b590:	75 6e                	jne    0x1011b600
1011b592:	8b 87 60 01 00 00    	mov    eax,DWORD PTR [edi+0x160]
1011b598:	85 c0                	test   eax,eax
1011b59a:	74 31                	je     0x1011b5cd
1011b59c:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011b59f:	6a 64                	push   0x64
1011b5a1:	6a 20                	push   0x20
1011b5a3:	83 ec 08             	sub    esp,0x8
1011b5a6:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
1011b5ad:	00 
1011b5ae:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1011b5b5:	68 c8 8a 1a 10       	push   0x101a8ac8
1011b5ba:	6a 01                	push   0x1
1011b5bc:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011b5c2:	e8 29 14 fe ff       	call   0x100fc9f0
1011b5c7:	8b 5f 04             	mov    ebx,DWORD PTR [edi+0x4]
1011b5ca:	83 c4 1c             	add    esp,0x1c
1011b5cd:	c7 83 60 01 00 00 00 	mov    DWORD PTR [ebx+0x160],0x0
1011b5d4:	00 00 00 
1011b5d7:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011b5da:	c7 80 4c 01 00 00 05 	mov    DWORD PTR [eax+0x14c],0x5
1011b5e1:	00 00 00 
1011b5e4:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011b5e7:	c7 80 50 01 00 00 00 	mov    DWORD PTR [eax+0x150],0x0
1011b5ee:	00 00 00 
1011b5f1:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011b5f4:	c7 80 14 01 00 00 00 	mov    DWORD PTR [eax+0x114],0x0
1011b5fb:	00 00 00 
1011b5fe:	eb 0a                	jmp    0x1011b60a
1011b600:	c7 83 18 01 00 00 80 	mov    DWORD PTR [ebx+0x118],0x80
1011b607:	00 00 00 
1011b60a:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1011b60d:	8b cf                	mov    ecx,edi
1011b60f:	8b 17                	mov    edx,DWORD PTR [edi]
1011b611:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011b614:	f3 0f 10 80 c0 01 00 	movss  xmm0,DWORD PTR [eax+0x1c0]
1011b61b:	00 
1011b61c:	0f 2e 05 34 97 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a9734
1011b623:	9f                   	lahf
1011b624:	ff 92 84 01 00 00    	call   DWORD PTR [edx+0x184]
1011b62a:	5f                   	pop    edi
1011b62b:	5e                   	pop    esi
1011b62c:	5b                   	pop    ebx
1011b62d:	5d                   	pop    ebp
1011b62e:	c2 08 00             	ret    0x8
