
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011c560 <.text+0x11b560>:
1011c560:	55                   	push   ebp
1011c561:	8b ec                	mov    ebp,esp
1011c563:	53                   	push   ebx
1011c564:	8b d9                	mov    ebx,ecx
1011c566:	83 bb 68 01 00 00 17 	cmp    DWORD PTR [ebx+0x168],0x17
1011c56d:	74 2f                	je     0x1011c59e
1011c56f:	8b 93 dc 01 00 00    	mov    edx,DWORD PTR [ebx+0x1dc]
1011c575:	8b 83 60 01 00 00    	mov    eax,DWORD PTR [ebx+0x160]
1011c57b:	8b 8c 90 40 25 00 00 	mov    ecx,DWORD PTR [eax+edx*4+0x2540]
1011c582:	85 c9                	test   ecx,ecx
1011c584:	7e 11                	jle    0x1011c597
1011c586:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1011c589:	2b 83 e4 01 00 00    	sub    eax,DWORD PTR [ebx+0x1e4]
1011c58f:	3b c1                	cmp    eax,ecx
1011c591:	7d 0b                	jge    0x1011c59e
1011c593:	85 c0                	test   eax,eax
1011c595:	75 07                	jne    0x1011c59e
1011c597:	33 c0                	xor    eax,eax
1011c599:	5b                   	pop    ebx
1011c59a:	5d                   	pop    ebp
1011c59b:	c2 14 00             	ret    0x14
1011c59e:	56                   	push   esi
1011c59f:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1011c5a2:	8b cb                	mov    ecx,ebx
1011c5a4:	e8 67 3c 00 00       	call   0x10120210
1011c5a9:	8b 33                	mov    esi,DWORD PTR [ebx]
1011c5ab:	8b cb                	mov    ecx,ebx
1011c5ad:	6a 00                	push   0x0
1011c5af:	ff 96 d0 01 00 00    	call   DWORD PTR [esi+0x1d0]
1011c5b5:	f7 d8                	neg    eax
1011c5b7:	8b cb                	mov    ecx,ebx
1011c5b9:	1b c0                	sbb    eax,eax
1011c5bb:	f7 d8                	neg    eax
1011c5bd:	50                   	push   eax
1011c5be:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1011c5c1:	ff 96 98 01 00 00    	call   DWORD PTR [esi+0x198]
1011c5c7:	5e                   	pop    esi
1011c5c8:	c7 83 f0 01 00 00 01 	mov    DWORD PTR [ebx+0x1f0],0x1
1011c5cf:	00 00 00 
1011c5d2:	b8 01 00 00 00       	mov    eax,0x1
1011c5d7:	5b                   	pop    ebx
1011c5d8:	5d                   	pop    ebp
1011c5d9:	c2 14 00             	ret    0x14
