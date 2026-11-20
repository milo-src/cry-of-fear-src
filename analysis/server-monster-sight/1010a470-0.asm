
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1010a470 <.text+0x109470>:
1010a470:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1010a475:	56                   	push   esi
1010a476:	57                   	push   edi
1010a477:	be 01 00 00 00       	mov    esi,0x1
1010a47c:	33 ff                	xor    edi,edi
1010a47e:	39 b0 90 00 00 00    	cmp    DWORD PTR [eax+0x90],esi
1010a484:	7c 34                	jl     0x1010a4ba
1010a486:	56                   	push   esi
1010a487:	e8 f4 f1 00 00       	call   0x10119680
1010a48c:	83 c4 04             	add    esp,0x4
1010a48f:	85 c0                	test   eax,eax
1010a491:	74 18                	je     0x1010a4ab
1010a493:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1010a496:	0f 57 c9             	xorps  xmm1,xmm1
1010a499:	f3 0f 10 80 64 02 00 	movss  xmm0,DWORD PTR [eax+0x264]
1010a4a0:	00 
1010a4a1:	0f 2e c1             	ucomiss xmm0,xmm1
1010a4a4:	9f                   	lahf
1010a4a5:	f6 c4 44             	test   ah,0x44
1010a4a8:	7a 01                	jp     0x1010a4ab
1010a4aa:	47                   	inc    edi
1010a4ab:	8b 0d 88 31 22 10    	mov    ecx,DWORD PTR ds:0x10223188
1010a4b1:	46                   	inc    esi
1010a4b2:	3b b1 90 00 00 00    	cmp    esi,DWORD PTR [ecx+0x90]
1010a4b8:	7e cc                	jle    0x1010a486
1010a4ba:	8b c7                	mov    eax,edi
1010a4bc:	5f                   	pop    edi
1010a4bd:	5e                   	pop    esi
1010a4be:	c3                   	ret
