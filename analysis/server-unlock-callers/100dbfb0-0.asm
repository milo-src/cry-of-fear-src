
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100dbfb0 <.text+0xdafb0>:
100dbfb0:	55                   	push   ebp
100dbfb1:	8b ec                	mov    ebp,esp
100dbfb3:	51                   	push   ecx
100dbfb4:	f3 0f 10 15 1c 1f 1a 	movss  xmm2,DWORD PTR ds:0x101a1f1c
100dbfbb:	10 
100dbfbc:	8b 91 3c 06 00 00    	mov    edx,DWORD PTR [ecx+0x63c]
100dbfc2:	f3 0f 11 55 fc       	movss  DWORD PTR [ebp-0x4],xmm2
100dbfc7:	85 d2                	test   edx,edx
100dbfc9:	7e 45                	jle    0x100dc010
100dbfcb:	8b 81 40 06 00 00    	mov    eax,DWORD PTR [ecx+0x640]
100dbfd1:	85 c0                	test   eax,eax
100dbfd3:	7e 2a                	jle    0x100dbfff
100dbfd5:	66 0f 6e c8          	movd   xmm1,eax
100dbfd9:	66 0f 6e c2          	movd   xmm0,edx
100dbfdd:	0f 5b c9             	cvtdq2ps xmm1,xmm1
100dbfe0:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100dbfe3:	f3 0f 5e c8          	divss  xmm1,xmm0
100dbfe7:	f3 0f 59 d1          	mulss  xmm2,xmm1
100dbfeb:	f3 0f 11 55 fc       	movss  DWORD PTR [ebp-0x4],xmm2
100dbff0:	d9 45 fc             	fld    DWORD PTR [ebp-0x4]
100dbff3:	f3 0f 11 91 4c 06 00 	movss  DWORD PTR [ecx+0x64c],xmm2
100dbffa:	00 
100dbffb:	8b e5                	mov    esp,ebp
100dbffd:	5d                   	pop    ebp
100dbffe:	c3                   	ret
100dbfff:	f3 0f 11 55 fc       	movss  DWORD PTR [ebp-0x4],xmm2
100dc004:	85 c0                	test   eax,eax
100dc006:	75 08                	jne    0x100dc010
100dc008:	0f 57 d2             	xorps  xmm2,xmm2
100dc00b:	f3 0f 11 55 fc       	movss  DWORD PTR [ebp-0x4],xmm2
100dc010:	d9 45 fc             	fld    DWORD PTR [ebp-0x4]
100dc013:	f3 0f 11 91 4c 06 00 	movss  DWORD PTR [ecx+0x64c],xmm2
100dc01a:	00 
100dc01b:	8b e5                	mov    esp,ebp
100dc01d:	5d                   	pop    ebp
100dc01e:	c3                   	ret
