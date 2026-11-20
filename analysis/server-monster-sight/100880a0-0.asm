
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100880a0 <.text+0x870a0>:
100880a0:	55                   	push   ebp
100880a1:	8b ec                	mov    ebp,esp
100880a3:	83 e4 f8             	and    esp,0xfffffff8
100880a6:	83 ec 0c             	sub    esp,0xc
100880a9:	56                   	push   esi
100880aa:	8b f1                	mov    esi,ecx
100880ac:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100880af:	83 c0 50             	add    eax,0x50
100880b2:	50                   	push   eax
100880b3:	e8 68 12 09 00       	call   0x10119320
100880b8:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100880bb:	83 c4 04             	add    esp,0x4
100880be:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
100880c1:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100880c4:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100880c9:	f3 0f 5c 42 08       	subss  xmm0,DWORD PTR [edx+0x8]
100880ce:	f3 0f 10 50 0c       	movss  xmm2,DWORD PTR [eax+0xc]
100880d3:	f3 0f 5c 52 0c       	subss  xmm2,DWORD PTR [edx+0xc]
100880d8:	0f 28 c8             	movaps xmm1,xmm0
100880db:	f3 0f 11 44 24 08    	movss  DWORD PTR [esp+0x8],xmm0
100880e1:	f3 0f 59 c8          	mulss  xmm1,xmm0
100880e5:	0f 28 c2             	movaps xmm0,xmm2
100880e8:	f3 0f 11 54 24 0c    	movss  DWORD PTR [esp+0xc],xmm2
100880ee:	f3 0f 59 c2          	mulss  xmm0,xmm2
100880f2:	f3 0f 58 c8          	addss  xmm1,xmm0
100880f6:	0f 5a c1             	cvtps2pd xmm0,xmm1
100880f9:	0f 57 c9             	xorps  xmm1,xmm1
100880fc:	66 0f 2e c8          	ucomisd xmm1,xmm0
10088100:	77 06                	ja     0x10088108
10088102:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10088106:	eb 05                	jmp    0x1008810d
10088108:	e8 83 3d 0e 00       	call   0x1016be90
1008810d:	0f 57 c9             	xorps  xmm1,xmm1
10088110:	0f 57 d2             	xorps  xmm2,xmm2
10088113:	f2 0f 5a c8          	cvtsd2ss xmm1,xmm0
10088117:	0f 2e ca             	ucomiss xmm1,xmm2
1008811a:	9f                   	lahf
1008811b:	f6 c4 44             	test   ah,0x44
1008811e:	7a 05                	jp     0x10088125
10088120:	0f 57 db             	xorps  xmm3,xmm3
10088123:	eb 20                	jmp    0x10088145
10088125:	f3 0f 10 05 90 13 1a 	movss  xmm0,DWORD PTR ds:0x101a1390
1008812c:	10 
1008812d:	f3 0f 5e c1          	divss  xmm0,xmm1
10088131:	f3 0f 10 54 24 08    	movss  xmm2,DWORD PTR [esp+0x8]
10088137:	f3 0f 10 5c 24 0c    	movss  xmm3,DWORD PTR [esp+0xc]
1008813d:	f3 0f 59 d0          	mulss  xmm2,xmm0
10088141:	f3 0f 59 d8          	mulss  xmm3,xmm0
10088145:	a1 88 31 22 10       	mov    eax,ds:0x10223188
1008814a:	f3 0f 10 48 28       	movss  xmm1,DWORD PTR [eax+0x28]
1008814f:	f3 0f 10 40 2c       	movss  xmm0,DWORD PTR [eax+0x2c]
10088154:	33 c0                	xor    eax,eax
10088156:	f3 0f 59 ca          	mulss  xmm1,xmm2
1008815a:	f3 0f 59 c3          	mulss  xmm0,xmm3
1008815e:	f3 0f 58 c8          	addss  xmm1,xmm0
10088162:	0f 2f 8e 08 02 00 00 	comiss xmm1,DWORD PTR [esi+0x208]
10088169:	5e                   	pop    esi
1008816a:	0f 97 c0             	seta   al
1008816d:	8b e5                	mov    esp,ebp
1008816f:	5d                   	pop    ebp
10088170:	c2 04 00             	ret    0x4
