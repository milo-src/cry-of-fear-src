
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1000f530 <.text+0xe530>:
1000f530:	55                   	push   ebp
1000f531:	8b ec                	mov    ebp,esp
1000f533:	53                   	push   ebx
1000f534:	8b 5d 08             	mov    ebx,DWORD PTR [ebp+0x8]
1000f537:	85 db                	test   ebx,ebx
1000f539:	75 05                	jne    0x1000f540
1000f53b:	33 c0                	xor    eax,eax
1000f53d:	5b                   	pop    ebx
1000f53e:	5d                   	pop    ebp
1000f53f:	c3                   	ret
1000f540:	56                   	push   esi
1000f541:	57                   	push   edi
1000f542:	8b bb a8 00 00 00    	mov    edi,DWORD PTR [ebx+0xa8]
1000f548:	33 f6                	xor    esi,esi
1000f54a:	03 fb                	add    edi,ebx
1000f54c:	39 b3 a4 00 00 00    	cmp    DWORD PTR [ebx+0xa4],esi
1000f552:	7e 1f                	jle    0x1000f573
1000f554:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1000f557:	57                   	push   edi
1000f558:	e8 5e c7 16 00       	call   0x1017bcbb
1000f55d:	83 c4 08             	add    esp,0x8
1000f560:	85 c0                	test   eax,eax
1000f562:	74 17                	je     0x1000f57b
1000f564:	46                   	inc    esi
1000f565:	81 c7 b0 00 00 00    	add    edi,0xb0
1000f56b:	3b b3 a4 00 00 00    	cmp    esi,DWORD PTR [ebx+0xa4]
1000f571:	7c e1                	jl     0x1000f554
1000f573:	5f                   	pop    edi
1000f574:	5e                   	pop    esi
1000f575:	83 c8 ff             	or     eax,0xffffffff
1000f578:	5b                   	pop    ebx
1000f579:	5d                   	pop    ebp
1000f57a:	c3                   	ret
1000f57b:	5f                   	pop    edi
1000f57c:	8b c6                	mov    eax,esi
1000f57e:	5e                   	pop    esi
1000f57f:	5b                   	pop    ebx
1000f580:	5d                   	pop    ebp
1000f581:	c3                   	ret
