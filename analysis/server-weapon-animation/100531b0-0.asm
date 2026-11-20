
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100531b0 <.text+0x521b0>:
100531b0:	56                   	push   esi
100531b1:	8b f1                	mov    esi,ecx
100531b3:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
100531b9:	80 b9 e8 1e 00 00 00 	cmp    BYTE PTR [ecx+0x1ee8],0x0
100531c0:	75 43                	jne    0x10053205
100531c2:	83 b9 98 1e 00 00 00 	cmp    DWORD PTR [ecx+0x1e98],0x0
100531c9:	8b ce                	mov    ecx,esi
100531cb:	8b 06                	mov    eax,DWORD PTR [esi]
100531cd:	6a 00                	push   0x0
100531cf:	6a 01                	push   0x1
100531d1:	74 04                	je     0x100531d7
100531d3:	6a 09                	push   0x9
100531d5:	eb 02                	jmp    0x100531d9
100531d7:	6a 03                	push   0x3
100531d9:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
100531df:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100531e4:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
100531e8:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
100531ee:	0f 5a c0             	cvtps2pd xmm0,xmm0
100531f1:	f2 0f 58 05 48 1e 1a 	addsd  xmm0,QWORD PTR ds:0x101a1e48
100531f8:	10 
100531f9:	66 0f 5a c0          	cvtpd2ps xmm0,xmm0
100531fd:	f3 0f 11 80 08 03 00 	movss  DWORD PTR [eax+0x308],xmm0
10053204:	00 
10053205:	5e                   	pop    esi
10053206:	c3                   	ret
