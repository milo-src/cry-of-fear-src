
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f86e0 <.text+0xf76e0>:
100f86e0:	55                   	push   ebp
100f86e1:	8b ec                	mov    ebp,esp
100f86e3:	83 e4 f8             	and    esp,0xfffffff8
100f86e6:	51                   	push   ecx
100f86e7:	53                   	push   ebx
100f86e8:	56                   	push   esi
100f86e9:	8b f1                	mov    esi,ecx
100f86eb:	57                   	push   edi
100f86ec:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f86ef:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
100f86f5:	e8 c6 7e 00 00       	call   0x101005c0
100f86fa:	50                   	push   eax
100f86fb:	e8 10 82 00 00       	call   0x10100910
100f8700:	8b f8                	mov    edi,eax
100f8702:	83 c4 08             	add    esp,0x8
100f8705:	85 ff                	test   edi,edi
100f8707:	75 17                	jne    0x100f8720
100f8709:	68 88 b3 1d 10       	push   0x101db388
100f870e:	6a 01                	push   0x1
100f8710:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100f8716:	83 c4 08             	add    esp,0x8
100f8719:	5f                   	pop    edi
100f871a:	5e                   	pop    esi
100f871b:	5b                   	pop    ebx
100f871c:	8b e5                	mov    esp,ebp
100f871e:	5d                   	pop    ebp
100f871f:	c3                   	ret
100f8720:	c7 47 0c 00 00 00 00 	mov    DWORD PTR [edi+0xc],0x0
100f8727:	8b 5e 04             	mov    ebx,DWORD PTR [esi+0x4]
100f872a:	f7 83 a8 01 00 00 00 	test   DWORD PTR [ebx+0x1a8],0x200
100f8731:	02 00 00 
100f8734:	74 50                	je     0x100f8786
100f8736:	f3 0f 10 4b 24       	movss  xmm1,DWORD PTR [ebx+0x24]
100f873b:	f3 0f 10 53 20       	movss  xmm2,DWORD PTR [ebx+0x20]
100f8740:	f3 0f 10 43 28       	movss  xmm0,DWORD PTR [ebx+0x28]
100f8745:	f3 0f 59 d2          	mulss  xmm2,xmm2
100f8749:	f3 0f 59 c9          	mulss  xmm1,xmm1
100f874d:	f3 0f 59 c0          	mulss  xmm0,xmm0
100f8751:	f3 0f 58 d1          	addss  xmm2,xmm1
100f8755:	0f 57 c9             	xorps  xmm1,xmm1
100f8758:	f3 0f 58 d0          	addss  xmm2,xmm0
100f875c:	0f 5a c2             	cvtps2pd xmm0,xmm2
100f875f:	66 0f 2e c8          	ucomisd xmm1,xmm0
100f8763:	77 06                	ja     0x100f876b
100f8765:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100f8769:	eb 05                	jmp    0x100f8770
100f876b:	e8 20 37 07 00       	call   0x1016be90
100f8770:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100f8774:	f3 0f 2c c0          	cvttss2si eax,xmm0
100f8778:	3d 00 02 00 00       	cmp    eax,0x200
100f877d:	7e 09                	jle    0x100f8788
100f877f:	b8 00 02 00 00       	mov    eax,0x200
100f8784:	eb 02                	jmp    0x100f8788
100f8786:	33 c0                	xor    eax,eax
100f8788:	f6 83 84 01 00 00 02 	test   BYTE PTR [ebx+0x184],0x2
100f878f:	8d 48 64             	lea    ecx,[eax+0x64]
100f8792:	c7 86 94 22 00 00 e8 	mov    DWORD PTR [esi+0x2294],0x3e8
100f8799:	03 00 00 
100f879c:	0f 44 c8             	cmove  ecx,eax
100f879f:	81 f9 e8 03 00 00    	cmp    ecx,0x3e8
100f87a5:	7d 1c                	jge    0x100f87c3
100f87a7:	c7 86 90 22 00 00 e8 	mov    DWORD PTR [esi+0x2290],0x3e8
100f87ae:	03 00 00 
100f87b1:	83 4f 0c 01          	or     DWORD PTR [edi+0xc],0x1
100f87b5:	8b 86 94 22 00 00    	mov    eax,DWORD PTR [esi+0x2294]
100f87bb:	8b 8e 90 22 00 00    	mov    ecx,DWORD PTR [esi+0x2290]
100f87c1:	eb 0b                	jmp    0x100f87ce
100f87c3:	89 8e 90 22 00 00    	mov    DWORD PTR [esi+0x2290],ecx
100f87c9:	b8 e8 03 00 00       	mov    eax,0x3e8
100f87ce:	f3 0f 10 15 2c 97 1a 	movss  xmm2,DWORD PTR ds:0x101a972c
100f87d5:	10 
100f87d6:	66 0f 6e c8          	movd   xmm1,eax
100f87da:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f87df:	0f 5b c9             	cvtdq2ps xmm1,xmm1
100f87e2:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
100f87e7:	f3 0f 59 c2          	mulss  xmm0,xmm2
100f87eb:	f3 0f 5c c8          	subss  xmm1,xmm0
100f87ef:	f3 0f 2c c1          	cvttss2si eax,xmm1
100f87f3:	89 86 94 22 00 00    	mov    DWORD PTR [esi+0x2294],eax
100f87f9:	8b 47 10             	mov    eax,DWORD PTR [edi+0x10]
100f87fc:	8b 15 88 31 22 10    	mov    edx,DWORD PTR ds:0x10223188
100f8802:	3b c8                	cmp    ecx,eax
100f8804:	7e 04                	jle    0x100f880a
100f8806:	8b c1                	mov    eax,ecx
100f8808:	eb 21                	jmp    0x100f882b
100f880a:	7d 1f                	jge    0x100f882b
100f880c:	f3 0f 10 42 04       	movss  xmm0,DWORD PTR [edx+0x4]
100f8811:	33 db                	xor    ebx,ebx
100f8813:	66 0f 6e c8          	movd   xmm1,eax
100f8817:	0f 5b c9             	cvtdq2ps xmm1,xmm1
100f881a:	f3 0f 59 c2          	mulss  xmm0,xmm2
100f881e:	f3 0f 5c c8          	subss  xmm1,xmm0
100f8822:	f3 0f 2c c1          	cvttss2si eax,xmm1
100f8826:	3b c1                	cmp    eax,ecx
100f8828:	0f 4c c3             	cmovl  eax,ebx
100f882b:	f3 0f 10 02          	movss  xmm0,DWORD PTR [edx]
100f882f:	33 c9                	xor    ecx,ecx
100f8831:	39 8e e8 24 00 00    	cmp    DWORD PTR [esi+0x24e8],ecx
100f8837:	0f 44 c8             	cmove  ecx,eax
100f883a:	0f 2f 86 a0 22 00 00 	comiss xmm0,DWORD PTR [esi+0x22a0]
100f8841:	76 0a                	jbe    0x100f884d
100f8843:	c7 86 98 22 00 00 00 	mov    DWORD PTR [esi+0x2298],0x0
100f884a:	00 00 00 
100f884d:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f8850:	f3 0f 7e 40 08       	movq   xmm0,QWORD PTR [eax+0x8]
100f8855:	66 0f d6 07          	movq   QWORD PTR [edi],xmm0
100f8859:	8b 40 10             	mov    eax,DWORD PTR [eax+0x10]
100f885c:	89 47 08             	mov    DWORD PTR [edi+0x8],eax
100f885f:	8b 86 98 22 00 00    	mov    eax,DWORD PTR [esi+0x2298]
100f8865:	83 c8 04             	or     eax,0x4
100f8868:	89 4f 10             	mov    DWORD PTR [edi+0x10],ecx
100f886b:	09 47 0c             	or     DWORD PTR [edi+0xc],eax
100f886e:	33 c9                	xor    ecx,ecx
100f8870:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100f8875:	66 0f 6e 8e 9c 22 00 	movd   xmm1,DWORD PTR [esi+0x229c]
100f887c:	00 
100f887d:	0f 5b c9             	cvtdq2ps xmm1,xmm1
100f8880:	5f                   	pop    edi
100f8881:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
100f8886:	f3 0f 59 05 84 13 1a 	mulss  xmm0,DWORD PTR ds:0x101a1384
100f888d:	10 
100f888e:	f3 0f 5c c8          	subss  xmm1,xmm0
100f8892:	f3 0f 2c c1          	cvttss2si eax,xmm1
100f8896:	85 c0                	test   eax,eax
100f8898:	0f 48 c1             	cmovs  eax,ecx
100f889b:	89 86 9c 22 00 00    	mov    DWORD PTR [esi+0x229c],eax
100f88a1:	5e                   	pop    esi
100f88a2:	5b                   	pop    ebx
100f88a3:	8b e5                	mov    esp,ebp
100f88a5:	5d                   	pop    ebp
100f88a6:	c3                   	ret
