
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10003100 <.text+0x2100>:
10003100:	55                   	push   ebp
10003101:	8b ec                	mov    ebp,esp
10003103:	83 e4 f8             	and    esp,0xfffffff8
10003106:	83 ec 1c             	sub    esp,0x1c
10003109:	0f 57 d2             	xorps  xmm2,xmm2
1000310c:	56                   	push   esi
1000310d:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10003110:	f3 0f 10 4e 04       	movss  xmm1,DWORD PTR [esi+0x4]
10003115:	0f 2e ca             	ucomiss xmm1,xmm2
10003118:	9f                   	lahf
10003119:	f6 c4 44             	test   ah,0x44
1000311c:	7a 34                	jp     0x10003152
1000311e:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
10003122:	0f 2e c2             	ucomiss xmm0,xmm2
10003125:	9f                   	lahf
10003126:	f6 c4 44             	test   ah,0x44
10003129:	7a 27                	jp     0x10003152
1000312b:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
10003130:	0f 57 c9             	xorps  xmm1,xmm1
10003133:	0f 2f c2             	comiss xmm0,xmm2
10003136:	76 0d                	jbe    0x10003145
10003138:	f3 0f 10 05 c0 13 1a 	movss  xmm0,DWORD PTR ds:0x101a13c0
1000313f:	10 
10003140:	e9 f3 00 00 00       	jmp    0x10003238
10003145:	f3 0f 10 05 c8 13 1a 	movss  xmm0,DWORD PTR ds:0x101a13c8
1000314c:	10 
1000314d:	e9 e6 00 00 00       	jmp    0x10003238
10003152:	0f 5a c1             	cvtps2pd xmm0,xmm1
10003155:	f2 0f 11 44 24 08    	movsd  QWORD PTR [esp+0x8],xmm0
1000315b:	f3 0f 10 06          	movss  xmm0,DWORD PTR [esi]
1000315f:	dd 44 24 08          	fld    QWORD PTR [esp+0x8]
10003163:	0f 5a c0             	cvtps2pd xmm0,xmm0
10003166:	f2 0f 11 44 24 08    	movsd  QWORD PTR [esp+0x8],xmm0
1000316c:	dd 44 24 08          	fld    QWORD PTR [esp+0x8]
10003170:	e8 5b 84 16 00       	call   0x1016b5d0
10003175:	dd 5c 24 08          	fstp   QWORD PTR [esp+0x8]
10003179:	f2 0f 10 44 24 08    	movsd  xmm0,QWORD PTR [esp+0x8]
1000317f:	0f 57 c9             	xorps  xmm1,xmm1
10003182:	f2 0f 59 05 a8 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a13a8
10003189:	10 
1000318a:	f2 0f 5e 05 a0 13 1a 	divsd  xmm0,QWORD PTR ds:0x101a13a0
10003191:	10 
10003192:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10003196:	0f 2f c8             	comiss xmm1,xmm0
10003199:	f3 0f 11 44 24 08    	movss  DWORD PTR [esp+0x8],xmm0
1000319f:	76 0e                	jbe    0x100031af
100031a1:	f3 0f 58 05 cc 13 1a 	addss  xmm0,DWORD PTR ds:0x101a13cc
100031a8:	10 
100031a9:	f3 0f 11 44 24 08    	movss  DWORD PTR [esp+0x8],xmm0
100031af:	f3 0f 10 46 08       	movss  xmm0,DWORD PTR [esi+0x8]
100031b4:	f3 0f 10 0e          	movss  xmm1,DWORD PTR [esi]
100031b8:	0f 5a c0             	cvtps2pd xmm0,xmm0
100031bb:	f3 0f 59 c9          	mulss  xmm1,xmm1
100031bf:	f2 0f 11 44 24 18    	movsd  QWORD PTR [esp+0x18],xmm0
100031c5:	f3 0f 10 46 04       	movss  xmm0,DWORD PTR [esi+0x4]
100031ca:	f3 0f 59 c0          	mulss  xmm0,xmm0
100031ce:	f3 0f 58 c8          	addss  xmm1,xmm0
100031d2:	0f 5a c1             	cvtps2pd xmm0,xmm1
100031d5:	0f 57 c9             	xorps  xmm1,xmm1
100031d8:	66 0f 2e c8          	ucomisd xmm1,xmm0
100031dc:	77 06                	ja     0x100031e4
100031de:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
100031e2:	eb 05                	jmp    0x100031e9
100031e4:	e8 a7 8c 16 00       	call   0x1016be90
100031e9:	dd 44 24 18          	fld    QWORD PTR [esp+0x18]
100031ed:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
100031f1:	f3 0f 5a c0          	cvtss2sd xmm0,xmm0
100031f5:	f2 0f 11 44 24 10    	movsd  QWORD PTR [esp+0x10],xmm0
100031fb:	dd 44 24 10          	fld    QWORD PTR [esp+0x10]
100031ff:	e8 cc 83 16 00       	call   0x1016b5d0
10003204:	dd 5c 24 18          	fstp   QWORD PTR [esp+0x18]
10003208:	f2 0f 10 44 24 18    	movsd  xmm0,QWORD PTR [esp+0x18]
1000320e:	0f 57 c9             	xorps  xmm1,xmm1
10003211:	f2 0f 59 05 a8 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a13a8
10003218:	10 
10003219:	f2 0f 5e 05 a0 13 1a 	divsd  xmm0,QWORD PTR ds:0x101a13a0
10003220:	10 
10003221:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10003225:	0f 2f c8             	comiss xmm1,xmm0
10003228:	f3 0f 10 4c 24 08    	movss  xmm1,DWORD PTR [esp+0x8]
1000322e:	76 08                	jbe    0x10003238
10003230:	f3 0f 58 05 cc 13 1a 	addss  xmm0,DWORD PTR ds:0x101a13cc
10003237:	10 
10003238:	8b 45 0c             	mov    eax,DWORD PTR [ebp+0xc]
1000323b:	5e                   	pop    esi
1000323c:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10003240:	f3 0f 11 48 04       	movss  DWORD PTR [eax+0x4],xmm1
10003245:	c7 40 08 00 00 00 00 	mov    DWORD PTR [eax+0x8],0x0
1000324c:	8b e5                	mov    esp,ebp
1000324e:	5d                   	pop    ebp
1000324f:	c3                   	ret
