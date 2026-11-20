
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100877a0 <.text+0x867a0>:
100877a0:	55                   	push   ebp
100877a1:	8b ec                	mov    ebp,esp
100877a3:	83 ec 50             	sub    esp,0x50
100877a6:	56                   	push   esi
100877a7:	8b f1                	mov    esi,ecx
100877a9:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
100877ac:	f7 81 a8 01 00 00 00 	test   DWORD PTR [ecx+0x1a8],0x200
100877b3:	02 00 00 
100877b6:	74 65                	je     0x1008781d
100877b8:	f3 0f 10 59 20       	movss  xmm3,DWORD PTR [ecx+0x20]
100877bd:	f3 0f 10 51 24       	movss  xmm2,DWORD PTR [ecx+0x24]
100877c2:	f3 0f 10 41 28       	movss  xmm0,DWORD PTR [ecx+0x28]
100877c7:	f3 0f 10 0d 80 e0 1a 	movss  xmm1,DWORD PTR ds:0x101ae080
100877ce:	10 
100877cf:	f3 0f 59 d9          	mulss  xmm3,xmm1
100877d3:	f3 0f 59 d1          	mulss  xmm2,xmm1
100877d7:	f3 0f 59 c1          	mulss  xmm0,xmm1
100877db:	0f 14 da             	unpcklps xmm3,xmm2
100877de:	66 0f d6 59 20       	movq   QWORD PTR [ecx+0x20],xmm3
100877e3:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
100877e8:	8b 45 fc             	mov    eax,DWORD PTR [ebp-0x4]
100877eb:	89 41 28             	mov    DWORD PTR [ecx+0x28],eax
100877ee:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100877f1:	c7 40 50 00 00 00 00 	mov    DWORD PTR [eax+0x50],0x0
100877f8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100877fb:	c7 40 58 00 00 00 00 	mov    DWORD PTR [eax+0x58],0x0
10087802:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10087805:	c7 40 5c 00 00 00 00 	mov    DWORD PTR [eax+0x5c],0x0
1008780c:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
1008780f:	5e                   	pop    esi
10087810:	c7 40 64 00 00 00 00 	mov    DWORD PTR [eax+0x64],0x0
10087817:	8b e5                	mov    esp,ebp
10087819:	5d                   	pop    ebp
1008781a:	c2 04 00             	ret    0x4
1008781d:	83 3d ec 2e 22 10 01 	cmp    DWORD PTR ds:0x10222eec,0x1
10087824:	0f 84 9b 00 00 00    	je     0x100878c5
1008782a:	83 be e0 00 00 00 00 	cmp    DWORD PTR [esi+0xe0],0x0
10087831:	0f 8e 8e 00 00 00    	jle    0x100878c5
10087837:	83 be dc 00 00 00 ff 	cmp    DWORD PTR [esi+0xdc],0xffffffff
1008783e:	0f 84 81 00 00 00    	je     0x100878c5
10087844:	f3 0f 10 51 08       	movss  xmm2,DWORD PTR [ecx+0x8]
10087849:	8d 45 b0             	lea    eax,[ebp-0x50]
1008784c:	f3 0f 10 41 0c       	movss  xmm0,DWORD PTR [ecx+0xc]
10087851:	0f 57 db             	xorps  xmm3,xmm3
10087854:	f3 0f 10 49 10       	movss  xmm1,DWORD PTR [ecx+0x10]
10087859:	f3 0f 58 d3          	addss  xmm2,xmm3
1008785d:	f3 0f 58 0d d8 1e 1a 	addss  xmm1,DWORD PTR ds:0x101a1ed8
10087864:	10 
10087865:	f3 0f 58 c3          	addss  xmm0,xmm3
10087869:	50                   	push   eax
1008786a:	8d 45 f4             	lea    eax,[ebp-0xc]
1008786d:	f3 0f 11 55 e8       	movss  DWORD PTR [ebp-0x18],xmm2
10087872:	f3 0f 58 d3          	addss  xmm2,xmm3
10087876:	f3 0f 11 4d f0       	movss  DWORD PTR [ebp-0x10],xmm1
1008787b:	f3 0f 5c 0d 50 ef 1b 	subss  xmm1,DWORD PTR ds:0x101bef50
10087882:	10 
10087883:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
10087888:	f3 0f 58 c3          	addss  xmm0,xmm3
1008788c:	f3 0f 11 55 f4       	movss  DWORD PTR [ebp-0xc],xmm2
10087891:	f3 0f 11 4d fc       	movss  DWORD PTR [ebp-0x4],xmm1
10087896:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1008789b:	ff b1 0c 02 00 00    	push   DWORD PTR [ecx+0x20c]
100878a1:	6a 01                	push   0x1
100878a3:	50                   	push   eax
100878a4:	8d 45 e8             	lea    eax,[ebp-0x18]
100878a7:	50                   	push   eax
100878a8:	e8 53 2f 09 00       	call   0x1011a800
100878ad:	ff b6 dc 00 00 00    	push   DWORD PTR [esi+0xdc]
100878b3:	8d 45 b0             	lea    eax,[ebp-0x50]
100878b6:	50                   	push   eax
100878b7:	e8 44 fe 08 00       	call   0x10117700
100878bc:	83 c4 1c             	add    esp,0x1c
100878bf:	ff 8e e0 00 00 00    	dec    DWORD PTR [esi+0xe0]
100878c5:	83 be e4 00 00 00 09 	cmp    DWORD PTR [esi+0xe4],0x9
100878cc:	74 5d                	je     0x1008792b
100878ce:	6a 02                	push   0x2
100878d0:	6a 00                	push   0x0
100878d2:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100878d8:	83 c4 08             	add    esp,0x8
100878db:	85 c0                	test   eax,eax
100878dd:	75 4c                	jne    0x1008792b
100878df:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100878e2:	f2 0f 10 0d 78 1e 1a 	movsd  xmm1,QWORD PTR ds:0x101a1e78
100878e9:	10 
100878ea:	51                   	push   ecx
100878eb:	f3 0f 10 40 28       	movss  xmm0,DWORD PTR [eax+0x28]
100878f0:	0f 54 05 80 1f 1a 10 	andps  xmm0,XMMWORD PTR ds:0x101a1f80
100878f7:	0f 5a c0             	cvtps2pd xmm0,xmm0
100878fa:	f2 0f 5e 05 48 ef 1b 	divsd  xmm0,QWORD PTR ds:0x101bef48
10087901:	10 
10087902:	f2 0f 5d c8          	minsd  xmm1,xmm0
10087906:	f2 0f 59 0d 68 1e 1a 	mulsd  xmm1,QWORD PTR ds:0x101a1e68
1008790d:	10 
1008790e:	66 0f 5a c1          	cvtpd2ps xmm0,xmm1
10087912:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10087917:	ff b6 e4 00 00 00    	push   DWORD PTR [esi+0xe4]
1008791d:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10087923:	e8 c8 57 02 00       	call   0x100ad0f0
10087928:	83 c4 0c             	add    esp,0xc
1008792b:	5e                   	pop    esi
1008792c:	8b e5                	mov    esp,ebp
1008792e:	5d                   	pop    ebp
1008792f:	c2 04 00             	ret    0x4
