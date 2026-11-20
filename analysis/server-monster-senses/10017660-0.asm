
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10017660 <.text+0x16660>:
10017660:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10017663:	f3 0f 10 05 d8 61 1a 	movss  xmm0,DWORD PTR ds:0x101a61d8
1001766a:	10 
1001766b:	f3 0f 10 58 08       	movss  xmm3,DWORD PTR [eax+0x8]
10017670:	0f 2f d8             	comiss xmm3,xmm0
10017673:	73 6e                	jae    0x100176e3
10017675:	f3 0f 10 48 0c       	movss  xmm1,DWORD PTR [eax+0xc]
1001767a:	0f 2f c8             	comiss xmm1,xmm0
1001767d:	73 64                	jae    0x100176e3
1001767f:	f3 0f 10 50 10       	movss  xmm2,DWORD PTR [eax+0x10]
10017684:	0f 2f d0             	comiss xmm2,xmm0
10017687:	73 5a                	jae    0x100176e3
10017689:	f3 0f 10 05 e0 61 1a 	movss  xmm0,DWORD PTR ds:0x101a61e0
10017690:	10 
10017691:	0f 2f c3             	comiss xmm0,xmm3
10017694:	73 4d                	jae    0x100176e3
10017696:	0f 2f c1             	comiss xmm0,xmm1
10017699:	73 48                	jae    0x100176e3
1001769b:	0f 2f c2             	comiss xmm0,xmm2
1001769e:	73 43                	jae    0x100176e3
100176a0:	f3 0f 10 48 20       	movss  xmm1,DWORD PTR [eax+0x20]
100176a5:	f3 0f 10 05 d4 61 1a 	movss  xmm0,DWORD PTR ds:0x101a61d4
100176ac:	10 
100176ad:	0f 2f c8             	comiss xmm1,xmm0
100176b0:	73 31                	jae    0x100176e3
100176b2:	f3 0f 10 50 24       	movss  xmm2,DWORD PTR [eax+0x24]
100176b7:	0f 2f d0             	comiss xmm2,xmm0
100176ba:	73 27                	jae    0x100176e3
100176bc:	f3 0f 10 58 28       	movss  xmm3,DWORD PTR [eax+0x28]
100176c1:	0f 2f d8             	comiss xmm3,xmm0
100176c4:	73 1d                	jae    0x100176e3
100176c6:	f3 0f 10 05 dc 61 1a 	movss  xmm0,DWORD PTR ds:0x101a61dc
100176cd:	10 
100176ce:	0f 2f c1             	comiss xmm0,xmm1
100176d1:	73 10                	jae    0x100176e3
100176d3:	0f 2f c2             	comiss xmm0,xmm2
100176d6:	73 0b                	jae    0x100176e3
100176d8:	0f 2f c3             	comiss xmm0,xmm3
100176db:	73 06                	jae    0x100176e3
100176dd:	b8 01 00 00 00       	mov    eax,0x1
100176e2:	c3                   	ret
100176e3:	33 c0                	xor    eax,eax
100176e5:	c3                   	ret
