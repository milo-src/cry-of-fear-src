
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10119620 <.text+0x118620>:
10119620:	55                   	push   ebp
10119621:	8b ec                	mov    ebp,esp
10119623:	8b 45 14             	mov    eax,DWORD PTR [ebp+0x14]
10119626:	83 ec 08             	sub    esp,0x8
10119629:	66 0f 6e c0          	movd   xmm0,eax
1011962d:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
10119631:	c1 e8 1f             	shr    eax,0x1f
10119634:	f2 0f 58 04 c5 60 5a 	addsd  xmm0,QWORD PTR [eax*8+0x101e5a60]
1011963b:	1e 10 
1011963d:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
10119640:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10119644:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
1011964a:	66 0f 6e c0          	movd   xmm0,eax
1011964e:	f3 0f e6 c0          	cvtdq2pd xmm0,xmm0
10119652:	c1 e8 1f             	shr    eax,0x1f
10119655:	f2 0f 58 04 c5 60 5a 	addsd  xmm0,QWORD PTR [eax*8+0x101e5a60]
1011965c:	1e 10 
1011965e:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
10119662:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
10119667:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
1011966a:	ff 75 08             	push   DWORD PTR [ebp+0x8]
1011966d:	ff 15 f0 2f 22 10    	call   DWORD PTR ds:0x10222ff0
10119673:	83 c4 10             	add    esp,0x10
10119676:	5d                   	pop    ebp
10119677:	c3                   	ret
