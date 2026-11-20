
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ab8b0 <.text+0xaa8b0>:
100ab8b0:	55                   	push   ebp
100ab8b1:	8b ec                	mov    ebp,esp
100ab8b3:	83 e4 f8             	and    esp,0xfffffff8
100ab8b6:	83 ec 24             	sub    esp,0x24
100ab8b9:	53                   	push   ebx
100ab8ba:	56                   	push   esi
100ab8bb:	8b f1                	mov    esi,ecx
100ab8bd:	57                   	push   edi
100ab8be:	8b 5e 04             	mov    ebx,DWORD PTR [esi+0x4]
100ab8c1:	83 bb 08 01 00 00 05 	cmp    DWORD PTR [ebx+0x108],0x5
100ab8c8:	0f 85 9a 03 00 00    	jne    0x100abc68
100ab8ce:	8b 3d 88 31 22 10    	mov    edi,DWORD PTR ds:0x10223188
100ab8d4:	f3 0f 10 07          	movss  xmm0,DWORD PTR [edi]
100ab8d8:	f3 0f 5c 86 78 03 00 	subss  xmm0,DWORD PTR [esi+0x378]
100ab8df:	00 
100ab8e0:	0f 2f 05 90 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1390
100ab8e7:	76 2e                	jbe    0x100ab917
100ab8e9:	8b 86 d0 02 00 00    	mov    eax,DWORD PTR [esi+0x2d0]
100ab8ef:	39 86 18 02 00 00    	cmp    DWORD PTR [esi+0x218],eax
100ab8f5:	74 20                	je     0x100ab917
100ab8f7:	89 86 18 02 00 00    	mov    DWORD PTR [esi+0x218],eax
100ab8fd:	c7 86 74 03 00 00 00 	mov    DWORD PTR [esi+0x374],0x43480000
100ab904:	00 48 43 
100ab907:	c7 86 f0 00 00 00 00 	mov    DWORD PTR [esi+0xf0],0x43480000
100ab90e:	00 48 43 
100ab911:	8b 3d 88 31 22 10    	mov    edi,DWORD PTR ds:0x10223188
100ab917:	f3 0f 10 86 7c 03 00 	movss  xmm0,DWORD PTR [esi+0x37c]
100ab91e:	00 
100ab91f:	f3 0f 10 96 68 03 00 	movss  xmm2,DWORD PTR [esi+0x368]
100ab926:	00 
100ab927:	f3 0f 10 9e 6c 03 00 	movss  xmm3,DWORD PTR [esi+0x36c]
100ab92e:	00 
100ab92f:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
100ab932:	f3 0f 10 a6 70 03 00 	movss  xmm4,DWORD PTR [esi+0x370]
100ab939:	00 
100ab93a:	f3 0f 59 d8          	mulss  xmm3,xmm0
100ab93e:	f3 0f 59 d0          	mulss  xmm2,xmm0
100ab942:	f3 0f 58 58 04       	addss  xmm3,DWORD PTR [eax+0x4]
100ab947:	f3 0f 59 e0          	mulss  xmm4,xmm0
100ab94b:	f3 0f 58 10          	addss  xmm2,DWORD PTR [eax]
100ab94f:	f3 0f 58 60 08       	addss  xmm4,DWORD PTR [eax+0x8]
100ab954:	0f 28 cb             	movaps xmm1,xmm3
100ab957:	f3 0f 11 5c 24 10    	movss  DWORD PTR [esp+0x10],xmm3
100ab95d:	f3 0f 59 cb          	mulss  xmm1,xmm3
100ab961:	0f 28 c2             	movaps xmm0,xmm2
100ab964:	f3 0f 11 54 24 0c    	movss  DWORD PTR [esp+0xc],xmm2
100ab96a:	f3 0f 59 c2          	mulss  xmm0,xmm2
100ab96e:	f3 0f 11 64 24 14    	movss  DWORD PTR [esp+0x14],xmm4
100ab974:	f3 0f 58 c8          	addss  xmm1,xmm0
100ab978:	0f 28 c4             	movaps xmm0,xmm4
100ab97b:	f3 0f 59 c4          	mulss  xmm0,xmm4
100ab97f:	f3 0f 58 c8          	addss  xmm1,xmm0
100ab983:	0f 5a c1             	cvtps2pd xmm0,xmm1
100ab986:	0f 57 c9             	xorps  xmm1,xmm1
100ab989:	66 0f 2e c8          	ucomisd xmm1,xmm0
100ab98d:	77 06                	ja     0x100ab995
100ab98f:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100ab993:	eb 05                	jmp    0x100ab99a
100ab995:	e8 f6 04 0c 00       	call   0x1016be90
100ab99a:	0f 57 c9             	xorps  xmm1,xmm1
100ab99d:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
100ab9a1:	0f 57 c0             	xorps  xmm0,xmm0
100ab9a4:	0f 2e c8             	ucomiss xmm1,xmm0
100ab9a7:	9f                   	lahf
100ab9a8:	f6 c4 44             	test   ah,0x44
100ab9ab:	7a 10                	jp     0x100ab9bd
100ab9ad:	f3 0f 10 1d 90 13 1a 	movss  xmm3,DWORD PTR ds:0x101a1390
100ab9b4:	10 
100ab9b5:	0f 57 c9             	xorps  xmm1,xmm1
100ab9b8:	0f 57 d2             	xorps  xmm2,xmm2
100ab9bb:	eb 2a                	jmp    0x100ab9e7
100ab9bd:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
100ab9c4:	10 
100ab9c5:	f3 0f 5e c1          	divss  xmm0,xmm1
100ab9c9:	f3 0f 10 4c 24 0c    	movss  xmm1,DWORD PTR [esp+0xc]
100ab9cf:	f3 0f 10 54 24 10    	movss  xmm2,DWORD PTR [esp+0x10]
100ab9d5:	f3 0f 10 5c 24 14    	movss  xmm3,DWORD PTR [esp+0x14]
100ab9db:	f3 0f 59 c8          	mulss  xmm1,xmm0
100ab9df:	f3 0f 59 d0          	mulss  xmm2,xmm0
100ab9e3:	f3 0f 59 d8          	mulss  xmm3,xmm0
100ab9e7:	f3 0f 10 86 f0 00 00 	movss  xmm0,DWORD PTR [esi+0xf0]
100ab9ee:	00 
100ab9ef:	83 ec 0c             	sub    esp,0xc
100ab9f2:	f3 0f 59 45 10       	mulss  xmm0,DWORD PTR [ebp+0x10]
100ab9f7:	8b 86 18 02 00 00    	mov    eax,DWORD PTR [esi+0x218]
100ab9fd:	f3 0f 59 d0          	mulss  xmm2,xmm0
100aba01:	f3 0f 59 d8          	mulss  xmm3,xmm0
100aba05:	f3 0f 58 53 0c       	addss  xmm2,DWORD PTR [ebx+0xc]
100aba0a:	f3 0f 59 c8          	mulss  xmm1,xmm0
100aba0e:	f3 0f 58 5b 10       	addss  xmm3,DWORD PTR [ebx+0x10]
100aba13:	f3 0f 58 4b 08       	addss  xmm1,DWORD PTR [ebx+0x8]
100aba18:	f3 0f 11 54 24 34    	movss  DWORD PTR [esp+0x34],xmm2
100aba1e:	f3 0f 11 5c 24 38    	movss  DWORD PTR [esp+0x38],xmm3
100aba24:	f3 0f 11 4c 24 30    	movss  DWORD PTR [esp+0x30],xmm1
100aba2a:	f3 0f 10 47 04       	movss  xmm0,DWORD PTR [edi+0x4]
100aba2f:	3b 86 d0 02 00 00    	cmp    eax,DWORD PTR [esi+0x2d0]
100aba35:	74 59                	je     0x100aba90
100aba37:	f3 0f 59 05 38 ac 1c 	mulss  xmm0,DWORD PTR ds:0x101cac38
100aba3e:	10 
100aba3f:	f3 0f 11 44 24 08    	movss  DWORD PTR [esp+0x8],xmm0
100aba45:	f3 0f 10 86 74 03 00 	movss  xmm0,DWORD PTR [esi+0x374]
100aba4c:	00 
100aba4d:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100aba53:	c7 04 24 00 00 c8 42 	mov    DWORD PTR [esp],0x42c80000
100aba5a:	e8 41 ba 06 00       	call   0x101174a0
100aba5f:	f3 0f 10 0d 1c 1f 1a 	movss  xmm1,DWORD PTR ds:0x101a1f1c
100aba66:	10 
100aba67:	83 c4 0c             	add    esp,0xc
100aba6a:	d9 5c 24 14          	fstp   DWORD PTR [esp+0x14]
100aba6e:	f3 0f 10 44 24 14    	movss  xmm0,DWORD PTR [esp+0x14]
100aba74:	0f 2f c8             	comiss xmm1,xmm0
100aba77:	f3 0f 11 86 74 03 00 	movss  DWORD PTR [esi+0x374],xmm0
100aba7e:	00 
100aba7f:	76 40                	jbe    0x100abac1
100aba81:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100aba86:	8b 00                	mov    eax,DWORD PTR [eax]
100aba88:	89 86 78 03 00 00    	mov    DWORD PTR [esi+0x378],eax
100aba8e:	eb 31                	jmp    0x100abac1
100aba90:	f3 0f 59 05 30 97 1a 	mulss  xmm0,DWORD PTR ds:0x101a9730
100aba97:	10 
100aba98:	f3 0f 11 44 24 08    	movss  DWORD PTR [esp+0x8],xmm0
100aba9e:	f3 0f 10 86 74 03 00 	movss  xmm0,DWORD PTR [esi+0x374]
100abaa5:	00 
100abaa6:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100abaac:	c7 04 24 00 00 a0 41 	mov    DWORD PTR [esp],0x41a00000
100abab3:	e8 e8 b9 06 00       	call   0x101174a0
100abab8:	d9 9e 74 03 00 00    	fstp   DWORD PTR [esi+0x374]
100ababe:	83 c4 0c             	add    esp,0xc
100abac1:	8b 16                	mov    edx,DWORD PTR [esi]
100abac3:	8d 44 24 24          	lea    eax,[esp+0x24]
100abac7:	6a 00                	push   0x0
100abac9:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100abacc:	8b ce                	mov    ecx,esi
100abace:	50                   	push   eax
100abacf:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100abad2:	83 c0 08             	add    eax,0x8
100abad5:	50                   	push   eax
100abad6:	ff 92 58 01 00 00    	call   DWORD PTR [edx+0x158]
100abadc:	85 c0                	test   eax,eax
100abade:	0f 84 43 01 00 00    	je     0x100abc27
100abae4:	8b 7e 04             	mov    edi,DWORD PTR [esi+0x4]
100abae7:	f3 0f 10 54 24 24    	movss  xmm2,DWORD PTR [esp+0x24]
100abaed:	f3 0f 10 4c 24 28    	movss  xmm1,DWORD PTR [esp+0x28]
100abaf3:	f3 0f 10 44 24 2c    	movss  xmm0,DWORD PTR [esp+0x2c]
100abaf9:	f3 0f 5c 4f 0c       	subss  xmm1,DWORD PTR [edi+0xc]
100abafe:	f3 0f 5c 47 10       	subss  xmm0,DWORD PTR [edi+0x10]
100abb03:	f3 0f 5c 57 08       	subss  xmm2,DWORD PTR [edi+0x8]
100abb08:	f3 0f 11 44 24 20    	movss  DWORD PTR [esp+0x20],xmm0
100abb0e:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
100abb12:	0f 14 d1             	unpcklps xmm2,xmm1
100abb15:	66 0f d6 96 68 03 00 	movq   QWORD PTR [esi+0x368],xmm2
100abb1c:	00 
100abb1d:	89 86 70 03 00 00    	mov    DWORD PTR [esi+0x370],eax
100abb23:	f3 0f 10 86 68 03 00 	movss  xmm0,DWORD PTR [esi+0x368]
100abb2a:	00 
100abb2b:	f3 0f 10 96 6c 03 00 	movss  xmm2,DWORD PTR [esi+0x36c]
100abb32:	00 
100abb33:	0f 28 c8             	movaps xmm1,xmm0
100abb36:	f3 0f 10 9e 70 03 00 	movss  xmm3,DWORD PTR [esi+0x370]
100abb3d:	00 
100abb3e:	f3 0f 59 c8          	mulss  xmm1,xmm0
100abb42:	0f 28 c2             	movaps xmm0,xmm2
100abb45:	f3 0f 59 c2          	mulss  xmm0,xmm2
100abb49:	f3 0f 58 c8          	addss  xmm1,xmm0
100abb4d:	0f 28 c3             	movaps xmm0,xmm3
100abb50:	f3 0f 59 c3          	mulss  xmm0,xmm3
100abb54:	f3 0f 58 c8          	addss  xmm1,xmm0
100abb58:	0f 5a c1             	cvtps2pd xmm0,xmm1
100abb5b:	0f 57 c9             	xorps  xmm1,xmm1
100abb5e:	66 0f 2e c8          	ucomisd xmm1,xmm0
100abb62:	77 06                	ja     0x100abb6a
100abb64:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100abb68:	eb 05                	jmp    0x100abb6f
100abb6a:	e8 21 03 0c 00       	call   0x1016be90
100abb6f:	0f 57 c9             	xorps  xmm1,xmm1
100abb72:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
100abb76:	0f 57 c0             	xorps  xmm0,xmm0
100abb79:	0f 2e c8             	ucomiss xmm1,xmm0
100abb7c:	9f                   	lahf
100abb7d:	f6 c4 44             	test   ah,0x44
100abb80:	7a 1a                	jp     0x100abb9c
100abb82:	c7 44 24 18 00 00 00 	mov    DWORD PTR [esp+0x18],0x0
100abb89:	00 
100abb8a:	c7 44 24 1c 00 00 00 	mov    DWORD PTR [esp+0x1c],0x0
100abb91:	00 
100abb92:	c7 44 24 20 00 00 80 	mov    DWORD PTR [esp+0x20],0x3f800000
100abb99:	3f 
100abb9a:	eb 42                	jmp    0x100abbde
100abb9c:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
100abba3:	10 
100abba4:	f3 0f 5e c1          	divss  xmm0,xmm1
100abba8:	f3 0f 10 8e 68 03 00 	movss  xmm1,DWORD PTR [esi+0x368]
100abbaf:	00 
100abbb0:	f3 0f 59 c8          	mulss  xmm1,xmm0
100abbb4:	f3 0f 11 4c 24 18    	movss  DWORD PTR [esp+0x18],xmm1
100abbba:	f3 0f 10 8e 6c 03 00 	movss  xmm1,DWORD PTR [esi+0x36c]
100abbc1:	00 
100abbc2:	f3 0f 59 c8          	mulss  xmm1,xmm0
100abbc6:	f3 0f 11 4c 24 1c    	movss  DWORD PTR [esp+0x1c],xmm1
100abbcc:	f3 0f 10 8e 70 03 00 	movss  xmm1,DWORD PTR [esi+0x370]
100abbd3:	00 
100abbd4:	f3 0f 59 c8          	mulss  xmm1,xmm0
100abbd8:	f3 0f 11 4c 24 20    	movss  DWORD PTR [esp+0x20],xmm1
100abbde:	f3 0f 7e 44 24 18    	movq   xmm0,QWORD PTR [esp+0x18]
100abbe4:	8b 44 24 20          	mov    eax,DWORD PTR [esp+0x20]
100abbe8:	66 0f d6 86 68 03 00 	movq   QWORD PTR [esi+0x368],xmm0
100abbef:	00 
100abbf0:	f3 0f 10 86 f0 00 00 	movss  xmm0,DWORD PTR [esi+0xf0]
100abbf7:	00 
100abbf8:	f3 0f 59 45 10       	mulss  xmm0,DWORD PTR [ebp+0x10]
100abbfd:	6a 01                	push   0x1
100abbff:	51                   	push   ecx
100abc00:	89 86 70 03 00 00    	mov    DWORD PTR [esi+0x370],eax
100abc06:	8d 44 24 2c          	lea    eax,[esp+0x2c]
100abc0a:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100abc0f:	50                   	push   eax
100abc10:	ff b7 0c 02 00 00    	push   DWORD PTR [edi+0x20c]
100abc16:	e8 05 d8 06 00       	call   0x10119420
100abc1b:	83 c4 10             	add    esp,0x10
100abc1e:	5f                   	pop    edi
100abc1f:	5e                   	pop    esi
100abc20:	5b                   	pop    ebx
100abc21:	8b e5                	mov    esp,ebp
100abc23:	5d                   	pop    ebp
100abc24:	c2 0c 00             	ret    0xc
100abc27:	8b 06                	mov    eax,DWORD PTR [esi]
100abc29:	8b ce                	mov    ecx,esi
100abc2b:	ff 90 68 01 00 00    	call   DWORD PTR [eax+0x168]
100abc31:	89 86 18 02 00 00    	mov    DWORD PTR [esi+0x218],eax
100abc37:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100abc3c:	8b 00                	mov    eax,DWORD PTR [eax]
100abc3e:	89 86 78 03 00 00    	mov    DWORD PTR [esi+0x378],eax
100abc44:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
100abc4b:	10 
100abc4c:	66 0f d6 86 68 03 00 	movq   QWORD PTR [esi+0x368],xmm0
100abc53:	00 
100abc54:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
100abc59:	89 86 70 03 00 00    	mov    DWORD PTR [esi+0x370],eax
100abc5f:	5f                   	pop    edi
100abc60:	5e                   	pop    esi
100abc61:	5b                   	pop    ebx
100abc62:	8b e5                	mov    esp,ebp
100abc64:	5d                   	pop    ebp
100abc65:	c2 0c 00             	ret    0xc
100abc68:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100abc6d:	51                   	push   ecx
100abc6e:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100abc73:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100abc76:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100abc79:	e8 f2 51 01 00       	call   0x100c0e70
100abc7e:	5f                   	pop    edi
100abc7f:	5e                   	pop    esi
100abc80:	5b                   	pop    ebx
100abc81:	8b e5                	mov    esp,ebp
100abc83:	5d                   	pop    ebp
100abc84:	c2 0c 00             	ret    0xc
