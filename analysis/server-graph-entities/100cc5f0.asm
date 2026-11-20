
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cc5f0 <.text+0xcb5f0>:
100cc5f0:	56                   	push   esi
100cc5f1:	8b f1                	mov    esi,ecx
100cc5f3:	57                   	push   edi
100cc5f4:	51                   	push   ecx
100cc5f5:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
100cc5fc:	8b 06                	mov    eax,DWORD PTR [esi]
100cc5fe:	ff 50 08             	call   DWORD PTR [eax+0x8]
100cc601:	8b 86 e0 00 00 00    	mov    eax,DWORD PTR [esi+0xe0]
100cc607:	33 ff                	xor    edi,edi
100cc609:	0f 1f 80 00 00 00 00 	nop    DWORD PTR [eax+0x0]
100cc610:	3b 86 e4 00 00 00    	cmp    eax,DWORD PTR [esi+0xe4]
100cc616:	0f 84 9a 01 00 00    	je     0x100cc7b6
100cc61c:	6a 00                	push   0x0
100cc61e:	6a 00                	push   0x0
100cc620:	6a 17                	push   0x17
100cc622:	6a 00                	push   0x0
100cc624:	ff 15 00 30 22 10    	call   DWORD PTR ds:0x10223000
100cc62a:	6a 00                	push   0x0
100cc62c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100cc632:	8b 86 e0 00 00 00    	mov    eax,DWORD PTR [esi+0xe0]
100cc638:	83 c4 10             	add    esp,0x10
100cc63b:	6b 8c 86 e8 00 00 00 	imul   ecx,DWORD PTR [esi+eax*4+0xe8],0x58
100cc642:	58 
100cc643:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cc648:	f3 0f 10 04 01       	movss  xmm0,DWORD PTR [ecx+eax*1]
100cc64d:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100cc652:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100cc658:	8b 86 e0 00 00 00    	mov    eax,DWORD PTR [esi+0xe0]
100cc65e:	6b 8c 86 e8 00 00 00 	imul   ecx,DWORD PTR [esi+eax*4+0xe8],0x58
100cc665:	58 
100cc666:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cc66b:	f3 0f 10 44 01 04    	movss  xmm0,DWORD PTR [ecx+eax*1+0x4]
100cc671:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100cc676:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100cc67c:	8b 86 e0 00 00 00    	mov    eax,DWORD PTR [esi+0xe0]
100cc682:	6b 8c 86 e8 00 00 00 	imul   ecx,DWORD PTR [esi+eax*4+0xe8],0x58
100cc689:	58 
100cc68a:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cc68f:	f3 0f 10 44 01 08    	movss  xmm0,DWORD PTR [ecx+eax*1+0x8]
100cc695:	f3 0f 58 05 d8 1e 1a 	addss  xmm0,DWORD PTR ds:0x101a1ed8
100cc69c:	10 
100cc69d:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100cc6a2:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100cc6a8:	8b 86 e0 00 00 00    	mov    eax,DWORD PTR [esi+0xe0]
100cc6ae:	6b 8c 86 e8 02 00 00 	imul   ecx,DWORD PTR [esi+eax*4+0x2e8],0x58
100cc6b5:	58 
100cc6b6:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cc6bb:	f3 0f 10 04 01       	movss  xmm0,DWORD PTR [ecx+eax*1]
100cc6c0:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100cc6c5:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100cc6cb:	8b 86 e0 00 00 00    	mov    eax,DWORD PTR [esi+0xe0]
100cc6d1:	6b 8c 86 e8 02 00 00 	imul   ecx,DWORD PTR [esi+eax*4+0x2e8],0x58
100cc6d8:	58 
100cc6d9:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cc6de:	f3 0f 10 44 01 04    	movss  xmm0,DWORD PTR [ecx+eax*1+0x4]
100cc6e4:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100cc6e9:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100cc6ef:	8b 86 e0 00 00 00    	mov    eax,DWORD PTR [esi+0xe0]
100cc6f5:	6b 8c 86 e8 02 00 00 	imul   ecx,DWORD PTR [esi+eax*4+0x2e8],0x58
100cc6fc:	58 
100cc6fd:	a1 bc 38 22 10       	mov    eax,ds:0x102238bc
100cc702:	f3 0f 10 44 01 08    	movss  xmm0,DWORD PTR [ecx+eax*1+0x8]
100cc708:	f3 0f 58 05 d8 1e 1a 	addss  xmm0,DWORD PTR ds:0x101a1ed8
100cc70f:	10 
100cc710:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100cc715:	ff 15 1c 30 22 10    	call   DWORD PTR ds:0x1022301c
100cc71b:	0f bf 05 08 1f 23 10 	movsx  eax,WORD PTR ds:0x10231f08
100cc722:	50                   	push   eax
100cc723:	ff 15 10 30 22 10    	call   DWORD PTR ds:0x10223010
100cc729:	6a 00                	push   0x0
100cc72b:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100cc731:	6a 00                	push   0x0
100cc733:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100cc739:	68 fa 00 00 00       	push   0xfa
100cc73e:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100cc744:	6a 28                	push   0x28
100cc746:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100cc74c:	6a 00                	push   0x0
100cc74e:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100cc754:	f3 0f 2c 86 f0 04 00 	cvttss2si eax,DWORD PTR [esi+0x4f0]
100cc75b:	00 
100cc75c:	50                   	push   eax
100cc75d:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100cc763:	f3 0f 2c 86 f4 04 00 	cvttss2si eax,DWORD PTR [esi+0x4f4]
100cc76a:	00 
100cc76b:	50                   	push   eax
100cc76c:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100cc772:	f3 0f 2c 86 f8 04 00 	cvttss2si eax,DWORD PTR [esi+0x4f8]
100cc779:	00 
100cc77a:	50                   	push   eax
100cc77b:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100cc781:	68 80 00 00 00       	push   0x80
100cc786:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100cc78c:	6a 00                	push   0x0
100cc78e:	ff 15 08 30 22 10    	call   DWORD PTR ds:0x10223008
100cc794:	83 c4 30             	add    esp,0x30
100cc797:	ff 15 04 30 22 10    	call   DWORD PTR ds:0x10223004
100cc79d:	ff 86 e0 00 00 00    	inc    DWORD PTR [esi+0xe0]
100cc7a3:	47                   	inc    edi
100cc7a4:	8b 86 e0 00 00 00    	mov    eax,DWORD PTR [esi+0xe0]
100cc7aa:	83 ff 0a             	cmp    edi,0xa
100cc7ad:	0f 8c 5d fe ff ff    	jl     0x100cc610
100cc7b3:	5f                   	pop    edi
100cc7b4:	5e                   	pop    esi
100cc7b5:	c3                   	ret
100cc7b6:	56                   	push   esi
100cc7b7:	e8 44 d1 04 00       	call   0x10119900
100cc7bc:	83 c4 04             	add    esp,0x4
100cc7bf:	5f                   	pop    edi
100cc7c0:	5e                   	pop    esi
100cc7c1:	c3                   	ret
