
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1007a540 <.text+0x79540>:
1007a540:	56                   	push   esi
1007a541:	8b f1                	mov    esi,ecx
1007a543:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
1007a549:	85 c9                	test   ecx,ecx
1007a54b:	74 6f                	je     0x1007a5bc
1007a54d:	8b 01                	mov    eax,DWORD PTR [ecx]
1007a54f:	ff 50 20             	call   DWORD PTR [eax+0x20]
1007a552:	85 c0                	test   eax,eax
1007a554:	74 66                	je     0x1007a5bc
1007a556:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1007a55c:	51                   	push   ecx
1007a55d:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1007a564:	6a 00                	push   0x0
1007a566:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1007a569:	c7 80 60 02 00 00 00 	mov    DWORD PTR [eax+0x260],0x0
1007a570:	00 00 00 
1007a573:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
1007a579:	e8 c2 eb 07 00       	call   0x100f9140
1007a57e:	8b 8e f8 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f8]
1007a584:	85 c9                	test   ecx,ecx
1007a586:	74 34                	je     0x1007a5bc
1007a588:	8b 01                	mov    eax,DWORD PTR [ecx]
1007a58a:	ff 90 bc 00 00 00    	call   DWORD PTR [eax+0xbc]
1007a590:	8b 8e f8 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f8]
1007a596:	51                   	push   ecx
1007a597:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
1007a59e:	6a 00                	push   0x0
1007a5a0:	85 c0                	test   eax,eax
1007a5a2:	74 20                	je     0x1007a5c4
1007a5a4:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1007a5a7:	c7 80 60 02 00 00 00 	mov    DWORD PTR [eax+0x260],0x0
1007a5ae:	00 00 00 
1007a5b1:	8b 8e f8 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f8]
1007a5b7:	e8 84 eb 07 00       	call   0x100f9140
1007a5bc:	8b ce                	mov    ecx,esi
1007a5be:	5e                   	pop    esi
1007a5bf:	e9 ec 04 00 00       	jmp    0x1007aab0
1007a5c4:	e8 77 eb 07 00       	call   0x100f9140
1007a5c9:	8b 8e f8 01 00 00    	mov    ecx,DWORD PTR [esi+0x1f8]
1007a5cf:	e8 8c 72 07 00       	call   0x100f1860
1007a5d4:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1007a5da:	ff 80 44 06 00 00    	inc    DWORD PTR [eax+0x644]
1007a5e0:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
1007a5e6:	80 b9 ea 21 00 00 00 	cmp    BYTE PTR [ecx+0x21ea],0x0
1007a5ed:	75 13                	jne    0x1007a602
1007a5ef:	8b 86 dc 01 00 00    	mov    eax,DWORD PTR [esi+0x1dc]
1007a5f5:	ff 8c 81 40 25 00 00 	dec    DWORD PTR [ecx+eax*4+0x2540]
1007a5fc:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
1007a602:	8b 86 dc 01 00 00    	mov    eax,DWORD PTR [esi+0x1dc]
1007a608:	83 bc 81 40 25 00 00 	cmp    DWORD PTR [ecx+eax*4+0x2540],0x0
1007a60f:	00 
1007a610:	7d 17                	jge    0x1007a629
1007a612:	c7 84 81 40 25 00 00 	mov    DWORD PTR [ecx+eax*4+0x2540],0x0
1007a619:	00 00 00 00 
1007a61d:	8b 86 dc 01 00 00    	mov    eax,DWORD PTR [esi+0x1dc]
1007a623:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
1007a629:	83 bc 81 40 25 00 00 	cmp    DWORD PTR [ecx+eax*4+0x2540],0x1
1007a630:	01 
1007a631:	8b 16                	mov    edx,DWORD PTR [esi]
1007a633:	51                   	push   ecx
1007a634:	c7 04 24 00 00 c0 3f 	mov    DWORD PTR [esp],0x3fc00000
1007a63b:	8b ce                	mov    ecx,esi
1007a63d:	7c 13                	jl     0x1007a652
1007a63f:	c7 46 78 d0 b0 07 10 	mov    DWORD PTR [esi+0x78],0x1007b0d0
1007a646:	ff 52 08             	call   DWORD PTR [edx+0x8]
1007a649:	c6 86 fc 01 00 00 01 	mov    BYTE PTR [esi+0x1fc],0x1
1007a650:	5e                   	pop    esi
1007a651:	c3                   	ret
1007a652:	c7 46 78 10 a7 07 10 	mov    DWORD PTR [esi+0x78],0x1007a710
1007a659:	ff 52 08             	call   DWORD PTR [edx+0x8]
1007a65c:	c6 86 fc 01 00 00 01 	mov    BYTE PTR [esi+0x1fc],0x1
1007a663:	5e                   	pop    esi
1007a664:	c3                   	ret
