
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100475b0 <.text+0x465b0>:
100475b0:	56                   	push   esi
100475b1:	8b f1                	mov    esi,ecx
100475b3:	8b 96 dc 01 00 00    	mov    edx,DWORD PTR [esi+0x1dc]
100475b9:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
100475bf:	8b 94 90 40 25 00 00 	mov    edx,DWORD PTR [eax+edx*4+0x2540]
100475c6:	85 d2                	test   edx,edx
100475c8:	0f 8e de 00 00 00    	jle    0x100476ac
100475ce:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100475d3:	f3 0f 10 86 cc 01 00 	movss  xmm0,DWORD PTR [esi+0x1cc]
100475da:	00 
100475db:	0f 2f 00             	comiss xmm0,DWORD PTR [eax]
100475de:	0f 87 c8 00 00 00    	ja     0x100476ac
100475e4:	8b 86 28 01 00 00    	mov    eax,DWORD PTR [esi+0x128]
100475ea:	83 f8 01             	cmp    eax,0x1
100475ed:	0f 84 b9 00 00 00    	je     0x100476ac
100475f3:	83 f8 02             	cmp    eax,0x2
100475f6:	0f 8f b0 00 00 00    	jg     0x100476ac
100475fc:	83 be 40 01 00 00 00 	cmp    DWORD PTR [esi+0x140],0x0
10047603:	0f 85 a3 00 00 00    	jne    0x100476ac
10047609:	80 be a4 01 00 00 00 	cmp    BYTE PTR [esi+0x1a4],0x0
10047610:	0f 85 96 00 00 00    	jne    0x100476ac
10047616:	80 be 78 01 00 00 00 	cmp    BYTE PTR [esi+0x178],0x0
1004761d:	74 09                	je     0x10047628
1004761f:	c6 86 a4 01 00 00 01 	mov    BYTE PTR [esi+0x1a4],0x1
10047626:	5e                   	pop    esi
10047627:	c3                   	ret
10047628:	8b 8e e4 01 00 00    	mov    ecx,DWORD PTR [esi+0x1e4]
1004762e:	b8 0f 00 00 00       	mov    eax,0xf
10047633:	2b c1                	sub    eax,ecx
10047635:	3b c2                	cmp    eax,edx
10047637:	7d 04                	jge    0x1004763d
10047639:	85 c0                	test   eax,eax
1004763b:	74 6f                	je     0x100476ac
1004763d:	6a 00                	push   0x0
1004763f:	6a 00                	push   0x0
10047641:	51                   	push   ecx
10047642:	85 c9                	test   ecx,ecx
10047644:	c7 86 38 01 00 00 00 	mov    DWORD PTR [esi+0x138],0x0
1004764b:	00 00 00 
1004764e:	c7 86 28 01 00 00 02 	mov    DWORD PTR [esi+0x128],0x2
10047655:	00 00 00 
10047658:	8b ce                	mov    ecx,esi
1004765a:	c7 86 e4 01 00 00 00 	mov    DWORD PTR [esi+0x1e4],0x0
10047661:	00 00 00 
10047664:	74 24                	je     0x1004768a
10047666:	c7 04 24 66 66 26 40 	mov    DWORD PTR [esp],0x40266666
1004766d:	6a 04                	push   0x4
1004766f:	6a 0f                	push   0xf
10047671:	e8 ea 4e 0d 00       	call   0x1011c560
10047676:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
1004767c:	6a 00                	push   0x0
1004767e:	68 64 08 1b 10       	push   0x101b0864
10047683:	e8 b8 2b 0a 00       	call   0x100ea240
10047688:	5e                   	pop    esi
10047689:	c3                   	ret
1004768a:	c7 04 24 00 00 60 40 	mov    DWORD PTR [esp],0x40600000
10047691:	6a 05                	push   0x5
10047693:	6a 0f                	push   0xf
10047695:	e8 c6 4e 0d 00       	call   0x1011c560
1004769a:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
100476a0:	6a 00                	push   0x0
100476a2:	68 74 08 1b 10       	push   0x101b0874
100476a7:	e8 94 2b 0a 00       	call   0x100ea240
100476ac:	5e                   	pop    esi
100476ad:	c3                   	ret
