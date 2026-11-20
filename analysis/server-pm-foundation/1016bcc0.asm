
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1016bcc0 <.text+0x16acc0>:
1016bcc0:	83 ec 08             	sub    esp,0x8
1016bcc3:	0f ae 5c 24 04       	stmxcsr DWORD PTR [esp+0x4]
1016bcc8:	8b 44 24 04          	mov    eax,DWORD PTR [esp+0x4]
1016bccc:	25 80 7f 00 00       	and    eax,0x7f80
1016bcd1:	3d 80 1f 00 00       	cmp    eax,0x1f80
1016bcd6:	75 0f                	jne    0x1016bce7
1016bcd8:	d9 3c 24             	fnstcw WORD PTR [esp]
1016bcdb:	66 8b 04 24          	mov    ax,WORD PTR [esp]
1016bcdf:	66 83 e0 7f          	and    ax,0x7f
1016bce3:	66 83 f8 7f          	cmp    ax,0x7f
1016bce7:	8d 64 24 08          	lea    esp,[esp+0x8]
1016bceb:	0f 85 7b 01 00 00    	jne    0x1016be6c
1016bcf1:	66 0f c5 c0 03       	pextrw eax,xmm0,0x3
1016bcf6:	66 25 ff 7f          	and    ax,0x7fff
1016bcfa:	66 2d 30 30          	sub    ax,0x3030
1016bcfe:	66 3d c5 10          	cmp    ax,0x10c5
1016bd02:	0f 87 36 01 00 00    	ja     0x1016be3e
1016bd08:	66 0f 12 0d 50 dd 1e 	movlpd xmm1,QWORD PTR ds:0x101edd50
1016bd0f:	10 
1016bd10:	f2 0f 59 c8          	mulsd  xmm1,xmm0
1016bd14:	66 0f 12 15 58 dd 1e 	movlpd xmm2,QWORD PTR ds:0x101edd58
1016bd1b:	10 
1016bd1c:	f2 0f 2d d1          	cvtsd2si edx,xmm1
1016bd20:	f2 0f 58 ca          	addsd  xmm1,xmm2
1016bd24:	66 0f 12 1d 70 dd 1e 	movlpd xmm3,QWORD PTR ds:0x101edd70
1016bd2b:	10 
1016bd2c:	f2 0f 5c ca          	subsd  xmm1,xmm2
1016bd30:	66 0f 28 15 60 dd 1e 	movapd xmm2,XMMWORD PTR ds:0x101edd60
1016bd37:	10 
1016bd38:	f2 0f 59 d9          	mulsd  xmm3,xmm1
1016bd3c:	66 0f 14 c9          	unpcklpd xmm1,xmm1
1016bd40:	81 c2 00 76 1c 00    	add    edx,0x1c7600
1016bd46:	f2 0f 10 e0          	movsd  xmm4,xmm0
1016bd4a:	83 e2 3f             	and    edx,0x3f
1016bd4d:	66 0f 28 2d 40 dd 1e 	movapd xmm5,XMMWORD PTR ds:0x101edd40
1016bd54:	10 
1016bd55:	8d 05 10 0c 1f 10    	lea    eax,ds:0x101f0c10
1016bd5b:	c1 e2 05             	shl    edx,0x5
1016bd5e:	03 c2                	add    eax,edx
1016bd60:	66 0f 59 d1          	mulpd  xmm2,xmm1
1016bd64:	f2 0f 5c c3          	subsd  xmm0,xmm3
1016bd68:	f2 0f 59 0d 78 dd 1e 	mulsd  xmm1,QWORD PTR ds:0x101edd78
1016bd6f:	10 
1016bd70:	f2 0f 5c e3          	subsd  xmm4,xmm3
1016bd74:	66 0f 12 78 08       	movlpd xmm7,QWORD PTR [eax+0x8]
1016bd79:	66 0f 14 c0          	unpcklpd xmm0,xmm0
1016bd7d:	f2 0f 10 dc          	movsd  xmm3,xmm4
1016bd81:	f2 0f 5c e2          	subsd  xmm4,xmm2
1016bd85:	66 0f 59 e8          	mulpd  xmm5,xmm0
1016bd89:	66 0f 5c c2          	subpd  xmm0,xmm2
1016bd8d:	66 0f 28 35 20 dd 1e 	movapd xmm6,XMMWORD PTR ds:0x101edd20
1016bd94:	10 
1016bd95:	f2 0f 59 fc          	mulsd  xmm7,xmm4
1016bd99:	f2 0f 5c dc          	subsd  xmm3,xmm4
1016bd9d:	66 0f 59 e8          	mulpd  xmm5,xmm0
1016bda1:	66 0f 59 c0          	mulpd  xmm0,xmm0
1016bda5:	f2 0f 5c da          	subsd  xmm3,xmm2
1016bda9:	66 0f 28 10          	movapd xmm2,XMMWORD PTR [eax]
1016bdad:	f2 0f 5c cb          	subsd  xmm1,xmm3
1016bdb1:	66 0f 12 58 18       	movlpd xmm3,QWORD PTR [eax+0x18]
1016bdb6:	f2 0f 58 d3          	addsd  xmm2,xmm3
1016bdba:	f2 0f 5c fa          	subsd  xmm7,xmm2
1016bdbe:	f2 0f 59 d4          	mulsd  xmm2,xmm4
1016bdc2:	66 0f 59 f0          	mulpd  xmm6,xmm0
1016bdc6:	f2 0f 59 dc          	mulsd  xmm3,xmm4
1016bdca:	66 0f 59 d0          	mulpd  xmm2,xmm0
1016bdce:	66 0f 59 c0          	mulpd  xmm0,xmm0
1016bdd2:	66 0f 58 2d 30 dd 1e 	addpd  xmm5,XMMWORD PTR ds:0x101edd30
1016bdd9:	10 
1016bdda:	f2 0f 59 20          	mulsd  xmm4,QWORD PTR [eax]
1016bdde:	66 0f 58 35 10 dd 1e 	addpd  xmm6,XMMWORD PTR ds:0x101edd10
1016bde5:	10 
1016bde6:	66 0f 59 e8          	mulpd  xmm5,xmm0
1016bdea:	f2 0f 10 c3          	movsd  xmm0,xmm3
1016bdee:	f2 0f 58 58 08       	addsd  xmm3,QWORD PTR [eax+0x8]
1016bdf3:	f2 0f 59 cf          	mulsd  xmm1,xmm7
1016bdf7:	f2 0f 10 fc          	movsd  xmm7,xmm4
1016bdfb:	f2 0f 58 e3          	addsd  xmm4,xmm3
1016bdff:	66 0f 58 f5          	addpd  xmm6,xmm5
1016be03:	66 0f 12 68 08       	movlpd xmm5,QWORD PTR [eax+0x8]
1016be08:	f2 0f 5c eb          	subsd  xmm5,xmm3
1016be0c:	f2 0f 5c dc          	subsd  xmm3,xmm4
1016be10:	f2 0f 58 48 10       	addsd  xmm1,QWORD PTR [eax+0x10]
1016be15:	66 0f 59 f2          	mulpd  xmm6,xmm2
1016be19:	f2 0f 58 e8          	addsd  xmm5,xmm0
1016be1d:	f2 0f 58 df          	addsd  xmm3,xmm7
1016be21:	f2 0f 58 cd          	addsd  xmm1,xmm5
1016be25:	f2 0f 58 cb          	addsd  xmm1,xmm3
1016be29:	f2 0f 58 ce          	addsd  xmm1,xmm6
1016be2d:	66 0f 15 f6          	unpckhpd xmm6,xmm6
1016be31:	f2 0f 58 ce          	addsd  xmm1,xmm6
1016be35:	f2 0f 58 e1          	addsd  xmm4,xmm1
1016be39:	66 0f 28 c4          	movapd xmm0,xmm4
1016be3d:	c3                   	ret
1016be3e:	7f 2c                	jg     0x1016be6c
1016be40:	66 c1 e8 04          	shr    ax,0x4
1016be44:	66 3d fd 0c          	cmp    ax,0xcfd
1016be48:	75 09                	jne    0x1016be53
1016be4a:	f2 0f 59 05 90 dd 1e 	mulsd  xmm0,QWORD PTR ds:0x101edd90
1016be51:	10 
1016be52:	c3                   	ret
1016be53:	66 0f 12 1d 80 dd 1e 	movlpd xmm3,QWORD PTR ds:0x101edd80
1016be5a:	10 
1016be5b:	f2 0f 59 d8          	mulsd  xmm3,xmm0
1016be5f:	f2 0f 5c d8          	subsd  xmm3,xmm0
1016be63:	f2 0f 59 1d 88 dd 1e 	mulsd  xmm3,QWORD PTR ds:0x101edd88
1016be6a:	10 
1016be6b:	c3                   	ret
1016be6c:	83 ec 08             	sub    esp,0x8
1016be6f:	66 0f d6 04 24       	movq   QWORD PTR [esp],xmm0
1016be74:	e8 86 6b 01 00       	call   0x101829ff
1016be79:	dd 1c 24             	fstp   QWORD PTR [esp]
1016be7c:	f3 0f 7e 04 24       	movq   xmm0,QWORD PTR [esp]
1016be81:	83 c4 08             	add    esp,0x8
1016be84:	c3                   	ret
