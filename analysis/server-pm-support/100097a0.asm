
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100097a0 <.text+0x87a0>:
100097a0:	55                   	push   ebp
100097a1:	8b ec                	mov    ebp,esp
100097a3:	51                   	push   ecx
100097a4:	53                   	push   ebx
100097a5:	56                   	push   esi
100097a6:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
100097ac:	0f b7 96 76 54 04 00 	movzx  edx,WORD PTR [esi+0x45476]
100097b3:	8b 8e c8 00 00 00    	mov    ecx,DWORD PTR [esi+0xc8]
100097b9:	8b c2                	mov    eax,edx
100097bb:	8b da                	mov    ebx,edx
100097bd:	33 d9                	xor    ebx,ecx
100097bf:	23 d8                	and    ebx,eax
100097c1:	8b c1                	mov    eax,ecx
100097c3:	83 e0 fb             	and    eax,0xfffffffb
100097c6:	83 c9 04             	or     ecx,0x4
100097c9:	80 e2 04             	and    dl,0x4
100097cc:	0f 44 c8             	cmove  ecx,eax
100097cf:	89 8e c8 00 00 00    	mov    DWORD PTR [esi+0xc8],ecx
100097d5:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
100097db:	83 be 04 02 00 00 00 	cmp    DWORD PTR [esi+0x204],0x0
100097e2:	0f 85 eb 01 00 00    	jne    0x100099d3
100097e8:	83 be d0 00 00 00 00 	cmp    DWORD PTR [esi+0xd0],0x0
100097ef:	0f 85 de 01 00 00    	jne    0x100099d3
100097f5:	f3 0f 10 86 14 02 00 	movss  xmm0,DWORD PTR [esi+0x214]
100097fc:	00 
100097fd:	0f 57 c9             	xorps  xmm1,xmm1
10009800:	0f 2e c1             	ucomiss xmm0,xmm1
10009803:	9f                   	lahf
10009804:	f6 c4 44             	test   ah,0x44
10009807:	7a 52                	jp     0x1000985b
10009809:	66 8b 8e 76 54 04 00 	mov    cx,WORD PTR [esi+0x45476]
10009810:	66 83 e1 04          	and    cx,0x4
10009814:	75 19                	jne    0x1000982f
10009816:	83 be 90 00 00 00 00 	cmp    DWORD PTR [esi+0x90],0x0
1000981d:	75 10                	jne    0x1000982f
1000981f:	f7 86 b8 00 00 00 00 	test   DWORD PTR [esi+0xb8],0x4000
10009826:	40 00 00 
10009829:	0f 84 a4 01 00 00    	je     0x100099d3
1000982f:	0f 2e c1             	ucomiss xmm0,xmm1
10009832:	9f                   	lahf
10009833:	f6 c4 44             	test   ah,0x44
10009836:	7a 23                	jp     0x1000985b
10009838:	66 85 c9             	test   cx,cx
1000983b:	0f 84 92 01 00 00    	je     0x100099d3
10009841:	0f 2e c1             	ucomiss xmm0,xmm1
10009844:	9f                   	lahf
10009845:	f6 c4 44             	test   ah,0x44
10009848:	7a 11                	jp     0x1000985b
1000984a:	f6 c3 04             	test   bl,0x4
1000984d:	74 2b                	je     0x1000987a
1000984f:	f7 86 b8 00 00 00 00 	test   DWORD PTR [esi+0xb8],0x4000
10009856:	40 00 00 
10009859:	75 1f                	jne    0x1000987a
1000985b:	c7 86 8c 00 00 00 00 	mov    DWORD PTR [esi+0x8c],0x447a0000
10009862:	00 7a 44 
10009865:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000986a:	c7 80 90 00 00 00 01 	mov    DWORD PTR [eax+0x90],0x1
10009871:	00 00 00 
10009874:	8b 35 50 0c 22 10    	mov    esi,DWORD PTR ds:0x10220c50
1000987a:	83 be 90 00 00 00 00 	cmp    DWORD PTR [esi+0x90],0x0
10009881:	f3 0f 10 96 8c 00 00 	movss  xmm2,DWORD PTR [esi+0x8c]
10009888:	00 
10009889:	0f 5a d2             	cvtps2pd xmm2,xmm2
1000988c:	0f 85 41 01 00 00    	jne    0x100099d3
10009892:	f2 0f 5e 15 c0 1e 1a 	divsd  xmm2,QWORD PTR ds:0x101a1ec0
10009899:	10 
1000989a:	f2 0f 10 05 30 1e 1a 	movsd  xmm0,QWORD PTR ds:0x101a1e30
100098a1:	10 
100098a2:	66 0f 2f c2          	comisd xmm0,xmm2
100098a6:	73 7f                	jae    0x10009927
100098a8:	83 be e0 00 00 00 ff 	cmp    DWORD PTR [esi+0xe0],0xffffffff
100098af:	74 76                	je     0x10009927
100098b1:	f3 0f 10 86 14 02 00 	movss  xmm0,DWORD PTR [esi+0x214]
100098b8:	00 
100098b9:	0f 2e c1             	ucomiss xmm0,xmm1
100098bc:	9f                   	lahf
100098bd:	f6 c4 44             	test   ah,0x44
100098c0:	7a 65                	jp     0x10009927
100098c2:	f2 0f 10 0d 78 1e 1a 	movsd  xmm1,QWORD PTR ds:0x101a1e78
100098c9:	10 
100098ca:	0f 57 c0             	xorps  xmm0,xmm0
100098cd:	f2 0f 5c ca          	subsd  xmm1,xmm2
100098d1:	83 ec 08             	sub    esp,0x8
100098d4:	c7 44 24 04 55 55 d5 	mov    DWORD PTR [esp+0x4],0x3fd55555
100098db:	3f 
100098dc:	f2 0f 5f c1          	maxsd  xmm0,xmm1
100098e0:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100098e4:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100098e9:	e8 e2 fb ff ff       	call   0x100094d0
100098ee:	f3 0f 10 0d 90 13 1a 	movss  xmm1,DWORD PTR ds:0x101a1390
100098f5:	10 
100098f6:	83 c4 08             	add    esp,0x8
100098f9:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
100098fc:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
10009901:	f3 0f 5c c8          	subss  xmm1,xmm0
10009905:	f3 0f 59 05 0c 1f 1a 	mulss  xmm0,DWORD PTR ds:0x101a1f0c
1000990c:	10 
1000990d:	f3 0f 59 0d f0 1e 1a 	mulss  xmm1,DWORD PTR ds:0x101a1ef0
10009914:	10 
10009915:	f3 0f 58 c8          	addss  xmm1,xmm0
10009919:	f3 0f 11 8e 88 00 00 	movss  DWORD PTR [esi+0x88],xmm1
10009920:	00 
10009921:	5e                   	pop    esi
10009922:	5b                   	pop    ebx
10009923:	8b e5                	mov    esp,ebp
10009925:	5d                   	pop    ebp
10009926:	c3                   	ret
10009927:	c7 86 bc 00 00 00 00 	mov    DWORD PTR [esi+0xbc],0x0
1000992e:	00 00 00 
10009931:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009936:	c7 80 88 00 00 00 00 	mov    DWORD PTR [eax+0x88],0x41e00000
1000993d:	00 e0 41 
10009940:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009945:	81 a0 b8 00 00 00 ff 	and    DWORD PTR [eax+0xb8],0xffffbfff
1000994c:	bf ff ff 
1000994f:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009954:	c7 80 90 00 00 00 01 	mov    DWORD PTR [eax+0x90],0x1
1000995b:	00 00 00 
1000995e:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
10009963:	83 b8 e0 00 00 00 ff 	cmp    DWORD PTR [eax+0xe0],0xffffffff
1000996a:	74 67                	je     0x100099d3
1000996c:	f3 0f 10 80 04 f5 04 	movss  xmm0,DWORD PTR [eax+0x4f504]
10009973:	00 
10009974:	f3 0f 5c 80 f8 f4 04 	subss  xmm0,DWORD PTR [eax+0x4f4f8]
1000997b:	00 
1000997c:	6a ff                	push   0xffffffff
1000997e:	f3 0f 58 40 38       	addss  xmm0,DWORD PTR [eax+0x38]
10009983:	f3 0f 11 40 38       	movss  DWORD PTR [eax+0x38],xmm0
10009988:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
1000998d:	f3 0f 10 80 08 f5 04 	movss  xmm0,DWORD PTR [eax+0x4f508]
10009994:	00 
10009995:	f3 0f 5c 80 fc f4 04 	subss  xmm0,DWORD PTR [eax+0x4f4fc]
1000999c:	00 
1000999d:	f3 0f 58 40 3c       	addss  xmm0,DWORD PTR [eax+0x3c]
100099a2:	f3 0f 11 40 3c       	movss  DWORD PTR [eax+0x3c],xmm0
100099a7:	a1 50 0c 22 10       	mov    eax,ds:0x10220c50
100099ac:	f3 0f 10 80 0c f5 04 	movss  xmm0,DWORD PTR [eax+0x4f50c]
100099b3:	00 
100099b4:	f3 0f 5c 80 00 f5 04 	subss  xmm0,DWORD PTR [eax+0x4f500]
100099bb:	00 
100099bc:	f3 0f 58 40 40       	addss  xmm0,DWORD PTR [eax+0x40]
100099c1:	f3 0f 11 40 40       	movss  DWORD PTR [eax+0x40],xmm0
100099c6:	e8 85 bd ff ff       	call   0x10005750
100099cb:	83 c4 04             	add    esp,0x4
100099ce:	e8 9d a2 ff ff       	call   0x10003c70
100099d3:	5e                   	pop    esi
100099d4:	5b                   	pop    ebx
100099d5:	8b e5                	mov    esp,ebp
100099d7:	5d                   	pop    ebp
100099d8:	c3                   	ret
