
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008c7e0 <.text+0x8b7e0>:
1008c7e0:	55                   	push   ebp
1008c7e1:	8b ec                	mov    ebp,esp
1008c7e3:	83 ec 50             	sub    esp,0x50
1008c7e6:	57                   	push   edi
1008c7e7:	8b f9                	mov    edi,ecx
1008c7e9:	8b 07                	mov    eax,DWORD PTR [edi]
1008c7eb:	8b 40 70             	mov    eax,DWORD PTR [eax+0x70]
1008c7ee:	ff d0                	call   eax
1008c7f0:	83 f8 ff             	cmp    eax,0xffffffff
1008c7f3:	0f 84 c0 01 00 00    	je     0x1008c9b9
1008c7f9:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
1008c7fe:	0f 2e 0d 70 13 1a 10 	ucomiss xmm1,DWORD PTR ds:0x101a1370
1008c805:	9f                   	lahf
1008c806:	f6 c4 44             	test   ah,0x44
1008c809:	0f 8b aa 01 00 00    	jnp    0x1008c9b9
1008c80f:	f7 45 1c c7 00 80 02 	test   DWORD PTR [ebp+0x1c],0x28000c7
1008c816:	0f 84 9d 01 00 00    	je     0x1008c9b9
1008c81c:	f3 0f 10 05 e0 1e 1a 	movss  xmm0,DWORD PTR ds:0x101a1ee0
1008c823:	10 
1008c824:	0f 2f c1             	comiss xmm0,xmm1
1008c827:	56                   	push   esi
1008c828:	76 0f                	jbe    0x1008c839
1008c82a:	f3 0f 10 0d cc 1d 1a 	movss  xmm1,DWORD PTR ds:0x101a1dcc
1008c831:	10 
1008c832:	be 01 00 00 00       	mov    esi,0x1
1008c837:	eb 29                	jmp    0x1008c862
1008c839:	f3 0f 10 05 30 b1 1b 	movss  xmm0,DWORD PTR ds:0x101bb130
1008c840:	10 
1008c841:	0f 2f c1             	comiss xmm0,xmm1
1008c844:	76 0f                	jbe    0x1008c855
1008c846:	f3 0f 10 0d 70 e0 1a 	movss  xmm1,DWORD PTR ds:0x101ae070
1008c84d:	10 
1008c84e:	be 02 00 00 00       	mov    esi,0x2
1008c853:	eb 0d                	jmp    0x1008c862
1008c855:	f3 0f 10 0d bc 79 1b 	movss  xmm1,DWORD PTR ds:0x101b79bc
1008c85c:	10 
1008c85d:	be 04 00 00 00       	mov    esi,0x4
1008c862:	8b 45 18             	mov    eax,DWORD PTR [ebp+0x18]
1008c865:	0f 28 d1             	movaps xmm2,xmm1
1008c868:	0f 57 15 e0 13 1a 10 	xorps  xmm2,XMMWORD PTR ds:0x101a13e0
1008c86f:	83 c0 14             	add    eax,0x14
1008c872:	f3 0f 10 1d d0 13 1a 	movss  xmm3,DWORD PTR ds:0x101a13d0
1008c879:	10 
1008c87a:	f3 0f 11 4d 08       	movss  DWORD PTR [ebp+0x8],xmm1
1008c87f:	f3 0f 11 55 1c       	movss  DWORD PTR [ebp+0x1c],xmm2
1008c884:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
1008c887:	66 0f 1f 84 00 00 00 	nop    WORD PTR [eax+eax*1+0x0]
1008c88e:	00 00 
1008c890:	f3 0f 10 45 0c       	movss  xmm0,DWORD PTR [ebp+0xc]
1008c895:	83 ec 08             	sub    esp,0x8
1008c898:	f3 0f 59 c3          	mulss  xmm0,xmm3
1008c89c:	f3 0f 11 4c 24 04    	movss  DWORD PTR [esp+0x4],xmm1
1008c8a2:	f3 0f 11 45 18       	movss  DWORD PTR [ebp+0x18],xmm0
1008c8a7:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
1008c8ac:	f3 0f 59 c3          	mulss  xmm0,xmm3
1008c8b0:	f3 0f 11 14 24       	movss  DWORD PTR [esp],xmm2
1008c8b5:	f3 0f 11 45 fc       	movss  DWORD PTR [ebp-0x4],xmm0
1008c8ba:	f3 0f 10 45 14       	movss  xmm0,DWORD PTR [ebp+0x14]
1008c8bf:	f3 0f 59 c3          	mulss  xmm0,xmm3
1008c8c3:	f3 0f 11 45 f8       	movss  DWORD PTR [ebp-0x8],xmm0
1008c8c8:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
1008c8ce:	d8 45 18             	fadd   DWORD PTR [ebp+0x18]
1008c8d1:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1008c8d6:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1008c8dc:	f3 0f 10 45 1c       	movss  xmm0,DWORD PTR [ebp+0x1c]
1008c8e1:	d9 5d 18             	fstp   DWORD PTR [ebp+0x18]
1008c8e4:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008c8e9:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
1008c8ef:	d8 45 fc             	fadd   DWORD PTR [ebp-0x4]
1008c8f2:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
1008c8f7:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1008c8fd:	f3 0f 10 45 1c       	movss  xmm0,DWORD PTR [ebp+0x1c]
1008c902:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
1008c905:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
1008c90a:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
1008c910:	f3 0f 10 0d 68 ef 1b 	movss  xmm1,DWORD PTR ds:0x101bef68
1008c917:	10 
1008c918:	8d 45 b0             	lea    eax,[ebp-0x50]
1008c91b:	f3 0f 10 45 18       	movss  xmm0,DWORD PTR [ebp+0x18]
1008c920:	8b 4d f4             	mov    ecx,DWORD PTR [ebp-0xc]
1008c923:	d8 45 f8             	fadd   DWORD PTR [ebp-0x8]
1008c926:	50                   	push   eax
1008c927:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
1008c92a:	f3 0f 59 c1          	mulss  xmm0,xmm1
1008c92e:	d9 5d f8             	fstp   DWORD PTR [ebp-0x8]
1008c931:	f3 0f 58 01          	addss  xmm0,DWORD PTR [ecx]
1008c935:	f3 0f 11 45 e8       	movss  DWORD PTR [ebp-0x18],xmm0
1008c93a:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
1008c93f:	f3 0f 59 c1          	mulss  xmm0,xmm1
1008c943:	f3 0f 58 41 04       	addss  xmm0,DWORD PTR [ecx+0x4]
1008c948:	f3 0f 11 45 ec       	movss  DWORD PTR [ebp-0x14],xmm0
1008c94d:	f3 0f 10 45 f8       	movss  xmm0,DWORD PTR [ebp-0x8]
1008c952:	f3 0f 59 c1          	mulss  xmm0,xmm1
1008c956:	f3 0f 58 41 08       	addss  xmm0,DWORD PTR [ecx+0x8]
1008c95b:	f3 0f 11 45 f0       	movss  DWORD PTR [ebp-0x10],xmm0
1008c960:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1008c966:	8d 45 e8             	lea    eax,[ebp-0x18]
1008c969:	6a 01                	push   0x1
1008c96b:	50                   	push   eax
1008c96c:	51                   	push   ecx
1008c96d:	e8 8e de 08 00       	call   0x1011a800
1008c972:	f3 0f 10 45 c0       	movss  xmm0,DWORD PTR [ebp-0x40]
1008c977:	83 c4 1c             	add    esp,0x1c
1008c97a:	0f 2e 05 90 13 1a 10 	ucomiss xmm0,DWORD PTR ds:0x101a1390
1008c981:	9f                   	lahf
1008c982:	f6 c4 44             	test   ah,0x44
1008c985:	7b 16                	jnp    0x1008c99d
1008c987:	8b 07                	mov    eax,DWORD PTR [edi]
1008c989:	8b cf                	mov    ecx,edi
1008c98b:	8b 40 70             	mov    eax,DWORD PTR [eax+0x70]
1008c98e:	ff d0                	call   eax
1008c990:	50                   	push   eax
1008c991:	8d 45 b0             	lea    eax,[ebp-0x50]
1008c994:	50                   	push   eax
1008c995:	e8 66 ad 08 00       	call   0x10117700
1008c99a:	83 c4 08             	add    esp,0x8
1008c99d:	f3 0f 10 4d 08       	movss  xmm1,DWORD PTR [ebp+0x8]
1008c9a2:	f3 0f 10 55 1c       	movss  xmm2,DWORD PTR [ebp+0x1c]
1008c9a7:	f3 0f 10 1d d0 13 1a 	movss  xmm3,DWORD PTR ds:0x101a13d0
1008c9ae:	10 
1008c9af:	83 ee 01             	sub    esi,0x1
1008c9b2:	0f 85 d8 fe ff ff    	jne    0x1008c890
1008c9b8:	5e                   	pop    esi
1008c9b9:	5f                   	pop    edi
1008c9ba:	8b e5                	mov    esp,ebp
1008c9bc:	5d                   	pop    ebp
1008c9bd:	c2 18 00             	ret    0x18
