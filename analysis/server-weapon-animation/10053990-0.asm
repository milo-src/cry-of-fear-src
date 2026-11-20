
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10053990 <.text+0x52990>:
10053990:	56                   	push   esi
10053991:	8b f1                	mov    esi,ecx
10053993:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
10053999:	80 b9 e8 1e 00 00 00 	cmp    BYTE PTR [ecx+0x1ee8],0x0
100539a0:	0f 85 bc 00 00 00    	jne    0x10053a62
100539a6:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100539ab:	f3 0f 10 81 e4 1e 00 	movss  xmm0,DWORD PTR [ecx+0x1ee4]
100539b2:	00 
100539b3:	f3 0f 10 08          	movss  xmm1,DWORD PTR [eax]
100539b7:	0f 2f c1             	comiss xmm0,xmm1
100539ba:	0f 87 a2 00 00 00    	ja     0x10053a62
100539c0:	f3 0f 10 86 cc 01 00 	movss  xmm0,DWORD PTR [esi+0x1cc]
100539c7:	00 
100539c8:	0f 2f c1             	comiss xmm0,xmm1
100539cb:	0f 87 91 00 00 00    	ja     0x10053a62
100539d1:	f3 0f 10 86 d0 01 00 	movss  xmm0,DWORD PTR [esi+0x1d0]
100539d8:	00 
100539d9:	0f 2f c1             	comiss xmm0,xmm1
100539dc:	0f 87 80 00 00 00    	ja     0x10053a62
100539e2:	f3 0f 10 86 d4 01 00 	movss  xmm0,DWORD PTR [esi+0x1d4]
100539e9:	00 
100539ea:	0f 2f c1             	comiss xmm0,xmm1
100539ed:	77 73                	ja     0x10053a62
100539ef:	83 be 28 01 00 00 00 	cmp    DWORD PTR [esi+0x128],0x0
100539f6:	75 6a                	jne    0x10053a62
100539f8:	83 b9 98 1e 00 00 00 	cmp    DWORD PTR [ecx+0x1e98],0x0
100539ff:	8b 06                	mov    eax,DWORD PTR [esi]
10053a01:	51                   	push   ecx
10053a02:	8b ce                	mov    ecx,esi
10053a04:	74 12                	je     0x10053a18
10053a06:	c7 04 24 c3 f5 28 3f 	mov    DWORD PTR [esp],0x3f28f5c3
10053a0d:	ff 50 08             	call   DWORD PTR [eax+0x8]
10053a10:	6a 00                	push   0x0
10053a12:	6a 01                	push   0x1
10053a14:	6a 08                	push   0x8
10053a16:	eb 10                	jmp    0x10053a28
10053a18:	c7 04 24 1f 85 6b 3e 	mov    DWORD PTR [esp],0x3e6b851f
10053a1f:	ff 50 08             	call   DWORD PTR [eax+0x8]
10053a22:	6a 00                	push   0x0
10053a24:	6a 01                	push   0x1
10053a26:	6a 04                	push   0x4
10053a28:	8b 06                	mov    eax,DWORD PTR [esi]
10053a2a:	8b ce                	mov    ecx,esi
10053a2c:	c7 46 78 b0 30 05 10 	mov    DWORD PTR [esi+0x78],0x100530b0
10053a33:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
10053a39:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10053a3e:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10053a42:	f3 0f 58 05 90 13 1a 	addss  xmm0,DWORD PTR ds:0x101a1390
10053a49:	10 
10053a4a:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
10053a51:	00 
10053a52:	f3 0f 11 86 d0 01 00 	movss  DWORD PTR [esi+0x1d0],xmm0
10053a59:	00 
10053a5a:	f3 0f 11 86 d8 01 00 	movss  DWORD PTR [esi+0x1d8],xmm0
10053a61:	00 
10053a62:	5e                   	pop    esi
10053a63:	c3                   	ret
