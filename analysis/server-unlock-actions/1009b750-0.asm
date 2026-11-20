
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1009b750 <.text+0x9a750>:
1009b750:	55                   	push   ebp
1009b751:	8b ec                	mov    ebp,esp
1009b753:	56                   	push   esi
1009b754:	57                   	push   edi
1009b755:	8b 7d 08             	mov    edi,DWORD PTR [ebp+0x8]
1009b758:	8b f1                	mov    esi,ecx
1009b75a:	85 ff                	test   edi,edi
1009b75c:	0f 84 53 01 00 00    	je     0x1009b8b5
1009b762:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1009b765:	8b 80 48 02 00 00    	mov    eax,DWORD PTR [eax+0x248]
1009b76b:	83 f8 0f             	cmp    eax,0xf
1009b76e:	0f 87 41 01 00 00    	ja     0x1009b8b5
1009b774:	ff 24 85 bc b8 09 10 	jmp    DWORD PTR [eax*4+0x1009b8bc]
1009b77b:	6a 00                	push   0x0
1009b77d:	6a 00                	push   0x0
1009b77f:	68 80 00 00 00       	push   0x80
1009b784:	e9 18 01 00 00       	jmp    0x1009b8a1
1009b789:	6a 00                	push   0x0
1009b78b:	6a 00                	push   0x0
1009b78d:	68 00 01 00 00       	push   0x100
1009b792:	e9 0a 01 00 00       	jmp    0x1009b8a1
1009b797:	6a 00                	push   0x0
1009b799:	6a 00                	push   0x0
1009b79b:	68 00 02 00 00       	push   0x200
1009b7a0:	e9 fc 00 00 00       	jmp    0x1009b8a1
1009b7a5:	6a 00                	push   0x0
1009b7a7:	6a 00                	push   0x0
1009b7a9:	68 00 04 00 00       	push   0x400
1009b7ae:	e9 ee 00 00 00       	jmp    0x1009b8a1
1009b7b3:	6a 00                	push   0x0
1009b7b5:	6a 00                	push   0x0
1009b7b7:	68 00 08 00 00       	push   0x800
1009b7bc:	e9 e0 00 00 00       	jmp    0x1009b8a1
1009b7c1:	6a 00                	push   0x0
1009b7c3:	6a 00                	push   0x0
1009b7c5:	68 00 10 00 00       	push   0x1000
1009b7ca:	e9 d2 00 00 00       	jmp    0x1009b8a1
1009b7cf:	6a 00                	push   0x0
1009b7d1:	6a 00                	push   0x0
1009b7d3:	68 00 20 00 00       	push   0x2000
1009b7d8:	e9 c4 00 00 00       	jmp    0x1009b8a1
1009b7dd:	6a 00                	push   0x0
1009b7df:	6a 00                	push   0x0
1009b7e1:	68 00 40 00 00       	push   0x4000
1009b7e6:	e9 b6 00 00 00       	jmp    0x1009b8a1
1009b7eb:	6a 00                	push   0x0
1009b7ed:	6a 00                	push   0x0
1009b7ef:	68 00 80 00 00       	push   0x8000
1009b7f4:	e9 a8 00 00 00       	jmp    0x1009b8a1
1009b7f9:	6a 00                	push   0x0
1009b7fb:	6a 00                	push   0x0
1009b7fd:	68 00 00 01 00       	push   0x10000
1009b802:	e9 9a 00 00 00       	jmp    0x1009b8a1
1009b807:	6a 00                	push   0x0
1009b809:	6a 00                	push   0x0
1009b80b:	68 00 00 02 00       	push   0x20000
1009b810:	8b cf                	mov    ecx,edi
1009b812:	e8 e9 17 04 00       	call   0x100dd000
1009b817:	84 c0                	test   al,al
1009b819:	74 09                	je     0x1009b824
1009b81b:	56                   	push   esi
1009b81c:	e8 df e0 07 00       	call   0x10119900
1009b821:	83 c4 04             	add    esp,0x4
1009b824:	6a 00                	push   0x0
1009b826:	6a 00                	push   0x0
1009b828:	68 00 00 00 02       	push   0x2000000
1009b82d:	8b cf                	mov    ecx,edi
1009b82f:	e8 cc 17 04 00       	call   0x100dd000
1009b834:	84 c0                	test   al,al
1009b836:	74 09                	je     0x1009b841
1009b838:	56                   	push   esi
1009b839:	e8 c2 e0 07 00       	call   0x10119900
1009b83e:	83 c4 04             	add    esp,0x4
1009b841:	6a 00                	push   0x0
1009b843:	6a 00                	push   0x0
1009b845:	68 00 00 00 04       	push   0x4000000
1009b84a:	8b cf                	mov    ecx,edi
1009b84c:	e8 af 17 04 00       	call   0x100dd000
1009b851:	84 c0                	test   al,al
1009b853:	74 09                	je     0x1009b85e
1009b855:	56                   	push   esi
1009b856:	e8 a5 e0 07 00       	call   0x10119900
1009b85b:	83 c4 04             	add    esp,0x4
1009b85e:	6a 00                	push   0x0
1009b860:	6a 00                	push   0x0
1009b862:	68 00 00 00 08       	push   0x8000000
1009b867:	8b cf                	mov    ecx,edi
1009b869:	e8 92 17 04 00       	call   0x100dd000
1009b86e:	84 c0                	test   al,al
1009b870:	74 09                	je     0x1009b87b
1009b872:	56                   	push   esi
1009b873:	e8 88 e0 07 00       	call   0x10119900
1009b878:	83 c4 04             	add    esp,0x4
1009b87b:	6a 00                	push   0x0
1009b87d:	6a 00                	push   0x0
1009b87f:	68 00 00 00 10       	push   0x10000000
1009b884:	8b cf                	mov    ecx,edi
1009b886:	e8 75 17 04 00       	call   0x100dd000
1009b88b:	84 c0                	test   al,al
1009b88d:	74 09                	je     0x1009b898
1009b88f:	56                   	push   esi
1009b890:	e8 6b e0 07 00       	call   0x10119900
1009b895:	83 c4 04             	add    esp,0x4
1009b898:	6a 00                	push   0x0
1009b89a:	6a 00                	push   0x0
1009b89c:	68 00 00 00 20       	push   0x20000000
1009b8a1:	8b cf                	mov    ecx,edi
1009b8a3:	e8 58 17 04 00       	call   0x100dd000
1009b8a8:	84 c0                	test   al,al
1009b8aa:	74 09                	je     0x1009b8b5
1009b8ac:	56                   	push   esi
1009b8ad:	e8 4e e0 07 00       	call   0x10119900
1009b8b2:	83 c4 04             	add    esp,0x4
1009b8b5:	5f                   	pop    edi
1009b8b6:	5e                   	pop    esi
1009b8b7:	5d                   	pop    ebp
1009b8b8:	c2 04 00             	ret    0x4
