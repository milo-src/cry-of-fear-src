
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10018090 <.text+0x17090>:
10018090:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
10018093:	83 b8 08 01 00 00 07 	cmp    DWORD PTR [eax+0x108],0x7
1001809a:	75 2b                	jne    0x100180c7
1001809c:	f3 0f 10 80 00 01 00 	movss  xmm0,DWORD PTR [eax+0x100]
100180a3:	00 
100180a4:	0f 5a c0             	cvtps2pd xmm0,xmm0
100180a7:	f2 0f 58 05 c8 61 1a 	addsd  xmm0,QWORD PTR ds:0x101a61c8
100180ae:	10 
100180af:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100180b3:	f3 0f 11 80 04 01 00 	movss  DWORD PTR [eax+0x104],xmm0
100180ba:	00 
100180bb:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
100180be:	8b 80 04 01 00 00    	mov    eax,DWORD PTR [eax+0x104]
100180c4:	89 41 5c             	mov    DWORD PTR [ecx+0x5c],eax
100180c7:	56                   	push   esi
100180c8:	8b 71 1c             	mov    esi,DWORD PTR [ecx+0x1c]
100180cb:	85 f6                	test   esi,esi
100180cd:	74 0f                	je     0x100180de
100180cf:	90                   	nop
100180d0:	8b ce                	mov    ecx,esi
100180d2:	e8 b9 ff ff ff       	call   0x10018090
100180d7:	8b 76 20             	mov    esi,DWORD PTR [esi+0x20]
100180da:	85 f6                	test   esi,esi
100180dc:	75 f2                	jne    0x100180d0
100180de:	5e                   	pop    esi
100180df:	c3                   	ret
