
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011a050 <.text+0x119050>:
1011a050:	55                   	push   ebp
1011a051:	8b ec                	mov    ebp,esp
1011a053:	8b 45 10             	mov    eax,DWORD PTR [ebp+0x10]
1011a056:	03 45 0c             	add    eax,DWORD PTR [ebp+0xc]
1011a059:	03 45 08             	add    eax,DWORD PTR [ebp+0x8]
1011a05c:	56                   	push   esi
1011a05d:	50                   	push   eax
1011a05e:	e8 7d 0b 00 00       	call   0x1011abe0
1011a063:	83 c4 04             	add    esp,0x4
1011a066:	e8 45 0b 00 00       	call   0x1011abb0
1011a06b:	e8 40 0b 00 00       	call   0x1011abb0
1011a070:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
1011a075:	f3 0f 5c 45 0c       	subss  xmm0,DWORD PTR [ebp+0xc]
1011a07a:	e8 41 45 02 00       	call   0x1013e5c0
1011a07f:	8b f0                	mov    esi,eax
1011a081:	85 f6                	test   esi,esi
1011a083:	75 06                	jne    0x1011a08b
1011a085:	d9 45 0c             	fld    DWORD PTR [ebp+0xc]
1011a088:	5e                   	pop    esi
1011a089:	5d                   	pop    ebp
1011a08a:	c3                   	ret
1011a08b:	e8 20 0b 00 00       	call   0x1011abb0
1011a090:	0f 57 c0             	xorps  xmm0,xmm0
1011a093:	0f b7 c0             	movzx  eax,ax
1011a096:	f3 0f 2a c0          	cvtsi2ss xmm0,eax
1011a09a:	0f 5a c0             	cvtps2pd xmm0,xmm0
1011a09d:	f2 0f 59 05 38 5a 1e 	mulsd  xmm0,QWORD PTR ds:0x101e5a38
1011a0a4:	10 
1011a0a5:	66 0f 5a c8          	cvtpd2ps xmm1,xmm0
1011a0a9:	0f 57 c0             	xorps  xmm0,xmm0
1011a0ac:	f2 0f 2a c6          	cvtsi2sd xmm0,esi
1011a0b0:	c1 ee 1f             	shr    esi,0x1f
1011a0b3:	f2 0f 58 04 f5 60 5a 	addsd  xmm0,QWORD PTR [esi*8+0x101e5a60]
1011a0ba:	1e 10 
1011a0bc:	5e                   	pop    esi
1011a0bd:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
1011a0c1:	f3 0f 59 c8          	mulss  xmm1,xmm0
1011a0c5:	f3 0f 58 4d 0c       	addss  xmm1,DWORD PTR [ebp+0xc]
1011a0ca:	f3 0f 11 4d 0c       	movss  DWORD PTR [ebp+0xc],xmm1
1011a0cf:	d9 45 0c             	fld    DWORD PTR [ebp+0xc]
1011a0d2:	5d                   	pop    ebp
1011a0d3:	c3                   	ret
