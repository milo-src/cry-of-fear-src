
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000f590 <.text+0xe590>:
1000f590:	55                   	push   ebp
1000f591:	8b ec                	mov    ebp,esp
1000f593:	83 ec 08             	sub    esp,0x8
1000f596:	53                   	push   ebx
1000f597:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1000f59a:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1000f59d:	53                   	push   ebx
1000f59e:	e8 8d ff ff ff       	call   0x1000f530
1000f5a3:	83 c4 08             	add    esp,0x8
1000f5a6:	85 c0                	test   eax,eax
1000f5a8:	0f 88 b5 00 00 00    	js     0x1000f663
1000f5ae:	85 db                	test   ebx,ebx
1000f5b0:	0f 84 ad 00 00 00    	je     0x1000f663
1000f5b6:	3b 83 a4 00 00 00    	cmp    eax,DWORD PTR [ebx+0xa4]
1000f5bc:	0f 8d a1 00 00 00    	jge    0x1000f663
1000f5c2:	56                   	push   esi
1000f5c3:	69 f0 b0 00 00 00    	imul   esi,eax,0xb0
1000f5c9:	03 b3 a8 00 00 00    	add    esi,DWORD PTR [ebx+0xa8]
1000f5cf:	03 f3                	add    esi,ebx
1000f5d1:	89 75 fc             	mov    DWORD PTR [ebp-0x4],esi
1000f5d4:	8b 46 34             	mov    eax,DWORD PTR [esi+0x34]
1000f5d7:	03 c3                	add    eax,ebx
1000f5d9:	33 db                	xor    ebx,ebx
1000f5db:	39 5e 30             	cmp    DWORD PTR [esi+0x30],ebx
1000f5de:	0f 8e 7e 00 00 00    	jle    0x1000f662
1000f5e4:	8d 70 0c             	lea    esi,[eax+0xc]
1000f5e7:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1000f5ea:	57                   	push   edi
1000f5eb:	0f 1f 44 00 00       	nop    DWORD PTR [eax+eax*1+0x0]
1000f5f0:	8b 7e f8             	mov    edi,DWORD PTR [esi-0x8]
1000f5f3:	81 ff 88 13 00 00    	cmp    edi,0x1388
1000f5f9:	7d 5d                	jge    0x1000f658
1000f5fb:	57                   	push   edi
1000f5fc:	e8 2f fe ff ff       	call   0x1000f430
1000f601:	83 c4 04             	add    esp,0x4
1000f604:	85 c0                	test   eax,eax
1000f606:	74 4d                	je     0x1000f655
1000f608:	8b c6                	mov    eax,esi
1000f60a:	8d 50 01             	lea    edx,[eax+0x1]
1000f60d:	0f 1f 00             	nop    DWORD PTR [eax]
1000f610:	8a 08                	mov    cl,BYTE PTR [eax]
1000f612:	40                   	inc    eax
1000f613:	84 c9                	test   cl,cl
1000f615:	75 f9                	jne    0x1000f610
1000f617:	2b c2                	sub    eax,edx
1000f619:	75 1c                	jne    0x1000f637
1000f61b:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
1000f61e:	56                   	push   esi
1000f61f:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1000f622:	83 c0 08             	add    eax,0x8
1000f625:	50                   	push   eax
1000f626:	57                   	push   edi
1000f627:	68 50 33 1a 10       	push   0x101a3350
1000f62c:	6a 04                	push   0x4
1000f62e:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
1000f634:	83 c4 18             	add    esp,0x18
1000f637:	56                   	push   esi
1000f638:	ff 15 54 30 22 10    	call   DWORD PTR ds:0x10223054
1000f63e:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1000f644:	8b 89 98 00 00 00    	mov    ecx,DWORD PTR [ecx+0x98]
1000f64a:	03 c8                	add    ecx,eax
1000f64c:	51                   	push   ecx
1000f64d:	e8 de 73 10 00       	call   0x10116a30
1000f652:	83 c4 08             	add    esp,0x8
1000f655:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
1000f658:	43                   	inc    ebx
1000f659:	83 c6 4c             	add    esi,0x4c
1000f65c:	3b 58 30             	cmp    ebx,DWORD PTR [eax+0x30]
1000f65f:	7c 8f                	jl     0x1000f5f0
1000f661:	5f                   	pop    edi
1000f662:	5e                   	pop    esi
1000f663:	5b                   	pop    ebx
1000f664:	8b e5                	mov    esp,ebp
1000f666:	5d                   	pop    ebp
1000f667:	c3                   	ret
