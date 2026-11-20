
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10003630 <.text+0x2630>:
10003630:	55                   	push   ebp
10003631:	8b ec                	mov    ebp,esp
10003633:	f3 0f 10 45 08       	movss  xmm0,DWORD PTR [ebp+0x8]
10003638:	0f 5a c0             	cvtps2pd xmm0,xmm0
1000363b:	f2 0f 59 05 b0 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a13b0
10003642:	10 
10003643:	f2 0f 2c c0          	cvttsd2si eax,xmm0
10003647:	0f b7 c0             	movzx  eax,ax
1000364a:	66 0f 6e c0          	movd   xmm0,eax
1000364e:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
10003652:	f2 0f 59 05 88 13 1a 	mulsd  xmm0,QWORD PTR ds:0x101a1388
10003659:	10 
1000365a:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1000365e:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
10003663:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
10003666:	5d                   	pop    ebp
10003667:	c3                   	ret
