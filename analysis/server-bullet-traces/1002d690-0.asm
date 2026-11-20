
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1002d690 <.text+0x2c690>:
1002d690:	56                   	push   esi
1002d691:	8b f1                	mov    esi,ecx
1002d693:	57                   	push   edi
1002d694:	68 c0 ce 1a 10       	push   0x101acec0
1002d699:	8b be 14 02 00 00    	mov    edi,DWORD PTR [esi+0x214]
1002d69f:	e8 ac f8 ff ff       	call   0x1002cf50
1002d6a4:	3b f8                	cmp    edi,eax
1002d6a6:	75 08                	jne    0x1002d6b0
1002d6a8:	5f                   	pop    edi
1002d6a9:	b8 01 00 00 00       	mov    eax,0x1
1002d6ae:	5e                   	pop    esi
1002d6af:	c3                   	ret
1002d6b0:	68 00 cf 1a 10       	push   0x101acf00
1002d6b5:	8b ce                	mov    ecx,esi
1002d6b7:	e8 94 f8 ff ff       	call   0x1002cf50
1002d6bc:	3b f8                	cmp    edi,eax
1002d6be:	75 08                	jne    0x1002d6c8
1002d6c0:	5f                   	pop    edi
1002d6c1:	b8 02 00 00 00       	mov    eax,0x2
1002d6c6:	5e                   	pop    esi
1002d6c7:	c3                   	ret
1002d6c8:	68 50 cf 1a 10       	push   0x101acf50
1002d6cd:	8b ce                	mov    ecx,esi
1002d6cf:	e8 7c f8 ff ff       	call   0x1002cf50
1002d6d4:	3b f8                	cmp    edi,eax
1002d6d6:	75 08                	jne    0x1002d6e0
1002d6d8:	5f                   	pop    edi
1002d6d9:	b8 03 00 00 00       	mov    eax,0x3
1002d6de:	5e                   	pop    esi
1002d6df:	c3                   	ret
1002d6e0:	68 a0 cf 1a 10       	push   0x101acfa0
1002d6e5:	8b ce                	mov    ecx,esi
1002d6e7:	e8 64 f8 ff ff       	call   0x1002cf50
1002d6ec:	3b f8                	cmp    edi,eax
1002d6ee:	75 08                	jne    0x1002d6f8
1002d6f0:	5f                   	pop    edi
1002d6f1:	b8 04 00 00 00       	mov    eax,0x4
1002d6f6:	5e                   	pop    esi
1002d6f7:	c3                   	ret
1002d6f8:	68 b4 ce 1a 10       	push   0x101aceb4
1002d6fd:	8b ce                	mov    ecx,esi
1002d6ff:	e8 4c f8 ff ff       	call   0x1002cf50
1002d704:	3b f8                	cmp    edi,eax
1002d706:	75 08                	jne    0x1002d710
1002d708:	5f                   	pop    edi
1002d709:	b8 05 00 00 00       	mov    eax,0x5
1002d70e:	5e                   	pop    esi
1002d70f:	c3                   	ret
1002d710:	68 f4 ce 1a 10       	push   0x101acef4
1002d715:	8b ce                	mov    ecx,esi
1002d717:	e8 34 f8 ff ff       	call   0x1002cf50
1002d71c:	3b f8                	cmp    edi,eax
1002d71e:	75 08                	jne    0x1002d728
1002d720:	5f                   	pop    edi
1002d721:	b8 06 00 00 00       	mov    eax,0x6
1002d726:	5e                   	pop    esi
1002d727:	c3                   	ret
1002d728:	68 44 cf 1a 10       	push   0x101acf44
1002d72d:	8b ce                	mov    ecx,esi
1002d72f:	e8 1c f8 ff ff       	call   0x1002cf50
1002d734:	3b f8                	cmp    edi,eax
1002d736:	75 08                	jne    0x1002d740
1002d738:	5f                   	pop    edi
1002d739:	b8 07 00 00 00       	mov    eax,0x7
1002d73e:	5e                   	pop    esi
1002d73f:	c3                   	ret
1002d740:	68 94 cf 1a 10       	push   0x101acf94
1002d745:	8b ce                	mov    ecx,esi
1002d747:	e8 04 f8 ff ff       	call   0x1002cf50
1002d74c:	33 c9                	xor    ecx,ecx
1002d74e:	ba 08 00 00 00       	mov    edx,0x8
1002d753:	3b f8                	cmp    edi,eax
1002d755:	5f                   	pop    edi
1002d756:	0f 44 ca             	cmove  ecx,edx
1002d759:	8b c1                	mov    eax,ecx
1002d75b:	5e                   	pop    esi
1002d75c:	c3                   	ret
