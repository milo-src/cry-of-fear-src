
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10003040 <.text+0x2040>:
10003040:	55                   	push   ebp
10003041:	8b ec                	mov    ebp,esp
10003043:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
10003046:	f3 0f 10 1d c4 13 1a 	movss  xmm3,DWORD PTR ds:0x101a13c4
1000304d:	10 
1000304e:	f2 0f 10 0d b8 13 1a 	movsd  xmm1,QWORD PTR ds:0x101a13b8
10003055:	10 
10003056:	f3 0f 10 15 d4 13 1a 	movss  xmm2,DWORD PTR ds:0x101a13d4
1000305d:	10 
1000305e:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10003062:	0f 2f c3             	comiss xmm0,xmm3
10003065:	76 09                	jbe    0x10003070
10003067:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000306a:	f2 0f 5c c1          	subsd  xmm0,xmm1
1000306e:	eb 0c                	jmp    0x1000307c
10003070:	0f 2f d0             	comiss xmm2,xmm0
10003073:	76 0f                	jbe    0x10003084
10003075:	0f 5a c0             	cvtps2pd xmm0,xmm0
10003078:	f2 0f 58 c1          	addsd  xmm0,xmm1
1000307c:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10003080:	f3 0f 11 00          	movss  DWORD PTR [eax],xmm0
10003084:	f3 0f 10 40 04       	movss  xmm0,DWORD PTR [eax+0x4]
10003089:	0f 2f c3             	comiss xmm0,xmm3
1000308c:	76 09                	jbe    0x10003097
1000308e:	0f 5a c0             	cvtps2pd xmm0,xmm0
10003091:	f2 0f 5c c1          	subsd  xmm0,xmm1
10003095:	eb 0c                	jmp    0x100030a3
10003097:	0f 2f d0             	comiss xmm2,xmm0
1000309a:	76 10                	jbe    0x100030ac
1000309c:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000309f:	f2 0f 58 c1          	addsd  xmm0,xmm1
100030a3:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100030a7:	f3 0f 11 40 04       	movss  DWORD PTR [eax+0x4],xmm0
100030ac:	f3 0f 10 40 08       	movss  xmm0,DWORD PTR [eax+0x8]
100030b1:	0f 2f c3             	comiss xmm0,xmm3
100030b4:	76 12                	jbe    0x100030c8
100030b6:	0f 5a c0             	cvtps2pd xmm0,xmm0
100030b9:	f2 0f 5c c1          	subsd  xmm0,xmm1
100030bd:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100030c1:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100030c6:	5d                   	pop    ebp
100030c7:	c3                   	ret
100030c8:	0f 2f d0             	comiss xmm2,xmm0
100030cb:	76 10                	jbe    0x100030dd
100030cd:	0f 5a c0             	cvtps2pd xmm0,xmm0
100030d0:	f2 0f 58 c1          	addsd  xmm0,xmm1
100030d4:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100030d8:	f3 0f 11 40 08       	movss  DWORD PTR [eax+0x8],xmm0
100030dd:	5d                   	pop    ebp
100030de:	c3                   	ret
