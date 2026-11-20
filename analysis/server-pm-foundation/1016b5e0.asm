
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1016b5e0 <.text+0x16a5e0>:
1016b5e0:	83 ec 08             	sub    esp,0x8
1016b5e3:	0f ae 5c 24 04       	stmxcsr DWORD PTR [esp+0x4]
1016b5e8:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1016b5ec:	25 80 7f 00 00       	and    eax,0x7f80
1016b5f1:	3d 80 1f 00 00       	cmp    eax,0x1f80
1016b5f6:	0f 85 ed 04 00 00    	jne    0x1016bae9
1016b5fc:	d9 3c 24             	fnstcw WORD PTR [esp]
1016b5ff:	66 8b 04 24          	mov    ax,WORD PTR [esp]
1016b603:	66 83 e0 7f          	and    ax,0x7f
1016b607:	66 83 f8 7f          	cmp    ax,0x7f
1016b60b:	0f 85 d8 04 00 00    	jne    0x1016bae9
1016b611:	66 0f 13 04 24       	movlpd QWORD PTR [esp],xmm0
1016b616:	66 0f 12 25 10 dc 1e 	movlpd xmm4,QWORD PTR ds:0x101edc10
1016b61d:	10 
1016b61e:	66 0f 12 1d 20 dc 1e 	movlpd xmm3,QWORD PTR ds:0x101edc20
1016b625:	10 
1016b626:	66 0f 57 ed          	xorpd  xmm5,xmm5
1016b62a:	66 0f 12 15 18 dc 1e 	movlpd xmm2,QWORD PTR ds:0x101edc18
1016b631:	10 
1016b632:	f2 0f 10 c8          	movsd  xmm1,xmm0
1016b636:	66 0f 73 d0 2c       	psrlq  xmm0,0x2c
1016b63b:	66 0f 7e c2          	movd   edx,xmm0
1016b63f:	f2 0f 10 f9          	movsd  xmm7,xmm1
1016b643:	b9 00 20 00 00       	mov    ecx,0x2000
1016b648:	66 0f c4 e9 02       	pinsrw xmm5,ecx,0x2
1016b64d:	f2 0f 10 c1          	movsd  xmm0,xmm1
1016b651:	b8 ff ff 07 00       	mov    eax,0x7ffff
1016b656:	23 c2                	and    eax,edx
1016b658:	2d 00 fb 03 00       	sub    eax,0x3fb00
1016b65d:	3d bb 03 00 00       	cmp    eax,0x3bb
1016b662:	0f 83 c9 00 00 00    	jae    0x1016b731
1016b668:	f2 0f 59 c9          	mulsd  xmm1,xmm1
1016b66c:	81 e2 ff ff 00 00    	and    edx,0xffff
1016b672:	f2 0f 5c d9          	subsd  xmm3,xmm1
1016b676:	f2 0f 51 db          	sqrtsd xmm3,xmm3
1016b67a:	66 0f 54 d7          	andpd  xmm2,xmm7
1016b67e:	83 e2 fc             	and    edx,0xfffffffc
1016b681:	81 ea 00 fb 00 00    	sub    edx,0xfb00
1016b687:	66 0f 12 0c 55 00 04 	movlpd xmm1,QWORD PTR [edx*2+0x101f0400]
1016b68e:	1f 10 
1016b690:	66 0f 56 d5          	orpd   xmm2,xmm5
1016b694:	66 0f 28 24 95 00 f5 	movapd xmm4,XMMWORD PTR [edx*4+0x101ef500]
1016b69b:	1e 10 
1016b69d:	f2 0f 10 f7          	movsd  xmm6,xmm7
1016b6a1:	f2 0f 58 fa          	addsd  xmm7,xmm2
1016b6a5:	f2 0f 5c c2          	subsd  xmm0,xmm2
1016b6a9:	f2 0f 59 f8          	mulsd  xmm7,xmm0
1016b6ad:	f2 0f 59 f1          	mulsd  xmm6,xmm1
1016b6b1:	f2 0f 59 da          	mulsd  xmm3,xmm2
1016b6b5:	f2 0f 10 ce          	movsd  xmm1,xmm6
1016b6b9:	f2 0f 58 f3          	addsd  xmm6,xmm3
1016b6bd:	f2 0f 5e fe          	divsd  xmm7,xmm6
1016b6c1:	66 0f 12 05 c8 db 1e 	movlpd xmm0,QWORD PTR ds:0x101edbc8
1016b6c8:	10 
1016b6c9:	66 0f 12 2d b8 db 1e 	movlpd xmm5,QWORD PTR ds:0x101edbb8
1016b6d0:	10 
1016b6d1:	f2 0f 5c cb          	subsd  xmm1,xmm3
1016b6d5:	66 0f 73 d2 3f       	psrlq  xmm2,0x3f
1016b6da:	f2 0f 10 d9          	movsd  xmm3,xmm1
1016b6de:	66 0f 73 f2 3f       	psllq  xmm2,0x3f
1016b6e3:	f2 0f 59 c9          	mulsd  xmm1,xmm1
1016b6e7:	66 0f 70 d2 44       	pshufd xmm2,xmm2,0x44
1016b6ec:	66 0f 12 35 c0 db 1e 	movlpd xmm6,QWORD PTR ds:0x101edbc0
1016b6f3:	10 
1016b6f4:	f2 0f 59 d9          	mulsd  xmm3,xmm1
1016b6f8:	f2 0f 59 c1          	mulsd  xmm0,xmm1
1016b6fc:	66 0f 57 e2          	xorpd  xmm4,xmm2
1016b700:	f2 0f 59 eb          	mulsd  xmm5,xmm3
1016b704:	66 0f 5c 25 50 db 1e 	subpd  xmm4,XMMWORD PTR ds:0x101edb50
1016b70b:	10 
1016b70c:	f2 0f 59 d9          	mulsd  xmm3,xmm1
1016b710:	f2 0f 58 c6          	addsd  xmm0,xmm6
1016b714:	f2 0f 59 c3          	mulsd  xmm0,xmm3
1016b718:	f2 0f 5c ec          	subsd  xmm5,xmm4
1016b71c:	66 0f 70 e4 ee       	pshufd xmm4,xmm4,0xee
1016b721:	f2 0f 58 c5          	addsd  xmm0,xmm5
1016b725:	f2 0f 5c c7          	subsd  xmm0,xmm7
1016b729:	f2 0f 5c c4          	subsd  xmm0,xmm4
1016b72d:	83 c4 08             	add    esp,0x8
1016b730:	c3                   	ret
1016b731:	2d bb 03 00 00       	sub    eax,0x3bb
1016b736:	83 f8 41             	cmp    eax,0x41
1016b739:	0f 83 20 01 00 00    	jae    0x1016b85f
1016b73f:	66 0f 73 d7 26       	psrlq  xmm7,0x26
1016b744:	66 0f 73 f7 26       	psllq  xmm7,0x26
1016b749:	66 0f d7 c0          	pmovmskb eax,xmm0
1016b74d:	66 0f 55 e0          	andnpd xmm4,xmm0
1016b751:	f2 0f 5c cf          	subsd  xmm1,xmm7
1016b755:	f2 0f 10 f7          	movsd  xmm6,xmm7
1016b759:	f2 0f 59 ff          	mulsd  xmm7,xmm7
1016b75d:	f2 0f 58 c6          	addsd  xmm0,xmm6
1016b761:	66 0f 56 ec          	orpd   xmm5,xmm4
1016b765:	f2 0f 5c df          	subsd  xmm3,xmm7
1016b769:	f2 0f 59 c1          	mulsd  xmm0,xmm1
1016b76d:	f2 0f 10 e3          	movsd  xmm4,xmm3
1016b771:	f2 0f 5c d8          	subsd  xmm3,xmm0
1016b775:	f2 0f 51 db          	sqrtsd xmm3,xmm3
1016b779:	25 80 00 00 00       	and    eax,0x80
1016b77e:	c1 e8 07             	shr    eax,0x7
1016b781:	f7 d8                	neg    eax
1016b783:	f2 0f 10 fb          	movsd  xmm7,xmm3
1016b787:	66 0f 54 d3          	andpd  xmm2,xmm3
1016b78b:	66 0f 73 f3 02       	psllq  xmm3,0x2
1016b790:	66 0f c5 d3 03       	pextrw edx,xmm3,0x3
1016b795:	66 0f 56 d5          	orpd   xmm2,xmm5
1016b799:	66 0f 6e d8          	movd   xmm3,eax
1016b79d:	66 0f 70 db 00       	pshufd xmm3,xmm3,0x0
1016b7a2:	81 ea c0 fe 00 00    	sub    edx,0xfec0
1016b7a8:	03 d2                	add    edx,edx
1016b7aa:	f2 0f 59 3c 95 00 04 	mulsd  xmm7,QWORD PTR [edx*4+0x101f0400]
1016b7b1:	1f 10 
1016b7b3:	f2 0f 59 f2          	mulsd  xmm6,xmm2
1016b7b7:	f2 0f 59 ca          	mulsd  xmm1,xmm2
1016b7bb:	f2 0f 59 d2          	mulsd  xmm2,xmm2
1016b7bf:	f2 0f 5c f7          	subsd  xmm6,xmm7
1016b7c3:	66 0f 54 1d 60 db 1e 	andpd  xmm3,XMMWORD PTR ds:0x101edb60
1016b7ca:	10 
1016b7cb:	f2 0f 58 f1          	addsd  xmm6,xmm1
1016b7cf:	f2 0f 5c e2          	subsd  xmm4,xmm2
1016b7d3:	f2 0f 58 ff          	addsd  xmm7,xmm7
1016b7d7:	66 0f 12 2d b8 db 1e 	movlpd xmm5,QWORD PTR ds:0x101edbb8
1016b7de:	10 
1016b7df:	f2 0f 5c e0          	subsd  xmm4,xmm0
1016b7e3:	f2 0f 58 fe          	addsd  xmm7,xmm6
1016b7e7:	66 0f 12 05 c8 db 1e 	movlpd xmm0,QWORD PTR ds:0x101edbc8
1016b7ee:	10 
1016b7ef:	f2 0f 5e e7          	divsd  xmm4,xmm7
1016b7f3:	66 0f 12 15 c0 db 1e 	movlpd xmm2,QWORD PTR ds:0x101edbc0
1016b7fa:	10 
1016b7fb:	66 0f 58 1c d5 00 f5 	addpd  xmm3,XMMWORD PTR [edx*8+0x101ef500]
1016b802:	1e 10 
1016b804:	f2 0f 10 ce          	movsd  xmm1,xmm6
1016b808:	f2 0f 59 f6          	mulsd  xmm6,xmm6
1016b80c:	f2 0f 59 c6          	mulsd  xmm0,xmm6
1016b810:	f2 0f 59 ce          	mulsd  xmm1,xmm6
1016b814:	f2 0f 59 e9          	mulsd  xmm5,xmm1
1016b818:	f2 0f 59 ce          	mulsd  xmm1,xmm6
1016b81c:	f2 0f 58 c2          	addsd  xmm0,xmm2
1016b820:	66 0f ef f6          	pxor   xmm6,xmm6
1016b824:	f2 0f 59 c1          	mulsd  xmm0,xmm1
1016b828:	f2 0f 58 eb          	addsd  xmm5,xmm3
1016b82c:	f2 0f 58 c5          	addsd  xmm0,xmm5
1016b830:	25 00 80 00 00       	and    eax,0x8000
1016b835:	66 0f c4 f0 03       	pinsrw xmm6,eax,0x3
1016b83a:	f2 0f 10 ec          	movsd  xmm5,xmm4
1016b83e:	66 0f 70 db ee       	pshufd xmm3,xmm3,0xee
1016b843:	f2 0f 58 e3          	addsd  xmm4,xmm3
1016b847:	f2 0f 5c dc          	subsd  xmm3,xmm4
1016b84b:	f2 0f 58 eb          	addsd  xmm5,xmm3
1016b84f:	f2 0f 58 c5          	addsd  xmm0,xmm5
1016b853:	f2 0f 58 c4          	addsd  xmm0,xmm4
1016b857:	66 0f 57 c6          	xorpd  xmm0,xmm6
1016b85b:	83 c4 08             	add    esp,0x8
1016b85e:	c3                   	ret
1016b85f:	05 bb 3b 00 00       	add    eax,0x3bbb
1016b864:	3d 00 38 00 00       	cmp    eax,0x3800
1016b869:	0f 83 83 00 00 00    	jae    0x1016b8f2
1016b86f:	66 0f 14 c0          	unpcklpd xmm0,xmm0
1016b873:	66 0f 28 35 d0 db 1e 	movapd xmm6,XMMWORD PTR ds:0x101edbd0
1016b87a:	10 
1016b87b:	66 0f 14 c8          	unpcklpd xmm1,xmm0
1016b87f:	66 0f 28 15 e0 db 1e 	movapd xmm2,XMMWORD PTR ds:0x101edbe0
1016b886:	10 
1016b887:	66 0f 28 25 f0 db 1e 	movapd xmm4,XMMWORD PTR ds:0x101edbf0
1016b88e:	10 
1016b88f:	66 0f 59 c0          	mulpd  xmm0,xmm0
1016b893:	66 0f 28 2d 50 db 1e 	movapd xmm5,XMMWORD PTR ds:0x101edb50
1016b89a:	10 
1016b89b:	66 0f 59 c8          	mulpd  xmm1,xmm0
1016b89f:	66 0f 59 f0          	mulpd  xmm6,xmm0
1016b8a3:	66 0f 59 c0          	mulpd  xmm0,xmm0
1016b8a7:	f2 0f 10 d9          	movsd  xmm3,xmm1
1016b8ab:	f2 0f 59 c9          	mulsd  xmm1,xmm1
1016b8af:	66 0f 58 f2          	addpd  xmm6,xmm2
1016b8b3:	66 0f 59 e0          	mulpd  xmm4,xmm0
1016b8b7:	f2 0f 59 cb          	mulsd  xmm1,xmm3
1016b8bb:	66 0f 58 f4          	addpd  xmm6,xmm4
1016b8bf:	66 0f 70 c5 ee       	pshufd xmm0,xmm5,0xee
1016b8c4:	66 0f 59 ce          	mulpd  xmm1,xmm6
1016b8c8:	66 0f 70 f5 ee       	pshufd xmm6,xmm5,0xee
1016b8cd:	f2 0f 5c c7          	subsd  xmm0,xmm7
1016b8d1:	66 0f 70 d1 ee       	pshufd xmm2,xmm1,0xee
1016b8d6:	f2 0f 5c e9          	subsd  xmm5,xmm1
1016b8da:	f2 0f 5c f0          	subsd  xmm6,xmm0
1016b8de:	f2 0f 5c ea          	subsd  xmm5,xmm2
1016b8e2:	f2 0f 5c fe          	subsd  xmm7,xmm6
1016b8e6:	f2 0f 5c ef          	subsd  xmm5,xmm7
1016b8ea:	f2 0f 58 c5          	addsd  xmm0,xmm5
1016b8ee:	83 c4 08             	add    esp,0x8
1016b8f1:	c3                   	ret
1016b8f2:	2d fc 3b 00 00       	sub    eax,0x3bfc
1016b8f7:	83 f8 04             	cmp    eax,0x4
1016b8fa:	0f 83 e7 00 00 00    	jae    0x1016b9e7
1016b900:	66 0f 57 f6          	xorpd  xmm6,xmm6
1016b904:	66 0f 54 3d 10 dc 1e 	andpd  xmm7,XMMWORD PTR ds:0x101edc10
1016b90b:	10 
1016b90c:	66 0f 12 25 28 dc 1e 	movlpd xmm4,QWORD PTR ds:0x101edc28
1016b913:	10 
1016b914:	66 0f 28 0d d0 db 1e 	movapd xmm1,XMMWORD PTR ds:0x101edbd0
1016b91b:	10 
1016b91c:	f2 0f 59 fc          	mulsd  xmm7,xmm4
1016b920:	66 0f 28 15 e0 db 1e 	movapd xmm2,XMMWORD PTR ds:0x101edbe0
1016b927:	10 
1016b928:	f2 0f 5c e7          	subsd  xmm4,xmm7
1016b92c:	66 0f 28 1d f0 db 1e 	movapd xmm3,XMMWORD PTR ds:0x101edbf0
1016b933:	10 
1016b934:	66 0f 70 fc 44       	pshufd xmm7,xmm4,0x44
1016b939:	f2 0f 51 e4          	sqrtsd xmm4,xmm4
1016b93d:	66 0f 59 cf          	mulpd  xmm1,xmm7
1016b941:	66 0f 70 ef 44       	pshufd xmm5,xmm7,0x44
1016b946:	66 0f c5 c0 03       	pextrw eax,xmm0,0x3
1016b94b:	66 0f 59 ff          	mulpd  xmm7,xmm7
1016b94f:	66 0f 58 d1          	addpd  xmm2,xmm1
1016b953:	66 0f 12 0d 90 db 1e 	movlpd xmm1,QWORD PTR ds:0x101edb90
1016b95a:	10 
1016b95b:	66 0f 59 df          	mulpd  xmm3,xmm7
1016b95f:	f2 0f c2 c6 01       	cmpltsd xmm0,xmm6
1016b964:	f2 0f 59 fd          	mulsd  xmm7,xmm5
1016b968:	66 0f 58 d3          	addpd  xmm2,xmm3
1016b96c:	66 0f 70 c0 44       	pshufd xmm0,xmm0,0x44
1016b971:	f2 0f 59 d7          	mulsd  xmm2,xmm7
1016b975:	66 0f 54 05 60 db 1e 	andpd  xmm0,XMMWORD PTR ds:0x101edb60
1016b97c:	10 
1016b97d:	66 0f 59 d5          	mulpd  xmm2,xmm5
1016b981:	66 0f 54 cc          	andpd  xmm1,xmm4
1016b985:	66 0f 70 dc 44       	pshufd xmm3,xmm4,0x44
1016b98a:	f2 0f 5c e1          	subsd  xmm4,xmm1
1016b98e:	f2 0f 58 db          	addsd  xmm3,xmm3
1016b992:	f2 0f 59 c9          	mulsd  xmm1,xmm1
1016b996:	f2 0f 5c dc          	subsd  xmm3,xmm4
1016b99a:	f2 0f 5c e9          	subsd  xmm5,xmm1
1016b99e:	f2 0f 59 e3          	mulsd  xmm4,xmm3
1016b9a2:	66 0f 70 db ee       	pshufd xmm3,xmm3,0xee
1016b9a7:	f2 0f 5c ec          	subsd  xmm5,xmm4
1016b9ab:	f2 0f 5e eb          	divsd  xmm5,xmm3
1016b9af:	66 0f 58 db          	addpd  xmm3,xmm3
1016b9b3:	66 0f 59 d3          	mulpd  xmm2,xmm3
1016b9b7:	66 0f 70 e2 ee       	pshufd xmm4,xmm2,0xee
1016b9bc:	f2 0f 58 d0          	addsd  xmm2,xmm0
1016b9c0:	25 00 80 00 00       	and    eax,0x8000
1016b9c5:	66 0f c4 f0 03       	pinsrw xmm6,eax,0x3
1016b9ca:	66 0f 70 c0 ee       	pshufd xmm0,xmm0,0xee
1016b9cf:	f2 0f 58 d4          	addsd  xmm2,xmm4
1016b9d3:	f2 0f 58 d5          	addsd  xmm2,xmm5
1016b9d7:	f2 0f 58 d3          	addsd  xmm2,xmm3
1016b9db:	f2 0f 58 c2          	addsd  xmm0,xmm2
1016b9df:	66 0f 57 c6          	xorpd  xmm0,xmm6
1016b9e3:	83 c4 08             	add    esp,0x8
1016b9e6:	c3                   	ret
1016b9e7:	05 fc fe 03 00       	add    eax,0x3fefc
1016b9ec:	3d 00 ff 03 00       	cmp    eax,0x3ff00
1016b9f1:	0f 82 c8 00 00 00    	jb     0x1016babf
1016b9f7:	66 0f 7e f9          	movd   ecx,xmm7
1016b9fb:	66 0f 73 d7 20       	psrlq  xmm7,0x20
1016ba00:	66 0f 7e fa          	movd   edx,xmm7
1016ba04:	81 e2 ff ff ff 7f    	and    edx,0x7fffffff
1016ba0a:	b8 00 00 f0 3f       	mov    eax,0x3ff00000
1016ba0f:	2b c2                	sub    eax,edx
1016ba11:	0b c1                	or     eax,ecx
1016ba13:	83 f8 00             	cmp    eax,0x0
1016ba16:	74 74                	je     0x1016ba8c
1016ba18:	66 0f 12 14 24       	movlpd xmm2,QWORD PTR [esp]
1016ba1d:	66 0f 7e d2          	movd   edx,xmm2
1016ba21:	66 0f 73 d2 20       	psrlq  xmm2,0x20
1016ba26:	66 0f 7e d1          	movd   ecx,xmm2
1016ba2a:	81 e1 ff ff ff 7f    	and    ecx,0x7fffffff
1016ba30:	83 ea 01             	sub    edx,0x1
1016ba33:	81 d9 00 00 f0 7f    	sbb    ecx,0x7ff00000
1016ba39:	83 f9 00             	cmp    ecx,0x0
1016ba3c:	0f 8d 95 00 00 00    	jge    0x1016bad7
1016ba42:	66 0f 57 c9          	xorpd  xmm1,xmm1
1016ba46:	66 0f 57 c0          	xorpd  xmm0,xmm0
1016ba4a:	ba f0 7f 00 00       	mov    edx,0x7ff0
1016ba4f:	66 0f c4 ca 03       	pinsrw xmm1,edx,0x3
1016ba54:	f2 0f 59 c1          	mulsd  xmm0,xmm1
1016ba58:	ba 3a 00 00 00       	mov    edx,0x3a
1016ba5d:	83 ec 18             	sub    esp,0x18
1016ba60:	66 0f 13 44 24 10    	movlpd QWORD PTR [esp+0x10],xmm0
1016ba66:	89 54 24 0c          	mov    DWORD PTR [esp+0xc],edx
1016ba6a:	8b d4                	mov    edx,esp
1016ba6c:	83 c2 10             	add    edx,0x10
1016ba6f:	89 54 24 08          	mov    DWORD PTR [esp+0x8],edx
1016ba73:	83 c2 08             	add    edx,0x8
1016ba76:	89 54 24 04          	mov    DWORD PTR [esp+0x4],edx
1016ba7a:	89 14 24             	mov    DWORD PTR [esp],edx
1016ba7d:	e8 05 6b 01 00       	call   0x10182587
1016ba82:	66 0f 12 44 24 10    	movlpd xmm0,QWORD PTR [esp+0x10]
1016ba88:	83 c4 20             	add    esp,0x20
1016ba8b:	c3                   	ret
1016ba8c:	66 0f c5 d7 01       	pextrw edx,xmm7,0x1
1016ba91:	c1 ea 0f             	shr    edx,0xf
1016ba94:	f7 da                	neg    edx
1016ba96:	66 0f 6e fa          	movd   xmm7,edx
1016ba9a:	66 0f 70 ff 00       	pshufd xmm7,xmm7,0x0
1016ba9f:	66 0f 12 15 70 db 1e 	movlpd xmm2,QWORD PTR ds:0x101edb70
1016baa6:	10 
1016baa7:	66 0f 12 05 78 db 1e 	movlpd xmm0,QWORD PTR ds:0x101edb78
1016baae:	10 
1016baaf:	66 0f 54 d7          	andpd  xmm2,xmm7
1016bab3:	66 0f 54 c7          	andpd  xmm0,xmm7
1016bab7:	f2 0f 58 c2          	addsd  xmm0,xmm2
1016babb:	83 c4 08             	add    esp,0x8
1016babe:	c3                   	ret
1016babf:	66 0f 12 15 50 db 1e 	movlpd xmm2,QWORD PTR ds:0x101edb50
1016bac6:	10 
1016bac7:	66 0f 12 05 58 db 1e 	movlpd xmm0,QWORD PTR ds:0x101edb58
1016bace:	10 
1016bacf:	f2 0f 58 c2          	addsd  xmm0,xmm2
1016bad3:	83 c4 08             	add    esp,0x8
1016bad6:	c3                   	ret
1016bad7:	66 0f 57 f6          	xorpd  xmm6,xmm6
1016badb:	f2 0f 58 c6          	addsd  xmm0,xmm6
1016badf:	ba f0 03 00 00       	mov    edx,0x3f0
1016bae4:	e9 74 ff ff ff       	jmp    0x1016ba5d
1016bae9:	66 0f d6 04 24       	movq   QWORD PTR [esp],xmm0
1016baee:	e8 0c 6d 01 00       	call   0x101827ff
1016baf3:	dd 1c 24             	fstp   QWORD PTR [esp]
1016baf6:	f3 0f 7e 04 24       	movq   xmm0,QWORD PTR [esp]
1016bafb:	83 c4 08             	add    esp,0x8
1016bafe:	c3                   	ret
