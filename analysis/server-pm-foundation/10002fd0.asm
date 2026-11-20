
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10002fd0 <.text+0x1fd0>:
10002fd0:	55                   	push   ebp
10002fd1:	8b ec                	mov    ebp,esp
10002fd3:	83 e4 f8             	and    esp,0xfffffff8
10002fd6:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10002fd9:	83 ec 08             	sub    esp,0x8
10002fdc:	f3 0f 10 10          	movss  xmm2,DWORD PTR [eax]
10002fe0:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
10002fe5:	f3 0f 10 48 08       	movss  xmm1,DWORD PTR [eax+0x8]
10002fea:	f3 0f 59 d2          	mulss  xmm2,xmm2
10002fee:	f3 0f 59 c0          	mulss  xmm0,xmm0
10002ff2:	f3 0f 58 15 70 13 1a 	addss  xmm2,DWORD PTR ds:0x101a1370
10002ff9:	10 
10002ffa:	f3 0f 59 c9          	mulss  xmm1,xmm1
10002ffe:	f3 0f 58 d0          	addss  xmm2,xmm0
10003002:	f3 0f 58 d1          	addss  xmm2,xmm1
10003006:	0f 57 c9             	xorps  xmm1,xmm1
10003009:	0f 5a c2             	cvtps2pd xmm0,xmm2
1000300c:	66 0f 2e c8          	ucomisd xmm1,xmm0
10003010:	77 16                	ja     0x10003028
10003012:	f2 0f 51 c0          	sqrtsd xmm0,xmm0
10003016:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
1000301a:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
10003020:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
10003024:	8b e5                	mov    esp,ebp
10003026:	5d                   	pop    ebp
10003027:	c3                   	ret
10003028:	e8 63 8e 16 00       	call   0x1016be90
1000302d:	f2 0f 5a c0          	cvtsd2ss xmm0,xmm0
10003031:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
10003037:	d9 44 24 04          	fld    DWORD PTR [esp+0x4]
1000303b:	8b e5                	mov    esp,ebp
1000303d:	5d                   	pop    ebp
1000303e:	c3                   	ret
