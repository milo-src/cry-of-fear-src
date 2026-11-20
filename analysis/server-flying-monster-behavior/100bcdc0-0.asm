
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bcdc0 <.text+0xbbdc0>:
100bcdc0:	55                   	push   ebp
100bcdc1:	8b ec                	mov    ebp,esp
100bcdc3:	51                   	push   ecx
100bcdc4:	56                   	push   esi
100bcdc5:	8b f1                	mov    esi,ecx
100bcdc7:	51                   	push   ecx
100bcdc8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bcdcb:	f3 0f 10 40 54       	movss  xmm0,DWORD PTR [eax+0x54]
100bcdd0:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100bcdd5:	e8 46 a6 05 00       	call   0x10117420
100bcdda:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bcddd:	83 c4 04             	add    esp,0x4
100bcde0:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
100bcde3:	f3 0f 10 65 fc       	movss  xmm4,DWORD PTR [ebp-0x4]
100bcde8:	f3 0f 10 90 ac 00 00 	movss  xmm2,DWORD PTR [eax+0xac]
100bcdef:	00 
100bcdf0:	0f 2e e2             	ucomiss xmm4,xmm2
100bcdf3:	9f                   	lahf
100bcdf4:	f6 c4 44             	test   ah,0x44
100bcdf7:	0f 8b e2 00 00 00    	jnp    0x100bcedf
100bcdfd:	66 0f 6e 4d 08       	movd   xmm1,DWORD PTR [ebp+0x8]
100bce02:	0f 28 c2             	movaps xmm0,xmm2
100bce05:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100bce0a:	f3 0f 5c c4          	subss  xmm0,xmm4
100bce0e:	0f 5b c9             	cvtdq2ps xmm1,xmm1
100bce11:	0f 2f d4             	comiss xmm2,xmm4
100bce14:	f3 0f 59 48 04       	mulss  xmm1,DWORD PTR [eax+0x4]
100bce19:	f3 0f 10 15 cc 13 1a 	movss  xmm2,DWORD PTR ds:0x101a13cc
100bce20:	10 
100bce21:	f3 0f 59 0d e0 1e 1a 	mulss  xmm1,DWORD PTR ds:0x101a1ee0
100bce28:	10 
100bce29:	76 0f                	jbe    0x100bce3a
100bce2b:	0f 2f 05 c4 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a13c4
100bce32:	72 17                	jb     0x100bce4b
100bce34:	f3 0f 5c c2          	subss  xmm0,xmm2
100bce38:	eb 11                	jmp    0x100bce4b
100bce3a:	f3 0f 10 1d d4 13 1a 	movss  xmm3,DWORD PTR ds:0x101a13d4
100bce41:	10 
100bce42:	0f 2f d8             	comiss xmm3,xmm0
100bce45:	72 04                	jb     0x100bce4b
100bce47:	f3 0f 58 c2          	addss  xmm0,xmm2
100bce4b:	0f 2f 05 70 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1370
100bce52:	76 06                	jbe    0x100bce5a
100bce54:	f3 0f 5d c8          	minss  xmm1,xmm0
100bce58:	eb 0b                	jmp    0x100bce65
100bce5a:	0f 57 0d e0 13 1a 10 	xorps  xmm1,XMMWORD PTR ds:0x101a13e0
100bce61:	f3 0f 5f c8          	maxss  xmm1,xmm0
100bce65:	f3 0f 11 4d 08       	movss  DWORD PTR [ebp+0x8],xmm1
100bce6a:	f3 0f 58 cc          	addss  xmm1,xmm4
100bce6e:	51                   	push   ecx
100bce6f:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
100bce74:	e8 a7 a5 05 00       	call   0x10117420
100bce79:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bce7c:	83 c4 04             	add    esp,0x4
100bce7f:	d9 58 54             	fstp   DWORD PTR [eax+0x54]
100bce82:	f7 86 04 03 00 00 00 	test   DWORD PTR [esi+0x304],0x400
100bce89:	04 00 00 
100bce8c:	74 58                	je     0x100bcee6
100bce8e:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bce91:	f3 0f 10 0d cc 13 1a 	movss  xmm1,DWORD PTR ds:0x101a13cc
100bce98:	10 
100bce99:	f3 0f 10 80 ac 00 00 	movss  xmm0,DWORD PTR [eax+0xac]
100bcea0:	00 
100bcea1:	f3 0f 5c 40 54       	subss  xmm0,DWORD PTR [eax+0x54]
100bcea6:	0f 2f 05 c4 13 1a 10 	comiss xmm0,DWORD PTR ds:0x101a13c4
100bcead:	76 04                	jbe    0x100bceb3
100bceaf:	f3 0f 5c c1          	subss  xmm0,xmm1
100bceb3:	f3 0f 10 15 d4 13 1a 	movss  xmm2,DWORD PTR ds:0x101a13d4
100bceba:	10 
100bcebb:	0f 2f d0             	comiss xmm2,xmm0
100bcebe:	76 04                	jbe    0x100bcec4
100bcec0:	f3 0f 58 c1          	addss  xmm0,xmm1
100bcec4:	51                   	push   ecx
100bcec5:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100bceca:	8b ce                	mov    ecx,esi
100bcecc:	6a 00                	push   0x0
100bcece:	e8 9d 1c f5 ff       	call   0x1000eb70
100bced3:	dd d8                	fstp   st(0)
100bced5:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
100bced8:	5e                   	pop    esi
100bced9:	8b e5                	mov    esp,ebp
100bcedb:	5d                   	pop    ebp
100bcedc:	c2 04 00             	ret    0x4
100bcedf:	c7 45 08 00 00 00 00 	mov    DWORD PTR [ebp+0x8],0x0
100bcee6:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
100bcee9:	5e                   	pop    esi
100bceea:	8b e5                	mov    esp,ebp
100bceec:	5d                   	pop    ebp
100bceed:	c2 04 00             	ret    0x4
