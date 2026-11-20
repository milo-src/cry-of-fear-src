
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10103040 <.text+0x102040>:
10103040:	55                   	push   ebp
10103041:	8b ec                	mov    ebp,esp
10103043:	83 ec 08             	sub    esp,0x8
10103046:	53                   	push   ebx
10103047:	56                   	push   esi
10103048:	57                   	push   edi
10103049:	8b f1                	mov    esi,ecx
1010304b:	68 b4 5f 1b 10       	push   0x101b5fb4
10103050:	6a 00                	push   0x0
10103052:	8b be dc 01 00 00    	mov    edi,DWORD PTR [esi+0x1dc]
10103058:	e8 03 54 01 00       	call   0x10118460
1010305d:	8b d8                	mov    ebx,eax
1010305f:	83 c4 08             	add    esp,0x8
10103062:	0f 57 c0             	xorps  xmm0,xmm0
10103065:	85 db                	test   ebx,ebx
10103067:	74 6f                	je     0x101030d8
10103069:	68 30 21 1a 10       	push   0x101a2130
1010306e:	6a 00                	push   0x0
10103070:	e8 eb 53 01 00       	call   0x10118460
10103075:	83 c4 08             	add    esp,0x8
10103078:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
1010307b:	85 c0                	test   eax,eax
1010307d:	74 56                	je     0x101030d5
1010307f:	8b 8e dc 01 00 00    	mov    ecx,DWORD PTR [esi+0x1dc]
10103085:	8b 84 8e dc 00 00 00 	mov    eax,DWORD PTR [esi+ecx*4+0xdc]
1010308c:	89 45 fc             	mov    DWORD PTR [ebp-0x4],eax
1010308f:	85 c0                	test   eax,eax
10103091:	74 32                	je     0x101030c5
10103093:	ff 73 04             	push   DWORD PTR [ebx+0x4]
10103096:	e8 25 cb f5 ff       	call   0x1005fbc0
1010309b:	66 0f 6e 45 fc       	movd   xmm0,DWORD PTR [ebp-0x4]
101030a0:	8b 4d f8             	mov    ecx,DWORD PTR [ebp-0x8]
101030a3:	0f 5b c0             	cvtdq2ps xmm0,xmm0
101030a6:	c7 04 24 00 00 00 00 	mov    DWORD PTR [esp],0x0
101030ad:	6a 03                	push   0x3
101030af:	51                   	push   ecx
101030b0:	51                   	push   ecx
101030b1:	8b cb                	mov    ecx,ebx
101030b3:	f3 0f 11 80 dc 00 00 	movss  DWORD PTR [eax+0xdc],xmm0
101030ba:	00 
101030bb:	8b 03                	mov    eax,DWORD PTR [ebx]
101030bd:	ff 90 e8 00 00 00    	call   DWORD PTR [eax+0xe8]
101030c3:	eb 10                	jmp    0x101030d5
101030c5:	68 c4 5f 1b 10       	push   0x101b5fc4
101030ca:	6a 01                	push   0x1
101030cc:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
101030d2:	83 c4 08             	add    esp,0x8
101030d5:	0f 57 c0             	xorps  xmm0,xmm0
101030d8:	83 ff 20             	cmp    edi,0x20
101030db:	7d 44                	jge    0x10103121
101030dd:	83 bc be e0 00 00 00 	cmp    DWORD PTR [esi+edi*4+0xe0],0x0
101030e4:	00 
101030e5:	74 3a                	je     0x10103121
101030e7:	f3 0f 10 8c be 60 01 	movss  xmm1,DWORD PTR [esi+edi*4+0x160]
101030ee:	00 00 
101030f0:	0f 2e c8             	ucomiss xmm1,xmm0
101030f3:	9f                   	lahf
101030f4:	f6 c4 44             	test   ah,0x44
101030f7:	7b 28                	jnp    0x10103121
101030f9:	a1 88 31 22 10       	mov    eax,ds:0x10223188
101030fe:	51                   	push   ecx
101030ff:	8b ce                	mov    ecx,esi
10103101:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10103105:	f3 0f 5c 86 e0 01 00 	subss  xmm0,DWORD PTR [esi+0x1e0]
1010310c:	00 
1010310d:	8b 06                	mov    eax,DWORD PTR [esi]
1010310f:	ff 86 dc 01 00 00    	inc    DWORD PTR [esi+0x1dc]
10103115:	f3 0f 5c c8          	subss  xmm1,xmm0
10103119:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
1010311e:	ff 50 08             	call   DWORD PTR [eax+0x8]
10103121:	5f                   	pop    edi
10103122:	5e                   	pop    esi
10103123:	5b                   	pop    ebx
10103124:	8b e5                	mov    esp,ebp
10103126:	5d                   	pop    ebp
10103127:	c3                   	ret
