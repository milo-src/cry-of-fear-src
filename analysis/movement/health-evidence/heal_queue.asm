
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100dca10 <.text+0xdba10>:
100dca10:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100dca15:	56                   	push   esi
100dca16:	8b f1                	mov    esi,ecx
100dca18:	f3 0f 10 10          	movss  xmm2,DWORD PTR [eax]
100dca1c:	0f 28 ca             	movaps xmm1,xmm2
100dca1f:	66 0f 6e 86 d0 21 00 	movd   xmm0,DWORD PTR [esi+0x21d0]
100dca26:	00 
100dca27:	0f 5b c0             	cvtdq2ps xmm0,xmm0
100dca2a:	f3 0f 5c c8          	subss  xmm1,xmm0
100dca2e:	f2 0f 10 05 f8 1d 1a 	movsd  xmm0,QWORD PTR ds:0x101a1df8
100dca35:	10 
100dca36:	0f 54 0d 80 1f 1a 10 	andps  xmm1,XMMWORD PTR ds:0x101a1f80
100dca3d:	0f 5a c9             	cvtps2pd xmm1,xmm1
100dca40:	66 0f 2f c1          	comisd xmm0,xmm1
100dca44:	0f 87 98 00 00 00    	ja     0x100dcae2
100dca4a:	8b 8e d4 21 00 00    	mov    ecx,DWORD PTR [esi+0x21d4]
100dca50:	f3 0f 2c c2          	cvttss2si eax,xmm2
100dca54:	89 86 d0 21 00 00    	mov    DWORD PTR [esi+0x21d0],eax
100dca5a:	85 c9                	test   ecx,ecx
100dca5c:	0f 8e 80 00 00 00    	jle    0x100dcae2
100dca62:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100dca65:	f3 0f 10 80 64 01 00 	movss  xmm0,DWORD PTR [eax+0x164]
100dca6c:	00 
100dca6d:	0f 2f 80 b4 01 00 00 	comiss xmm0,DWORD PTR [eax+0x1b4]
100dca74:	72 0c                	jb     0x100dca82
100dca76:	c7 86 d4 21 00 00 00 	mov    DWORD PTR [esi+0x21d4],0x0
100dca7d:	00 00 00 
100dca80:	5e                   	pop    esi
100dca81:	c3                   	ret
100dca82:	8d 41 fb             	lea    eax,[ecx-0x5]
100dca85:	89 86 d4 21 00 00    	mov    DWORD PTR [esi+0x21d4],eax
100dca8b:	85 c0                	test   eax,eax
100dca8d:	79 0c                	jns    0x100dca9b
100dca8f:	c7 86 d4 21 00 00 00 	mov    DWORD PTR [esi+0x21d4],0x0
100dca96:	00 00 00 
100dca99:	33 c0                	xor    eax,eax
100dca9b:	f3 0f 10 86 f0 21 00 	movss  xmm0,DWORD PTR [esi+0x21f0]
100dcaa2:	00 
100dcaa3:	2b c8                	sub    ecx,eax
100dcaa5:	8b 06                	mov    eax,DWORD PTR [esi]
100dcaa7:	6a 00                	push   0x0
100dcaa9:	51                   	push   ecx
100dcaaa:	66 0f 6e c9          	movd   xmm1,ecx
100dcaae:	8b ce                	mov    ecx,esi
100dcab0:	0f 5b c9             	cvtdq2ps xmm1,xmm1
100dcab3:	f3 0f 58 c1          	addss  xmm0,xmm1
100dcab7:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
100dcabc:	f3 0f 11 86 f0 21 00 	movss  DWORD PTR [esi+0x21f0],xmm0
100dcac3:	00 
100dcac4:	ff 50 68             	call   DWORD PTR [eax+0x68]
100dcac7:	f3 0f 10 86 f0 21 00 	movss  xmm0,DWORD PTR [esi+0x21f0]
100dcace:	00 
100dcacf:	0f 2f 05 1c 1f 1a 10 	comiss xmm0,DWORD PTR ds:0x101a1f1c
100dcad6:	76 0a                	jbe    0x100dcae2
100dcad8:	c7 86 f0 21 00 00 00 	mov    DWORD PTR [esi+0x21f0],0x42c80000
100dcadf:	00 c8 42 
100dcae2:	5e                   	pop    esi
100dcae3:	c3                   	ret
100dcae4:	cc                   	int3
