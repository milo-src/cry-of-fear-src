
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10003840 <.text+0x2840>:
10003840:	55                   	push   ebp
10003841:	8b ec                	mov    ebp,esp
10003843:	83 ec 78             	sub    esp,0x78
10003846:	a1 f4 ba 21 10       	mov    eax,ds:0x1021baf4
1000384b:	33 c5                	xor    eax,ebp
1000384d:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
10003850:	0f 10 45 08          	movups xmm0,XMMWORD PTR [ebp+0x8]
10003854:	53                   	push   ebx
10003855:	8b 5d 48             	mov    ebx,DWORD PTR [ebp+0x48]
10003858:	33 c0                	xor    eax,eax
1000385a:	0f 11 45 a8          	movups XMMWORD PTR [ebp-0x58],xmm0
1000385e:	56                   	push   esi
1000385f:	0f 10 45 18          	movups xmm0,XMMWORD PTR [ebp+0x18]
10003863:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
10003869:	57                   	push   edi
1000386a:	0f 11 45 98          	movups XMMWORD PTR [ebp-0x68],xmm0
1000386e:	0f 10 45 28          	movups xmm0,XMMWORD PTR [ebp+0x28]
10003872:	8b 96 90 54 04 00    	mov    edx,DWORD PTR [esi+0x45490]
10003878:	0f 11 45 88          	movups XMMWORD PTR [ebp-0x78],xmm0
1000387c:	0f 10 45 38          	movups xmm0,XMMWORD PTR [ebp+0x38]
10003880:	0f 11 45 e8          	movups XMMWORD PTR [ebp-0x18],xmm0
10003884:	85 d2                	test   edx,edx
10003886:	7e 15                	jle    0x1000389d
10003888:	8b 7d e8             	mov    edi,DWORD PTR [ebp-0x18]
1000388b:	8d 8e c4 54 04 00    	lea    ecx,[esi+0x454c4]
10003891:	39 39                	cmp    DWORD PTR [ecx],edi
10003893:	74 0c                	je     0x100038a1
10003895:	40                   	inc    eax
10003896:	83 c1 44             	add    ecx,0x44
10003899:	3b c2                	cmp    eax,edx
1000389b:	7c f4                	jl     0x10003891
1000389d:	3b c2                	cmp    eax,edx
1000389f:	74 13                	je     0x100038b4
100038a1:	5f                   	pop    edi
100038a2:	5e                   	pop    esi
100038a3:	33 c0                	xor    eax,eax
100038a5:	5b                   	pop    ebx
100038a6:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100038a9:	33 cd                	xor    ecx,ebp
100038ab:	e8 03 a3 13 00       	call   0x1013dbb3
100038b0:	8b e5                	mov    esp,ebp
100038b2:	5d                   	pop    ebp
100038b3:	c3                   	ret
100038b4:	8b 45 4c             	mov    eax,DWORD PTR [ebp+0x4c]
100038b7:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100038bb:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
100038c0:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
100038c5:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
100038ca:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100038cf:	f3 0f 11 45 f4       	movss  DWORD PTR [ebp-0xc],xmm0
100038d4:	81 fa 58 02 00 00    	cmp    edx,0x258
100038da:	7c 16                	jl     0x100038f2
100038dc:	8b 86 68 f5 04 00    	mov    eax,DWORD PTR [esi+0x4f568]
100038e2:	68 98 1c 1a 10       	push   0x101a1c98
100038e7:	ff d0                	call   eax
100038e9:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
100038ef:	83 c4 04             	add    esp,0x4
100038f2:	8b 86 90 54 04 00    	mov    eax,DWORD PTR [esi+0x45490]
100038f8:	8b c8                	mov    ecx,eax
100038fa:	0f 10 45 a8          	movups xmm0,XMMWORD PTR [ebp-0x58]
100038fe:	c1 e1 04             	shl    ecx,0x4
10003901:	03 c8                	add    ecx,eax
10003903:	5f                   	pop    edi
10003904:	0f 11 84 8e 94 54 04 	movups XMMWORD PTR [esi+ecx*4+0x45494],xmm0
1000390b:	00 
1000390c:	0f 10 45 98          	movups xmm0,XMMWORD PTR [ebp-0x68]
10003910:	0f 11 84 8e a4 54 04 	movups XMMWORD PTR [esi+ecx*4+0x454a4],xmm0
10003917:	00 
10003918:	0f 10 45 88          	movups xmm0,XMMWORD PTR [ebp-0x78]
1000391c:	0f 11 84 8e b4 54 04 	movups XMMWORD PTR [esi+ecx*4+0x454b4],xmm0
10003923:	00 
10003924:	0f 10 45 e8          	movups xmm0,XMMWORD PTR [ebp-0x18]
10003928:	0f 11 84 8e c4 54 04 	movups XMMWORD PTR [esi+ecx*4+0x454c4],xmm0
1000392f:	00 
10003930:	89 9c 8e d4 54 04 00 	mov    DWORD PTR [esi+ecx*4+0x454d4],ebx
10003937:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000393c:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
1000393f:	5e                   	pop    esi
10003940:	33 cd                	xor    ecx,ebp
10003942:	ff 80 90 54 04 00    	inc    DWORD PTR [eax+0x45490]
10003948:	b8 01 00 00 00       	mov    eax,0x1
1000394d:	5b                   	pop    ebx
1000394e:	e8 60 a2 13 00       	call   0x1013dbb3
10003953:	8b e5                	mov    esp,ebp
10003955:	5d                   	pop    ebp
10003956:	c3                   	ret
