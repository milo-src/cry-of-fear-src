
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cd550 <.text+0xcc550>:
100cd550:	55                   	push   ebp
100cd551:	8b ec                	mov    ebp,esp
100cd553:	53                   	push   ebx
100cd554:	56                   	push   esi
100cd555:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100cd558:	57                   	push   edi
100cd559:	8b f9                	mov    edi,ecx
100cd55b:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100cd560:	6a 00                	push   0x0
100cd562:	ff b7 e8 04 00 00    	push   DWORD PTR [edi+0x4e8]
100cd568:	ff b7 dc 00 00 00    	push   DWORD PTR [edi+0xdc]
100cd56e:	56                   	push   esi
100cd56f:	e8 bc 12 00 00       	call   0x100ce830
100cd574:	50                   	push   eax
100cd575:	56                   	push   esi
100cd576:	8b cf                	mov    ecx,edi
100cd578:	e8 83 d1 ff ff       	call   0x100ca700
100cd57d:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cd582:	33 db                	xor    ebx,ebx
100cd584:	6b ce 58             	imul   ecx,esi,0x58
100cd587:	03 c1                	add    eax,ecx
100cd589:	89 4d 08             	mov    DWORD PTR [ebp+0x8],ecx
100cd58c:	39 58 20             	cmp    DWORD PTR [eax+0x20],ebx
100cd58f:	7e 41                	jle    0x100cd5d2
100cd591:	8b 40 24             	mov    eax,DWORD PTR [eax+0x24]
100cd594:	03 c3                	add    eax,ebx
100cd596:	6a 00                	push   0x0
100cd598:	ff b7 e8 04 00 00    	push   DWORD PTR [edi+0x4e8]
100cd59e:	ff b7 dc 00 00 00    	push   DWORD PTR [edi+0xdc]
100cd5a4:	8d 0c 40             	lea    ecx,[eax+eax*2]
100cd5a7:	a1 c0 38 22 10       	mov    eax,ds:0x102238c0
100cd5ac:	8b 74 c8 04          	mov    esi,DWORD PTR [eax+ecx*8+0x4]
100cd5b0:	b9 b0 38 22 10       	mov    ecx,0x102238b0
100cd5b5:	56                   	push   esi
100cd5b6:	e8 75 12 00 00       	call   0x100ce830
100cd5bb:	50                   	push   eax
100cd5bc:	56                   	push   esi
100cd5bd:	8b cf                	mov    ecx,edi
100cd5bf:	e8 3c d1 ff ff       	call   0x100ca700
100cd5c4:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cd5c9:	43                   	inc    ebx
100cd5ca:	03 45 08             	add    eax,DWORD PTR [ebp+0x8]
100cd5cd:	3b 58 20             	cmp    ebx,DWORD PTR [eax+0x20]
100cd5d0:	7c bf                	jl     0x100cd591
100cd5d2:	5f                   	pop    edi
100cd5d3:	5e                   	pop    esi
100cd5d4:	5b                   	pop    ebx
100cd5d5:	5d                   	pop    ebp
100cd5d6:	c2 04 00             	ret    0x4
